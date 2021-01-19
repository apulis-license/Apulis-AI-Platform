const index = {
  brief: '简介',
  endpoints: '端口',
  metrics: '指标',
  console: '控制台',
  failedToFetchClusterConfig: '获取集群配置失败:',
  failedToFetchJob: '获取任务失败',
  //
  saveImageSuccessLeft: '成功提交操作，预计将花费 ',
  saveImageSuccessRight: ' 秒的时间',
  saveImageDialogTitle: '保存镜像',
  imageName: '镜像名称',
  imageVersion: '镜像版本',
  desc: '描述',
  successSubmitImage: '成功提交！',
  imageNameRequired: '镜像名称是必填的',
  imageVersionRequired: '镜像版本是必填的',
  imageNameReg: '只允许数字，字母和下划线的组合',
  imageVersionReg: '只允许数字，字母和小数点',
  confirm: '确定',
  cancel: '取消',
  numberOfNodes: '节点数量',
  totalNumberOfDevice: '全部设备数量',
  totalOfDevice: '全部设备数量',

}
const endpoints = {
  newInteractivePort: '新建交互端口',
  tensorBoardWillListenOnDirectory: 'TensorBoard将监听docker容器内部中的目录地址：',
  insideDockerContainer: '',
  enabled: '启动成功',
  enabling: '启动中',
  failedToEnable: '启动失败',
  jobIs: '任务正在',
  now: '',
  interactivePortIsRequired: '请输入交互式端口',
  port: '端口',
  exposed: '已经暴露',
  failedToExposePort: '暴露端口失败',
  exposingPort: '正在暴露端口',
  alreadyHasPort: '已经存在端口',
}
const brief = {
  jobId: '任务 Id',
  jobName: '任务名称',
  vcName: '虚拟集群名称',
  dockerImage: 'Docker 镜像',
  command: '指令',
  dataPath: '数据路径',
  workPath: '工作路径',
  jobPath: '任务路径',
  preemptible: '可抢占',
  deviceType: '设备类型',
  numberOfDevice: '设备数量',
  jobStatus: '任务状态',
  jobSubmissionTime: '任务提交时间'
}
const console = {
  becauseThisJobHasNotStarted: '任务未开始，没有日志',
}
export default {
  ...index,
  ...endpoints,
  ...brief,
  ...console,
}