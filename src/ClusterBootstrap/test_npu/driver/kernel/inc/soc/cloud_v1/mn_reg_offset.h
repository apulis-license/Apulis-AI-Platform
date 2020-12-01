// ****************************************************************************** 
// Copyright     :  Copyright (C) 2018, Hisilicon Technologies Co. Ltd.
// File name     :  mn_reg_offset.h
// Project line  :  
// Department    :  
// Author        :  �ź㳬
// Version       :  1.0
// Date          :  2012/9/20
// Description   :  ��Ŀ������Ϣ
// Others        :  Generated automatically by nManager V4.2 
// History       :  �ź㳬 2018/03/23 15:54:59 Create file
// ******************************************************************************

#ifndef __MN_REG_OFFSET_H__
#define __MN_REG_OFFSET_H__

/* MN Base address of Module's Register */
#define SOC_MN_BASE                       (0x33000)

/******************************************************************************/
/*                      SOC MN Registers' Definitions                            */
/******************************************************************************/

#define SOC_MN_MN_EOBAR_CFG_TARGET_H_REG   (SOC_MN_BASE + 0x0)  /* eobarrier target id ���üĴ�����λ���� */
#define SOC_MN_MN_EOBAR_CFG_TARGET_L_REG   (SOC_MN_BASE + 0x4)  /* eobarrier target id ���üĴ�����λ���� */
#define SOC_MN_MN_ECBAR_CFG_TARGET_H_REG   (SOC_MN_BASE + 0x8)  /* ecbarrier target id ���üĴ�����λ���� */
#define SOC_MN_MN_ECBAR_CFG_TARGET_L_REG   (SOC_MN_BASE + 0xC)  /* ecbarrier target id ���üĴ�����λ���� */
#define SOC_MN_MN_DVMSNP_CFG_TARGET_H_REG  (SOC_MN_BASE + 0x10) /* dvmop ����snp��target id ���üĴ�����λ���� */
#define SOC_MN_MN_DVMSNP_CFG_TARGET_L_REG  (SOC_MN_BASE + 0x14) /* dvmop ����snp��target id ���üĴ�����λ���� */
#define SOC_MN_MN_DVMREQ_CFG_TARGET_H_REG  (SOC_MN_BASE + 0x18) /* dvmop ����req��target id ���üĴ�����λ���� */
#define SOC_MN_MN_DVMREQ_CFG_TARGET_L_REG  (SOC_MN_BASE + 0x1C) /* dvmop ����req��target id ���üĴ�����λ���� */
#define SOC_MN_MN_SPECIAL_ID0_REG          (SOC_MN_BASE + 0x20) /* MN ID���üĴ��� */
#define SOC_MN_MN_SPECIAL_ID1_REG          (SOC_MN_BASE + 0x24) /* PA ID���üĴ��� */
#define SOC_MN_MN_DYNAMIC_CTRL_REG         (SOC_MN_BASE + 0x28) /* MN_DYNAMIC_CTRLΪMN�Ķ�̬���ÿ��ƼĴ����� */
#define SOC_MN_MN_EVENT_CNT0_REG           (SOC_MN_BASE + 0x30) /* MN_EVENT_CNT0Ϊ�¼�ͳ�ƼĴ���0�� */
#define SOC_MN_MN_EVENT_CNT1_REG           (SOC_MN_BASE + 0x34) /* MN_EVENT_CNT1Ϊ�¼�ͳ�ƼĴ���1�� */
#define SOC_MN_MN_EVENT_CNT2_REG           (SOC_MN_BASE + 0x38) /* MN_EVENT_CNT2Ϊ�¼�ͳ�ƼĴ���2�� */
#define SOC_MN_MN_EVENT_CNT3_REG           (SOC_MN_BASE + 0x3C) /* MN_EVENT_CNT3Ϊ�¼�ͳ�ƼĴ���3�� */
#define SOC_MN_MN_EVENT_CTRL_REG           (SOC_MN_BASE + 0x40) /* MN_EVENT_CTRLΪMN���¼�ͳ�ƿ��ƼĴ����� */
#define SOC_MN_MN_EVENT_TYPE_REG           (SOC_MN_BASE + 0x48) /* MN_EVENT_TYPEΪMN���¼�ͳ�����ͼĴ����� */
#define SOC_MN_MN_INTM_REG                 (SOC_MN_BASE + 0x60) /* MN_RINTΪMN���ж����μĴ����� */
#define SOC_MN_MN_RINT_REG                 (SOC_MN_BASE + 0x64) /* MN_RINTΪMN��ԭʼ�ж�״̬�Ĵ����� */
#define SOC_MN_MN_INTS_REG                 (SOC_MN_BASE + 0x68) /* MN_INTSΪMN�����κ���ж�״̬�Ĵ����� */
#define SOC_MN_MN_INTC_REG                 (SOC_MN_BASE + 0x6C) /* MN_INTCΪMN���ж�����Ĵ����� */
#define SOC_MN_MN_RESPERR_CFG_TARGET_H_REG (SOC_MN_BASE + 0x80) /* respeer ���� id ���üĴ�����λ���� */
#define SOC_MN_MN_RESPERR_CFG_TARGET_L_REG (SOC_MN_BASE + 0x84) /* resperr ���� id ���üĴ�����λ���� */
#define SOC_MN_MN_LEFT_REQ_CTRL_REG        (SOC_MN_BASE + 0xA0) /* MN_LEFT_REQ_CTRLΪMN�Ķ�buffer��Ϣ������ʹ�ܡ� */
#define SOC_MN_MN_LEFT_REQ_STAT_REG        (SOC_MN_BASE + 0xA4) /* MN_LEFT_REQ_STATΪMN����ѡbuffer��״̬�Ĵ����� */
#define SOC_MN_MN_LEFT_REQ_INFO_REG        (SOC_MN_BASE + 0xA8) /* MN_LEFT_REQ_INFOΪMN��ѡbuffer����Ϣ��¼�� */
#define SOC_MN_MN_LEFT_REQ_TARGET_H_REG    (SOC_MN_BASE + 0xB0) /* û��������Ӧ��id �ĸ�λ���� */
#define SOC_MN_MN_LEFT_REQ_TARGET_L_REG    (SOC_MN_BASE + 0xB4) /* û��������Ӧ��id �ĵ�λ���� */
#define SOC_MN_MN_LEFT_SNP_TARGET_H_REG    (SOC_MN_BASE + 0xB8) /* û��snoop��Ӧ��id �ĸ�λ���� */
#define SOC_MN_MN_LEFT_SNP_TARGET_L_REG    (SOC_MN_BASE + 0xBC) /* û��snoop��Ӧ��id �ĵ�λ���� */
#define SOC_MN_MN_DEFAULT_FIRST_INFO0_REG  (SOC_MN_BASE + 0xC0) /* MN_DEFAULT_FIRST_INFO0ΪMN�ĵ�һ��default�������Ϣ��¼�� */
#define SOC_MN_MN_DEFAULT_FIRST_INFO1_REG  (SOC_MN_BASE + 0xC4) /* MN_DEFAULT_FIRST_INFO1ΪMN�ĵ�һ��default�������Ϣ��¼�� */
#define SOC_MN_MN_DEFAULT_FIRST_INFO2_REG  (SOC_MN_BASE + 0xC8) /* MN_DEFAULT_FIRST_INFO2ΪMN�ĵ�һ��default�������Ϣ��¼�� */
#define SOC_MN_MN_DEFAULT_LAST_INFO0_REG   (SOC_MN_BASE + 0xD0) /* MN_DEFAULT_LAST_INFO0ΪMN�����һ��default�������Ϣ��¼�� */
#define SOC_MN_MN_DEFAULT_LAST_INFO1_REG   (SOC_MN_BASE + 0xD4) /* MN_DEFAULT_LAST_INFO1ΪMN�����һ��default�������Ϣ��¼�� */
#define SOC_MN_MN_DEFAULT_LAST_INFO2_REG   (SOC_MN_BASE + 0xD8) /* MN_DEFAULT_LAST_INFO2ΪMN�����һ��default�������Ϣ��¼�� */
#define SOC_MN_MN_STATUS_REG               (SOC_MN_BASE + 0xE0) /* MN_STATUSΪMN��״̬�Ĵ����� */

#endif // __MN_REG_OFFSET_H__
