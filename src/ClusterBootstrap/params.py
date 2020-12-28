# These are the default configuration parameter
default_config_parameters = {
    "supported_platform": ["onpremise"],
    "allroles": {"infra", "infrastructure", "worker", "nfs", "sql", "dev", "etcd", "kubernetes_master", "mysqlserver", "elasticsearch", "samba"},
    # Kubernetes setting
    "service_cluster_ip_range": "10.3.0.0/16",
    "pod_ip_range": "10.2.0.0/16",
    "ssl_localhost_ips": [ "127.0.0.1", "127.0.1.1" ],
    "dns_server": {"azure_cluster": '8.8.8.8', 'onpremise':'10.50.10.50'},
    # Home in server, to aide Kubernete setup
    "homeinserver": "http://dlws-clusterportal.westus.cloudapp.azure.com:5000",
    "cloud_influxdb_node": "dlws-influxdb.westus.cloudapp.azure.com",
    "cloud_influxdb_port": "8086",
    "cloud_influxdb_tp_port": "25826",
    "cloud_elasticsearch_node": "dlws-influxdb.westus.cloudapp.azure.com",
    "cloud_elasticsearch_port": "9200",

    "fluent_bit": { "port": 2020 },

    "elasticsearch": {
        "enabled": False,
        "port": {
            "http": 9200,
            "transport": 9300,
            "exporter": 9114,
            "kibana": 5601,
        },
    },

    "azure_blob_log": {
        "enabled": False,
        "port": {
            "adapter": 6200
        }
    },

    "influxdb_port": "8086",
    "influxdb_tp_port": "25826",
    "influxdb_rpc_port": "8088",
    "influxdb_data_path": "/var/lib/influxdb",

    "prometheus": { "port": 9091, "reporter": {"port": 9092} },
    "job-exporter": { "port": 9102 },
    "node-exporter": { "port": 9100 },
    "watchdog": { "port": 9101 },
    "grafana": { "port": 3000, "prometheus-ip": "localhost" },
    "grafana-zh": { "port": 3001, "prometheus-ip": "localhost" },
    "alert-manager": {
        "port": 9093,
        "configured": False,
        "alert_users": False,
        # If want to deploy with alert-manager, should config
        # configured with True, and fill appropriate value to:
        # smtp_url, smtp_from, smtp_auth_username, smtp_auth_password and receiver
        "reaper": {
            "dry-run": True,
            "port": "9500",
            "restful-url": "http://localhost:5000",
        }
    },

    "repair-manager": {
        "prometheus-ip": "localhost",
        "prometheus-port": 9091,
        "etcd": {
            "data-dir": "/etc/RepairManager/etcd"
        }
    },

    "mysql_port": "3306",
    "mysql_username": "root",

    "mysql_data_path": "/var/lib/mysql",
    "grafana_data_path": "/var/lib/grafana/data",
    "prometheus_data_path": "/var/lib/prometheus/data",

    "extranet_protocol":"https",
    "apt_mirror_url": "http:\/\/mirrors.aliyun.com",
    "ssh_port": 22,

    "datasource": "MySQL",
    "defalt_virtual_cluster_name": "platform",
    # Discover server is used to find IP address of the host, it need to be a well-known IP address
    # that is pingable.
    "discoverserver": "4.2.2.1",
    "homeininterval": "600",

    "etcd3port1": "2379",  # Etcd3port1 will be used by App to call Etcd
    "etcd3port2": "4001",  # Etcd3port2 is established for legacy purpose.
    "etcd3portserver": "2380",  # Server port for etcd
    "k8sAPIport": "6443",  # Server port for apiserver
    "nvidiadriverversion": "375.20",
    # Default port for WebUI, Restful API,
    # Port webUI will run upon, nginx will forward to this port.
    "webuiport": "3080",
    "restfulapiport": "5000",
    "restfulapi": "restfulapi",
    # StorageManager mapping
    "storagemanager": "storagemanager",
    "repairmanager": "repairmanager",
    "repairmanageretcd": "repairmanageretcd",
    "ssh_cert": "./deploy/sshkey/id_rsa",
    "admin_username": "dlwsadmin",
    # the path of where dfs/nfs is source linked and consumed on each node,
    # default /dlwsdata
    "nfs-mnt-src-path": "/data/share",
    "storage-mount-path": "/dlwsdata",
    # the path where dlts vc storages are linked and consumed on each node.
    # TODO: merge with storage-mount-path when dlts vc migration completes.
    "dltsdata-storage-mount-path": "/dltsdata",
    # the path of where filesystem is actually mounted /dlwsdata
    "physical-mount-path": "/mntdlws",
    # the path of where local device is mounted.
    "local-mount-path": "/mnt",
    "data_platform_path": "/mntdlws/nfs/label/",
    "physical-mount-path-vc": "/mntdlts/nfs",

    # required storage folder under storage-mount-path
    "default-storage-folders": ["jobfiles", "storage", "work", "service"],
    "per_user_gpu_limit": "-1",

    # the path of where nvidia driver is installed on each node, default
    # /opt/nvidia-driver/current
    "nvidia-driver-path": "/opt/nvidia-driver/current",
    "systemdisk": "/dev/sda",
    "data-disk": "/dev/[sh]d[^a]",
    "partition-configuration": ["1"],


    "render-exclude": {
        "GlusterFSUtils.pyc": True,
        "nbconvert-extensions.tpl": True,
        "launch_glusterfs.pyc": True,
        "bootstrap_hdfs.pyc": True,

    },
    "render-by-copy-ext": {
        ".png": True,
        # All in-docker file will be copied and rendered in docker.
        ".in-docker": True,
        ".js": True,
        ".swf": True,
        ".gzip": True,
        ".rules": True,
        ".tmpl": True,
        ".py": True,
    },
    "render-by-copy": {
        # The following file will be copied (not rendered for configuration)
        "gk-deploy": True,
        "pxelinux.0": True,
        "main.html": True,
        "uploadFile.html": True,
        "imagerecog.html": True,
        "customrecog.html": True,
        "detectron.html": True,
        "collectd.graphite.conf.tpl": True,
        "collectd.influxdb.conf.tpl": True,
        "collectd.riemann.conf.tpl": True,
        "prometheus-alerting.yaml": True,
        "alert-templates.yaml": True,
        # "nginx": True,
        "RecogServer": True,

        # This template will be rendered inside container, but not at build stage
        # "hdfs-site.xml.template": True,
    },
    "render-by-copy-full": {
        "../docker-images/tutorial-dl/Dockerfile": True,
    },
    "docker-run": {
        "hdfs": {
            "workdir": "/opt/hadoop",
            "volumes": {
                "configDir": {
                    "from": "./deploy/etc/hdfs",
                    "to": "/etc/hdfs",
                },
            },
        },
        "pxe-ubuntu": {
            "workdir": "/",
            "su": True,
            "options": "--net=host",
        },

    },
    "mountpoints": {},

    "build-docker-via-config": {
        "hdfs": True,
        "spark": True,
        "glusterfs": True,
    },
    #"render-by-line": { "preseed.cfg": True, },
    # glusterFS parameter
    "glusterFS": {"dataalignment": "1280K",
                  "physicalextentsize": "128K",
                  "volumegroup": "gfs_vg",
                  # metasize is total_capacity / physicalextentsize * 64
                  "metasize": "16776960K",
                  # Volume needs to leave room for metadata and thinpool
                  # provisioning, 98%FREE is doable for a 1TB drive.
                  "volumesize": "98%FREE",
                  "metapoolname": "gfs_pool_meta",
                  "datapoolname": "gfs_pool",
                  "volumename": "gfs_lv",
                  "chunksize": "1280K",
                  "mkfs.xfs.options": "-f -i size=512 -n size=8192 -d su=128k,sw=10",
                  "mountpoint": "/mnt/glusterfs/localvolume",
                  # GlusterFS volume to be constructed.
                  "glustefs_nodes_yaml": "./deploy/docker-images/glusterfs/glusterfs_config.yaml",
                  "glusterfs_docker": "glusterfs",
                  # File system should always be accessed from the symbolic
                  # link, not from the actual mountpoint
                  "glusterfs_mountpoint": "/mnt/glusterfs/private",
                  "glusterfs_symlink": "/mnt/glusterfs",
                  # Spell out a number of glusterFS volumes to be created on the cluster.
                  # Please refer to https://access.redhat.com/documentation/en-US/Red_Hat_Storage/2.1/html/Administration_Guide/sect-User_Guide-Setting_Volumes-Distributed_Replicated.html
                  # for proper volumes in glusterFS.
                  # By default, all worker nodes with glusterFS installed will be placed in the default group.
                  # The behavior can be modified by spell out the group that the node is expected to be in.
                  # E.g.,
                  # node01:
                  #   gluterfs: 1
                  # will place node01 into a glusterfs group 1. The nodes in each glusterfs group will form separate volumes
                  #
                  "gluster_volumes": {
                      "default": {
                          "netvolume": {
                                "property": "replica 3",
                                "transport": "tcp,rdma",
                                # of nodes that can fail before the volume will
                                # become unaccessible.
                                "tolerance": 2,
                              # number of bricks need to be a multiple of this
                              "multiple": 3,
                          },
                      },
                  },
                  # These parameters are required for every glusterfs volumes
                  "gluster_volumes_required_param": ["property", "transport", "tolerance", "multiple"],
                  # To use glusterFS, you will configure the partitions parameter
                  # partitions: /dev/sd[^a]
                  # which is a regular expression calls out all partition
                  # that will be deployed with glusterfs
                  },
    # Options to run in glusterfs
    "launch-glusterfs-opt": "run",

    # Govern how Kubernete nodes are labeled to deploy various kind of service deployment. :
    #   - label : etcd_node <tag to be applied to etcd node only >
    #   - label : worker_node <tag to be applied to worker node only >
    #   - label : all <tag to be applied to all nodes
    # Types of node include:
    #   - etcd_node, etcd_node_1, etcd_node_2 ...
    #   - worker_node
    #   - elasticsearch_node
    #   - mysqlserver_node
    #   - nfs_node
    "kubelabels": {
        "infrastructure": "etcd_node",

        # HDFS node selector
        "hdfs": "worker_node",
        "zookeeper": "etcd_node",
        "journalnode": "etcd_node",
        "namenode1": "etcd_node_1",
        "namenode2": "etcd_node_2",

        "repairmanager": "etcd_node",

        "datanode": "all",

        "grafana": "etcd_node_1",
        "prometheus": "etcd_node_1",
        "watchdog": "etcd_node_1",
        "alert-manager": "etcd_node_1",

        "elasticsearch": "elasticsearch_node",
        "kibana": "etcd_node_1",

        ## storage server
        "mysql": "etcd_node_1",
        "mysql-server": "mysqlserver_node",
        "storagemanager": "nfs_node",
        "user-synchronizer": "etcd_node_1",

        ## worker labels
        "worker": "worker_node",
        "glusterfs": "worker_node",
        "FragmentGPUJob": "all",
        "a910-device-plugin": "worker_node",
        "node-cleaner": "worker_node",

        ## applications
        "nginx": "all",
        "webportal": "etcd_node",
        "restfulapi": "etcd_node",
        "jobmanager": "etcd_node",

        "image-label": "etcd_node",
        "aiarts-frontend": "etcd_node",
        "aiarts-backend": "etcd_node",

        "webui3": "etcd_node",
        "restfulapi2": "etcd_node",
        "jobmanager2": "etcd_node",

        ## default labels
        "all": "all",
        "default": "all",
    },

    "default_kube_labels_by_node_role": {
        'infra': {
            "infrastructure": "active",
            "jobmanager": "active",
            "watchdog": "active",
            "mysql": "active",
            "dashboard": "active",
            "repairmanager": "active",
            "grafana": "active",
            "prometheus": "active",
            "restfulapi": "active",
            "user-synchronizer": "active",
            "alert-manager": "active",
            "beta.kubernetes.io/os": "linux"
            },
        'worker': {
            "worker": "active",
            "beta.kubernetes.io/os": "linux",
            },
        'mysqlserver': {
            "mysql-server": "active"
            },
        'nfs': {
            "storagemanager": "active"
            },
        'elasticsearch': {
            "elasticsearch": "active"
        },
    },

    "kube_services_2_start": [
        "nvidia-device-plugin",
        "flexvolume",
        "mysql",
        "jobmanager",
        "restfulapi",
        "monitor",
        "dashboard",
        "user-synchronizer",
    ],

    "kubemarks": ["rack", "sku"],

    "network": {
        "trusted-domains": {
            "*.redmond.corp.microsoft.com": True,
            "*.corp.microsoft.com": True,
        },
        "container-network-iprange": "192.168.0.1/24",
    },


    "localdisk": {
        # The following pair of options control how local disk is formated and
        # mounted
        "mkfscmd": "mkfs -F -q -t ext4",
        "mountoptions": "ext4 defaults 0 1",
    },

    # optional hdfs_cluster_name: if not inherit cluster_name from cluster
    # "hdfs_cluster_name": cluster_name for HDFS

    "hdfsconfig": {
        # Launch options for formatting, etc..
        "formatoptions": "",
        # Comma separated list of paths on the local filesystem of a DataNode
        # where it should store its blocks.
        "dfs": {
            # Data node configuration,
            # Comma separated list of paths on the local filesystem of a DataNode where it should store its blocks
            # to be filled.
            "data": "",
        },
        "namenode": {
            "localdata": "/var/lib/namenode",
            "data": "/mnt/namenodeshare",
        },
        "zks": {
            # The IP address should be within service_cluster_ip_range
            "ip": "10.3.1.100",
            "port": "2181",
            "data": "/var/lib/zookeeper",
        },
        "journalnode": {
            "port": "8485",
            "data": "/var/lib/hdfsjournal",
        },
        # location of configuration file
        "configfile": "/etc/hdfs/config.yaml",
        # logging directory
        "loggingDirBase": "/usr/local/hadoop/logs"
    },
    "ubuntuconfig": {
        "version": "16.04.1",
        "16.04.2": {
            "ubuntuImageUrl": "http://releases.ubuntu.com/16.04/ubuntu-16.04.2-server-amd64.iso",
            "ubuntuImageName": "ubuntu-16.04.2-server-amd64.iso",
        },
        "16.04.1": {
            "ubuntuImageUrl": "http://old-releases.ubuntu.com/releases/16.04.1/ubuntu-16.04.1-server-amd64.iso",
            "ubuntuImageName": "ubuntu-16.04.1-server-amd64.iso",
        },
    },

    "acskubeconfig": "acs_kubeclusterconfig",
    "isacs": False,
    "acsagentsize": "Standard_NC12",

    "mountconfig": {
        "azurefileshare": {
            "options": "vers=3.0,username=%s,password=%s,dir_mode=0777,file_mode=0777,serverino",
        },
        "glusterfs": {
            "options": "defaults,_netdev",
        },
        "nfs": {
            "options": "rsize=8192,timeo=14,intr,tcp",
        },
        "hdfs": {
            "fstaboptions": "allow_other,usetrash,rw 2 0",
            "options": "rw -ousetrash -obig_writes -oinitchecks",
        },

    },

    "mountdescription": {
        "azurefileshare": "Azure file storage",
        "glusterfs": "GlusterFS (replicated distributed storage)",
        "nfs": "NFS (remote file share)",
        "hdfs": "Hadoop file system (replicated distribute storage).",
        "local": "Local SSD. ",
        "localHDD": "Local HDD. ",
        "emptyDir": "Kubernetes emptyDir (folder will be erased after job termination).",
    },

    "mountsupportedbycoreos": {
        "nfs": True,
        "local": True,
        "localHDD": True,
        "emptyDir": True,
    },

    "k8Sdaemon": {
        # Specify k8S daemon related policy, e.g., dnsPolicy here.
    },

    "mounthomefolder": "yes",
    # Mount point to be deployed to container.
    "deploymounts": [],

    # proxy used
    "proxy": "",


    # folder where automatic share script will be located
    "folder_auto_share": "/opt/auto_share",

    # Option to change pre-/post- deployment script
    # Available options are (case sensitive):
    # "default": CoreOS individual cluster
    # "coreos": coreos cluster
    # "ubuntu": ubuntu cluster
    "platform-scripts": "ubuntu",


    # Default usergroup for the WebUI portal
    # Default setting will allow all Microsoft employees to access the cluster,
    # You should override this setting if you have concern.
    "UserGroups": {
        # Group name
        "CCSAdmins": {
            # The match is in C# Regex Language, please refer to :
            # https://msdn.microsoft.com/en-us/library/az24scfc(v=vs.110).aspx
            "Allowed": ["hongzl@microsoft.com", "anbhu@microsoft.com", "jachzh@microsoft.com","zhexu@microsoft.com","dixu@microsoft.com","qixcheng@microsoft.com","jingzhao@microsoft.com","hayua@microsoft.com"],
            "uid": "900000000-999999999",
            "gid": "508953967"
        },
        "MicrosoftUsers": {
            # The match is in C# Regex Language, please refer to :
            # https://msdn.microsoft.com/en-us/library/az24scfc(v=vs.110).aspx
            "Allowed": ["@microsoft.com"],
            "uid": "900000000-999999999",
            "gid": "508953967"
        },
        "Live": {
            # The match is in C# Regex Language, please refer to :
            # https://msdn.microsoft.com/en-us/library/az24scfc(v=vs.110).aspx
            "Allowed": ["@live.com", "@hotmail.com", "@outlook.com"],
            "uid": "7000000000-7999999999",
            "gid": "508953967"
        },
        "Gmail": {
            # The match is in C# Regex Language, please refer to :
            # https://msdn.microsoft.com/en-us/library/az24scfc(v=vs.110).aspx
            "Allowed": ["@gmail.com"],
            "uid": "8000000000-8999999999",
            "gid": "508953967"
        },
    },

    "WebUIregisterGroups": ["MicrosoftUsers", "Live", "Gmail"],
    "WebUIauthorizedGroups": [],  # [ "MicrosoftUsers", "Live", "Gmail" ],
    "WebUIadminGroups": ["CCSAdmins"],

    # Selectively deploy (turn on) one or more authenticatin methods.
    # Parameter of the authentication method is in config.json file in WebUI.
    # Please note for each authentication method deployed, the DL Workspace endpoint needs to registered with
    # each corresponding App according to openID authentication.
    "DeployAuthentications": ["Corp", "Live", "Gmail"],
    # You should remove WinBindServers if you will use
    # UserGroups for authentication.
    "workFolderAccessPoint": "/",
    "dataFolderAccessPoint": "/",

    "kube_configchanges": ["/opt/addons/kube-addons/weave.yaml"],
    "kube_addons": ["/opt/addons/kube-addons/dashboard.yaml",
                    "/opt/addons/kube-addons/dns-addon.yaml",
                    "/opt/addons/kube-addons/kube-proxy.json",
                    ],

    "k8s-bld": "k8s-temp-bld",
    "k8s-gitrepo": "kubernetes/kubernetes",
    "k8s-gitbranch": "v1.19.0",
    "k8scri-gitrepo": "Microsoft/KubeGPU",
    "k8scri-gitbranch": "master",
    "kube_custom_cri": False,
    "kube_custom_scheduler": False,

    "scheduler_name": "",
    "kubepresleep": 1,
    "etcd_node_num": 1,
    "deploy_method": "kubeadm",

    # used by user-dashboard service
    "enable_vc": "true",
    "i18n": "true",

    "Authentications": {
        "Live-login-windows": {
            "DisplayName": "Microsoft Account (live.com)",
            "Tenant": "microsoft.onmicrosoft.com",
            "ClientId": "55489cd6-b5b8-438d-ab42-4aba116ef8a3",
            "UseIdToken": "true",
            "Scope": "openid email profile",
            # "ClientSecret": "g1nNX9u6Q2tAiqWXdec5amRPadSJQnvsy03P+arDkCk=",
            "AuthorityFormat": "https://login.windows.net/common",
            "Domains": ["live.com", "hotmail.com", "outlook.com"]
        },
        "Live-login-microsoftonline": {
            "DisplayName": "Microsoft Account (live.com)",
            "Tenant": "microsoft.onmicrosoft.com",
            "ClientId": "55489cd6-b5b8-438d-ab42-4aba116ef8a3",
            "UseIdToken": "true",
            "Scope": "openid email profile",
            # "ClientSecret": "g1nNX9u6Q2tAiqWXdec5amRPadSJQnvsy03P+arDkCk=",
            "AuthorityFormat": "https://login.microsoftonline.com/common/v2.0",
            "Domains": ["live.com", "hotmail.com", "outlook.com"]
        },
        "Live": {
            "DisplayName": "Microsoft Account (live.com)",
            "Tenant": "jinlmsfthotmail.onmicrosoft.com",
            "ClientId": "734cc6a7-e80c-4b89-a663-0b9512925b45",
            "ClientSecret": "g1nNX9u6Q2tAiqWXdec5amRPadSJQnvsy03P+arDkCk=",
            "AuthorityFormat": "https://login.microsoftonline.com/{0}",
            "Domains": ["live.com", "hotmail.com", "outlook.com"]
        },
        "Aad": {
            "DisplayName": "Azure Graph",
            "UseAadGraph": "true",
            "UseToken": "true",
            "Tenant": "jinlmsfthotmail.onmicrosoft.com",
            "ClientId": "734cc6a7-e80c-4b89-a663-0b9512925b45",
            "ClientSecret": "g1nNX9u6Q2tAiqWXdec5amRPadSJQnvsy03P+arDkCk=",
            "AuthorityFormat": "https://login.microsoftonline.com/{0}",
            "RedirectUri": "",
            "GraphBaseEndpoint": "https://graph.windows.net",
            "GraphApiVersion": "1.6",  # API version,
            "Scope": "User.Read",
            "Domains": ["live.com", "hotmail.com", "outlook.com"]
        },
        "Live-jinl-windows": {
            "DisplayName": "Live.com",
            "Tenant": "jinlmsfthotmail.onmicrosoft.com",
            "ClientId": "734cc6a7-e80c-4b89-a663-0b9512925b45",
            "ClientSecret": "g1nNX9u6Q2tAiqWXdec5amRPadSJQnvsy03P+arDkCk=",
            "AuthorityFormat": "https://login.windows.net/common",
            "RedirectUri": "",
            "GraphBaseEndpoint": "https://graph.windows.net",
            "GraphApiVersion": "1.6",  # API version,
            # "Scope": "User.Read",
            "Domains": ["live.com", "hotmail.com", "outlook.com"]
        },
        "CorpAad": {
            "DisplayName": "@microsoft.com corpnet sign in",
            "UseAadGraph": "true",
            "UseToken": "true",
            "Tenant": "microsoft.onmicrosoft.com",
            "ClientId": "511c7514-3090-400e-873a-2fb05f2d5c19",
            "ClientSecret": "E3RT39WiTvfBrJLpfs8FYJcrvFDTqEjxrlu9G36CZZM=",
            "AuthorityFormat": "https://login.microsoftonline.com/{0}",
            "RedirectUri": "",
            "Scope": "User.Read",
            "GraphBaseEndpoint": "https://graph.windows.net",
            "GraphApiVersion": "1.6",  # API version,
            "Domains": ["microsoft.com"]
        },
        "Live-Msft": {
            "DisplayName": "Microsoft Account (live.com)",
            "Tenant": "jinlmsfthotmail.onmicrosoft.com",
            "ClientId": "734cc6a7-e80c-4b89-a663-0b9512925b45",
            "ClientSecret": "g1nNX9u6Q2tAiqWXdec5amRPadSJQnvsy03P+arDkCk=",
            "AuthorityFormat": "https://login.microsoftonline.com/{0}",
            "Domains": ["live.com", "hotmail.com", "outlook.com"]
        },

        "Corp": {
            "DisplayName": "@microsoft.com corpnet sign in",
            "UseAadGraph": "false",
            "Tenant": "microsoft.onmicrosoft.com",
            "ClientId": "511c7514-3090-400e-873a-2fb05f2d5c19",
            "ClientSecret": "E3RT39WiTvfBrJLpfs8FYJcrvFDTqEjxrlu9G36CZZM=",
            "AuthorityFormat": "https://login.microsoftonline.com/{0}",
            "RedirectUri": "",
            "GraphBaseEndpoint": "https://graph.windows.net",
            "GraphApiVersion": "1.6",  # API version,
            "Domains": ["microsoft.com"]
        },
        "Gmail": {
            "DisplayName": "Gmail",
            "Tenant": "dlws-auth",
            "ClientId": "79875480060-jrs8a1rqe6a4kv82jh4d2nqgq8t6ap6k.apps.googleusercontent.com",
            "ClientSecret": "L6XfKLzIbiy7jT7s416CBamz",
            "AuthorityFormat": "https://accounts.google.com",
            "Scope": "openid email",
            "Domains": ["gmail.com"]
        },
        "Microsoft": {
            # For use at zhejianglab.com
            "ClientId": "db3c8fdf-2539-4f17-b8ac-cd1a3e38a933",
            "ClientSecret": "tlvQBQQB91509@*dualUB){"
        },
        "WeChat": {
            "AppId": "wx9a56d5d3147bbfc6",
            "AppSecret": "e9e21e5b6bd11e822abcc5dd87c67a09"
        },
    },

    "Dashboards": {
        "influxDB": {
            "dbName": "WebUI",
            "port": 8086,
            "supress": True,
            # "servers": // Specify influxDBserver.
        },
        "grafana": {
            "url" : "grafana",
            "port": 3000,
        },
        "grafana-zh": {
            "url" : "grafana-zh",
            "port": 3001,
        },
        "hdfs": {
            "port": 50070,
        },
        "yarn": {
            "port": 8088,
        },
    },

    # This section will be used to govern the initial user used by the cluster
    "inituser": {
        "gid": 500,
        "uid": 500,
        "group": "dlwsadmin",
    },

    # There are two docker registries, one for infrastructure (used for pre-deployment)
    # and one for worker docker (pontentially in cluser)
    # A set of infrastructure-dockers
    "infrastructure-dockers": {"pxe": True, "pxe-ubuntu": True, },
    "dockerprefix": "",
    "dockertag": "latest",
    "jwt":{
        "secret_key":"Sign key for JWT",
        "algorithm": "HS256"
    },

    # inferenceJob config
    "inference":{
      "tensorflow":{
            "allowedImageVersions": [
               "1.15.0",
               "1.15.0-arm64",
               "1.15.0-gpu",
               "2.2.0",
               "2.2.0-arm64",
               "2.2.0-gpu"
            ]
      },
        "apulisVision": {
            "allowedImageVersions": [
               "1.0.0"
            ]
        }
    },

    # System dockers.
    # These dockers are agnostic of cluster, and can be built once and reused upon multiple clusters.
    # We will gradually migrate mroe and more docker in DLWorkspace to system
    # dockers
    "heketi-docker": "heketi/heketi:dev",
    "dockerregistry": "apulistech/",
    "dockers": {
        # Hub is docker.io/
        "hub": "apulistech/",
        #"hub": "registry.docker-cn.com/dlws/",
        "tag": "1.9", # migrate docker to 1.9 for Apulis
        "system": {
            "nginx": {},
            "zookeeper": {},
            "influxdb": {},
            "collectd": {},
            "grafana": {},
            "tutorial-caffe2-cpu": {},
            "tutorial-caffe2": {},
            "tutorial-tensorflow": {},
            "tutorial-tensorflow-cpu": {},
            "tutorial-pytorch": {},
            "tutorial-pytorch-cpu": {},
            "tutorial-mask-rcnn": {},
            "tutorial-horovod": {},
            "tutorial-dl": {},
            "tutorial-nlp": {},
            "tutorial-fastai": {},
            "tutorial-imagenet18": {},
            "algorithm-bert": {},
            "algorithm-segmentation": {},
            "gobld": {},
            "kubernetes": {},
            "backendbase": {},
        },
        "customize": {
            "webui": {},
            "webui2": {},
            "webui3": {},
            "restfulapi": {},
            "restfulapi2": {},
            "gpu-reporter": {}
        },
        "external": {
            # These dockers are to be built by additional add ons.
            "hyperkube": {"fullname":"gcr.azk8s.cn/google-containers/hyperkube:v1.15.2"},
            "freeflow": {"fullname":"dlws/freeflow:0.18"},
            "podinfra": {"fullname":"dlws/pause-amd64:3.0"},
            "nvidiadriver": {"fullname":"dlws/nvidia_driver:375.20"},
            "weave":{"fullname":"docker.io/weaveworks/weave-kube:2.5.2"},
            "weave-npc":{"fullname":"docker.io/weaveworks/weave-npc:2.5.2"},
            "k8s-dashboard":{"fullname":"dlws/kubernetes-dashboard-amd64:v1.5.1"},
            "kube-dns":{"fullname":"dlws/k8s-dns-kube-dns-amd64:1.14.8"},
            "kube-dnsmasq":{"fullname":"dlws/k8s-dns-dnsmasq-nanny-amd64:1.14.8"},
            "kube-dns-sidecar":{"fullname":"dlws/k8s-dns-sidecar-amd64:1.14.8"},
            "heapster":{"fullname":"dlws/heapster-amd64:v1.4.0"},
            "etcd":{"fullname":"dlws/etcd:3.1.10"},
            "mysql":{"fullname":"mysql/mysql-server:8.0"},
            "phpmyadmin":{"fullname":"mhzawadi/phpmyadmin:v5.0.2.2"},
            "elasticsearch":{"fullname":"dlws/elasticsearch:6.8.5"},
            "elasticsearch-exporter":{"fullname":"dlws/elasticsearch-exporter:1.1.0"},
            "kibana":{"fullname":"dlws/kibana:6.8.5"},
            "fluentd-elasticsearch":{"fullname":"dlws/fluentd-elasticsearch:v2.0.2"},
            "binstore":{"fullname":"dlws/binstore:v1.0"},
            "redis": {"fullname": "redis:5.0.6-alpine"},
            "node-exporter": {"fullname": "prom/node-exporter:v0.18.1"},
            "bash": {"fullname": "bash:5"},
            "prometheus": {"fullname": "prom/prometheus:v2.18.0"},
            "grafana": {"fullname": "apulistech/grafana:6.7.4"},
            "grafana-zh": {"fullname": "apulistech/grafana-zh:6.7.4"},
            "alertmanager": {"fullname": "prom/alertmanager:v0.20.0"},
            "prometheus-operator": {"fullname": "jessestuart/prometheus-operator:v0.38.0"},
            "k8s-prometheus-adapter": {"fullname": "directxman12/k8s-prometheus-adapter:v0.7.0"},
            "nvidia-device-plugin": {"fullname": "nvidia/k8s-device-plugin:1.11"},
            "aiarts-frontend": {"fullname": "apulistech/dlworkspace_aiarts-frontend:1.0.0"},
            "aiarts-backend": {"fullname": "apulistech/dlworkspace_aiarts-backend:1.0"},
            "data-platform": {"fullname": "apulistech/dlworkspace_data-platform-backend:latest"},
            "mlflow":{"fullname":"apulistech/mlflow:latest"},
            "node-cleaner": {"fullname": "apulistech/node-cleaner:1.0"},
            "postgres": {"fullname": "postgres:10-alpine"},
            "cvat-redis": {"fullname": "redis:4.0-alpine"},
            "cvat-backend": {"fullname": "cvat/backend"},
            "cvat-frontend": {"fullname": "cvat/frontend"},
            "cvat_elasticsearch": {"fullname": "cvat_elasticsearch"},
            "cvat_kibana": {"fullname": "cvat_kibana"},
            "cvat_logstash": {"fullname": "cvat_logstash"},
            "nuclio_controller": {"fullname": "nuclio/controller:1.5.4-amd64"},
            "nuclio_dashboard": {"fullname": "nuclio/dashboard:1.5.4-amd64"},
        },
        "infrastructure": {
            "pxe-ubuntu": {},
            "pxe-coreos": {},
        },
        # This will be automatically populated by config_dockers, so you can refer to any container as:
        # config["dockers"]["container"]["name"]
        "container": {},
    },

    "cloud_config_nsg_rules": {
        "vnet_range": "192.168.0.0/16",
        "default_admin_username": "core",
        "tcp_port_for_pods": "30000-49999",
        "tcp_port_ranges": "80 443 30000-49999 25826 3000 22222 9091 9092",
        # There is no udp port requirement for now
        #"udp_port_ranges": "25826",
        "inter_connect": {
            "tcp_port_ranges": "22 1443 2379 3306 5000 8086 9092 9114 9200 9300 10250",
            # Need to white list dev machines to connect
            # "source_addresses_prefixes": [ "52.151.0.0/16"]
        },
        "dev_network": {
            "tcp_port_ranges": "22 1443 2379 3306 5000 8086 5601 10250 10255 22222",
            # Need to white list dev machines to connect
            # "source_addresses_prefixes": [ "52.151.0.0/16"]
        },
        "nfs_allow_master": {
            "tcp_port_ranges": "10250",
        },
    },

    "nfs_client_CIDR": {
        "node_range": ["192.168.0.0/16"],
        "samba_range": [],
    },

    "nfs_mnt_setup": [
          {
            "mnt_point": {"rootshare":{"curphysicalmountpoint":"/mntdlws/infranfs","filesharename":"/infradata/share","mountpoints":""}}}
    ],
    "vc_config":{
        "VC-Default":["*"],
    },
    "registry_credential": {},
    "priority": "regular",
    "service_2_docker_map": {
        "monitor": ["watchdog", "gpu-reporter", "reaper", "job-exporter"],
        "dashboard": ["dashboard"],
        "restfulapi": ["restfulapi"],
        "repairmanager": ["repairmanager, repairmanageretcd"],
        "storagemanager": ["storagemanager"],
        "user-synchronizer": ["user-synchronizer"],
    },
    "infiniband_mounts": [],
    "custom_mounts": [],
    "enable_blobfuse": False,

    # To use CPU nodes,
    # 1. CPU nodes must have node label cpuworker=active
    # 2. enable_cpuworker is set to True
    # 3. default_cpu_sku is set to a valid value that exists in sku_meta
    "enable_cpuworker": False,
    "enable_custom_registry_secrets": False,
    "default_cpu_sku": "Standard_D2s_v3",

    # SKU meta defines different types of resources for each SKU
    # and their allowed usage ratio by user applications.
    "sku_meta": {
        "default": {
            "cpu_ratio": 0.8,
            "memory_ratio": 0.8
        },
        "Standard_D2s_v3": {
            "cpu": 2,
            "cpu_ratio": 0.9,
            "memory": 8,
            "memory_ratio": 0.9
        }
    },
    "unifi_router":{
        "username":"dlwsadmin",
        "ip":"192.168.1.1"
         }
}

# These are super scripts
scriptblocks = {
    "restart-main": [
        "mount",
        "kubernetes labels",
        "kubectl create -f https://raw.githubusercontent.com/NVIDIA/k8s-device-plugin/v1.9/nvidia-device-plugin.yml",
        "kubernetes start mysql jobmanager restfulapi webui2 monitor nginx custommetrics",
    ],
    "azure": [
        "runscriptonroles infra worker ./scripts/prepare_vm_disk.sh",
        "nfs-server create",
        "runscriptonroles infra worker ./scripts/prepare_ubuntu.sh",
        "runscriptonroles infra worker ./scripts/disable_kernel_auto_updates.sh",
        "runscriptonroles infra worker ./scripts/docker_network_gc_setup.sh",
        "genscripts",
        "runscriptonroles infra worker ./scripts/dns.sh",
        "-y deploy",
        "-y updateworkerinparallel",
        "-y kubernetes labels",
        "-y gpulabel",
        "kubernetes start nvidia-device-plugin",
        "kubernetes start flexvolume",
        "webui",
        "docker push restfulapi",
        "docker push webui",
        "mount",
        "nginx config",
        "nginx fqdn",
        "kubernetes start mysql",
        "kubernetes start jobmanager",
        "kubernetes start restfulapi",
        "kubernetes start webportal",
        "--sudo runscriptonrandmaster ./scripts/pass_secret.sh",
        "runscriptonroles worker scripts/pre_download_images.sh",
    ],
    "azure_uncordon": [
        "runscriptonall ./scripts/prepare_vm_disk.sh",
        "nfs-server create",
        "runscriptonall ./scripts/prepare_ubuntu.sh",
        "-y deploy",
        "-y updateworker",
        "kubernetes uncordon",
        "-y kubernetes labels",
        # "kubernetes start nvidia-device-plugin",
        "webui",
        "docker push restfulapi",
        "docker push webui",
        "nginx fqdn",
        "nginx config",
        "mount",
        "kubernetes start mysql",
        "kubernetes start jobmanager",
        "kubernetes start restfulapi",
        "kubernetes start webportal",
        "kubernetes start cloudmonitor",
        "kubernetes start nginx",
        # start custom metric apiserver (use Prometheus as implementation)
        "kubernetes start custommetrics",
    ],
    "ubuntu_uncordon": [
        "runscriptonall ./scripts/prepare_ubuntu.sh",
        "-y deploy",
        "-y updateworker",
        "-y kubernetes labels",
        "kubernetes start nvidia-device-plugin",
        "kubernetes uncordon",
        "mount",
        "webui",
        "docker push restfulapi",
        "docker push webui",
        "docker push influxdb",
        "docker push collectd",
        "docker push grafana",
        "kubernetes start freeflow",
        "kubernetes start jobmanager",
        "kubernetes start restfulapi",
        "kubernetes start webportal",
    ],
    "kubernetes_uncordon": [
        "runscriptonall ./scripts/prepare_ubuntu.sh",
        "-y deploy",
        "-y kubernetes labels",
        "kubernetes start nvidia-device-plugin",
        "kubernetes uncordon",
        "sleep 60",
        "-y updateworker",
        "nginx config",
        "kubernetes start freeflow",
        "kubernetes start cloudmonitor",
        "kubernetes start nginx",
    ],
    "add_worker": [
        "sshkey install",
        "runscriptonall ./scripts/prepare_vm_disk.sh",
        "runscriptonall ./scripts/prepare_ubuntu.sh",
        "mount",
        "-y updateworker",
        "-y kubernetes labels",
        "-y kubernetes patchprovider aztools"
    ],
    "add_scaled_worker": [
        "runscriptonall ./scripts/prepare_vm_disk.sh",
        "runscriptonscaleup ./scripts/prepare_ubuntu.sh",
        "mount",
        "-y updatescaledworker",
        "-y kubernetes labels",
        "-y kubernetes patchprovider aztools True"
    ],
    "redeploy": [
        "-y cleanworker",
        "-y --force deploy",
        "-y updateworker",
        "-y kubernetes labels",
        "nginx fqdn",
        "nginx config",
        "kubernetes start mysql",
        "kubernetes start monitor",
        "kubernetes start nginx",
        "kubernetes start custommetrics",
        # TODO(harry): we cannot distinguish gce aws from azure, so add the same providerID
        # This will not break current deployment.
        "-y kubernetes patchprovider aztools"
        "webui",
        "kubernetes start jobmanager",
        "kubernetes start restfulapi",
        "kubernetes start webportal",
    ],
    "bldwebui": [
        "webui",
        "docker push restfulapi",
        "docker push webui",
    ],
    "restartwebui": [
        "kubernetes stop webportal",
        "kubernetes stop restfulapi",
        "kubernetes stop jobmanager",
        "webui",
        # If the daemonset is restarted too soon, before kill is successful, it
        # may not be able to be srated all.
        # "sleep 120", sleep is no longer needed to kubernetes 1.9
        "kubernetes start jobmanager",
        "kubernetes start restfulapi",
        "kubernetes start webportal",
    ],
    "ubuntu": [
        "runscriptonall ./scripts/prepare_ubuntu.sh",
        "-y deploy",
        "-y updateworker",
        "-y kubernetes labels",
        "kubernetes start nvidia-device-plugin",
        "mount",
        "webui",
        "docker push restfulapi",
        "docker push webui",
        "docker push influxdb",
        "docker push collectd",
        "docker push grafana",
        "kubernetes start freeflow",
        "kubernetes start jobmanager",
        "kubernetes start restfulapi",
        "kubernetes start webportal",
        "kubernetes start monitor",
        "kubernetes start logging",
    ],
    "acs": [
        "acs deploy",
        "acs postdeploy",
        "acs prepare",
        "acs storagemount",
        "acs freeflow",
        "bldwebui",
        "restartwebui",
    ],
    "build_kube": [
        "docker push gobld",
        "docker push kubernetes",
    ]
}
