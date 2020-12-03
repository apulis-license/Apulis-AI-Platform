const index = {
  submitTrainingJob: 'Submit Training Job',
  cluster: 'Cluster',
  jobName: 'Job Name',
  jobNameIsRequired: 'Job Name is required！',
  jobTemplate: 'Job Template',
  jobType: 'Job Type',
  preemptibleJob: 'Preemptible Job',
  deviceType: 'Device Type',
  deviceNumber: 'Number of Device',
  numberOfNodes: 'Number of Nodes',
  numberOfDevicesPerNode: 'Number of Devices Per Node',
  totalNumberOfDevice: 'Total Number of Device',
  noneApplyAtemplate: 'None (Apply a Template)',
  regularJob: 'Regular Job',
  distributedJob: 'Distributed Job',
  dockerImage: 'Docker Image',
  command: 'Command',
  interactivePorts: 'Interactive Ports',
  advanced: 'ADVANCED',
  template: 'TEMPLATE',
  submit: 'SUBMIT',
  npuNumberValidator: 'Must be a positive integer from 0 to {temp}，and can only be one of 0, 1, 2, 4, 8.',
  gpuNumberValidator: 'Must be a positive integer from 0 to {temp}',
  deviceChanged: 'The device type has been changed, please go to VC to synchronize the modification'
}
const advance = {
  customDockerRegistry: 'Custom Docker Registry',
  username: 'Username',
  password: 'Password',
  mountDirectories: 'Mount directories',
  pathInContainer: 'Path in container',
  pathOnHostMachineOrStorageServer: 'Path on Host Machine / Storage Server',
  enable: 'Enable',
  workPath: 'Work Path',
  dataPath: 'Data Path',
  jobPath: 'Job Path',
  environmentVariables: 'Environment Variables',
  name: 'Name',
  value: 'Value',
  environmentVariableName: 'Environment Variable Name',
  environmentVariableValue: 'Environment Variable Value',
  jobNameIsRequired: 'Job Name is required',
  dockerImageIsRequired: 'Docker Image is required',
  commandIsRequired: 'Command is required',
  tensorboardListenTips: "TensorBoard will listen on directory ~/tensorboard/<JobId>/logs inside docker container."
}

const template = {
  templateManagements: 'Template Managements',
  templateName: 'Template name',
  scope: 'Scope',
  save: 'Save',
  delete: 'Delete',
  deleteTemplate: 'Delete Template',
  selectTemplate: 'Select Template',
  cancel: 'CANCEL',
  templateSaved: 'Template saved',
}
export default {
  ...index,
  ...advance,
  ...template
}