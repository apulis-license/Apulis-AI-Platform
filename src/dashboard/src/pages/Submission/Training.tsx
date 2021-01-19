import React, { useState, useEffect, useMemo, useContext, useCallback } from "react";
import {
  Card,
  CardHeader,
  CardContent,
  CardActions,
  Grid,
  Container,
  TextField,
  FormControlLabel,
  Checkbox,
  Button,
  Divider,
  Chip,
  Collapse,
  Typography,
  Table,
  TableHead,
  TableRow,
  TableCell,
  TableBody,
  Switch,
  MenuItem,
  SvgIcon, useMediaQuery,
  Dialog, DialogActions, DialogContent, DialogTitle, DialogContentText
} from "@material-ui/core";
import axios from 'axios';
import { Delete, Add, Help } from "@material-ui/icons";
import { withRouter } from "react-router";
import IconButton from '@material-ui/core/IconButton';
import { useSnackbar } from 'notistack';
import useFetch from "use-http";
import { join } from 'path';
import _ from "lodash";
import ClusterSelectField from "./components/ClusterSelectField";
import UserContext from "../../contexts/User";
import ClustersContext from '../../contexts/Clusters';
import TeamsContext from "../../contexts/Teams";
import theme, { Provider as MonospacedThemeProvider } from "../../contexts/MonospacedTheme";
import { green } from "@material-ui/core/colors";
import {
  SUCCESSFULSUBMITTED,
  SUCCESSFULTEMPLATEDELETE, SUCCESSFULTEMPLATEDSAVE
} from "../../Constants/WarnConstants";
import {DLTSSnackbar} from "../CommonComponents/DLTSSnackbar";
import message from '../../utils/message';
import { NameReg, NameErrorText, InteractivePortsMsg,
  NoNumberReg, NoNumberText, HttpsErrorText, HttpsReg } from '../../const';
import './Training.less';
import { useForm } from "react-hook-form";
import { validateInteractivePorts } from "../../utlities/validators";
import {DLTSDialog} from "../CommonComponents/DLTSDialog";
import './Training.less';
import { useTranslation } from "react-i18next";

interface EnvironmentVariable {
  name: string;
  value: string;
  time: number;
}

interface Itemplate {
  scope: string;
  json: string;
  name: string;
  isDefault: 1 | 0;
}

const sanitizePath = (path: string) => {
  path = join('/', path);
  path = join('.', path);
  return path; 
}
const Training: React.ComponentClass = withRouter(({ history }) => {
  const {t} = useTranslation();
  const { selectedCluster, saveSelectedCluster, availbleGpu } = useContext(ClustersContext);
  const { userName, uid } = useContext(UserContext);
  const { teams, selectedTeam }= useContext(TeamsContext);
  const { enqueueSnackbar } = useSnackbar()
  //const team = 'platform';
  const [showGPUFragmentation, setShowGPUFragmentation] = useState(false)
  const [grafanaUrl, setGrafanaUrl] = useState('');
  const [name, setName] = useState("");
  const [gpuFragmentation, setGpuFragmentation] = useState<any[]>([]);
  const team = useMemo(() => {
    if (teams == null) return;
    if (selectedTeam == null) return;
    return teams.filter((team: any) => team.id === selectedTeam)[0];
  }, [teams, selectedTeam]);
  const cluster = useMemo(() => {
    if (team == null) return;
    if (selectedCluster == null) return;
    return team.clusters.filter((cluster: any) => cluster.id === selectedCluster)[0];
  }, [team, selectedCluster]);
  const gpuModel = useMemo(() => {
    if (cluster == null) return;
    return Object.keys(cluster.gpus)[0];
  }, [cluster]);
  const [gpuType, setGpuType] = useState(availbleGpu[0] ? availbleGpu[0].type : '');
  const [gpuCapacity, setGpuCapacity] = useState(0);
  const [gpuAvailable, setGpuAvailable] = useState(0);
  const [npuNumMsg, setNpuNumMsg] = useState('');
  const [templates, setTemplates] = useState<Itemplate[]>([]);
  const [type, setType] = useState("RegularJob");
  const [preemptible, setPreemptible] = useState(false);
  const [workers, setWorkers] = useState(1);
  const [image, setImage] = useState("");
  const [command, setCommand] = useState("");
  const [interactivePorts, setInteractivePorts] = useState("");
  const [ssh, setSsh] = useState(false);
  const [ipython, setIpython] = useState(false);
  const [tensorboard, setTensorboard] = useState(false);
  const [vscode, setVscode] = useState(false);
  const [advanced, setAdvanced] = useState(false);
  const [accountName, setAccountName] = useState("");
  const [accountKey, setAccountKey] = useState("");
  const [containerName, setContainerName] = useState("");
  const [mountPath, setMountPath] = useState("");
  const [mountOptions, setMountOptions] = useState("");
  const [workPath, setWorkPath] = useState("");
  const [dockerRegistry, setDockerRegistry] = useState("");
  const [dockerUsername, setDockerUsername] = useState("");
  const [dockerPassword, setDockerPassword] = useState("");
  const [enableWorkPath, setEnableWorkPath] = useState(true);
  const [dataPath, setDataPath] = useState("");
  const [enableDataPath, setEnableDataPath] = useState(true);
  const [jobPath, setJobPath] = useState("");
  const [enableJobPath, setEnableJobPath] = useState(true);
  const [showSaveTemplate, setSaveTemplate] = useState(false);
  const [deleteModal, setDeleteModal] = useState(false);
  const [checkVCModal, setCheckVCModal] = useState(false);
  const [environmentVariables, setEnvironmentVariables] = useState<EnvironmentVariable[]>([]);
  const SUCCESSFULSUBMITTED = t('tips.SUCCESSFULSUBMITTED')
  const SUCCESSFULTEMPLATEDELETE = t('tips.SUCCESSFULTEMPLATEDELETE')
  const SUCCESSFULTEMPLATEDSAVE = t('tips.SUCCESSFULTEMPLATEDSAVE')
  const [allDevice, setAllDevice] = useState<{
    [name: string]: { deviceStr: string, capacity: number, detail: Array<[]> }
  }>({});
  const [gpuNumPerDevice, setGpuNumPerDevice] = useState(1);
  const [gpuNumPerDeviceOptions, setGpuNumPerDeviceOptions] = useState<number[]>([]);
  const [numNodesOptions, setNumNodesOptions] = useState<number[]>([]);
  const [nodeCapacityArr, setNodeCapacityArr] = useState<number[]>([]);
  const onEnvironmentVariableNameChange = useCallback(
    (index: number) => (event: React.ChangeEvent<HTMLInputElement>) => {
      const val = event.target.value;
      const newEnvironmentVariables = environmentVariables.slice()
      environmentVariables[index].name = val;
      setEnvironmentVariables(newEnvironmentVariables);
    },
    [environmentVariables]
  );
  const onEnvironmentVariableValueChange = useCallback(
    (index: number) => (event: React.ChangeEvent<HTMLInputElement>) => {
      const newEnvironmentVariables = environmentVariables.slice()
      environmentVariables[index].value = event.target.value;
      setEnvironmentVariables(newEnvironmentVariables);
    },
    [environmentVariables]
  );
  const onRemoveEnvironmentVariableClick = (time: number, name: string) => {
    const newArr = environmentVariables.filter(i => i.time !== time);
    setEnvironmentVariables(newArr);
  }

  const onAddEnvironmentVariableClick = useCallback(() => {
    setEnvironmentVariables(
      environmentVariables.concat(
        [{ name: "", value: "" , time: new Date().getTime() }]));
  }, [environmentVariables]);
  const [database, setDatabase] = useState(false);
  const [tplName, setTplName] = useState("");
  const [selectDelTPName, setSelectDelTPName] = useState('');
  const [tplDatabase, setTplDatabase] = useState("user");
  const [iconInfoShow, setIconInfoShow] = useState(false);
  const [tpInfoShow, setTPInfoShow] = useState(false);
  const [isSave, setIsSave] = useState(false);
  const { handleSubmit, register, errors, setValue, setError, clearError } = useForm({ mode: "onBlur" });
  const [gpus, setGpus] = useState(0);
  const [canDistributedJob, setCanDistributedJob] = useState(true);
  const onSaveTemplateClick = async () => {
    if (!tplName) {
      setError('templateName', 'required', 'Template Name is required！');
      return;
    }
    if (Boolean(errors.templateName)) return;
    try {
      let plugins: any = {};
      plugins['blobfuse'] = [];
      let blobfuseObj: any = {};
      blobfuseObj['accountName'] = accountName || '';
      blobfuseObj['accountKey'] = accountKey || '';
      blobfuseObj['containerName'] = containerName || '';
      blobfuseObj['mountPath'] = mountPath || '';
      blobfuseObj['mountOptions'] = mountOptions || '';
      plugins['blobfuse'].push(blobfuseObj);
      plugins['imagePull'] = [];
      let imagePullObj: any = {};
      imagePullObj['registry'] = dockerRegistry;
      imagePullObj['username'] = dockerUsername;
      imagePullObj['password'] = dockerPassword;
      plugins['imagePull'].push(imagePullObj);

      const template = {
        name,
        type,
        gpus,
        workers,
        gpuNumPerDevice,
        image,
        command,
        workPath,
        enableWorkPath,
        dataPath,
        enableDataPath,
        jobPath,
        enableJobPath,
        environmentVariables,
        ssh,
        ipython,
        tensorboard,
        vscode,
        plugins,
        gpuType,
        preemptible,
        interactivePorts,
      };
      const url = `/teams/${selectedTeam}/templates/${tplName}?database=${tplDatabase}`;
      await axios.put(url, template);
      setSaveTemplate(true);
      getTemplates();
    } catch (error) {
      enqueueSnackbar('Failed to save the template', {
        variant: 'error',
      })
      console.error(error);
    }
  };
  const [showDeleteTemplate, setShowDeleteTemplate] = useState(false);
  const onDeleteTemplateClick = async () => {
    const hasThisVC = await checkVC();
    if (!hasThisVC) return;
    if (!selectDelTPName) {
      message('error', t('tips.Needselectonetemplate'))
      return
    }
    try {
      const temp = selectDelTPName.split('.');
      const url = `/teams/${selectedTeam}/templates/${temp[0]}?database=${temp[1]}`;
      await axios.delete(url);
      setShowDeleteTemplate(true);
      setDeleteModal(false);
      setSelectDelTPName('');
      getTemplates();
    } catch (error) {
      enqueueSnackbar( t('tips.Failedtodeletethetemplate'), {
        variant: 'error',
      })
      console.error(error);
    }
  }
  const [selectTPName, setSelectTPName] = useState('None (Apply a Template)');
  
  const onTemplateChange = (val: string,templates: Itemplate[]) => {
    if (val === 'None (Apply a Template)') {
      setName("");
      setValue('jobName', '');
      setType("RegularJob");
      setGpus(0);
      setValue('setGpus', 0);
      setWorkers(0);
      setImage("");
      setValue('image', '');
      setCommand("");
      setValue('command', '');
      setWorkPath("");
      setEnableWorkPath(true);
      setDataPath("");
      setEnableDataPath(true);
      setJobPath("");
      setEnableJobPath(true);
      setEnvironmentVariables([]);
      setSsh(false);
      setIpython(false);
      setTensorboard(false);
      setVscode(false);
      setGpuType(availbleGpu![0].type || '')
      setPreemptible(false);
      setValue('interactivePorts', '');
    } else {
      const [_selectName,_selectScope] = val.split('.')
      const {
        name,
        type,
        gpus,
        workers,
        gpuNumPerDevice,
        image,
        command,
        workPath,
        enableWorkPath,
        dataPath,
        enableDataPath,
        jobPath,
        enableJobPath,
        environmentVariables,
        ssh,
        ipython,
        tensorboard,
        vscode,
        plugins,
        gpuType,
        preemptible,
        interactivePorts
      } = JSON.parse(templates.find(i => i.name === _selectName && i.scope === _selectScope)!.json);
      if (name !== undefined) {
        setName(name);
        formValSet('jobName', name)
      }
      if (type !== undefined) setType(type);
      if (gpus !== undefined) {
        setGpus(gpus);
        formValSet('gpus', gpus);
      }
      if (workers !== undefined) setWorkers(workers);
      if (gpuNumPerDevice) setGpuNumPerDevice(Number(gpuNumPerDevice));
      if (image !== undefined) {
        setImage(image);
        formValSet('image', image);
      }
      if (command !== undefined) {
        setCommand(command);
        formValSet('command', command);
      }
      if (workPath !== undefined) {
        setWorkPath(workPath)
        formValSet('workPath', workPath);
      }
      if (enableWorkPath !== undefined) setEnableWorkPath(enableWorkPath);
      if (dataPath !== undefined) {
        setDataPath(dataPath);
        formValSet('dataPath', dataPath);
      }
      if (enableDataPath !== undefined) setEnableDataPath(enableDataPath);
      if (jobPath !== undefined) {
        setJobPath(jobPath);
        formValSet('jobPath', jobPath);
      }
      if (enableJobPath !== undefined) setEnableJobPath(enableJobPath);
      if (environmentVariables !== undefined) {
        setEnvironmentVariables(environmentVariables);
        formValSet('environmentVariables', environmentVariables);
      }
      if (ssh !== undefined) setSsh(ssh);
      if (ipython !== undefined) setIpython(ipython);
      if (tensorboard !== undefined) setTensorboard(tensorboard);
      if (vscode !== undefined) setVscode(vscode)
      if (gpuType !== undefined) setGpuType(gpuType);
      if (preemptible !== undefined) setPreemptible(preemptible);
      if (interactivePorts !== undefined) {
        setInteractivePorts(interactivePorts);
        formValSet('interactivePorts', interactivePorts);
      }
      if (plugins === undefined) {
        setAccountName("");
        setAccountKey("");
        setContainerName("");
        setMountPath("");
        setMountOptions("");
        setDockerRegistry("")
        setDockerUsername("")
        setDockerPassword("")
      }
      if (plugins !== undefined) {
        if (plugins.hasOwnProperty("blobfuse") && Array.isArray(plugins['blobfuse'])) {
          let blobfuseObj = plugins['blobfuse'][0];
          setAccountName(blobfuseObj['accountName']);
          setAccountKey(blobfuseObj['accountKey']);
          setContainerName(blobfuseObj['containerName']);
          setMountPath(blobfuseObj['mountPath']);
          setMountOptions(blobfuseObj['mountOptions']);
        }

        if (plugins.hasOwnProperty('imagePull') && Array.isArray(plugins['imagePull'])) {
          let imagePullObj = plugins['imagePull'][0];
          if (imagePullObj['registry']) {
            setDockerRegistry(imagePullObj['registry']);
            formValSet('registry', imagePullObj['registry']);
          }
          setDockerUsername(imagePullObj['username'])
          setDockerPassword(imagePullObj['password'])
        }
      }
    }
    setSelectTPName(val);
  }

  const formValSet = (key: any, val: any) => {
    setValue(key, val);
    clearError(key);
  }

  const {
    data: postJobData,
    loading: postJobLoading,
    error: postJobError,
    post: postJob,
  } = useFetch('/api');
  const {
    data: postEndpointsData,
    loading: postEndpointsLoading,
    error: postEndpointsError,
    post: postEndpoints,
  } = useFetch('/api');
  const [open, setOpen] = useState(false);
  const onSubmit = async (data: any) => {
    const hasThisVC = await checkVC();
    if (!hasThisVC) return;
    if (isSave) {
      onSaveTemplateClick();
    } else {
      let plugins: any = {};
      plugins['blobfuse'] = [];
      let blobfuseObj: any = {};
      blobfuseObj['accountName'] = accountName || '';
      blobfuseObj['accountKey'] = accountKey || '';
      blobfuseObj['containerName'] = containerName || '';
      blobfuseObj['mountPath'] = mountPath || '';
      blobfuseObj['mountOptions'] = mountOptions || '';
      plugins['blobfuse'].push(blobfuseObj);
      plugins['imagePull'] = [];
      let imagePullObj: any = {};
      imagePullObj['registry'] = dockerRegistry;
      imagePullObj['username'] = dockerUsername;
      imagePullObj['password'] = dockerPassword;
      plugins['imagePull'].push(imagePullObj);
      const job: any = {
        userName: userName,
        userId: uid,
        jobType: 'codeEnv',
        codePath: '/home/' + userName,
        gpuType: gpuType,
        vcName: selectedTeam,
        containerUserId: 0,
        jobName: name,
        jobtrainingtype: type,
        preemptionAllowed: preemptible ? 'True' : 'False',
        image,
        cmd: command,
        workPath: sanitizePath(enableWorkPath ? workPath : ''),
        enableworkpath: enableWorkPath,
        dataPath: sanitizePath(enableDataPath ? dataPath : ''),
        enabledatapath: enableDataPath,
        jobPath: sanitizePath(enableJobPath ? jobPath : ''),
        enablejobpath: enableJobPath,
        env: environmentVariables,
        hostNetwork : type === 'PSDistJob',
        isPrivileged : type === 'PSDistJob',
        interactivePorts: interactivePorts,
        plugins: plugins,
      };
      let totalGpus = gpus;
      if (type === 'PSDistJob') {
        job.numps = 1;
        job.resourcegpu = gpuNumPerDevice;
        job.numpsworker = workers;
        totalGpus = gpuNumPerDevice * workers;
      } else {
        job.resourcegpu = gpus;
      }
      // if (type === 'PSDistJob') {
      //   if (workers * gpuNumPerDevice > gpuAvailable) {
      //     const msg = window.confirm('There won\'t be enough workers match your request.\nProceed?');
      //     if (!msg) return;
      //   }
      // }
      
      if (gpus > gpuAvailable) {
        const msg = window.confirm(t('submission.noEnoughResource'));
        if (!msg) return;
      }
      postJob(`/clusters/${selectedCluster}/jobs`, job);
    }
  };
  const jobId = React.useRef<string>();
  const fetchGrafanaUrl = `/api/clusters`;
  const request = useFetch(fetchGrafanaUrl);
  const fetchGrafana = async () => {
    const result = await request.get(`/${selectedCluster}`);
    if (result) {
      const { grafana } = result
      setGrafanaUrl(grafana);
    } 
  }

  const checkVC = async () => {
    let result = false;
    const res = await axios.get('/teams');
    if (res.data.length && res.data.findIndex((i: any) => i.id === selectedTeam) > -1) {
      result = true;
    } else {
      setCheckVCModal(true);
    }
    return result;
  }

  const handleCheckVcClose = () => {
    setCheckVCModal(false);
    location.reload();
  }

  useEffect(() => {
    if (postJobData == null) return;
    if (postJobData.error) {
      enqueueSnackbar(postJobData.error, {
        variant: 'error'
      });
      return
    }

    jobId.current = postJobData['jobId'];
    const endpoints = [];
    for (const port of interactivePorts.split(',')) {
      const portNumber = Number(port)
      if (portNumber >= 40000 && portNumber <= 49999) {
        endpoints.push({
          name: `port-${portNumber}`,
          podPort: portNumber
        });
      }
    }
    if (ssh) endpoints.push('ssh');
    if (ipython) endpoints.push('ipython');
    if (tensorboard) endpoints.push('tensorboard');
    if (vscode) endpoints.push('vscode');
    if (endpoints.length > 0) {
      postEndpoints(`/clusters/${selectedCluster}/jobs/${jobId.current}/endpoints`, { endpoints });
    } else {
      history.push(`/jobs-v2/${selectedCluster}/${jobId.current}`);
    }
  }, [postJobData]);

  

  const validateEVName = (val: string, index: number, time: number) => {
    if (val && val !== environmentVariables[index].name) {
      if (environmentVariables.findIndex(i => i.name === val) > -1) {
        setError(`environmentVariables${time}`, 'error', 'Already has the same name！');
        return false;
      } else if (!NoNumberReg.test(val)) {
        setError(`environmentVariables${time}`, 'error', NoNumberText);
        return false;
      } else {
        errors[`environmentVariables${time}`] && clearError(`environmentVariables${time}`);
        const newEnvironmentVariables = environmentVariables.slice();
        environmentVariables[index].name = val;
        setEnvironmentVariables(newEnvironmentVariables);
        return true;
      }
    }
    return true;
  }

  const validateNumDevices = (val: string) => {
    if (val) {
      const _val = Number(val);
      console.log(123, allDevice[gpuType])
      if (allDevice[gpuType]) {
        const { deviceStr, detail } = allDevice[gpuType];
        const maxAllocatable = Math.max(...detail.map((i: any) => i.allocatable));
        const maxCapacity = Math.max(...nodeCapacityArr);
        const temp = Math.min(gpuCapacity, maxCapacity);
        if (deviceStr === 'npu.huawei.com/NPU') {
          const _temp = Math.min(temp, 8);
          if (_val !== 0 && _val !== 1 && _val !== 2 && _val !== 4 && _val !== 8  || _val > _temp) {
            t('submission.npuNumberValidator')
            setNpuNumMsg(t('submission.npuNumberValidator').replace('{temp}', String(_temp)));
            return false;
          }
        } else if (deviceStr === 'nvidia.com/gpu') {
          if (_val < 0 || !Number.isInteger(_val) || _val > temp) {
            setNpuNumMsg(t('submission.gpuNumberValidator').replace('{temp}', String(temp)));
            return false; 
          }
        }
      }
    }
    return true;
  }

  useEffect(() => {
    getTemplates();
    getAllDevice();
  }, [selectedTeam]);

  useEffect(() => {
    if (allDevice[gpuType]) {
      const options: number[] = [];
      const _max = Math.max(...nodeCapacityArr);
      for (let i = 1; i < ((gpuCapacity / _max) + 1); i++) {
        options.push(i);
      }
      setNumNodesOptions(Array.from(new Set(options)));
      if (allDevice[gpuType].deviceStr === 'npu.huawei.com/NPU') {
        if (type === 'PSDistJob') {
          setGpuNumPerDevice(8);
          setGpuNumPerDeviceOptions([8]);
        }
        setCanDistributedJob(!(gpuCapacity < 16));
      } else if (allDevice[gpuType].deviceStr === 'nvidia.com/gpu') {
        setCanDistributedJob(gpuCapacity > _max);
        if (type === 'PSDistJob') {
          setCanDistributedJob(!(gpuCapacity > _max));
          setGpuNumPerDevice(_max);
          setGpuNumPerDeviceOptions(Array.from(new Set(options)));
        }
      }
    }
  }, [type, gpuType, gpuCapacity]);

  useEffect(() => {
    if (!canDistributedJob) {
      setType('RegularJob');
      formValSet('type', 'RegularJob');
    };
  }, [canDistributedJob]);

  const getTemplates = () => {
    axios.get<Itemplate[]>(`/teams/${selectedTeam}/templates`)
      .then(res => {
        const templates = res.data;
        setTemplates(templates);
        const template = templates.find((item) => (item.isDefault === 1))
        if (template) {
          onTemplateChange(`${template.name}.${template.scope}`, templates)
        }
      })
  }

  const getAllDevice = async () => {
    let _gpuCapacity = 0;
    axios.get(`/teams/${selectedTeam}/clusters/${selectedCluster}`)
      .then(res => {
        if (!isEmpty(res)) {
          const { data } = res;
          _gpuCapacity = JSON.parse(data.metadata)[gpuType]?.user_quota || 0;
          setGpuCapacity(_gpuCapacity);
          axios.get(`/${selectedCluster}/getAllDevice?userName=${userName}`)
            .then(res => {
              const { data } = res;
              setAllDevice(data);
              if (data[gpuType]) {
                const { deviceStr } = data[gpuType];
                const arr = data[gpuType].detail ? data[gpuType].detail.map((i: any) => i.capacity) : [];
                setNodeCapacityArr(arr);
                if (deviceStr === 'npu.huawei.com/NPU') {
                  setCanDistributedJob(!(_gpuCapacity < 16));
                } else {
                  setCanDistributedJob(!(_gpuCapacity > Math.max(...arr)));
                }
              } else {
                message('warning', t('submission.deviceChanged'));
              }
            })
        }
      })
  }

  const isEmpty = (obj: object) => {
    if (obj === undefined) return true;
    for(const key in obj) {
      if(obj.hasOwnProperty(key))
        return false;
    }
    return true;
  }

  useEffect(() => {
    fetchGrafana()
    if (postEndpointsData) {
      setOpen(true);
      setTimeout(()=>{
        history.push(`/jobs-v2/${selectedCluster}/${jobId.current}`);
      }, 2000)

    }
  }, [history, postEndpointsData, selectedCluster, selectedTeam])

  useEffect(() => {
    if (postJobError) {
      enqueueSnackbar('Job submission failed', {
        variant: 'error',
      })
    }
  }, [postJobError])

  useEffect(() => {
    if (postEndpointsError) {
      enqueueSnackbar('Enable endpoints failed', {
        variant: 'error',
      })
    }
  }, [postEndpointsError])

  const handleClose = () => {
    setOpen(false)
    setSaveTemplate(false)
    setShowDeleteTemplate(false)
  }

  useEffect(() => {
    if (!grafanaUrl) return;
    const getNodeGpuAva = `${grafanaUrl}/api/datasources/proxy/1/api/v1/query?`;
    const params1 = new URLSearchParams({
      query: `count_values("device_available",avg by (host_ip) (k8s_node_device_available{device_type="${gpuType}"}))`
    });
    const params2 = new URLSearchParams({
      query: `sum(pai_node_count{deviceType!="${gpuType}"})`
    });
    fetch(getNodeGpuAva+params1).then(async (res1: any) => {
      fetch(getNodeGpuAva+params2).then(async (res2: any) => {
        const data1 = await res1.json();
        const data2 = await res2.json();
        let result1 = data1.data.result, result2 = data2.data.result;
        if (result2.length) {
          let sortededResult = [{metric: {device_available: "0"}, value: result2[0].value}];
          result1.length > 0 && result1.forEach((i: { metric: { device_available: string }; value: number[] }) => {
            if (i.metric.device_available === '0') {
              sortededResult[0].value[1] = (Number(sortededResult[0].value[1]) + Number(i.value[1])).toString();
            } else {
              sortededResult.push(i);
            }
          });
          if (sortededResult.length > 1) sortededResult = sortededResult.sort((a: any, b: any)=>a['metric']['device_available'] - b['metric']['device_available']);
          setGpuFragmentation(sortededResult);
        } else {
          if (result1.length > 1) result1 = result1.sort((a: any, b: any)=>a['metric']['device_available'] - b['metric']['device_available']);
          setGpuFragmentation(result1);
        }
      })
    })
  }, [grafanaUrl, gpuType])

  const isDesktop = useMediaQuery(theme.breakpoints.up("sm"));
  const showMessage = (open: boolean,showDeleteTemplate: boolean,showSaveTemplate: boolean) => {
    let message = '';
    if (open) {
      message = SUCCESSFULSUBMITTED;
    }
    if (showDeleteTemplate) {
      message = SUCCESSFULTEMPLATEDELETE;
    }
    if (showSaveTemplate) {
      message = SUCCESSFULTEMPLATEDSAVE;
    }
    return message;
  }
  const styleSnack={backgroundColor: green[400]};
  const jobNameIsRequired = t('submission.jobNameIsRequired');
  const dockerImageIsRequired = t('submission.dockerImageIsRequired');
  const commandIsRequired = t('submission.commandIsRequired');
  const NoNumberText = t('tips.NoNumberText');
  return (
    <Container maxWidth={isDesktop ? 'lg' : 'xs'}>
      <div className="training-wrap" >
        <form onSubmit={handleSubmit(onSubmit)}>
          <Card>
            <CardHeader title={t('submission.submitTrainingJob')}/>
            <Divider/>
            <CardContent>
              <Grid
                container
                wrap="wrap"
                spacing={1}
              >
                <Grid item xs={12} sm={6}>
                  <ClusterSelectField
                    data-test="cluster-item"
                    fullWidth
                    cluster={selectedCluster}
                    gpuType={gpuType}
                    onClusterChange={saveSelectedCluster}
                    userName={userName}
                    onAvailbleGpuNumChange={(val1, val2) => { setGpuCapacity(val1); setGpuAvailable(val2) }}
                  />
                  {/* <Tooltip title={`View Cluster ${gpuType} Status Per Node`}>
                    <IconButton color="secondary" size="small" onClick={() => setShowGPUFragmentation(true)} aria-label="delete">
                      <SvgIcon>
                        <path d="M5 9.2h3V19H5zM10.6 5h2.8v14h-2.8zm5.6 8H19v6h-2.8z"/><path fill="none" d="M0 0h24v24H0z"/>
                      </SvgIcon>
                    </IconButton>
                  </Tooltip> */}
                </Grid>
                <Grid item xs={12} sm={6}>
                  <TextField
                    label={t('submission.jobName')}
                    name="jobName"
                    fullWidth
                    variant="filled"
                    defaultValue={name}
                    error={Boolean(errors.jobName)}
                    onChange={e => setName(e.target.value)}
                    helperText={errors.jobName ? errors.jobName.message : ''}
                    InputLabelProps={{ shrink: true }}
                    inputProps={{ maxLength: 20 }}
                    inputRef={register({
                      required: jobNameIsRequired,
                      pattern: {
                        value: NameReg,
                        message: t('tips.NameErrorText')
                      }
                    })}
                  />
                </Grid>
                <Grid item xs={12}>
                  <TextField
                    disabled={!Array.isArray(templates)}
                    select
                    label={t('submission.jobTemplate')}
                    fullWidth
                    variant="filled"
                    value={selectTPName}
                    onChange={(e) => { onTemplateChange(e.target.value, templates) }}
                  >
                    {templates.length > 0 && templates.sort((a,b)=>a.name.localeCompare(b.name)).map(({ name, json, scope }: any, index: number) => (
                      <MenuItem key={index} value={`${name}.${scope}`}>{`${name}(${scope})`}</MenuItem>
                    ))}
                    <MenuItem value={'None (Apply a Template)'} divider>None (Apply a Template)</MenuItem>
                  </TextField>
                </Grid>
                <Grid item xs={12} sm={6}>
                  <TextField
                    select
                    label={t('submission.jobType')}
                    fullWidth
                    variant="filled"
                    name="type"
                    value={type}
                    onChange={e => setType(e.target.value as string)}
                  >
                    <MenuItem value="RegularJob">Regular Job</MenuItem>
                    {canDistributedJob && <MenuItem value="PSDistJob">Distributed Job</MenuItem>}
                    {/* <MenuItem value="InferenceJob">Inference Job</MenuItem> */}
                  </TextField>
                </Grid>
                <Grid item xs={12} sm={6}>
                  <TextField
                    select
                    label={t('submission.preemptibleJob')}
                    fullWidth
                    variant="filled"
                    value={String(preemptible)}
                    onChange={e => setPreemptible(e.target.value === 'true')}
                  >
                    <MenuItem value="false">NO</MenuItem>
                    <MenuItem value="true">YES</MenuItem>
                  </TextField>
                </Grid>
                <Grid item xs={12} sm={6}>
                  <TextField
                    select
                    label={t('submission.deviceType')}
                    fullWidth
                    variant="filled"
                    value={String(gpuType)}
                    onChange={e => setGpuType(e.target.value)}
                  >
                    {availbleGpu?.map(gpu => (
                      <MenuItem value={gpu.type}>{gpu.type}</MenuItem>
                    ))}
                  </TextField>
                </Grid>
                {(type === 'RegularJob' ||  type === 'InferenceJob') && (
                  <Grid item xs={6}>
                    <TextField
                      name="gpus"
                      label={t('submission.deviceNumber')}
                      fullWidth
                      variant="filled"
                      defaultValue={gpus}
                      error={Boolean(errors.gpus)}
                      onChange={e => setGpus(Number(e.target.value))}
                      helperText={errors.gpus ? npuNumMsg : ''}
                      inputRef={register({
                        validate: val => validateNumDevices(val)
                      })}
                    />
                  </Grid>
                )}
                { type === 'PSDistJob' && canDistributedJob && (
                  <Grid item xs={12} sm={6}>
                    <TextField
                      select
                      label={t('submission.numberOfNodes')}
                      fullWidth
                      variant="filled"
                      value={workers}
                      name="workers"
                      onChange={e => setWorkers(Number(e.target.value))}
                    >
                      {numNodesOptions?.map(i => (
                        <MenuItem value={i}>{i}</MenuItem>
                      ))}
                    </TextField>
                  </Grid>
                )}
                { type === 'PSDistJob' && canDistributedJob && (
                  <Grid item xs={12} sm={6}>
                    <TextField
                      select
                      disabled={allDevice[gpuType] && allDevice[gpuType].deviceStr === 'npu.huawei.com/NPU'}
                      label="Number of Devices Per Node"
                      fullWidth
                      variant="filled"
                      value={gpuNumPerDevice}
                      name="gpuNumPerDevice"
                      onChange={e => setGpuNumPerDevice(Number(e.target.value))}
                    >
                      {gpuNumPerDeviceOptions.map(i => (
                        <MenuItem value={i}>{i}</MenuItem>
                      ))}
                    </TextField>
                  </Grid>
                )}
                { type === 'PSDistJob' && canDistributedJob && (
                  <Grid item xs={12} sm={6}>
                    <TextField
                      disabled
                      type="number"
                      label={t('submission.totalNumberOfDevice')}
                      // value = {workers * gpusPerNode}
                      value = {workers * gpuNumPerDevice}
                      fullWidth
                      variant="filled"
                    />
                  </Grid>
                )}
                <Grid item xs={12}>
                  <TextField
                    label={t('submission.dockerImage')}
                    fullWidth
                    variant="filled"
                    defaultValue={image}
                    InputLabelProps={{ shrink: true }}
                    name="image"
                    onChange={e => setImage(e.target.value)}
                    error={Boolean(errors.image)}
                      helperText={errors.image ? errors.image.message : ''}
                      inputRef={register({
                        required: dockerImageIsRequired
                      })}
                  />
                </Grid>
                <Grid item xs={12}>
                  <MonospacedThemeProvider>
                    <TextField
                      multiline
                      label={t('submission.command')}
                      name="command"
                      fullWidth
                      variant="filled"
                      rows="10"
                      defaultValue={command}
                      InputLabelProps={{ shrink: true }}
                      onChange={e => setCommand(e.target.value)}
                      error={Boolean(errors.command)}
                      helperText={errors.command ? errors.command.message : ''}
                      inputRef={register({
                        required: commandIsRequired
                      })}
                    />
                  </MonospacedThemeProvider>
                </Grid>
                <Grid item xs={12}>
                  <TextField
                    label={t('submission.interactivePorts')}
                    placeholder={t('tips.InteractivePortsMsg')}
                    fullWidth
                    variant="filled"
                    rows="10"
                    name="interactivePorts"
                    defaultValue={interactivePorts}
                    InputLabelProps={{ shrink: true }}
                    onChange={e => setInteractivePorts(e.target.value)}
                    error={Boolean(errors.interactivePorts)}
                    helperText={errors.interactivePorts ? t('tips.InteractivePortsMsg') : ''}
                    inputRef={register({
                      validate: val => validateInteractivePorts(val)
                    })}
                  />
                </Grid>
                <Grid item xs={3} container justify="center">
                  <FormControlLabel
                    control={<Checkbox />}
                    label="SSH"
                    checked={ssh}
                    onChange={(e, checked) => setSsh(checked)}
                  />
                </Grid>
                <Grid item xs={3} container justify="center">
                  <FormControlLabel
                    control={<Checkbox />}
                    label="Jupyter"
                    checked={ipython}
                    onChange={(e, checked) => setIpython(checked)}
                  />
                </Grid>
                <Grid item xs={3} container justify="center" className="icon-grid">
                  <FormControlLabel
                    control={<Checkbox />}
                    label="Vscode"
                    checked={vscode}
                    onChange={(e, checked) => {setVscode(checked)}}
                  />
                </Grid>
                <Grid item xs={3} container justify="center" className="icon-grid">
                  <FormControlLabel
                    control={<Checkbox />}
                    label="TensorBoard"
                    checked={tensorboard}
                    onChange={(e, checked) => setTensorboard(checked)}
                  />
                  
                  <Help fontSize="small" onClick={() => setIconInfoShow(!iconInfoShow)} />
                </Grid>
                {iconInfoShow && <Grid item xs={12} container justify="flex-end">
                  <Chip
                    icon={<Help/>}
                    // label="TensorBoard will listen on directory ~/tensorboard/<JobId>/logs inside docker container."
                    label={t(`submission.tensorboardListenTips`)}
                  />
                </Grid>}
              </Grid>
            </CardContent>
            <Collapse in={advanced}>
              <Divider/>
              <CardContent>
                  <Typography component="div" variant="h6" >{t('submission.customDockerRegistry')}</Typography>
                <Grid
                  container
                  wrap="wrap"
                  spacing={1}
                  align-items-xs-baseline
                >
                  <Grid item xs={12}>
                    <TextField
                      value={dockerRegistry}
                      onChange={e => setDockerRegistry(e.target.value)}
                      label="Registry"
                      fullWidth
                      variant="filled"
                      name="registry"
                      error={Boolean(errors.registry)}
                      helperText={errors.registry ? errors.registry.message : ''}
                      inputRef={register({
                        pattern: {
                          value: HttpsReg,
                          message: t('submission.HttpsErrorText')
                        }
                      })}
                    />
                  </Grid>
                  <Grid item xs={12}>
                    <TextField
                      value={dockerUsername}
                      onChange={e => setDockerUsername(e.target.value)}
                      label={t('submission.username')}
                      fullWidth
                      variant="filled"
                    />
                  </Grid>
                  <Grid item xs={12}>
                    <TextField
                      value={dockerPassword}
                      onChange={e => setDockerPassword(e.target.value)}
                      label={t('submission.password')}
                      fullWidth
                      variant="filled"
                    />
                  </Grid>
                </Grid>
              </CardContent>
              {/* <CardContent>
                <Typography component="span" variant="h6">Mount Directories</Typography>
                <Table size="small">
                  <TableHead>
                    <TableRow>
                      <TableCell>{t('submission.pathInContainer')}</TableCell>
                      <TableCell>{t('submission.pathOnHostMachineOrStorageServer')}</TableCell>
                      <TableCell align="center">{t('submission.enable')}</TableCell>
                    </TableRow>
                  </TableHead>
                  <TableBody>
                    <TableRow>
                      <TableCell>/work</TableCell>
                      <TableCell>
                        <TextField
                          label={t('submission.workPath')}
                          fullWidth
                          margin="dense"
                          variant="filled"
                          name="workPath"
                          defaultValue={workPath}
                          error={Boolean(errors.workPath)}
                          onChange={e => setWorkPath(e.target.value)}
                          helperText={errors.workPath ? errors.workPath.message : ''}
                          InputLabelProps={{ shrink: true }}
                          inputRef={register({
                            pattern: {
                              value: NoChineseReg,
                              message: t('tips.NoChineseErrorText')
                            }
                          })}
                        />
                      </TableCell>
                      <TableCell align="center">
                        <Switch
                          value={enableWorkPath}
                          checked={enableWorkPath}
                          onChange={(e, checked) => setEnableWorkPath(checked)}
                        />
                      </TableCell>
                    </TableRow>
                    <TableRow>
                      <TableCell>/data</TableCell>
                      <TableCell>
                        <TextField
                          label={t('submission.dataPath')}
                          fullWidth
                          margin="dense"
                          variant="filled"
                          name="dataPath"
                          defaultValue={dataPath}
                          error={Boolean(errors.dataPath)}
                          onChange={e => setDataPath(e.target.value)}
                          helperText={errors.dataPath ? errors.dataPath.message : ''}
                          InputLabelProps={{ shrink: true }}
                          inputRef={register({
                            pattern: {
                              value: NoChineseReg,
                              message: t('tips.NoChineseErrorText')
                            }
                          })}
                        />
                      </TableCell>
                      <TableCell align="center">
                        <Switch
                          value={enableDataPath}
                          checked={enableDataPath}
                          onChange={(e, checked) => setEnableDataPath(checked)}
                        />
                      </TableCell>
                    </TableRow>
                    <TableRow>
                      <TableCell>/job</TableCell>
                      <TableCell>
                        <TextField
                          label={t('submission.jobPath')}
                          fullWidth
                          margin="dense"
                          variant="filled"
                          name="jobPath"
                          defaultValue={jobPath}
                          error={Boolean(errors.jobPath)}
                          onChange={e => setJobPath(e.target.value)}
                          helperText={errors.jobPath ? errors.jobPath.message : ''}
                          InputLabelProps={{ shrink: true }}
                          inputRef={register({
                            pattern: {
                              value: NoChineseReg,
                              message: t('tips.NoChineseErrorText')
                            }
                          })}
                        />
                      </TableCell>
                      <TableCell align="center">
                        <Switch
                          value={enableJobPath}
                          checked={enableJobPath}
                          onChange={(e, checked) => setEnableJobPath(checked)}
                        />
                      </TableCell>
                    </TableRow>
                  </TableBody>
                </Table>
              </CardContent> */}
              <CardContent>
                <Typography component="span" variant="h6">{t('submission.environmentVariables')}</Typography>
                <Table size="small">
                  <TableHead>
                    <TableRow>
                        <TableCell>{t('submission.name')}</TableCell>
                      <TableCell>{t('submission.value')}</TableCell>
                      <TableCell/>
                    </TableRow>
                  </TableHead>
                  <TableBody>
                    {environmentVariables.map(({ name, value, time }, index) => (
                      <TableRow key={time}>
                        <TableCell>
                          <TextField
                            label={t('submission.environmentVariableName')}
                            fullWidth
                            margin="dense"
                            variant="filled"
                            // value={name}
                            name={`environmentVariables${time}`}
                            // onChange={onEnvironmentVariableNameChange(index)}
                            error={Boolean(errors[`environmentVariables${time}`])}
                            helperText={errors[`environmentVariables${time}`] ? errors[`environmentVariables${time}`].message : ''}
                            InputLabelProps={{ shrink: true }}
                            inputRef={register({
                              validate: val => validateEVName(val, index, time)
                            })}
                          />
                        </TableCell>
                        <TableCell>
                          <TextField
                            label={t('submission.environmentVariableValue')}
                            fullWidth
                            margin="dense"
                            variant="filled"
                            value={value}
                            onChange={onEnvironmentVariableValueChange(index)}
                          />
                        </TableCell>
                        <TableCell align="center">
                          <IconButton size="small" color="secondary" onClick={() => onRemoveEnvironmentVariableClick(time, name)}>
                            <Delete/>
                          </IconButton>
                        </TableCell>
                      </TableRow>
                    ))}
                    <TableRow>
                      <TableCell/>
                      <TableCell/>
                      {environmentVariables.length < 10 && <TableCell align="center">
                        <IconButton size="small" color="secondary" onClick={onAddEnvironmentVariableClick}>
                          <Add/>
                        </IconButton>
                      </TableCell>}
                    </TableRow>
                  </TableBody>
                </Table>
              </CardContent>
            </Collapse>
            <Collapse in={database}>
              <Divider/>
              <CardContent>
                <div style={{ display: 'flex', alignItems: 'center' }}>
                  <Typography component="span" variant="h6">{t('submission.templateManagements')}</Typography>
                  <Help fontSize="small" onClick={() => setTPInfoShow(!tpInfoShow)} style={{ marginLeft: 4, cursor: 'pointer' }} />
                </div>
                {tpInfoShow &&
                <div style={{ margin: '10px 0'}}>
                  <Chip
                    icon={<Help/>}
                    label={<div style={{ margin: '10px 0'}}><div>{t('submission.scopedUser')}</div><div>{t('submission.scopedTeam')}</div></div>}
                  />
                </div>}
                <Grid container wrap="wrap" spacing={1}>
                  <Grid item xs={12} sm={6}>
                    <TextField
                      label={t('submission.templateName')}
                      name="templateName"
                      fullWidth
                      variant="filled"
                      defaultValue={tplName}
                      error={Boolean(errors.templateName)}
                      onChange={e => setTplName(e.target.value)}
                      helperText={errors.templateName ? errors.templateName.message : ''}
                      InputLabelProps={{ shrink: true }}
                      inputRef={register({
                        pattern: {
                          value: NameReg,
                          message: t('tips.NameErrorText')
                        }
                      })}
                    />
                  </Grid>
                  <Grid item xs>
                    <TextField
                      label={t('submission.scope')}
                      select
                      fullWidth
                      variant="filled"
                      value={tplDatabase}
                      onChange={e => setTplDatabase((e.target.value) as string)}
                    >
                      <MenuItem value="user">{t('submission.user')}</MenuItem>
                      <MenuItem value="team">{t('submission.team')}</MenuItem>
                    </TextField>
                  </Grid>
                    <Button type="submit" color="primary" onClick={() => setIsSave(true)}>{t('submission.save')}</Button>
                    {templates.length > 0 && <Button type="button" color="secondary" onClick={() => setDeleteModal(true)}>{t('submission.delete')}</Button>}
                </Grid>
              </CardContent>
            </Collapse>
            <Divider/>
            <CardActions>
              <Grid item xs={12} container justify="space-between">
                <Grid item xs container>
                    <Button type="button" color="secondary" onClick={() => setAdvanced(!advanced)}>{t('submission.advanced')}</Button>
                  <Button type="button" color="secondary" onClick={() => setDatabase(!database)}>{t('submission.template')}</Button>
                </Grid>
                <Button type="submit" color="primary" variant="contained" onClick={() => setIsSave(false)} disabled={postJobLoading || postEndpointsLoading || open }>{t('submission.submit')}</Button>
              </Grid>
            </CardActions>
          </Card>
        </form>
        {deleteModal &&
        <Dialog open={deleteModal} maxWidth='xs' fullWidth onClose={() => setDeleteModal(false)}>
          <DialogTitle>{t('submission.deleteTemplate')}</DialogTitle>
          <DialogContent>
            <TextField
              disabled={templates.length === 0}
              select
              label={t('submission.selectTemplate')}
              fullWidth
              variant="filled"
              value={selectDelTPName}
              onChange={e => setSelectDelTPName(e.target.value)}
            >
              {Array.isArray(templates) && templates.sort((a,b)=>a.name.localeCompare(b.name)).map(({ name, json, scope }: any, index: number) => (
                <MenuItem key={index} value={`${name}.${scope}`}>{`${name}(${scope})`}</MenuItem>
              ))}
            </TextField>
          </DialogContent>
          <DialogActions>
            <Button onClick={() => setDeleteModal(false)} color="primary">
              {t('submission.cancel')}
            </Button>
            <Button onClick={onDeleteTemplateClick} color="secondary">
              {t('submission.delete')}
            </Button>
          </DialogActions>
        </Dialog>}
        <DLTSSnackbar message={showMessage(open,showDeleteTemplate,showSaveTemplate)}
          open={open || showSaveTemplate || showDeleteTemplate}
          style={styleSnack}
          handleWarnClose={handleClose}
          autoHideDuration={1000}
        />

        {checkVCModal && 
        <Dialog
          open={checkVCModal}
          onClose={handleCheckVcClose}
        >
          <DialogTitle>This virtual cluster has been deleted, please switch other virtual cluster！</DialogTitle>
          <DialogActions>
            <Button onClick={handleCheckVcClose} color="primary">OK</Button>
          </DialogActions>
        </Dialog>}

        {/* {confirmModal && 
        <Dialog
          open={confirmModal}
          onClose={handleCheckVcClose}
        >
          <DialogTitle>This virtual cluster has been deleted, please switch other virtual cluster！</DialogTitle>
          <DialogActions>
            <Button onClick={handleCheckVcClose} color="primary">OK</Button>
          </DialogActions>
        </Dialog>} */}
      </div>
    </Container>
  );
});

export default Training;
