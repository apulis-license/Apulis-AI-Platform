import React, {FC, useEffect, useState} from "react";
import SwipeableViews from 'react-swipeable-views';
import {
  Typography,
  Box,
  Theme,
  useTheme,
  createStyles,
  makeStyles,
  CircularProgress,
} from "@material-ui/core";
import { DLTSTabPanel } from '../CommonComponents/DLTSTabPanel'
import TeamContext from "../../contexts/Teams";
import ClusterContext from '../../contexts/Clusters';
import useFetch from "use-http";
import _ from "lodash";
import { mergeTwoObjsByKey, convertToArrayByKey, mergePropertyByKey, mergePropertyByUserNameAndGPUType, sumObjectValues } from '../../utlities/ObjUtlities';
import {handleChangeIndex} from "../../utlities/interactionUtlties";
import {DLTSTabs} from "../CommonComponents/DLTSTabs";
import {TeamVirtualClusterStatus} from "./components/TeamVirtualClusterStatus";
import {TeamVCUserStatus} from "./components/TeamVCUserStatus";
import {ClusterUsage} from "./components/ClusterUsage";
import {PhysicalClusterNodeStatus} from "./components/PhysicalClusterNodeStatus";
import { MarkunreadSharp } from "@material-ui/icons";
import { useTranslation } from "react-i18next";
import RefreshIcon from '@material-ui/icons/Refresh';
import './index.less';

const ClusterStatus: FC = () => {
  const { t } = useTranslation();
  const theme = useTheme();
  const [value, setValue] = React.useState(0);
  const {clusters} = React.useContext(ClusterContext);
  const { selectedTeam } = React.useContext(TeamContext);
  const [selectedValue, setSelectedValue] = useState("");
  const [vcStatus, setVcStatus] = useState([]);
  const [userStatus, setUserStatus] = useState(Array());
  const [nodeStatus, setNodeStatus] = useState([]);
  const[showIframe, setShowIframe] = useState(true);
  const[iframeUrl,setIframeUrl] = React.useState('');
  const[iframeUrlForPerVC, setIframeUrlForPerVC] = React.useState('');
  const [showCurrentUser, setShowCurrentUser] = useState(true);
  const handleSwitch = () => {
    setShowCurrentUser(!showCurrentUser);
  }
  const options = {
    onMount: true
  }
  const fetchVcStatusUrl = `/api`;
  const fetchiGrafanaUrl = `/api/clusters`;

  const request = useFetch(fetchVcStatusUrl);
  const requestGrafana = useFetch(fetchiGrafanaUrl);
  const fetchVC = async (cluster: string) => {
    const response = await request.get(`/teams/${selectedTeam}/clusters/${cluster}`);
    const responseUrls = await requestGrafana.get(`/${cluster}`);
    if (!response || !responseUrls) {
      return;
    }
    const {grafana} = responseUrls;
    const getIdleGPUPerUser = `${grafana}/api/datasources/proxy/1/api/v1/query?`;

    response['getIdleGPUPerUserUrl'] = getIdleGPUPerUser;
    response['ClusterName'] = cluster;
    if (localStorage.language === 'zh-CN') {
      response['GranaUrl'] = `/endpoints/grafana_zh/d/cluster-status-zh/ji-qun-zhuang-tai?orgId=1&_=${Date.now()}&kiosk=tv&refresh=30s`;
      response['GPUStatisticPerVC'] = `/endpoints/grafana_zh/d/per-vc-gpu-statistic-zh/mei-ge-vcshe-bei-tong-ji-xin-xi?var-vc_name=${selectedTeam}&_=${Date.now()}&kiosk=tv`;
    } else {
      response['GranaUrl'] = `${grafana}dashboard/db/device-usage?refresh=30s&orgId=1&_=${Date.now()}&kiosk=tv`;
      response['GPUStatisticPerVC'] = `${grafana}dashboard/db/per-vc-device-statistic?var-vc_name=${selectedTeam}&_=${Date.now()}&kiosk=tv`;
    }
    return response;
  }
  const fetchClusterStatus = (mount: boolean) => {
    if (clusters && mount) {
      const params = new URLSearchParams({
        query:`count (task_device_percent{vc_name="${selectedTeam}"} == 0) by (username,device_type)`,
      });
      const filterclusters = convertToArrayByKey(clusters, 'id');
      setSelectedValue(filterclusters[0]);
      if (localStorage.getItem("selectedCluster")) {
        setSelectedValue((String)(localStorage.getItem("selectedCluster")));
      } else {
        if (selectedValue === '') {
          setSelectedValue(filterclusters[0]);
        }
      }
      let fetchs: any = [];
      filterclusters.forEach((cluster) => {
        if (fetchVC(cluster)) {
          fetchs.push(fetchVC(cluster));
        }
      })
      if (fetchs.some((fc: any)=> typeof fc === 'undefined' || !fc)) {
        return;
      }
      Promise.all(fetchs).then((res: any) => {
        // init user status & node status when loading page
        let userfetchs: any = [];
        if (localStorage.getItem("selectedCluster") === null)  {
          userfetchs = res[0] || {};
        } else {
          userfetchs = res.filter((vc: any) => vc['ClusterName'] === localStorage.getItem('selectedCluster'))[0] || {};
        }
        const newuserStatusPreemptable: any = [];
        if (userfetchs['user_status_preemptable']) {
          userfetchs['user_status_preemptable'].forEach((item: any) => {
            // newuserStatusPreemptable.push(
            //   _.mapKeys( item, ( value, key ) => {
            //     let newKey = key;
            //     if (key === 'userGPU') {
            //       newKey = 'preemptableGPU';
            //     }
            //     return newKey;
            //   })
            // )
            for (const gpu in item.userGPU) {
              const preemptableGPU = item.userGPU[gpu];
              const userStatusPreemptableItem = {
                gpuType: gpu,
                userName: item.userName,
                preemptableGPU
              }
              newuserStatusPreemptable.push(userStatusPreemptableItem);
            }
          });
        }
        const newUserStatus: any = [];
        if (userfetchs['user_status']) {
          userfetchs['user_status'].forEach((item: any) => {
            for (const gpu in item.userGPU) {
              newUserStatus.push({
                gpuType: gpu,
                userName: item.userName,
                usedGPU: item.userGPU[gpu]
              })
            }
          })
        }
        const tmpMergedUsers = mergePropertyByUserNameAndGPUType(newuserStatusPreemptable, newUserStatus);
        const fetchUsrs: any = [];
        // GET usedGPU AND preemptableGPU
        for (const fetchedUser of tmpMergedUsers ) {
          const tmpUser: any ={};
          tmpUser['userName'] = fetchedUser['userName'];
          if (fetchedUser['usedGPU']) {
            tmpUser['usedGPU'] = fetchedUser['usedGPU'];
          } else {
            tmpUser['usedGPU'] = 0;
          }
          if (fetchedUser['gpuType']) {
            tmpUser['gpuType'] = fetchedUser['gpuType'];
          }

          if (fetchedUser['preemptableGPU']) {
            tmpUser['preemptableGPU'] = fetchedUser['preemptableGPU']
          } else {
            tmpUser['preemptableGPU'] = 0;
          }
          fetchUsrs.push(tmpUser)
        }
        let prometheusResp: any = [];
        let fetchIdes: any = [];
        if (userfetchs['gpu_idle'] != null) {
          for (let [key, value] of Object.entries(userfetchs['gpu_idle'])) {
            let obj: any = value;
            for (let gpuType in obj['booked']) {
              const idleTmp: any = {};
              idleTmp['gpuType'] = gpuType;
              idleTmp['userName'] = key;
              idleTmp['booked'] = Math.floor(obj['booked'][gpuType] / 3600);
              idleTmp['idle'] = Math.floor(obj['idle'][gpuType] / 3600);
              idleTmp['idleGPU'] = 0;
              fetchIdes.push(idleTmp);
            }
          }
        }
        const fetchUserGPUUrl = (userfetchs['getIdleGPUPerUserUrl'] + params);
        fetch(fetchUserGPUUrl).then(async (response: any) => {
          const res = await response.json();
          for (let item of res["data"]["result"]) {
            let idleUser: any = {};
            idleUser['userName'] = item['metric']['username'];
            idleUser['gpuType'] = item['metric']['gpu_type'];
            idleUser['idleGPU'] = Number(item['value'][1]);
            prometheusResp.push(idleUser)
          }
          // fetchIdes
          // let tmpMerged = _.values(mergePropertyByKey([
          //   {gpuType: "nvidia", userName: "zenglong.chen", booked: 13, idle: 1},
          //   {gpuType: "v100", userName: "zenglong.chen", booked: 2, idle: 34}
          // ],fetchUsrs), 'userName');
          let tmpMerged = mergePropertyByUserNameAndGPUType(fetchIdes,fetchUsrs);
          _.values(tmpMerged).forEach((mu: any)=>{
            if (!mu.hasOwnProperty('usedGPU')) {
              mu['usedGPU'] = 0;
            }
            if (!mu.hasOwnProperty('idleGPU')) {
              mu['idleGPU'] = 0;
            }
            if (!mu.hasOwnProperty('booked')) {
              mu['booked'] = 0;
            }
            if (!mu.hasOwnProperty('preemptableGPU')) {
              mu['preemptableGPU'] = 0;
            }
          });
          prometheusResp.forEach((val1: any) => {
            const { userName, gpuType } = val1;
            tmpMerged.forEach((val2: any) => {
              if (userName === val2.userName && gpuType === val2.gpuType) {
                val2.idleGPU = val1.idleGPU;
              }
            })
          })
          let finalUserStatus = tmpMerged;
          let totalRow: any = {};
          totalRow['booked'] = 0;
          totalRow['idle'] = 0;
          totalRow['usedGPU'] = 0;
          totalRow['idleGPU'] = 0;
          totalRow['preemptableGPU'] = 0;
          let GPUTypesSet = new Set();
          for (let us of finalUserStatus) {
            totalRow['booked'] += parseInt(us['booked'] || 0);
            totalRow['idle'] += parseInt(us['idle'] || 0);
            totalRow['usedGPU'] += parseInt(us['usedGPU']);
            totalRow['idleGPU'] += parseInt(us['idleGPU']);
            totalRow['preemptableGPU'] += parseInt(us['preemptableGPU']);
            GPUTypesSet.add(us['gpuType']);
          }
          // for (const t in totalRow) {
          //   if (typeof totalRow[t] === 'number' && isNaN(totalRow[t])) {
          //     totalRow[t] = undefined
          //   }
          // }
          totalRow['gpuType'] = (Array.from(GPUTypesSet)).join(',')
          totalRow['userName'] = 'Total';
          finalUserStatus.push(totalRow);
          setUserStatus(finalUserStatus)

        })

        setIframeUrl(userfetchs['GranaUrl'] );
        setNodeStatus(userfetchs['node_status']);
        setIframeUrlForPerVC(userfetchs['GPUStatisticPerVC']);
        setVcStatus(res.filter(Boolean));
      })
    }
  }

  useEffect(()=>{
    localStorage.removeItem('selectedCluster')
    let mount = true;
    let timeout: any;
    if (mount) {
      fetchClusterStatus(mount)
      timeout = setTimeout(() => {fetchClusterStatus(mount)}, 3000)
    }

    return () => {
      setVcStatus([])
      setUserStatus([])
      request.abort();
      requestGrafana.abort();
      mount = false;
      clearTimeout(timeout)
    }
  },[clusters, selectedTeam]);

  const handleChange = (event: React.ChangeEvent<HTMLInputElement>, mount: boolean) => {
    setSelectedValue(event.target.value);
    localStorage.setItem('selectedCluster', event.target.value);
    const filteredVCStatus: any = vcStatus.filter((vc)=>vc['ClusterName'] === event.target.value);
    fetchClusterStatus(mount)
    setNodeStatus(filteredVCStatus[0]['node_status']);
    setIframeUrl((filteredVCStatus[0]['GranaUrl']));
  }

  const ClusterStatusTitles: string[] = [t("TeamVirtualClusterStatus"),t("TeamVCUserStatus"),t("ClusterUsage"),t("PhysicalClusterNodeStatus")];
  const ClusterUsagesTitles: string[] = [t("VCDeviceUsage"), t("ClusterUsage")];
  // if (vcStatus){
    return (
      <>
        <DLTSTabs value={value} setShowIframe={setShowIframe} setValue={setValue} titles={ClusterStatusTitles} />
        <SwipeableViews
          axis={theme.direction === 'rtl' ? 'x-reverse' : 'x'}
          index={value}
          onChangeIndex={(value) => handleChangeIndex(value, setValue)}
        >
          <DLTSTabPanel value={value} index={0} dir={theme.direction} title={ClusterStatusTitles[value]}>
            <TeamVirtualClusterStatus vcStatus={vcStatus || []} selectedValue={selectedValue} handleChange={(event: React.ChangeEvent<HTMLInputElement>) => handleChange(event, true)}/>
          </DLTSTabPanel>
          <DLTSTabPanel value={value} index={1} dir={theme.direction} title={ClusterStatusTitles[value]}>
            <TeamVCUserStatus userStatus={userStatus} currentCluster={selectedValue} showCurrentUser={showCurrentUser} handleSwitch={handleSwitch}/>
          </DLTSTabPanel>
          <DLTSTabPanel value={value} index={2} dir={theme.direction} title={ClusterUsagesTitles[0]}>
            <ClusterUsage showIframe={showIframe} iframeUrl={iframeUrlForPerVC}/>
            <Typography component="h2" variant="h6" style={{ marginLeft:'20px' }}>
              {ClusterUsagesTitles[1]}
            </Typography>
            <ClusterUsage showIframe={showIframe} iframeUrl={iframeUrl}/>
          </DLTSTabPanel>
          <DLTSTabPanel className="pcns" value={value} index={3} dir={theme.direction}
            title={<>{ClusterStatusTitles[value]}<RefreshIcon onClick={() => fetchClusterStatus(true)} titleAccess="Refresh" /></>}>
            <PhysicalClusterNodeStatus nodeStatus={  nodeStatus }/>
          </DLTSTabPanel>
        </SwipeableViews>
      </>
    )
  // } else {
  //   return (
  //     <Box display="flex" justifyContent="center">
  //       <CircularProgress/>
  //     </Box>
  //   )
  // }
}

export default ClusterStatus;
