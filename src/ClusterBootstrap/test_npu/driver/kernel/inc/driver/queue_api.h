/*********************************************************************************
 * Copyright (c) Huawei Technologies Co., Ltd. 2017-2020. All rights reserved.
 * Description: Api interface of queue
 * Author: huawei
 * Create: 2020-01-16
 *********************************************************************************/

#ifndef QUEUE_API_H
#define QUEUE_API_H

#ifdef __cplusplus
extern "C" {
#endif

#define DRV_ERROR_QUEUE_NONE                  0
#define DRV_ERROR_QUEUE_INNER_ERROR          -1
#define DRV_ERROR_QUEUE_PARA_ERROR           -2
#define DRV_ERROR_QUEUE_OUT_OF_MEM           -3
#define DRV_ERROR_QUEUE_EMPTY                -4
#define DRV_ERROR_QUEUE_NOT_EMPTY            -5
#define DRV_ERROR_QUEUE_NOT_INIT             -6
#define DRV_ERROR_QUEUE_FULL                 -7
#define DRV_ERROR_QUEUE_OUT_OF_SIZE          -8
#define DRV_ERROR_QUEUE_REPEEATED_INIT       -9
#define DRV_ERROR_QUEUE_IOCTL_FAIL           -10
#define DRV_ERROR_QUEUE_NOT_CREATED          -11
#define DRV_ERROR_QUEUE_RE_SUBSCRIBED        -12
#define DRV_ERROR_QUEUE_NO_SUBSCIBED         -13

#define MAX_STR_LEN        128   /* ��������֧�ֵ���󳤶� */
#define RESERVE_LEN 8

typedef enum queue_status {
    QUEUE_NORMAL = 0,      /* �������� */
    QUEUE_EMPTY,           /* ���п� */
    QUEUE_FULL,            /* ������ */
}QUEUE_STATUS;

typedef enum queue_work_mode {
    QUEUE_MODE_PUSH = 1, /* ��group�ۺϷ����¼� */
    QUEUE_MODE_PULL,       /* ������queue�ۺϷ����¼� */
}QUEUE_WORK_MODE;

typedef enum queue_type {
    QUEUE_TYPE_GROUP = 1, /* ��group�ۺϷ����¼� */
    QUEUE_TYPE_SINGLE,       /* ������queue�ۺϷ����¼� */
}QUEUE_TYPE;

typedef struct {
    unsigned long long enqueCnt; /* ���ͳ�� */
    unsigned long long dequeCnt; /* ����ͳ�� */
    unsigned long long enqueFailCnt; /* ���ʧ��ͳ�� */
    unsigned long long dequeFailCnt; /* ����ʧ��ͳ�� */
    unsigned long long enqueEventOk; /* ����¼������ɹ�ͳ�� */
    unsigned long long enqueEventFail; /* ����¼�����ʧ��ͳ�� */
    unsigned long long f2nfEventOk; /* ���������¼������ɹ�ͳ�� */
    unsigned long long f2nfEventFail; /* ���������¼�����ʧ��ͳ�� */
    struct timeval lastEnqueTime; /* ���һ�����ʱ�� */
    struct timeval lastDequeTime; /* ���һ�γ���ʱ�� */
    int reserve[RESERVE_LEN]; /* Ԥ���ֶ� */
}QueueStat;

typedef struct {
    int id; /* ��ѯ�Ķ���id */
    char name[MAX_STR_LEN]; /* �������� */
    int size; /* ����ʵ�ʴ�С */
    int depth; /* ������� */
    int status; /* ����״̬�������������� */
    int workMode; /* ���й���ģʽ���μ�QUEUE_WORK_MODE ���� */
    int type; /* �������ͣ��μ�QUEUE_TYPE���� */
    int subGroupId; /* ��������¼�group id */
    int subPid; /* ��������¼�pid */
    int subF2NFGroupId; /* �������������¼�group id */
    int subF2NFPid; /* �������������¼�pid */
    void* headDataPtr; /* ����ͷָ�룬������пգ���ָ��Ϊ�� */
    int reserve[RESERVE_LEN]; /* Ԥ���ֶ� */
    QueueStat stat; /* ����ͳ�� */
}QueueInfo;


/***********************************************************************************************************
�������ܣ���ʼ��������������Ĺ����ڴ棬ҵ����̳�ʼ��ʱ���ã�ÿ������֧�ֳ�ʼ��һ�Ρ������ڴ��������ں����
���˵����
devid: �豸id
zone���豸�ڷ�����Ϣ
maxSize ���֧�ֵĶ��и����������û������ļ���ȡ��Ĭ��8k
���������
queueManage�����й���ṹ��ַ
************************************************************************************************************/
int BuffQueueInit(unsigned int devid, unsigned int zone, unsigned int maxSize);

/************************************************************************************
�������ܣ���������
���˵����
devid: �豸id��dc����Ԥ��������mdc�����̶���0
zone: ����id
name: ������������,����Ϊkey������Ϊ�գ�����ͬ����������ͬ����󳤶�֧��128�ֽڣ�
depth: �������Ķ������
���������
qid�����д����ɹ����صĶ���id
************************************************************************************/
int CreateBuffQueue(unsigned int devid, unsigned int zone, const char *name, int depth, unsigned int *qid);

/************************************************************************************
�������ܣ����ٶ���
���˵����
devid���豸id��dc����Ԥ��������mdc�����̶���0
qid: �����ٵĶ���id
************************************************************************************/
int DestroyBuffQueue(unsigned int devId, unsigned int qid);

/***********************************************************************************
�������ܣ�buff�������
���˵����
devid���豸id��dc����Ԥ��������mdc�����̶���0
qid: ����id
mbuf������ӵ�mbuffָ�룬���ϲ����������
************************************************************************************/
int EnBuffQueue(unsigned int devId, unsigned int qid, void *mbuf);

/***********************************************************************************
�������ܣ�buff�������
���˵����
devid���豸id��dc����Ԥ��������mdc�����̶���0
qid: ����id
����˵����
buff�����ӷ��ص�mbuffָ�룬�ɵ������ͷ�
***********************************************************************************/
int DeBuffQueue(unsigned int devId, unsigned int qid, void **mbuf);

/**********************************************************************************
�������ܣ����������ߵ��ã�����buff���У�����Ϣ���ʱ��֪ͨ���������߳���
devid���豸id��dc����Ԥ��������mdc�����̶���0
qid: �����ĵĶ���id
groupid�����̵ķ���id
type:��ʾ���еİ󶨷�ʽ��֧��group��single���ַ�ʽ���μ�QUEUE_TYPE����
***********************************************************************************/
int SubscribeBuffQueue(unsigned int devid, unsigned int qid, unsigned int groupId, int type);

/***********************************************************************************
�������ܣ�ȡ������buff����
devid���豸id��dc����Ԥ��������mdc�����̶���0
qid: �����ĵĶ���id
***********************************************************************************/
int UnsubscribeBuffQueue(unsigned int devid, unsigned int qid);

/***********************************************************************************************************
�������ܣ����������ߵ��ã����Ķ������������¼������ڶ�����������֪ͨ���������߼�������
devid���豸id��dc����Ԥ��������mdc�����̶���0
qid: �����ĵĶ���id
groupid�����̵ķ���id
***********************************************************************************************************/
int SubQueueF2NFEvent(unsigned int devid, unsigned int qid, unsigned int groupid);

/***********************************************************************************************************

�������ܣ����������ߵ��ã����Ķ������������¼������ڶ�����������֪ͨ���������߼�������
devid���豸id��dc����Ԥ��������mdc�����̶���0
qid: �����ĵĶ���id
groupid�����̵ķ���id
***********************************************************************************************************/
int UnsubQueueF2NFEvent(unsigned int devid, unsigned int qid);

/***********************************************************************************************************
�������ܣ����ö��й���ģʽ��
devid: �豸id
qid: ����id
groupid�����̵ķ���id
mode������ģʽ��֧������pull��push 2�ַ�ʽ��������ʱ��Ĭ��Ϊpush������pushģʽʱ��������Ҫ��������¼���
      ����Ϊpull��ʽʱ��������Ҫ���Ķ��пյ��ǿ��¼�
************************************************************************************************************/
int SetQueueWorkMode(unsigned int devid, unsigned int qid, int mode);

/***********************************************************************************************************
�������ܣ���ѯ����״̬
devid: �豸id
qid: ����id
status������ֵ�����е�״̬��Ϣ����������״̬��normal��full��empty���μ�QUEUE_STATUS����
************************************************************************************************************/
int GetQueueStatus(unsigned int devid, unsigned int qid, int *status);

/***********************************************************************************
�������ܣ���ȡ����״̬��Ϣ
���˵����
devid���豸id��dc����Ԥ��������mdc�����̶���0
qid: ����id
����˵����
queInfo: ������Ϣ
***********************************************************************************/
int QueryBuffQueueInfo(unsigned int devid, unsigned int qid, QueueInfo *queInfo);

/***********************************************************************************************************
�������ܣ����ݶ������ƻ�ȡ����id�����ڽ��������ȳ�����������Ľ��̸������ƣ������Ѿ������Ķ���
devid: �豸id
qid: ����id
status������ֵ�����е�״̬��Ϣ����������״̬��normal��full��empty���μ�QUEUE_STATUS����
ʹ��˵��������ж��name��ͬ�Ķ��У������ҵ��ĵ�һ��name��ͬ��qid
************************************************************************************************************/
int GetQidbyName(unsigned int devid, unsigned int zone, const char *name, unsigned int *qid);

/***********************************************************************************************************
�������ܣ���ȡ�������
devid: �豸id
qid: ����id
depth������ֵ�����ض��е������Ϣ
************************************************************************************************************/
int halGetQueueDepth(unsigned int devid, unsigned int qid, unsigned int *depth);

#ifdef __cplusplus
}
#endif

#endif
