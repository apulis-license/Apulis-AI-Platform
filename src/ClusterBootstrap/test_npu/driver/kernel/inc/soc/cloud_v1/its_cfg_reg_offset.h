// ****************************************************************************** 
// Copyright     :  Copyright (C) 2018, Hisilicon Technologies Co. Ltd.
// File name     :  its_cfg_reg_offset.h
// Department    :  CAD Development Department
// Author        :  xxx
// Version       :  1
// Date          :  2013/3/10
// Description   :  The description of xxx project
// Others        :  Generated automatically by nManager V4.2 
// History       :  xxx 2018/07/18 20:25:42 Create file
// ******************************************************************************

#ifndef __ITS_CFG_REG_OFFSET_H__
#define __ITS_CFG_REG_OFFSET_H__

/* ITS_CFG Base address of Module's Register */
//#define xxx_ITS_CFG_BASE                       (0x10000000)
#define xxx_ITS_CFG_BASE                       (0xA8100000)

/******************************************************************************/
/*                      xxx ITS_CFG Registers' Definitions                            */
/******************************************************************************/

#define xxx_ITS_CFG_GITS_CTLR_REG               (xxx_ITS_CFG_BASE + 0x0)     /* GITS���ƼĴ��� */
#define xxx_ITS_CFG_GITS_IIDR_REG               (xxx_ITS_CFG_BASE + 0x4)     /* GITS�汾�Ĵ��� */
#define xxx_ITS_CFG_GITS_TYPER_REG              (xxx_ITS_CFG_BASE + 0x8)     /* GITS������Ϣ�Ĵ��� */
#define xxx_ITS_CFG_GITS_CBASER_L_REG           (xxx_ITS_CFG_BASE + 0x80)    /* GITS������л���ַ�Ĵ���[31:0] */
#define xxx_ITS_CFG_GITS_CBASER_H_REG           (xxx_ITS_CFG_BASE + 0x84)    /* GITS������л���ַ�Ĵ���[63:32] */
#define xxx_ITS_CFG_GITS_CWRITER_L_REG          (xxx_ITS_CFG_BASE + 0x88)    /* ���д��һ�������ƫ�Ƶ�ַ�Ĵ���[31:0] */
#define xxx_ITS_CFG_GITS_CWRITER_H_REG          (xxx_ITS_CFG_BASE + 0x8C)    /* ���д��һ�������ƫ�Ƶ�ַ�Ĵ���[63:32] */
#define xxx_ITS_CFG_GITS_CREADR_L_REG           (xxx_ITS_CFG_BASE + 0x90)    /* GITS����һ�������ƫ�Ƶ�ַ�Ĵ���[31:0] */
#define xxx_ITS_CFG_GITS_CREADR_H_REG           (xxx_ITS_CFG_BASE + 0x94)    /* GITS����һ�������ƫ�Ƶ�ַ�Ĵ���[63:32] */
#define xxx_ITS_CFG_GITS_BASER0_L_REG           (xxx_ITS_CFG_BASE + 0x100)   /* ����/VCPU�����ַ�Ĵ���[31:0]��n{7,0} */
#define xxx_ITS_CFG_GITS_BASER0_H_REG           (xxx_ITS_CFG_BASE + 0x104)   /* ����/VCPU�����ַ�Ĵ���[63:32]��n{7,0} */
#define xxx_ITS_CFG_GITS_BASER1_L_REG           (xxx_ITS_CFG_BASE + 0x108)   /* ����/VCPU�����ַ�Ĵ���[31:0]��n{7,0} */
#define xxx_ITS_CFG_GITS_BASER1_H_REG           (xxx_ITS_CFG_BASE + 0x10C)   /* ����/VCPU�����ַ�Ĵ���[63:32]��n{7,0} */
#define xxx_ITS_CFG_GITS_BASER2_L_REG           (xxx_ITS_CFG_BASE + 0x110)   /* ����/VCPU�����ַ�Ĵ���[31:0]��n{7,0} */
#define xxx_ITS_CFG_GITS_BASER2_H_REG           (xxx_ITS_CFG_BASE + 0x114)   /* ����/VCPU�����ַ�Ĵ���[63:32]��n{7,0} */
#define xxx_ITS_CFG_GITS_CIDR0_REG              (xxx_ITS_CFG_BASE + 0xFFF0)  /* GITS����ID�Ĵ���0 */
#define xxx_ITS_CFG_GITS_CIDR1_REG              (xxx_ITS_CFG_BASE + 0xFFF4)  /* GITS����ID�Ĵ���1 */
#define xxx_ITS_CFG_GITS_CIDR2_REG              (xxx_ITS_CFG_BASE + 0xFFF8)  /* GITS����ID�Ĵ���2 */
#define xxx_ITS_CFG_GITS_CIDR3_REG              (xxx_ITS_CFG_BASE + 0xFFFC)  /* GITS����ID�Ĵ���3 */
#define xxx_ITS_CFG_GITS_PIDR0_REG              (xxx_ITS_CFG_BASE + 0xFFE0)  /* GITS�ܹ��汾�Ĵ��� */
#define xxx_ITS_CFG_GITS_PIDR1_REG              (xxx_ITS_CFG_BASE + 0xFFE4)  /* GITS�ܹ��汾�Ĵ��� */
#define xxx_ITS_CFG_GITS_PIDR2_REG              (xxx_ITS_CFG_BASE + 0xFFE8)  /* GITS�ܹ��汾�Ĵ��� */
#define xxx_ITS_CFG_GITS_PIDR3_REG              (xxx_ITS_CFG_BASE + 0xFFEC)  /* GITS�ܹ��汾�Ĵ��� */
#define xxx_ITS_CFG_GITS_PIDR4_REG              (xxx_ITS_CFG_BASE + 0xFFD0)  /* GITS�ܹ��汾�Ĵ��� */
#define xxx_ITS_CFG_GITS_PIDR5_REG              (xxx_ITS_CFG_BASE + 0xFFD4)  /* GITS�ܹ��汾�Ĵ��� */
#define xxx_ITS_CFG_GITS_PIDR6_REG              (xxx_ITS_CFG_BASE + 0xFFD8)  /* GITS�ܹ��汾�Ĵ��� */
#define xxx_ITS_CFG_GITS_PIDR7_REG              (xxx_ITS_CFG_BASE + 0xFFDC)  /* GITS�ܹ��汾�Ĵ��� */
#define xxx_ITS_CFG_GITS_TRANSLATER_L_REG       (xxx_ITS_CFG_BASE + 0x10040) /* GITS�жϽ��ռĴ��� */
#define xxx_ITS_CFG_GITS_TRANSLATER_H_REG       (xxx_ITS_CFG_BASE + 0x10044) /* GITS�жϽ��ռĴ��� */
#define xxx_ITS_CFG_GITS_DFX_AXIERR_REG         (xxx_ITS_CFG_BASE + 0x20000) /* �������ߴ���ָʾ */
#define xxx_ITS_CFG_GITS_CFG_CNT_CLR_CE_REG     (xxx_ITS_CFG_BASE + 0x20004) /* CNT_CYC���ͼĴ�����������ź� */
#define xxx_ITS_CFG_GITS_DFX_AXIWR_CNT_REG      (xxx_ITS_CFG_BASE + 0x2000C) /* GITS���߲��������� */
#define xxx_ITS_CFG_GITS_DFX_SYS_ERR0_REG       (xxx_ITS_CFG_BASE + 0x20010) /* GITSϵͳ����״̬�Ĵ���0 */
#define xxx_ITS_CFG_GITS_DFX_SYS_ERR1_REG       (xxx_ITS_CFG_BASE + 0x20014) /* GITSϵͳ����״̬�Ĵ���1 */
#define xxx_ITS_CFG_GITS_DFX_SYS_ERR2_REG       (xxx_ITS_CFG_BASE + 0x20018) /* GITSϵͳ����״̬�Ĵ���2 */
#define xxx_ITS_CFG_GITS_DFX_ST_REG             (xxx_ITS_CFG_BASE + 0x2001C) /* DFX GITS״̬�� */
#define xxx_ITS_CFG_GITS_DFX_CFIFO_ST_REG       (xxx_ITS_CFG_BASE + 0x20020) /* DFX CMDQ FIFO״̬�Ĵ��� */
#define xxx_ITS_CFG_GITS_AXIM_USER_REG          (xxx_ITS_CFG_BASE + 0x20040) /* AXIM USER���ƼĴ��� */
#define xxx_ITS_CFG_GITS_DFX_LAST_ID_REG        (xxx_ITS_CFG_BASE + 0x20044) /* DFX���յ��жϺż�¼�Ĵ��� */
#define xxx_ITS_CFG_GITS_DFX_LAST_DID_REG       (xxx_ITS_CFG_BASE + 0x20048) /* DFX GITS���յ����������е��豸�� */
#define xxx_ITS_CFG_GITS_DFX_CACHE_CNT_CS_REG   (xxx_ITS_CFG_BASE + 0x2004C) /* CACHEͳ������ѡ��Ĵ��� */
#define xxx_ITS_CFG_GITS_DFX_CACHE_MISS_CNT_REG (xxx_ITS_CFG_BASE + 0x20050) /* CACHE������ͳ�Ƽ����� */
#define xxx_ITS_CFG_GITS_DFX_LPI_CNT_REG        (xxx_ITS_CFG_BASE + 0x20060) /* ���յ���LPI�ж�ͳ�Ƽ����� */
#define xxx_ITS_CFG_GITS_DFX_DISCARD_CNT_REG    (xxx_ITS_CFG_BASE + 0x20064) /* ��ʧ��LPI�ж�ͳ�Ƽ����� */
#define xxx_ITS_CFG_GITS_DFX_LPITX_CNT_REG      (xxx_ITS_CFG_BASE + 0x20068) /* ����LPI�ж�ͳ�Ƽ����� */
#define xxx_ITS_CFG_GITS_FUNC_EN_REG            (xxx_ITS_CFG_BASE + 0x20080) /* GITS����ʹ�ܿ��� */
#define xxx_ITS_CFG_GITS_DFX_VECTOR_CS_REG      (xxx_ITS_CFG_BASE + 0x20084) /* ����ж����������ź� */
#define xxx_ITS_CFG_GITS_DFX_INF0_REG           (xxx_ITS_CFG_BASE + 0x20088) /* ����ж�·����Ϣ */
#define xxx_ITS_CFG_GITS_DFX_INF1_REG           (xxx_ITS_CFG_BASE + 0x2008C) /* ����ж�·����Ϣ */
#define xxx_ITS_CFG_GITS_DFX_INF2_REG           (xxx_ITS_CFG_BASE + 0x20090) /* ����ж�·����Ϣ */
#define xxx_ITS_CFG_GITS_DFX_INF3_REG           (xxx_ITS_CFG_BASE + 0x20094) /* ����ж�·����Ϣ */
#define xxx_ITS_CFG_GITS_DFX_INF4_REG           (xxx_ITS_CFG_BASE + 0x20098) /* ����ж�·����Ϣ */
#define xxx_ITS_CFG_GITS_DFX_INF5_REG           (xxx_ITS_CFG_BASE + 0x2009C) /* ����ж�·����Ϣ */

#endif // __ITS_CFG_REG_OFFSET_H__
