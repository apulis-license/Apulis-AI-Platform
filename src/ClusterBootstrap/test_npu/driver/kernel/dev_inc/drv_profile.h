/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Description: This file contains drv_profile Info.
 * Author: huawei
 * Create: 2017-10-15
 */

#ifndef _DRV_PROFILE_H_
#define _DRV_PROFILE_H_

#define SAMPLE_MASK 0x01
#define SAMPLE_ONLY_DATA 0x0
#define SAMPLE_WITH_HEADER 0x1

#define SAMPLE_NAME_MAX 16

/* prof_sample_register : ����ע�ắ��
 * int (*sample_fun)(void *arg, void *buf, int len, int flag) : ע��Ļص�����
 * 		     arg : ��ģ���Լ��Ĳ���
 * 		     buf : ���ñ���buffer
 * 		     len : ���ñ���buffer����
 *		     flag: ��ʶ��
 *		     		flag.bit0 = 1 : ���Ͳ���"header"+��������
 *		  		flag.bit0 = 0 : ֻ���Ͳ�������
 *		  return : >=0 : д��buffer�����ݳ���, <0 : �쳣
 * arg : ���ظ��ص�������ָ��
 * channel : enum prof_cmd_type ����
 * return : 0 : ע��ɹ�, ��0 : �쳣
 */
int prof_sample_register(int (*sample_fun)(void *, void *, int, int), void *arg, int channel);

/* prof_sample_unregister : ����ȥע�ắ��
 * int (*sample_fun)(void *arg, void *buf, int len) : ע��Ļص�����
 * channel : enum prof_cmd_type ����
 * return : 0 : ȥע��ɹ�, ��0 : �쳣
 */
int prof_sample_unregister(int (*sample_fun)(void *, void *, int, int), int channel);

#endif /* _DRV_PROFILE_H_ */
