// ****************************************************************************** 
// Copyright     :  Copyright (C) 2018, Hisilicon Technologies Co. Ltd.
// File name     :  misc_up_cfg_reg_offset.h
// Project line  :  ICT
// Department    :  ICT Processor Chipset Development Dep
// Author        :huawei
// Version       :  1.0
// Date          :  2018/7/2
// Description   :  The description of CLOUD project
// Others        :  Generated automatically by nManager V4.2 
// History       :huawei 2018/11/09 16:35:42 Create file
// ******************************************************************************

#ifndef __MISC_UP_CFG_REG_OFFSET_H__
#define __MISC_UP_CFG_REG_OFFSET_H__

/* MISC_UP_CFG Base address of Module's Register */
#define SOC_MISC_UP_CFG_BASE                       (0x160000)

/******************************************************************************/
/*                      SOC MISC_UP_CFG Registers' Definitions                            */
/******************************************************************************/

#define SOC_MISC_UP_CFG_SC_PLL7_SEL_REG            (SOC_MISC_UP_CFG_BASE + 0x8)    /* PLL7ѡ�� */
#define SOC_MISC_UP_CFG_SC_PLL7_FCTRL_REG          (SOC_MISC_UP_CFG_BASE + 0x10)   /* SC_PLL7_FCTRLΪCDIE_CRG��PLL7������Ƶ */
#define SOC_MISC_UP_CFG_SC_PLL7_FCTRL_FRAC_REG     (SOC_MISC_UP_CFG_BASE + 0x14)   /* SC_PLL7_FCTRL_FRACΪCDIE_CRG��PLL7С����Ƶ */
#define SOC_MISC_UP_CFG_SC_PLL7_HI_FNPLL_CFG0_REG  (SOC_MISC_UP_CFG_BASE + 0x20)   /* PLL�������üĴ���;��̬�ź� */
#define SOC_MISC_UP_CFG_SC_PLL7_HI_FNPLL_CFG1_REG  (SOC_MISC_UP_CFG_BASE + 0x24)   /* PLL�������üĴ���;��̬�ź� */
#define SOC_MISC_UP_CFG_SC_PLL7_HI_FNPLL_CFG2_REG  (SOC_MISC_UP_CFG_BASE + 0x28)   /* PLL�������üĴ���;��̬�ź� */
#define SOC_MISC_UP_CFG_SC_PLL7_HI_FNPLL_CFG3_REG  (SOC_MISC_UP_CFG_BASE + 0x2C)   /* PLL�������üĴ���;��̬�ź� */
#define SOC_MISC_UP_CFG_SC_PLL7_HI_FNPLL_CFG4_REG  (SOC_MISC_UP_CFG_BASE + 0x30)   /* PLL�������üĴ���;��̬�ź� */
#define SOC_MISC_UP_CFG_SC_PLL7_HI_FNPLL_CFG5_REG  (SOC_MISC_UP_CFG_BASE + 0x34)   /* PLL�������üĴ���;��̬�ź� */
#define SOC_MISC_UP_CFG_SC_PLL7_HI_FNPLL_CFG6_REG  (SOC_MISC_UP_CFG_BASE + 0x38)   /* PLL�������üĴ���;��̬�ź� */
#define SOC_MISC_UP_CFG_SC_PLL7_HI_FNPLL_CFG7_REG  (SOC_MISC_UP_CFG_BASE + 0x3C)   /* PLL�������üĴ���;��̬�ź� */
#define SOC_MISC_UP_CFG_SC_PLL7_HI_FNPLL_CFG8_REG  (SOC_MISC_UP_CFG_BASE + 0x40)   /* PLL�������üĴ���;��̬�ź� */
#define SOC_MISC_UP_CFG_SC_PLL7_HI_FNPLL_CFG9_REG  (SOC_MISC_UP_CFG_BASE + 0x44)   /* PLL�������üĴ���;��̬�ź� */
#define SOC_MISC_UP_CFG_SC_PLL7_HI_FNPLL_CFG10_REG (SOC_MISC_UP_CFG_BASE + 0x48)   /* PLL�������üĴ���;��̬�ź� */
#define SOC_MISC_UP_CFG_SC_PLL7_HI_FCTRL_REG       (SOC_MISC_UP_CFG_BASE + 0x80)   /* SC_PLL7_HI_FCTRLΪCDIE_CRG��PLL7_HI������Ƶ */
#define SOC_MISC_UP_CFG_SC_PLL7_HI_FCTRL_FRAC_REG  (SOC_MISC_UP_CFG_BASE + 0x84)   /* SC_PLL7_HI_FCTRL_FRACΪCDIE_CRG��PLL7_HIС����Ƶ */
#define SOC_MISC_UP_CFG_SC_PLL_CLK_BYPASS0_REG     (SOC_MISC_UP_CFG_BASE + 0xA0)   /* SC_PLL_CLK_BYPASS0ΪCDIE_CRG��PLL��ع���ʱ��ѡ�� */
#define SOC_MISC_UP_CFG_SC_PLL_CLK_BYPASS1_REG     (SOC_MISC_UP_CFG_BASE + 0xA4)   /* SC_PLL_CLK_BYPASS1ΪCDIE_CRG��PLL��ع���ʱ��ѡ�� */
#define SOC_MISC_UP_CFG_SC_HW_AIC_RESET_REQ_REG    (SOC_MISC_UP_CFG_BASE + 0xA00)  /* AIC��λ������ƼĴ��� */
#define SOC_MISC_UP_CFG_SC_HW_AIC_RESET_DREQ_REG   (SOC_MISC_UP_CFG_BASE + 0xA04)  /* AIC��λȥ������ƼĴ��� */
#define SOC_MISC_UP_CFG_SC_PLL_SRC_INT_REG         (SOC_MISC_UP_CFG_BASE + 0x4000) /* PLL�ж�Դ�Ĵ��� */
#define SOC_MISC_UP_CFG_SC_PLL_INT_MASK_REG        (SOC_MISC_UP_CFG_BASE + 0x4004) /* PLL�ж����μĴ��� */
#define SOC_MISC_UP_CFG_SC_PLL_LOCK_STATUS_REG     (SOC_MISC_UP_CFG_BASE + 0x5000) /* PLL����״̬�Ĵ����� */
#define SOC_MISC_UP_CFG_PLL7_HI_FNPLL_STATE0_REG   (SOC_MISC_UP_CFG_BASE + 0x5004) /* PLL���״̬�Ĵ���;��̬�ź� */
#define SOC_MISC_UP_CFG_PLL7_HI_FNPLL_STATE1_REG   (SOC_MISC_UP_CFG_BASE + 0x5008) /* PLL���״̬�Ĵ���;��̬�ź� */
#define SOC_MISC_UP_CFG_SC_HW_AIC_RESET_ST_REG     (SOC_MISC_UP_CFG_BASE + 0x5A00) /* HW_AIC�ĵ�ǰ��λ״̬ */
#define SOC_MISC_UP_CFG_SC_TS_EN_REG               (SOC_MISC_UP_CFG_BASE + 0x6000) /* ʱ���ʹ���ź� */
#define SOC_MISC_UP_CFG_SC_PLL_INT_STATUS_REG      (SOC_MISC_UP_CFG_BASE + 0x8000) /* PLL�ж�״̬�Ĵ��� */
#define SOC_MISC_UP_CFG_SC_SYSCTRL_LOCK_REG        (SOC_MISC_UP_CFG_BASE + 0xF100) /* ϵͳ�����������Ĵ�������ע�⣺1���˼Ĵ����ռ�����ǰ�ȫ���ʲ��ܳɹ��� */
#define SOC_MISC_UP_CFG_SC_SYSCTRL_UNLOCK_REG      (SOC_MISC_UP_CFG_BASE + 0xF110) /* ϵͳ�����������Ĵ�������ע�⣺1���˼Ĵ����ռ�����ǰ�ȫ���ʲ��ܳɹ��� */
#define SOC_MISC_UP_CFG_SC_ECO_RSV0_REG            (SOC_MISC_UP_CFG_BASE + 0xFF00) /* ECO �Ĵ��� */
#define SOC_MISC_UP_CFG_SC_ECO_RSV1_REG            (SOC_MISC_UP_CFG_BASE + 0xFF04) /* ECO �Ĵ���1 */
#define SOC_MISC_UP_CFG_SC_ECO_RSV2_REG            (SOC_MISC_UP_CFG_BASE + 0xFF08) /* ECO �Ĵ���2 */
#define SOC_MISC_UP_CFG_SC_ECO_RSV3_REG            (SOC_MISC_UP_CFG_BASE + 0xFF0C) /* ECO �Ĵ���3 */
#define SOC_MISC_UP_CFG_SC_ECO_RSV4_REG            (SOC_MISC_UP_CFG_BASE + 0xFF10) /* ECO �Ĵ���4 */
#define SOC_MISC_UP_CFG_SC_ECO_RSV5_REG            (SOC_MISC_UP_CFG_BASE + 0xFF14) /* ECO �Ĵ���5 */
#define SOC_MISC_UP_CFG_FPGA_VER_REG               (SOC_MISC_UP_CFG_BASE + 0xFFFC) /* FPGA�汾�Ĵ��� */

#endif // __MISC_UP_CFG_REG_OFFSET_H__
