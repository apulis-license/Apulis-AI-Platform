import json
import os
import time
import sys
import datetime
import copy
import base64
import traceback
import random
import re
import logging
import yaml
import logging.config
from concurrent.futures import ThreadPoolExecutor
from threading import Lock
import subprocess32
import argparse
from cluster_manager import setup_exporter_thread, manager_iteration_histogram, register_stack_trace_dump, update_file_modification_time

sys.path.append(os.path.join(os.path.dirname(os.path.abspath(__file__)), "../utils"))
import k8sUtils
from config import config, GetStoragePath, GetWorkPath
from DataHandler import DataHandler

from job_launcher import JobDeployer

logger = logging.getLogger(__name__)
deployer = JobDeployer()


def is_ssh_server_ready(pod_name):
    bash_script = "service ssh status"
    output = k8sUtils.kubectl_exec("exec %s %s" % (pod_name, " -- " + bash_script))
    if output == "":
        return False
    return True


def query_ssh_port(pod_name):
    bash_script = "\"grep ^Port /usr/etc/sshd_config | cut -d' ' -f2\""
    # status_code, output = deployer.pod_exec(pod_name, ["/bin/bash", "-c", bash_script])
    output = k8sUtils.kubectl_exec("exec %s %s" % (pod_name, " -- " + "/bin/bash" + " -c " + bash_script))
    if output == "":
        raise RuntimeError("Query ssh port failed: {}".format(pod_name))
    # if status_code != 0:
    #     raise RuntimeError("Query ssh port failed: {}".format(pod_name))
    if not output:
        return 22
        
    return int(output)


def start_ssh_server(pod_name):
    '''Setup the ssh server in container, and return the listening port.'''
    bash_script = "service ssh start" # assume ssh server already setup

    # TODO setup reasonable timeout
    # output = k8sUtils.kubectl_exec("exec %s %s" % (jobId, " -- " + bash_script), 1)
    output = k8sUtils.kubectl_exec("exec %s %s" % (pod_name, " -- " + bash_script))
    if output == "":
        raise Exception("Failed to setup ssh server in container. JobId: %s " % pod_name)


def get_k8s_endpoint(endpoint_description_path):
    endpoint_description_path = os.path.join(config["storage-mount-path"], endpoint_description_path)
    return k8sUtils.kubectl_exec("get -o json -f %s" % endpoint_description_path)


def generate_node_port_service(job_id, pod_name, endpoint_id, name, target_port):
    endpoint_description = """kind: Service
apiVersion: v1
metadata:
  name: {2}
  labels:
    run: {0}
    jobId: {0}
    podName: {1}
spec:
  type: NodePort
  selector:
    podName: {1}
  ports:
  - name: {3}
    protocol: "TCP"
    targetPort: {4}
    port: {4}
""".format(job_id, pod_name, endpoint_id, name, target_port)
    logger.info("endpointDescription: %s", endpoint_description)
    return endpoint_description

def generate_node_port_service_for_deployment(job_id, pod_name, endpoint_id, name, target_port):
    endpoint_description = """kind: Service
apiVersion: v1
metadata:
  name: {2}
  labels:
    run: {0}
    jobId: {0}
    podName: {1}
spec:
  type: NodePort
  selector:
    jobId: {0}
  ports:
  - name: {3}
    protocol: "TCP"
    targetPort: {4}
    port: {4}
""".format(job_id, pod_name, endpoint_id, name, target_port)
    logger.info("endpointDescription: %s", endpoint_description)
    return endpoint_description

def setup_ssh_server(user_name, pod_name, host_network=False):
    '''Setup ssh server on pod and return the port'''
    # setup ssh server only is the ssh server is not up
    if not is_ssh_server_ready(pod_name):
        logger.info("Ssh server is not ready for pod: %s. Setup ...", pod_name)
        start_ssh_server(pod_name)
    ssh_port = query_ssh_port(pod_name)
    logger.info("Ssh server is ready for pod: %s. Ssh listen on %s", pod_name, ssh_port)
    return ssh_port

def kubectl_exec(params, timeout=None):
    """As defalut, never timeout."""
    try:
        #print ("bash -c %s %s" % (config["kubelet-path"], params))
        # TODO set the timeout
        output = subprocess32.check_output(["bash", "-c", config["kubelet-path"] + " " + params], timeout=timeout)
        logger.info(["bash", "-c", config["kubelet-path"] + " " + params,output])
    except Exception as e:
        logger.exception("kubectl exec")
        return str(e)
    return ""

def setup_jupyter_server(user_name, pod_name,jupyter_port, baseurl):
    bash_script = """bash -c 'export DEBIAN_FRONTEND=noninteractive;
        if ! [ -x \"$(command -v jupyter)\" ];then
            apt-get update && 
            umask 022 && 
            apt-get install -y python3-pip && 
            python3 -m pip install --upgrade pip && 
            python3 -m pip config set global.index-url https://mirrors.aliyun.com/pypi/simple/ && 
            python3 -m pip install jupyterlab;
        fi && 
        cd /home/%s && 
        chmod 777 /job/ &&  
        runuser -l %s -c \"jupyter lab --no-browser --ip=0.0.0.0 --notebook-dir=/ --NotebookApp.token= --port=%s --NotebookApp.base_url=/endpoints/%s/ --NotebookApp.allow_origin='*' &>/job/jupyter.log &\"
        '
        """ % (user_name, user_name, jupyter_port, baseurl)
    output = kubectl_exec("exec %s %s" % (pod_name, " -- " + bash_script))
    if output != "":
        raise Exception("Failed to start jupyter server in container. JobId: %s ,output: %s" % (pod_name,output))


def setup_tensorboard(user_name, pod_name,tensorboard_port,baseurl, arguments):
    if 'tensorboard_log_dir' in arguments:
        log_dir = arguments['tensorboard_log_dir']
    else:
        log_dir = "~/tensorboard/${DLWS_JOB_ID}/logs"
    bash_script = """bash -c 'export DEBIAN_FRONTEND=noninteractive;
        if ! [ -x \"$(command -v tensorboard)\" ];then
            apt-get update && 
            umask 022 && 
            apt-get install -y python3-pip && 
            python3 -m pip install --upgrade pip && 
            python3 -m pip config set global.index-url https://mirrors.aliyun.com/pypi/simple/ && 
            python3 -m pip install tensorboard;
        fi && 
        cd /home/%s && 
        runuser -l %s -c \" export PYTHONPATH=/usr/local/lib/python3.6/dist-packages;
        mkdir -p  %s ;
        chmod 777 %s ;
        tensorboard --logdir=%s --host=0.0.0.0 --port=%s --path_prefix=/endpoints/%s/ &>/dev/null &\"
        '
        """ % (user_name, user_name, log_dir, log_dir, log_dir, str(tensorboard_port), baseurl)
    output = kubectl_exec("exec %s %s" % (pod_name, " -- " + bash_script))
    if output != "":
        raise Exception("Failed to start tensorboard in container. JobId: %s ,output: %s" % (pod_name,output))

def setup_vscode(user_name, pod_name,vscode_port):
    bash_script = """bash -c 'export DEBIAN_FRONTEND=noninteractive;
            if ! [ -x \"$(command -v code-server)\" ];then
                apt-get update && umask 022
                version="$(curl -fsSLI -o /dev/null -w "%s" https://github.com/cdr/code-server/releases/latest)"
                version="${version#https://github.com/cdr/code-server/releases/tag/}"
                version="${version#v}"
                echo "$version"
                arch() {
                  case "$(uname -m)" in
                  aarch64)
                    echo arm64
                    ;;
                  x86_64)
                    echo amd64
                    ;;
                  amd64) # FreeBSD.
                    echo amd64
                    ;;
                  esac
                }
                ARCH="$(arch)"
                curl -fOL https://github.com/cdr/code-server/releases/download/v$version/code-server_${version}_$ARCH.deb
                sudo dpkg -i code-server_${version}_$ARCH.deb
            fi && cd /home/%s && chmod 777 /job/ && runuser -l %s  -c "nohup code-server --port %s --host 0.0.0.0 --auth none &>/job/vscode.log &"
        '
    """% ("%{url_effective}",user_name, user_name, vscode_port)
    output = kubectl_exec("exec %s %s" % (pod_name, " -- " + bash_script))
    if output != "":
        raise Exception("Failed to start vscode in container. JobId: %s ,output: %s" % (pod_name,output))

def is_server_ready(endpoint):
    pod_name = endpoint["podName"]
    port_name = endpoint["name"]
    cmd = None
    if port_name == "ipython":
        cmd = "ps -ef|grep jupyter-lab"
    elif port_name == "tensorboard":
        cmd = "ps -ef|grep tensorboard"
    elif port_name == "vscode":
        cmd = "ps -ef|grep code-server"
    if cmd:
        output = k8sUtils.kubectl_exec("exec %s %s" % (pod_name, " -- " + cmd))
        if output == "":
            return False
    return True


def start_endpoint(endpoint):
    # pending, running, stopped
    logger.info("Starting endpoint: %s", endpoint)

    pod_name = endpoint["podName"]
    podPort = endpoint["podPort"]
    port = endpoint["port"]
    user_name = endpoint["username"]
    if "arguments" in endpoint:
        if endpoint["arguments"]:
            arguments = json.loads(endpoint["arguments"])
        else:
            arguments = {}
    else:
        arguments = {}

    port_name = endpoint["name"]
    if port_name == "ipython":
        port = base64.b64encode(str(port).encode("utf-8"))
        baseurl = base64.b64encode(json.dumps({"port": str(port), "userName": user_name}, sort_keys=True, separators=(',', ':')))
        setup_jupyter_server(user_name, pod_name,podPort, baseurl)
    elif port_name == "tensorboard":
        port = base64.b64encode(str(port).encode("utf-8"))
        baseurl = base64.b64encode(json.dumps({"port": str(port), "userName": user_name}, sort_keys=True, separators=(',', ':')))
        # if there is extra log dir(specify as "tensorboard_log_dir") in arguments, tensorboard command can modify log dir
        setup_tensorboard(user_name, pod_name,podPort,baseurl, arguments)
    elif port_name == "vscode":
        # vscode don't need baseurl specification
        setup_vscode(user_name, pod_name,podPort)

def create_node_port(endpoint):
    port_name = endpoint["name"]
    pod_name = endpoint["podName"]
    user_name = endpoint["username"]
    host_network = endpoint["hostNetwork"]
    if port_name == "ssh":
        endpoint["podPort"] = setup_ssh_server(user_name, pod_name, host_network)
    elif port_name == "ipython":
        endpoint["podPort"] = random.randint(40000, 49999)
    elif port_name == "tensorboard":
        endpoint["podPort"] = random.randint(40000, 49999)
    elif port_name == "vscode":
        endpoint["podPort"] = random.randint(40000, 49999)
    else:
        endpoint["podPort"] = int(endpoint["podPort"])

    if port_name == "inference-url":
        endpoint_description = generate_node_port_service_for_deployment(endpoint["jobId"], endpoint["podName"], endpoint["id"], endpoint["name"], endpoint["podPort"])
    else:
        endpoint_description = generate_node_port_service(endpoint["jobId"], endpoint["podName"], endpoint["id"], endpoint["name"], endpoint["podPort"])
    endpoint_description_path = os.path.join(config["storage-mount-path"], endpoint["endpointDescriptionPath"])
    logger.info("endpointDescriptionPath: %s", endpoint_description_path)
    with open(endpoint_description_path, 'w') as f:
        f.write(endpoint_description)

    result = k8sUtils.kubectl_create(endpoint_description_path)
    if result == "":
        raise Exception("Failed to create NodePort for ssh. JobId: %s " % endpoint["jobId"])

    logger.info("Submitted endpoint %s to k8s, returned with status %s", endpoint["jobId"], result)

def start_endpoints_by_thread(pending_endpoints,data_handler,jobId):
    for endpoint_id, endpoint in pending_endpoints.items():
        try:
            with sql_lock:
                job = data_handler.GetJob(jobId=endpoint["jobId"])[0]
            if job["jobStatus"] != "running":
                continue

            # get endpointDescriptionPath
            # job["jobDescriptionPath"] = "jobfiles/" + time.strftime("%y%m%d") + "/" + jobParams["jobId"] + "/" + jobParams["jobId"] + ".yaml"
            endpoint_description_dir = re.search("(.*/)[^/\.]+.yaml", job["jobDescriptionPath"]).group(1)
            endpoint["endpointDescriptionPath"] = os.path.join(endpoint_description_dir, endpoint_id + ".yaml")

            logger.info("\n\n\n\n\n\n----------------Begin to start endpoint %s", endpoint["id"])
            output = get_k8s_endpoint(endpoint["endpointDescriptionPath"])
            if (output != ""):
                endpoint_description = json.loads(output)
                endpoint["endpointDescription"] = endpoint_description
                endpoint["port"] = int(endpoint["endpointDescription"]["spec"]["ports"][0]["nodePort"])
                start_endpoint(endpoint)
                logging.info("\n----------------done for start endpoint %s", endpoint["id"])
                if is_server_ready(endpoint):
                    endpoint["status"] = "running"
                    logging.info("\n----------------endpoint %s is now running", endpoint["id"])
                pod = k8sUtils.GetPod("podName=" + endpoint["podName"])
                if "items" in pod and len(pod["items"]) > 0:
                    endpoint["nodeName"] = pod["items"][0]["spec"]["nodeName"]
            else:
                # create NodePort
                create_node_port(endpoint)
                logging.info("\n----------------create service done for %s", endpoint["id"])

            endpoint["lastUpdated"] = datetime.datetime.now().isoformat()
            with sql_lock:
                data_handler.UpdateEndpoint(endpoint)
        except Exception as e:
            logger.warning("Process endpoint failed {}".format(endpoint), exc_info=True)
    return jobId

def clear_done_job_id(ret):
    logging.info("\n----------------thread for jobId %s is completed", ret.result())
    global_thread_dict.pop(ret.result(),None)
    logging.info("\n----------------running thread is %s",global_thread_dict.keys())

def start_endpoints():
    try:
        data_handler = DataHandler()
        try:
            pending_endpoints = data_handler.GetPendingEndpoints()
            for jobId,pending_endpoint in pending_endpoints.items():
                if jobId not in global_thread_dict:
                    logging.info("begin to start endpoint for %s " % jobId)
                    t =pool.submit(start_endpoints_by_thread,pending_endpoint,data_handler,jobId)
                    global_thread_dict[jobId] = t
                    t.add_done_callback(clear_done_job_id)
                else:
                    logging.info("\n----------------jobId %s is running", jobId)
        except Exception as e:
            logger.exception("start endpoint failed")
        finally:
            data_handler.Close()
    except Exception as e:
        logger.exception("close data handler failed")


def cleanup_endpoints():
    try:
        data_handler = DataHandler()
        try:
            dead_endpoints = data_handler.GetDeadEndpoints()
            for endpoint_id, dead_endpoint in dead_endpoints.items():
                try:
                    logger.info("\n\n\n\n\n\n----------------Begin to cleanup endpoint %s", endpoint_id)
                    endpoint_description_path = os.path.join(config["storage-mount-path"], dead_endpoint["endpointDescriptionPath"])
                    still_running = get_k8s_endpoint(endpoint_description_path)
                    # empty mean not existing
                    if still_running == "":
                        logger.info("Endpoint already gone %s", endpoint_id)
                        status = "stopped"
                    else:
                        output = k8sUtils.kubectl_delete(endpoint_description_path)
                        # 0 for success
                        if output == 0:
                            status = "stopped"
                            logger.info("Succeed cleanup endpoint %s", endpoint_id)
                        else:
                            # TODO will need to clean it up eventually
                            status = "unknown"
                            logger.info("Clean dead endpoint %s failed, endpoints: %s", endpoint_id, dead_endpoint)

                    # we are not changing status from "pending", "pending" endpoints are planed to setup later
                    if dead_endpoint["status"] != "pending":
                        dead_endpoint["status"] = status
                    dead_endpoint["lastUpdated"] = datetime.datetime.now().isoformat()
                    data_handler.UpdateEndpoint(dead_endpoint)
                except Exception as e:
                    logger.warning("Clanup endpoint failed {}".format(dead_endpoint), exc_info=True)
        except Exception as e:
            logger.exception("cleanup endpoint failed")
        finally:
            data_handler.Close()
    except Exception as e:
        logger.exception("close data handler failed")

def create_log(logdir = '/var/log/dlworkspace'):
    if not os.path.exists(logdir):
        os.system("mkdir -p " + logdir)
    with open('logging.yaml') as f:
        logging_config = yaml.full_load(f)
        f.close()
        logging_config["handlers"]["file"]["filename"] = logdir+"/endpoint_manager.log"
        logging.config.dictConfig(logging_config)


def Run():
    register_stack_trace_dump()
    create_log()

    while True:
        update_file_modification_time("endpoint_manager")

        with manager_iteration_histogram.labels("endpoint_manager").time():
            # start endpoints
            start_endpoints()
            time.sleep(1)

            # clean up endpoints for jobs which is NOT running
            cleanup_endpoints()
        time.sleep(3)

if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument("--port", "-p", help="port of exporter", type=int, default=9205)
    args = parser.parse_args()
    setup_exporter_thread(args.port)
    pool = ThreadPoolExecutor(max_workers=20)
    sql_lock = Lock()
    global_thread_dict = {}
    Run()
