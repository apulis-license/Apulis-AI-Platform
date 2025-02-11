const config = require('config')
const fetch = require('node-fetch')

const Service = require('./service')

const clustersConfig = config.get('clusters')
const userGroup = config.get('userGroup')
const aiartsUrl = config.get('aiarts_url')

/**
 * @typedef {Object} State
 * @property {import('./user')} user
 */

/**
 * @extends {Service<State>}
 */
class Cluster extends Service {
  /**
     * @param {import('koa').Context<State>} context
     * @param {string} id
     */
  constructor (context, id) {
    super(context)
    this.id = id
    this.config = clustersConfig[id]
    context.assert(this.config != null, 404, 'Cluster is not found')
  }

  /**
     * @param {string} teamId
     * @param {boolean} all
     * @return {Promise<Array>}
     */
  async getJobs (teamId, all, limit) {
    const { user } = this.context.state
    const params = new URLSearchParams({
      userName: user.userName,
      vcName: teamId,
      jobOwner: all ? 'all' : user.userName,
      num: limit
    })
    const response = await this.fetch('/ListJobs?' + params)
    this.context.assert(response.ok, 502)
    const data = await response.json()
    const jobs = [].concat(
      data['finishedJobs'],
      data['queuedJobs'],
      data['runningJobs'],
      data['visualizationJobs']
    )
    this.context.log.debug('Got %d jobs from %s', jobs.length, this.id)
    return jobs
  }

  /**
     * @param {string} jobId
     * @return {Promise}
     */
  async getJob (jobId) {
    const { user } = this.context.state
    const params = new URLSearchParams({
      jobId,
      userName: user.userName
    })
    const response = await this.fetch('/GetJobDetail?' + params)
    this.context.assert(response.ok, 502)
    const job = await response.json()
    this.context.log.debug('Got job %s', job['jobName'])
    return job
  }

  /**
     * @param {string} jobId
     * @return {Promise}
     */
  async getJobOwner (jobId) {
    const params = new URLSearchParams({
      jobId
    })
    const response = await this.fetch('/GetJobDetail?' + params)
    this.context.assert(response.ok, 502)
    const job = await response.json()
    this.context.log.debug('Got job %s', job['jobName'])
    return job.jobParams ? job.jobParams.userName : ''
  }

  /**
     * @param {object} job
     * @return {Promise<string>}
     */
  async addJob (job) {
    const response = await this.fetch('/PostJob', {
      method: 'POST',
      headers: {
        'Content-Type': 'application/json'
      },
      body: JSON.stringify(job)
    })
    const text = await response.text()
    this.context.log.debug({ text }, 'Submit job response text')
    this.context.assert(response.ok, response.status, response.statusText)
    return text
  }

  /**
     * @param {object} job
     * @return {Promise<string>}
     */
  async getJobStatus (jobId) {
    const params = new URLSearchParams({ jobId })
    const response = await this.fetch('/GetJobStatus?' + params)
    this.context.assert(response.ok, 502)
    const data = await response.json()
    this.context.assert(data['errorMsg'] == null, 404, data['errorMsg'])
    this.context.log.debug({ data }, 'Got job status')
    return data['jobStatus']
  }

  /**
     * @param {string} jobId
     * @param {'approved'|'killing'} status
     * @return {Promise<string>}
     */
  async setJobStatus (jobId, status) {
    const { user } = this.context.state
    const params = new URLSearchParams({
      jobId,
      userName: user.userName
    })
    if (status === 'approved') {
      const response = await this.fetch('/ApproveJob?' + params)
      const text = await response.text()
      this.context.log.debug({ text }, 'Approve job response')
      this.context.assert(response.ok, response.status, response.statusText)
      return text
    } else if (status === 'killing') {
      const response = await this.fetch('/KillJob?' + params)
      const text = await response.text()
      this.context.log.debug({ text }, 'Kill job response')
      this.context.assert(response.ok, response.status, response.statusText)
      return text
    } else if (status === 'pausing') {
      const response = await this.fetch('/PauseJob?' + params)
      const text = await response.text()
      this.context.log.debug({ text }, 'Pause job response')
      this.context.assert(response.ok, response.status, response.statusText)
      return text
    } else if (status === 'queued') { // resume
      const response = await this.fetch('/ResumeJob?' + params)
      const text = await response.text()
      this.context.log.debug({ text }, 'Resume job response')
      this.context.assert(response.ok, response.status, response.statusText)
      return text
    } else {
      this.context.throw(400, 'Invalid status')
    }
  }

  /**
     * @return {Promise<object>}
     */
  async getJobsPriority () {
    const response = await this.fetch('/jobs/priorities')
    this.context.assert(response.ok, 502)
    const data = await response.json()
    this.context.log.debug('Got priority of %d jobs', Object.keys(data).length)
    return data
  }

  /**
     * @param {string} jobId
     * @param {number} priority
     * @return {Promise}
     */
  async setJobPriorty (jobId, priority) {
    const { user } = this.context.state
    const params = new URLSearchParams({
      userName: user.userName
    })
    const body = { [jobId]: priority }
    const response = await this.fetch('/jobs/priorities?' + params, {
      method: 'POST',
      headers: { 'Content-Type': 'application/json' },
      body: JSON.stringify(body)
    })
    const text = await response.text()
    this.context.log.debug({ text }, 'Set priority %d of job "%s"', priority, jobId)
    this.context.assert(response.ok, 502)
    return text
  }

  /**
   * @param {string} jobId
   * @param {string?} cursor
   * @return {Promise<{log: string, cursor: number}>}
   */
  async getJobLog (jobId, page, cursor) {
    const { user } = this.context.state
    const params = new URLSearchParams({
      jobId,
      userName: user.userName,
      page
    })
    if (cursor !== undefined) {
      params.set('cursor', cursor)
    }
    const response = await this.fetch('/GetJobLog?' + params)
    const res = await response.json()
    return res
  }

  /**
   * @return {Promise<Array>}
   */
  async getTeams () {
    const { user } = this.context.state
    const response = await this.fetch(`/ListVCs?userName=${user.userName}&page=1&size=9999`)
    const data = await response.json()
    this.context.log.debug(data, 'Listed VC')
    return data['result']
  }

  /**
     * @param {string} teamId
     * @return {Promise}
     */
  async getTeam (teamId) {
    const { user } = this.context.state
    const params = new URLSearchParams({
      userName: user.userName,
      vcName: teamId
    })
    const response = await this.fetch('/GetVC?' + params)
    this.context.assert(response.ok, 502)
    const data = await response.json()
    this.context.assert(data != null, 404, 'Team is not found')
    return data
  }

  /**
     * @param {string} jobId
     * @return {Promise<Array>}
     */
  async getCommands (jobId) {
    const { user } = this.context.state
    const params = new URLSearchParams({
      jobId,
      userName: user.userName
    })
    const response = await this.fetch('/GetCommands?' + params)
    this.context.assert(response.ok, 502)
    const data = await response.json()
    this.context.log.debug(data, 'Got commands')
    return data
  }

  /**
     * @param {string} jobId
     * @param {string} command
     * @return {Promise<string>}
     */
  async addCommand (jobId, command) {
    const { user } = this.context.state
    const params = new URLSearchParams({
      jobId,
      userName: user.userName,
      command
    })

    const response = await this.fetch('/AddCommand?' + params)
    const text = await response.text()
    this.context.log.debug({ text }, 'Added command "%s" to "%s"', command, jobId)
    this.context.assert(response.ok, 502)
    return text
  }

  /**
     * @param {string} jobId
     * @returns {Promise}
     */
  async getEndpoints (jobId) {
    const { user } = this.context.state
    const params = new URLSearchParams({
      jobId,
      userName: user.userName
    })
    const response = await this.fetch('/endpoints?' + params)
    this.context.assert(response.ok, 502)
    const data = await response.json()
    this.context.log.debug(data, 'Got endpoints')
    const protocol = require('config').get('extranet_protocol')
    data.forEach(val => {
      val.protocol = protocol
    })
    return data
  }

  /**
     * @param {string} jobId
     * @param {Array} endpoints
     * @returns {Promise<string>}
     */
  async addEndpoint (jobId, endpoints) {
    const { user } = this.context.state
    const params = new URLSearchParams({
      userName: user.userName
    })
    const body = { jobId, endpoints }
    const response = await this.fetch('/endpoints?' + params, {
      method: 'POST',
      headers: { 'Content-Type': 'application/json' },
      body: JSON.stringify(body)
    })
    const text = await response.text()
    this.context.log.debug({ text }, 'Added endpoints %o to "%s"', endpoints, jobId)
    this.context.assert(response.ok, 502)
    return text
  }

  /**
     * @param {string} teamId
     * @returns {Promise}
     */
  async getTemplates (teamId) {
    const { user } = this.context.state
    const params = new URLSearchParams({
      userName: user.userName,
      vcName: teamId
    })
    const response = await this.fetch('/templates?' + params)
    this.context.assert(response.ok, 502)
    const data = await response.json()
    this.context.log.debug({ data }, 'Got templates from %s', this.id)
    return data
  }

  /**
     * @param {string} templateName
     * @param {object} template
     * @return {Promise<string>}
     */
  async updateTemplate (database, teamId, templateName, template) {
    const { user } = this.context.state
    const params = new URLSearchParams({
      userName: user.userName,
      vcName: teamId,
      database: {
        user: 'user',
        team: 'vc'
      }[database] || 'user',
      templateName
    })
    const response = await this.fetch('/templates?' + params, {
      method: 'POST',
      headers: { 'Content-Type': 'application/json' },
      body: JSON.stringify(template)
    })
    const text = await response.text()
    this.context.log.debug({ template, text }, 'Updated template %s in %s', templateName, this.id)
    this.context.assert(response.ok, 502)
    return text
  }

  /**
     * @param {string} templateName
     * @return {Promise<string>}
     */
  async deleteTemplate (database, teamId, templateName) {
    const { user } = this.context.state
    const params = new URLSearchParams({
      userName: user.userName,
      vcName: teamId,
      database: {
        user: 'user',
        team: 'vc'
      }[database] || 'user',
      templateName
    })
    const response = await this.fetch('/templates?' + params, {
      method: 'DELETE'
    })
    const text = await response.text()
    this.context.log.debug({ text }, 'Deleted template %s in %s', templateName, this.id)
    this.context.assert(response.ok, 502)
    return text
  }

  /**
     * @private
     * @param {string} path
     * @param {import('node-fetch').RequestInit} init
     * @returns {Promise<import('node-fetch').Response>}
     */
  async fetch (path, init) {
    const url = this.config.restfulapi + path
    const begin = Date.now()
    this.context.log.info({ url, init }, 'Cluster fetch request')
    try {
      const response = await fetch(url, init)
      const duration = Date.now() - begin
      this.context.log.info({ url, init, status: response.status, duration }, 'Cluster fetch response')
      return response
    } catch (error) {
      const duration = Date.now() - begin
      this.context.log.error({ url, init, error, duration }, 'Cluster fetch error')
      throw error
    }
  }

  /**
   * VC
   */
  async addVc (params) {
    const { vcName, quota, metadata, userName } = params
    const response = await this.fetch(`/AddVC?vcName=${vcName}&quota=${quota}&metadata=${metadata}&userName=${userName}`)
    this.context.assert(response.ok, 502)
    const data = await response.json()
    return data
  }

  async deleteVc (params) {
    const { vcName, userName } = params
    const response = await this.fetch(`/DeleteVC?vcName=${vcName}&userName=${userName}`)
    this.context.assert(response.ok, 502)
    const data = await response.json()
    return data
  }

  async getAllUsers () {
    const response = await this.fetch(`/GetAllAccountUser`)
    this.context.assert(response.ok, 502)
    const data = await response.json()
    return data
  }

  async addUser2 (user) {
    const response = await this.fetch(`/addUser2`, {
      method: 'POST',
      headers: {
        'Content-Type': 'application/json'
      },
      body: JSON.stringify(user)
    })
    this.context.assert(response.ok, 502)
    const data = await response.text()
    return data
  }

  async deleteUser ({ userName, identityName }) {
    const response = await this.fetch('/DeleteUser', {
      headers: {
        'Content-Type': 'application/json'
      },
      body: JSON.stringify({ userName, identityName }),
      method: 'DELETE'
    })
    this.context.assert(response.ok, 502)
    const data = await response.text()
    return data
  }

  async editUserRole (payload) {
    const response = await this.fetch('/UpdateUserPermission', {
      headers: {
        'Content-Type': 'application/json'
      },
      method: 'PATCH',
      body: JSON.stringify(payload)
    })
    this.context.assert(response.ok, 502)
    const data = await response.text()
    return data
  }

  async listVc (params) {
    const { userName, size, page } = params
    const response = await this.fetch(`/ListVCs?userName=${userName}&page=${page}&size=${size}`)
    this.context.assert(response.ok, 502)
    const data = await response.json()
    return data
  }

  async updateVc (params) {
    const { vcName, quota, metadata, userName } = params
    const response = await this.fetch(`/UpdateVC?vcName=${vcName}&quota=${quota}&metadata=${metadata}&userName=${userName}`)
    this.context.assert(response.ok, 502)
    const data = await response.json()
    return data
  }

  async countJobByStatus (params) {
    const { userName, targetStatus, vcName } = params
    const response = await this.fetch(`/CountJobByStatus?userName=${userName}&targetStatus=${targetStatus}&vcName=${vcName}`)
    this.context.assert(response.ok, 502)
    const data = await response.json()
    return data
  }

  async getAllDevice (params) {
    const { userName } = params
    const response = await this.fetch(`/GetAllDevice?userName=${userName}`)
    this.context.assert(response.ok, 502)
    const data = await response.json()
    return data
  }

  async getVersionInfo () {
    const response = await this.fetch('/VersionInfo')
    const data = await response.json()
    return data
  }
  /**
   * USER
   */
  async listUser () {
    const response = await this.fetch(`/ListUser`)
    this.context.assert(response.ok, 502)
    const data = await response.json()
    return data
  }

  async updateUserPerm (params) {
    const { identityName, isAdmin, isAuthorized } = params
    const response = await this.fetch(`/UpdateUserPerm?isAdmin=${isAdmin}&isAuthorized=${isAuthorized}&identityName=${identityName}`)
    this.context.assert(response.ok, 502)
    const data = await response.json()
    console.log(data)
    return data
  }

  async GetACL (params) {
    const { userName } = params
    const response = await this.fetch(`/GetACL?userName=${userName}`)
    this.context.assert(response.ok, 502)
    const data = await response.json()
    return data
  }

  async updateAce (params) {
    const { userName, identityName, resourceType, resourceName, permissions } = params
    const response = await this.fetch(`/UpdateAce?resourceType=${resourceType}&resourceName=${resourceName}&permissions=${permissions}&identityName=${identityName}&userName=${userName}`)
    this.context.assert(response.ok, 502)
    const data = await response.json()
    console.log(data)
    return data
  }
  
  async deleteAce (params) {
    const { userName, identityName, resourceType, resourceName } = params
    const response = await this.fetch(`/DeleteAce?resourceType=${resourceType}&resourceName=${resourceName}&identityName=${identityName}&userName=${userName}`)
    this.context.assert(response.ok, 502)
    const data = await response.json()
    console.log(data)
    return data
  }

  async postInferenceJob (job) {
    const response = await this.fetch('/PostInferenceJob', {
      method: 'POST',
      headers: {
        'Content-Type': 'application/json'
      },
      body: JSON.stringify(job)
    });
    const text = await response.text();
    this.context.log.debug({ text }, 'Submit job response text');
    this.context.assert(response.ok, response.status, response.statusText);
    return text;
  }

  async getInferenceJobs (teamId, jobOwner, limit) {
    const { user } = this.context.state
    const params = new URLSearchParams({
      userName: user.userName,
      vcName: teamId,
      jobOwner: jobOwner,
      num: limit
    })
    const response = await this.fetch('/ListInferenceJob?' + params)
    this.context.assert(response.ok, 502)
    const data = await response.json()
    return [].concat(
      data['finishedJobs'],
      data['queuedJobs'],
      data['runningJobs'],
      data['visualizationJobs']
    )
  }

  async getAllSupportInference () {
    const response = await this.fetch(`/GetAllSupportInference`)
    this.context.assert(response.ok, 502)
    const data = await response.json()
    return data
  }

  async getFDInfo () {
    const response = await this.fetch(`/GetFDInfo`)
    this.context.assert(response.ok, 502)
    const data = await response.json()
    return data
  }

  async getModelConvertionTypes () {
    const response = await this.fetch(`/GetModelConversionTypes`)
    this.context.assert(response.ok, 502)
    const data = await response.json()
    return data
  }

  async getModelList (teamId, jobOwner, limit) {
    const { user } = this.context.state
    const params = new URLSearchParams({
      userName: user.userName,
      vcName: teamId,
      jobOwner: jobOwner,
      num: limit
    })
    const response = await this.fetch('/ListModelConversionJob?' + params)
    this.context.assert(response.ok, 502)
    const data = await response.json()
    return [].concat(
      data['finishedJobs'],
      data['queuedJobs'],
      data['runningJobs'],
      data['visualizationJobs']
    )
  }

  async setFDInfo (data) {
    const response = await this.fetch('/SetFDInfo', {
      method: 'POST',
      headers: {
        'Content-Type': 'application/json'
      },
      body: JSON.stringify(data)
    });
    const text = await response.text();
    this.context.assert(response.ok, response.status, response.statusText);
    return text;
  }

  async pushModelToFD (data) {
    const response = await this.fetch('/PushModelToFD', {
      method: 'POST',
      headers: {
        'Content-Type': 'application/json'
      },
      body: JSON.stringify(data)
    });
    const text = await response.text();
    this.context.assert(response.ok, response.status, response.statusText);
    return text;
  }

  async postModelConversionJob (job) {
    const response = await this.fetch('/PostModelConversionJob', {
      method: 'POST',
      headers: {
        'Content-Type': 'application/json'
      },
      body: JSON.stringify(job)
    })
    const text = await response.text()
    this.context.assert(response.ok, response.status, response.statusText);
    return text
  }

  async saveImage (image, token) {
    const saveImageUrl = aiartsUrl + '/saved_imgs/'
    const response = await fetch(saveImageUrl, {
      method: 'POST',
      headers: {
        'Content-Type': 'application/json',
        'Authorization': 'Bearer ' + token
      },
      body: JSON.stringify(image)
    })
    const data = await response.json()
    return data
  }
}

module.exports = Cluster
