// ******************************************************************************
// Copyright     :  Copyright (C) 2018, Hisilicon Technologies Co. Ltd.
// File name     :  aic_top_soc_reg_reg_offset.h
// Department    :  CAD Development Department
// Author        :  AIC_TOP_WRAPPER
// Version       :  V110
// Date          :  2013/3/10
// Description   :  The description of Hi1910 project
// Others        :  Generated automatically by nManager V4.2
// History       :  AIC_TOP_WRAPPER 2018/03/20 21:30:01 Create file
// ******************************************************************************

#ifndef __AIC_TOP_SOC_REG_REG_OFFSET_H__
#define __AIC_TOP_SOC_REG_REG_OFFSET_H__

/* AIC_TOP_SOC_REG Base address of Module's Register */
#define SOC_AIC_TOP_SOC_REG_BASE                       (0x0)

/******************************************************************************/
/*                      SOC AIC_TOP_SOC_REG Registers' Definitions                            */
/******************************************************************************/

#define SOC_AIC_TOP_SOC_REG_SC_TSENSOR_ALARM_REG               (SOC_AIC_TOP_SOC_REG_BASE + 0x0)  /* AIC CORE on-die temperature over/under alarm threshold */
#define SOC_AIC_TOP_SOC_REG_SC_TSENSOR_SAMPLE_NUM_REG          (SOC_AIC_TOP_SOC_REG_BASE + 0x4)  /* Ӳ������AIC CORE Tsensor�¶�ֵ��ȡƽ�������üĴ�������ֹ����Ϊ0x0��0x1 */
#define SOC_AIC_TOP_SOC_REG_SC_TSENSOR_CTRL_REG                (SOC_AIC_TOP_SOC_REG_BASE + 0x8)  /* AIC CORE on-die temperature sensor config control Ƭ��AIC CORE�¶ȴ�����Tsensor�����������á� */
#define SOC_AIC_TOP_SOC_REG_SC_TSENSOR_INT_REG                 (SOC_AIC_TOP_SOC_REG_BASE + 0xC)  /* AIC CORE TSENSOR interrupt �ж�Դ�Ĵ��� */
#define SOC_AIC_TOP_SOC_REG_SC_TSENSOR_INT_MASK_REG            (SOC_AIC_TOP_SOC_REG_BASE + 0x10) /* AIC CORE TSENSOR interrupt mask�ж����μĴ��� */
#define SOC_AIC_TOP_SOC_REG_SC_TSENSOR_ST_REG                  (SOC_AIC_TOP_SOC_REG_BASE + 0x14) /* AIC CORE TSENSOR statusϵͳ״̬�Ĵ����� */
#define SOC_AIC_TOP_SOC_REG_SC_TSENSOR_TEMP_SAMPLE_AVERAGE_REG (SOC_AIC_TOP_SOC_REG_BASE + 0x18) /* AIC CORE TSENSOR temperature sample output �¶Ȳ���ֵ */
#define SOC_AIC_TOP_SOC_REG_SC_TSENSOR_INT_STATUS_REG          (SOC_AIC_TOP_SOC_REG_BASE + 0x1C) /* AIC CORE TSENSOR�ж�״̬�Ĵ��� */
#define SOC_AIC_TOP_SOC_REG_SC_TSENSOR_ULTRAOVER_ALARM_REG     (SOC_AIC_TOP_SOC_REG_BASE + 0x20) /* AIC CORE on-die temperature ultraover alarm threshold */
#define SOC_AIC_TOP_SOC_REG_HPM_CTRL_REG                       (SOC_AIC_TOP_SOC_REG_BASE + 0x24) /* HPM Control */
#define SOC_AIC_TOP_SOC_REG_HPM_STATUS_REG                     (SOC_AIC_TOP_SOC_REG_BASE + 0x28) /* HPM status */
#define SOC_AIC_TOP_SOC_REG_CPM_CFG0_REG                       (SOC_AIC_TOP_SOC_REG_BASE + 0x2C) /* AIC CORE CPM config Control  register 0 */
#define SOC_AIC_TOP_SOC_REG_CPM_CFG1_REG                       (SOC_AIC_TOP_SOC_REG_BASE + 0x30) /* AIC CORE CPM config control register 1 */
#define SOC_AIC_TOP_SOC_REG_CPM_CFG2_REG                       (SOC_AIC_TOP_SOC_REG_BASE + 0x34) /* AIC CORE CPM CPM config control register 2 */
#define SOC_AIC_TOP_SOC_REG_CPM_ST_REG                         (SOC_AIC_TOP_SOC_REG_BASE + 0x38) /* AIC CORE CPM status register״̬�Ĵ��� */
#define SOC_AIC_TOP_SOC_REG_SRST_REQ_HW_AIC_REG                (SOC_AIC_TOP_SOC_REG_BASE + 0x3C) /* AIC CORE ��λ������ƼĴ��� */
#define SOC_AIC_TOP_SOC_REG_SC_AIC_CLK_EN_REG                  (SOC_AIC_TOP_SOC_REG_BASE + 0x40) /* AIC CORE ȫ��ʱ���ſ����üĴ��� */
#define SOC_AIC_TOP_SOC_REG_SC_RESERVD_REG0_REG                (SOC_AIC_TOP_SOC_REG_BASE + 0x44) /* Ԥ���Ĵ��� */
#define SOC_AIC_TOP_SOC_REG_SC_RESERVD_REG1_REG                (SOC_AIC_TOP_SOC_REG_BASE + 0x48) /* Ԥ���Ĵ��� */
#define SOC_AIC_TOP_SOC_REG_SC_AIC_ISO_REG                     (SOC_AIC_TOP_SOC_REG_BASE + 0x6c) /* Ԥ���Ĵ��� */
#define SOC_AIC_TOP_SOC_REG_SC_SYSCNT_PHASE_SEL_REG            (SOC_AIC_TOP_SOC_REG_BASE + 0x74) /* Ԥ���Ĵ��� */

#endif // __AIC_TOP_SOC_REG_REG_OFFSET_H__
