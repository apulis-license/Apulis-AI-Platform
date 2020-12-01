/*******************************************************************************
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Description:
 * Author: huawei 
 * Create: 2019-10-15
 *                     ALL RIGHTS RESERVED
 *******************************************************************************/

/* * @defgroup Ӧ�ó���������ؽӿ�ģ��
 *  @brief   �ṩӦ��������ؽӿ�
 *  @author
 *  @version 1.0
 *  @date    2019/06/14
 *
 *
 *  ģ��˵��:
 *
 *  ��ģ��������Ӧ�ó���������ؽӿ�.
 *
 *
 */

#ifndef _APPMON_LIB_H_
#define _APPMON_LIB_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/**
 *  �����ļ�ؽ����뱻��ؽ���ͨ��ʹ�õ��ļ����������˽�м�ؽ��̣�����ʹ������ĺ궨��
 *  APPMON_SERVER_PATH ���ڽ��̼�ͨ��
 */
#define APPMON_SERVER_PATH "/var/driver/appmon.socket"

/**
 *  �������Ϣ�ṹ��
 */
typedef struct server_info_s {
    /**
     *  �ڲ�ά����Ϣ����Ҫ����ע����Ϣ�����̼�ͨ�����õȡ������û����š�
     */
    void *info;
} server_info_t;

/**
 *  �ͻ�����Ϣ�ṹ��
 */
typedef struct client_info_s {
    /**
     *  �ڲ�ά����Ϣ����Ҫ����ע����Ϣ�����̼�ͨ�����õȡ������û����š�
     */
    void *info;
} client_info_t;

/* * ��ؽ��������ӿ�
 *
 *  ������ؽ��̣�����server����ʼ��������ؽ������Ӳ�������ؽ��̷��͵���������
 *
 *  @param[in] serv_addr ͨ�ž��
 *  @param[out] srvr ��ʼ����ķ����
 *
 *  @return ::0  ִ�гɹ�
 *  @return ::errno ִ��ʧ��,����perror����
 *
 *  @attention  ��
 */
int appmon_start(server_info_t *srvr, const char *pid_file, const char *serv_addr);

/* * ��ؽ����˳��ӿ�
 *
 *  �˳���ؽ��̣��ر�server��ֹͣ�Ը����̽��м��
 *
 *  @param[in] srvr ����˵�ַ
 *
 *  @return ::0  ִ�гɹ�
 *  @return ::errno ִ��ʧ��,����perror����
 *
 *  @attention  ��
 */
int appmon_stop(server_info_t *srvr);

/* * Ӧ�ó���ͻ��˳�ʼ��
 *
 *  Ӧ�ó����ʼ���������Դ���뼰���̼�ͨ�Žӿڳ�ʼ��
 *
 *  @param[in] serv_addr ����˵�ַ
 *  @param[out] clnt ��ʼ����Ŀͻ���
 *
 *  @return ::0  ִ�гɹ�  < 0 ����ʧ��  >  server�Ѿ�����
 *  @return ::errno ִ��ʧ��,����perror����
 *
 *  @attention  ��
 */
int appmon_client_init(client_info_t *clnt, const char *serv_addr);

/* * Ӧ�ó���ͻ����˳�
 *
 *  Ӧ�ó���ͻ����˳���ͬʱ��ʼ��ʱ�������Դ���ͷţ�app monitor���ٶԸ�app���м��
 *
 *  @param[in] clnt ��ʼ�����Ŀͻ�����Ϣ�ṹ��ָ��
 *  @param[out] ��
 *
 *  @return :: ��
 *
 *  @attention  ��
 */
void appmon_client_exit(client_info_t *clnt);

/* * Ӧ�ó���ע��
 *
 *  Ӧ�ó���ע�ᣬapp monitor��ʼ�Ը�app���м��
 *
 *  @param[in] clnt                 ��ʼ�����Ŀͻ�����Ϣ�ṹ��ָ��
 *  @param[in] timeout              ������ʱʱ�䣬��λ: ����
 *  @param[in] timeout_action       ������ʱ��ִ�еĽű��ľ���·���ַ���\n
                                    �ű�����ʱ�����pid��Ϊ��������: timeout_action pid
 *  @param[out] ��
 *
 *  @return ::0  ִ�гɹ�
 *  @return ::errno ִ��ʧ��,����perror����
 *
 *  @attention  �ű�·���ַ������Ȳ��ܳ���255���ַ�
 */
int appmon_client_register(client_info_t *clnt, unsigned long timeout, const char *timeout_action);

/* * Ӧ�ó���ע��
 *
 *  Ӧ�ó���ע����app monitor���ٶԸ�app���м��
 *
 *  @param[in] clnt     ��ʼ�����Ŀͻ�����Ϣ�ṹ��ָ��
 *  @param[in] reason   ע��ԭ���ַ�����������־��¼������¼127���ַ�������Ϊ��
 *  @param[out] ��
 *
 *  @return ::0  ִ�гɹ�
 *  @return ::errno ִ��ʧ��,����perror����
 *
 *  @attention  ��
 */
int appmon_client_deregister(client_info_t *clnt, const char *reason);

/* * Ӧ�ó���ͻ����������ͺ���
 *
 *  Ӧ�ó���ͻ����������ͺ���������ά����app monitor�������
 *
 *  @param[in] clnt ��ʼ�����Ŀͻ�����Ϣ�ṹ��ָ��
 *  @param[out] ��
 *
 *  @return ::0  ִ�гɹ�
 *  @return ::errno ִ��ʧ��,����perror����
 *
 *  @attention  ��
 */
int appmon_client_heartbeat(client_info_t *clnt);

/* * Ӧ�ó���������������
 *
 *  Ӧ�ó���������������������app monitor����ִ��timeout_action�ű�
 *
 *  @param[in] clnt     	��ʼ�����Ŀͻ�����Ϣ�ṹ��ָ��
 *  @param[in] last_words	�������ԣ�������־��¼������¼127���ַ�������Ϊ��
 *  @param[out] ��
 *
 *  @return ::0  ִ�гɹ�
 *  @return ::errno ִ��ʧ��,����perror����
 *
 *  @attention  ��
 */
int appmon_client_declare_death(client_info_t *clnt, const char *last_words);

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif
