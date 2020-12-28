// ****************************************************************************** 
// Copyright     :  Copyright (C) 2018, Hisilicon Technologies Co. Ltd.
// File name     :  sdmam_ch_regs_reg_offset.h
// Department    :  CAD Development Department
// Author        :  xxx
// Version       :  1
// Date          :  2013/3/10
// Description   :  The description of xxx project
// Others        :  Generated automatically by nManager V4.2 
// History       :  xxx 2018/11/19 15:40:05 Create file
// ******************************************************************************

#ifndef __SDMAM_CH_REGS_REG_OFFSET_H__
#define __SDMAM_CH_REGS_REG_OFFSET_H__

/* SDMAM_CH_REGS Base address of Module's Register */
#define SOC_SDMAM_CH_REGS_BASE                       (0x0)

/******************************************************************************/
/*                      SOC SDMAM_CH_REGS Registers' Definitions                            */
/******************************************************************************/

#define SOC_SDMAM_CH_REGS_SDMAM_CH_CTRL_REG        (SOC_SDMAM_CH_REGS_BASE + 0x0)   /* SDMAM_CHL���ƼĴ��� */
#define SOC_SDMAM_CH_REGS_SDMAM_CH_IIDR_REG        (SOC_SDMAM_CH_REGS_BASE + 0x4)   /* SDMAM_CHL�汾�Ĵ��� */
#define SOC_SDMAM_CH_REGS_SDMAM_CH_TYPER_REG       (SOC_SDMAM_CH_REGS_BASE + 0x8)   /* SDMAM_CHL���ԼĴ��� */
#define SOC_SDMAM_CH_REGS_SDMAM_IRQ_STATUS_REG     (SOC_SDMAM_CH_REGS_BASE + 0xC)   /* SDMAM_�ж�״̬�Ĵ��� */
#define SOC_SDMAM_CH_REGS_SDMAM_IRQ_CTRL_REG       (SOC_SDMAM_CH_REGS_BASE + 0x10)  /* SDMAM�жϿ��ƼĴ��� */
#define SOC_SDMAM_CH_REGS_SDMAM_CH_BYPASS_CTRL_REG (SOC_SDMAM_CH_REGS_BASE + 0x14)  /* BYPASS SMMU ģʽ��ͨ���������Կ��ƼĴ��� */
#define SOC_SDMAM_CH_REGS_SDMAM_CH_SQBASER_L_REG   (SOC_SDMAM_CH_REGS_BASE + 0x40)  /* SQ����ַ��32bit���üĴ��� */
#define SOC_SDMAM_CH_REGS_SDMAM_CH_SQBASER_H_REG   (SOC_SDMAM_CH_REGS_BASE + 0x44)  /* SQ����ַ��32bit���üĴ��� */
#define SOC_SDMAM_CH_REGS_SDMAM_CH_SQ_ATTR_REG     (SOC_SDMAM_CH_REGS_BASE + 0x48)  /* SQ���üĴ��� */
#define SOC_SDMAM_CH_REGS_SDMAM_CH_SQTDBR_REG      (SOC_SDMAM_CH_REGS_BASE + 0x4C)  /* SQ����βָ��Ĵ��� */
#define SOC_SDMAM_CH_REGS_SDMAM_CH_SQHDBR_REG      (SOC_SDMAM_CH_REGS_BASE + 0x50)  /* SQ����ͷָ��Ĵ��� */
#define SOC_SDMAM_CH_REGS_SDMAM_CH_CQBASER_L_REG   (SOC_SDMAM_CH_REGS_BASE + 0x80)  /* CQ����ַ��32bit���üĴ��� */
#define SOC_SDMAM_CH_REGS_SDMAM_CH_CQBASER_H_REG   (SOC_SDMAM_CH_REGS_BASE + 0x84)  /* CQ����ַ��32bit���üĴ��� */
#define SOC_SDMAM_CH_REGS_SDMAM_CH_CQ_ATTR_REG     (SOC_SDMAM_CH_REGS_BASE + 0x88)  /* CQ���üĴ��� */
#define SOC_SDMAM_CH_REGS_SDMAM_CH_CQTDBR_REG      (SOC_SDMAM_CH_REGS_BASE + 0x8C)  /* CQ����βָ��Ĵ��� */
#define SOC_SDMAM_CH_REGS_SDMAM_CH_CQHDBR_REG      (SOC_SDMAM_CH_REGS_BASE + 0x90)  /* CQ����ͷָ��Ĵ��� */
#define SOC_SDMAM_CH_REGS_DFX_CTRL0_REG            (SOC_SDMAM_CH_REGS_BASE + 0x400) /* DFX ctrl Register0 */
#define SOC_SDMAM_CH_REGS_DFX_INF0_REG             (SOC_SDMAM_CH_REGS_BASE + 0x404) /* DFX��Ϣ0 */
#define SOC_SDMAM_CH_REGS_DFX_INF1_REG             (SOC_SDMAM_CH_REGS_BASE + 0x408) /* DFX��Ϣ1 */
#define SOC_SDMAM_CH_REGS_DFX_INF2_REG             (SOC_SDMAM_CH_REGS_BASE + 0x40C) /* DFX��Ϣ2 */
#define SOC_SDMAM_CH_REGS_DFX_INF3_REG             (SOC_SDMAM_CH_REGS_BASE + 0x410) /* DFX��Ϣ3 */
#define SOC_SDMAM_CH_REGS_DFX_INF4_REG             (SOC_SDMAM_CH_REGS_BASE + 0x414) /* DFX��Ϣ4 */
#define SOC_SDMAM_CH_REGS_DFX_INF5_REG             (SOC_SDMAM_CH_REGS_BASE + 0x418) /* DFX��Ϣ5 */
#define SOC_SDMAM_CH_REGS_DFX_INF6_REG             (SOC_SDMAM_CH_REGS_BASE + 0x41C) /* DFX��Ϣ6 */
#define SOC_SDMAM_CH_REGS_DFX_INF7_REG             (SOC_SDMAM_CH_REGS_BASE + 0x420) /* DFX��Ϣ7 */
#define SOC_SDMAM_CH_REGS_DFX_EMU_INFO0_REG        (SOC_SDMAM_CH_REGS_BASE + 0x500) /* SDMAM EMU PRESS CNT�Ĵ���0 */
#define SOC_SDMAM_CH_REGS_DFX_EMU_INFO1_REG        (SOC_SDMAM_CH_REGS_BASE + 0x504) /* SDMAM EMU PRESS CNT�Ĵ���1 */
#define SOC_SDMAM_CH_REGS_DFX_EMU_INFO2_REG        (SOC_SDMAM_CH_REGS_BASE + 0x508) /* SDMAM EMU PRESS CNT�Ĵ���2 */
#define SOC_SDMAM_CH_REGS_DFX_EMU_INFO3_REG        (SOC_SDMAM_CH_REGS_BASE + 0x50C) /* SDMAM EMU PRESS CNT�Ĵ���3 */
#define SOC_SDMAM_CH_REGS_DFX_EMU_INFO4_REG        (SOC_SDMAM_CH_REGS_BASE + 0x510) /* SDMAM EMU PRESS CNT�Ĵ���4 */
#define SOC_SDMAM_CH_REGS_DFX_EMU_INFO5_REG        (SOC_SDMAM_CH_REGS_BASE + 0x514) /* SDMAM EMU PRESS CNT�Ĵ���5 */
#define SOC_SDMAM_CH_REGS_DFX_EMU_INFO6_REG        (SOC_SDMAM_CH_REGS_BASE + 0x518) /* SDMAM EMU PRESS CNT�Ĵ���6 */
#define SOC_SDMAM_CH_REGS_DFX_EMU_INFO7_REG        (SOC_SDMAM_CH_REGS_BASE + 0x51C) /* SDMAM EMU PRESS CNT�Ĵ���7 */
#define SOC_SDMAM_CH_REGS_DFX_EMU_INFO8_REG        (SOC_SDMAM_CH_REGS_BASE + 0x520) /* SDMAM EMU PRESS CNT�Ĵ���8 */
#define SOC_SDMAM_CH_REGS_DFX_EMU_INFO9_REG        (SOC_SDMAM_CH_REGS_BASE + 0x524) /* SDMAM EMU PRESS CNT�Ĵ���9 */
#define SOC_SDMAM_CH_REGS_DFX_EMU_INFO10_REG       (SOC_SDMAM_CH_REGS_BASE + 0x528) /* SDMAM EMU PRESS CNT�Ĵ���10 */
#define SOC_SDMAM_CH_REGS_DFX_EMU_INFO11_REG       (SOC_SDMAM_CH_REGS_BASE + 0x52C) /* SDMAM EMU PRESS CNT�Ĵ���11 */
#define SOC_SDMAM_CH_REGS_DFX_EMU_INFO12_REG       (SOC_SDMAM_CH_REGS_BASE + 0x530) /* SDMAM EMU PRESS CNT�Ĵ���12 */
#define SOC_SDMAM_CH_REGS_DFX_EMU_INFO13_REG       (SOC_SDMAM_CH_REGS_BASE + 0x534) /* SDMAM EMU PRESS CNT�Ĵ���13 */
#define SOC_SDMAM_CH_REGS_DFX_EMU_INFO14_REG       (SOC_SDMAM_CH_REGS_BASE + 0x538) /* SDMAM EMU PRESS CNT�Ĵ���14 */
#define SOC_SDMAM_CH_REGS_DFX_EMU_INFO15_REG       (SOC_SDMAM_CH_REGS_BASE + 0x53C) /* SDMAM EMU PRESS CNT�Ĵ���15 */

#endif // __SDMAM_CH_REGS_REG_OFFSET_H__
