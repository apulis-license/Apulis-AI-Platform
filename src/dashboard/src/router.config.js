import React from 'react';
const Home = React.lazy(() => import('./pages/Home'));
const EmptyTeam = React.lazy(() => import('./pages/EmptyTeam'));
const Submission = React.lazy(() => import('./pages/Submission'));
const JobV2 = React.lazy(() => import('./pages/JobV2'));
const JobsV2 = React.lazy(() => import('./pages/JobsV2'));
const ClusterStatus = React.lazy(() => import('./pages/ClusterStatus'));
const Vc = React.lazy(() => import('./pages/Vc/index.js'));
const Model = React.lazy(() => import('./pages/Model/index'));
const Help = React.lazy(() => import('./pages/Help/Help'));
const version = React.lazy(() => import('./pages/VersionInfo'));
const CentralInference = React.lazy(() => import('./pages/CentralInference/index'));


export default [
  {
    path: '/home',
    component: Home,
    exact: true
  },
  {
    path: '/submission',
    component: Submission,
    needPermission: ['SUBMIT_TRAINING_JOB']
  },
  {
    path: '/jobs-v2/:clusterId/:jobId',
    component: JobV2,
    strict: true,
    exact: true,
    needPermission: ['SUBMIT_TRAINING_JOB', 'VIEW_AND_MANAGE_ALL_USERS_JOB', 'VIEW_ALL_USER_JOB']
  },
  {
    path: '/jobs-v2/:clusterId/',
    component: JobsV2,
    strict: true,
    exact: true,
    needPermission: ['SUBMIT_TRAINING_JOB', 'VIEW_AND_MANAGE_ALL_USERS_JOB', 'VIEW_ALL_USER_JOB']
  },
  {
    path: '/jobs-v2/',
    component: JobsV2,
    strict: true,
    exact: true,
    needPermission: ['SUBMIT_TRAINING_JOB', 'VIEW_AND_MANAGE_ALL_USERS_JOB', 'VIEW_ALL_USER_JOB']
  },
  {
    path: '/cluster-status',
    component: ClusterStatus,
    needPermission: ['VIEW_CLUSTER_STATUS']
  },
  // {
  //   path: '/vc',
  //   component: Vc,
  //   needPermission: ['VIEW_VC', 'MANAGE_VC']
  // },
  {
    path: '/model',
    component: Model,
    needPermission: ['EDGE_INFERENCE']
  },
  {
    path: '/help',
    component: Help,
  },
  {
    path: '/versionInfo',
    component: version,
  },
  // {
  //   path: '/centralInference',
  //   component: CentralInference,
  //   needPermission: ['CLOUD_INFERENCE']
  // }
];


