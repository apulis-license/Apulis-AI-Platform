const config = require('config')
const Cluster = require('../../service/cluster')
const User = require('../../service/user')

const clusterIds = Object.keys(config.get('clusters'))

module.exports = async context => {
  const { userName, password, role, nickName, phoneNumber, email, note } = context.request.body
  const openId = userName
  let isAdmin = false
  let isAuthorized = false
  if (role === 'Admin') {
    isAdmin = true
  } else if (role === 'User') {
    isAuthorized = true
  }
  let clusterId = clusterIds[0]
  const payload = {
    openId,
    userName: context.state.user.userName,
    identityName: userName,
    group: 'Account',
    password,
    nickName,
    phoneNumber,
    email,
    isAdmin,
    isAuthorized
  }
  const cluster = new Cluster(context, clusterId)
  const isUserExist = await User.getAccountInfoByUserName(context, userName)
  if (isUserExist) {
    context.body = {
      success: false,
      message: `UserName ${userName} is exist!`
    }
    return
  }
  const response = await cluster.addUser2(payload)
  context.body = {
    success: true,
    message: 'success'
  }
}
