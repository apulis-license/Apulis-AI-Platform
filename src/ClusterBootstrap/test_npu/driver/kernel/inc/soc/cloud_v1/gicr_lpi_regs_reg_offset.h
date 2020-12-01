// ****************************************************************************** 
// Copyright     :  Copyright (C) 2018, Hisilicon Technologies Co. Ltd.
// File name     :  gicr_lpi_regs_reg_offset.h
// Department    :  CAD Development Department
// Author        :  xxx
// Version       :  1
// Date          :  2013/3/10
// Description   :  The description of xxx project
// Others        :  Generated automatically by nManager V4.2 
// History       :  xxx 2018/07/18 20:25:42 Create file
// ******************************************************************************

#ifndef __GICR_LPI_REGS_REG_OFFSET_H__
#define __GICR_LPI_REGS_REG_OFFSET_H__

/* GICR_LPI_REGS Base address of Module's Register */
//#define xxx_GICR_LPI_REGS_BASE                       (0x40000000)
#define xxx_GICR_LPI_REGS_BASE                       (0x00000000)

/******************************************************************************/
/*                      xxx GICR_LPI_REGS Registers' Definitions                            */
/******************************************************************************/

#define xxx_GICR_LPI_REGS_GICR_CTLR_REG        (xxx_GICR_LPI_REGS_BASE + 0x0)    /* Re-Distributor�Ŀ��ƼĴ��� */
#define xxx_GICR_LPI_REGS_GICR_IIDR_REG        (xxx_GICR_LPI_REGS_BASE + 0x4)    /* GIC��ݼĴ��� */
#define xxx_GICR_LPI_REGS_GICR_TYPER_L_REG     (xxx_GICR_LPI_REGS_BASE + 0x8)    /* GICR������Ϣ�Ĵ���[31:0] */
#define xxx_GICR_LPI_REGS_GICR_TYPER_H_REG     (xxx_GICR_LPI_REGS_BASE + 0xC)    /* GICR������Ϣ�Ĵ���[63:32] */
#define xxx_GICR_LPI_REGS_GICR_STATUSR_REG     (xxx_GICR_LPI_REGS_BASE + 0x10)   /* GICR�쳣����״̬�Ĵ��� */
#define xxx_GICR_LPI_REGS_GICR_WAKER_REG       (xxx_GICR_LPI_REGS_BASE + 0x14)   /* GICR�Ļ��ѼĴ��� */
#define xxx_GICR_LPI_REGS_GICR_SETLPIR_L_REG   (xxx_GICR_LPI_REGS_BASE + 0x40)   /* ����LPI�Ĵ���[31:0] */
#define xxx_GICR_LPI_REGS_GICR_SETLPIR_H_REG   (xxx_GICR_LPI_REGS_BASE + 0x44)   /* ����LPI�Ĵ���[63:32] */
#define xxx_GICR_LPI_REGS_GICR_CLRLPIRR_L_REG  (xxx_GICR_LPI_REGS_BASE + 0x48)   /* ���LPI�Ĵ���[31:0] */
#define xxx_GICR_LPI_REGS_GICR_CLRLPIR_H_REG   (xxx_GICR_LPI_REGS_BASE + 0x4C)   /* ���LPI�Ĵ���[63:32] */
#define xxx_GICR_LPI_REGS_GICR_PROPBASER_L_REG (xxx_GICR_LPI_REGS_BASE + 0x70)   /* LPIs������Ϣ�����ַ�Ĵ���[31:0] */
#define xxx_GICR_LPI_REGS_GICR_PROPBASER_H_REG (xxx_GICR_LPI_REGS_BASE + 0x74)   /* LPIs������Ϣ�����ַ�Ĵ���[63:32] */
#define xxx_GICR_LPI_REGS_GICR_PENDBASER_L_REG (xxx_GICR_LPI_REGS_BASE + 0x78)   /* LPIs״̬��Ϣ�����ַ�Ĵ���[31:0] */
#define xxx_GICR_LPI_REGS_GICR_PENDBASER_H_REG (xxx_GICR_LPI_REGS_BASE + 0x7C)   /* LPIs״̬��Ϣ�����ַ�Ĵ���[63:32] */
#define xxx_GICR_LPI_REGS_GICR_INVR_L_REG      (xxx_GICR_LPI_REGS_BASE + 0xA0)   /* ��Ч����LPI�Ĵ���[31:0] */
#define xxx_GICR_LPI_REGS_GICR_INVR_H_REG      (xxx_GICR_LPI_REGS_BASE + 0xA4)   /* ��Ч����LPI�Ĵ���[63:32] */
#define xxx_GICR_LPI_REGS_GICR_INVALLR_L_REG   (xxx_GICR_LPI_REGS_BASE + 0xB0)   /* ��Ч����LPI�Ĵ���[31:0] */
#define xxx_GICR_LPI_REGS_GICR_INVALLR_H_REG   (xxx_GICR_LPI_REGS_BASE + 0xB4)   /* ��Ч����LPI�Ĵ���[63:32] */
#define xxx_GICR_LPI_REGS_GICR_SYNCR_REG       (xxx_GICR_LPI_REGS_BASE + 0xC0)   /* LPIsͬ���Ĵ��� */
#define xxx_GICR_LPI_REGS_GICR_MOVLPIR_L_REG   (xxx_GICR_LPI_REGS_BASE + 0x100)  /* ת�Ƶ���LPI�Ĵ���[31:0] */
#define xxx_GICR_LPI_REGS_GICR_MOVLPIR_H_REG   (xxx_GICR_LPI_REGS_BASE + 0x104)  /* ת�Ƶ���LPI�Ĵ���[63:32] */
#define xxx_GICR_LPI_REGS_GICR_MOVALLR_L_REG   (xxx_GICR_LPI_REGS_BASE + 0x110)  /* ת������LPI�Ĵ���[31:0] */
#define xxx_GICR_LPI_REGS_GICR_MOVALLR_H_REG   (xxx_GICR_LPI_REGS_BASE + 0x114)  /* ת������LPI�Ĵ���[63:32] */
#define xxx_GICR_LPI_REGS_GICR_CIDR0_REG       (xxx_GICR_LPI_REGS_BASE + 0xFFF0) /* Component ID0 */
#define xxx_GICR_LPI_REGS_GICR_CIDR1_REG       (xxx_GICR_LPI_REGS_BASE + 0xFFF4) /* Component ID1 */
#define xxx_GICR_LPI_REGS_GICR_CIDR2_REG       (xxx_GICR_LPI_REGS_BASE + 0xFFF8) /* Component ID2 */
#define xxx_GICR_LPI_REGS_GICR_CIDR3_REG       (xxx_GICR_LPI_REGS_BASE + 0xFFFC) /* Component ID3 */
#define xxx_GICR_LPI_REGS_GICR_PIDR0_REG       (xxx_GICR_LPI_REGS_BASE + 0xFFE0) /* GICR_PIDR0 */
#define xxx_GICR_LPI_REGS_GICR_PIDR1_REG       (xxx_GICR_LPI_REGS_BASE + 0xFFE4) /* GICR_PIDR1 */
#define xxx_GICR_LPI_REGS_GICR_PIDR2_REG       (xxx_GICR_LPI_REGS_BASE + 0xFFE8) /* GICR_PIDR2 */
#define xxx_GICR_LPI_REGS_GICR_PIDR3_REG       (xxx_GICR_LPI_REGS_BASE + 0xFFEC) /* GICR_PIDR3 */
#define xxx_GICR_LPI_REGS_GICR_PIDR4_REG       (xxx_GICR_LPI_REGS_BASE + 0xFFD0) /* GICR_PIDR4 */

#endif // __GICR_LPI_REGS_REG_OFFSET_H__
