// ****************************************************************************** 
// Copyright     :  Copyright (C) 2018, Hisilicon Technologies Co. Ltd.
// File name     :  gic_cfg_reg_offset.h
// Project line  :  ICT
// Department    :  ICT Processor Chipset Development Dep
// Author        :  xxx
// Version       :  1.0
// Date          :  2018/6/9
// Description   :  The description of AI
// Others        :  Generated automatically by nManager V4.2 
// History       :  xxx 2018/07/13 14:46:58 Create file
// ******************************************************************************

#ifndef __GIC_CFG_REG_OFFSET_H__
#define __GIC_CFG_REG_OFFSET_H__

/* GIC_CFG Base address of Module's Register */
#define CLOUD_GIC_CFG_BASE                       (0x60000000)

/******************************************************************************/
/*                      CLOUD GIC_CFG Registers' Definitions                            */
/******************************************************************************/

#define CLOUD_GIC_CFG_SC_ITS_CLK_EN_REG          (CLOUD_GIC_CFG_BASE + 0x300)  /* ITSʱ��ʹ�ܼĴ��� */
#define CLOUD_GIC_CFG_SC_ITS_CLK_DIS_REG         (CLOUD_GIC_CFG_BASE + 0x304)  /* ITSʱ�ӽ�ֹ�Ĵ��� */
#define CLOUD_GIC_CFG_SC_FTE_CLK_EN_REG          (CLOUD_GIC_CFG_BASE + 0x308)  /* FTEʱ��ʹ�ܼĴ��� */
#define CLOUD_GIC_CFG_SC_FTE_CLK_DIS_REG         (CLOUD_GIC_CFG_BASE + 0x30C)  /* FTEʱ�ӽ�ֹ�Ĵ��� */
#define CLOUD_GIC_CFG_SC_SMMU_ICG_EN_REG         (CLOUD_GIC_CFG_BASE + 0x380)  /* SMMUʱ��ʹ�ܼĴ��� */
#define CLOUD_GIC_CFG_SC_SMMU_ICG_DIS_REG        (CLOUD_GIC_CFG_BASE + 0x384)  /* SMMUʱ�ӽ�ֹ�Ĵ��� */
#define CLOUD_GIC_CFG_SC_KERNEL_SLOW_CLK_EN_REG  (CLOUD_GIC_CFG_BASE + 0x400)  /* KERNEL_SLOWʱ��ʹ�ܼĴ��� */
#define CLOUD_GIC_CFG_SC_KERNEL_SLOW_CLK_DIS_REG (CLOUD_GIC_CFG_BASE + 0x404)  /* KERNEL_SLOWʱ�ӽ�ֹ�Ĵ��� */
#define CLOUD_GIC_CFG_SC_GIC_CLK_EN_REG          (CLOUD_GIC_CFG_BASE + 0x530)  /* GICʱ��ʹ�ܼĴ��� */
#define CLOUD_GIC_CFG_SC_GIC_CLK_DIS_REG         (CLOUD_GIC_CFG_BASE + 0x534)  /* GICʱ�ӽ�ֹ�Ĵ��� */
#define CLOUD_GIC_CFG_SC_MBIGEN_CLK_EN_REG       (CLOUD_GIC_CFG_BASE + 0x540)  /* MBIGENʱ��ʹ�ܼĴ��� */
#define CLOUD_GIC_CFG_SC_MBIGEN_CLK_DIS_REG      (CLOUD_GIC_CFG_BASE + 0x544)  /* MBIGENʱ�ӽ�ֹ�Ĵ��� */
#define CLOUD_GIC_CFG_SC_ITS_RESET_REQ_REG       (CLOUD_GIC_CFG_BASE + 0xA00)  /* ITS��λ������ƼĴ��� */
#define CLOUD_GIC_CFG_SC_ITS_RESET_DREQ_REG      (CLOUD_GIC_CFG_BASE + 0xA04)  /* ITS��λȥ������ƼĴ��� */
#define CLOUD_GIC_CFG_SC_FTE_RESET_REQ_REG       (CLOUD_GIC_CFG_BASE + 0xA08)  /* FTE��λ������ƼĴ��� */
#define CLOUD_GIC_CFG_SC_FTE_RESET_DREQ_REG      (CLOUD_GIC_CFG_BASE + 0xA0C)  /* FTE��λȥ������ƼĴ��� */
#define CLOUD_GIC_CFG_SC_GIC_RESET_REQ_REG       (CLOUD_GIC_CFG_BASE + 0xC08)  /* GIC��λ������ƼĴ��� */
#define CLOUD_GIC_CFG_SC_GIC_RESET_DREQ_REG      (CLOUD_GIC_CFG_BASE + 0xC0C)  /* GIC��λȥ������ƼĴ��� */
#define CLOUD_GIC_CFG_SC_MBIGEN_RESET_REQ_REG    (CLOUD_GIC_CFG_BASE + 0xC40)  /* MBIGEN��λ������ƼĴ��� */
#define CLOUD_GIC_CFG_SC_MBIGEN_RESET_DREQ_REG   (CLOUD_GIC_CFG_BASE + 0xC44)  /* MBIGEN��λȥ������ƼĴ��� */
#define CLOUD_GIC_CFG_SC_EXTINT_CTRL_REG         (CLOUD_GIC_CFG_BASE + 0x2000) /* �ⲿ�жϼ������üĴ��� */
#define CLOUD_GIC_CFG_SC_DISPATCH_ERRRSP_REG     (CLOUD_GIC_CFG_BASE + 0x2064) /* dispatch��ERR��Ӧ���Ϳ��ƼĴ��� */
#define CLOUD_GIC_CFG_SC_NOCMT_IRQ_REG           (CLOUD_GIC_CFG_BASE + 0x2100) /* ̩ɽ��ָ�ʱ�жϼĴ��� */
#define CLOUD_GIC_CFG_SC_NOCMT_IRQ_INT_MASK_REG  (CLOUD_GIC_CFG_BASE + 0x2104) /* ̩ɽ��ָ�ʱ�ж����μĴ��� */
#define CLOUD_GIC_CFG_SC_NOCMT_IRQ_STATUS_REG    (CLOUD_GIC_CFG_BASE + 0x2108) /* ̩ɽ��ָ�ʱ�ж�״̬�Ĵ��� */
#define CLOUD_GIC_CFG_SC_NOCMT_IRQ_RST_EN_REG    (CLOUD_GIC_CFG_BASE + 0x2120) /* ̩ɽ��ָ���ж������λʹ�ܼĴ��� */
#define CLOUD_GIC_CFG_SC_NOCMT_IRQ_SEL_REG       (CLOUD_GIC_CFG_BASE + 0x2130) /* ̩ɽ��ָ���ж����ѡ��Ĵ��� */
#define CLOUD_GIC_CFG_SC_RAS_FHI_INT_MASK0_REG   (CLOUD_GIC_CFG_BASE + 0x2200) /* RAS FHI�ж����μĴ��� */
#define CLOUD_GIC_CFG_SC_RAS_FHI_INT_MASK1_REG   (CLOUD_GIC_CFG_BASE + 0x2204) /* RAS FHI�ж����μĴ��� */
#define CLOUD_GIC_CFG_SC_RAS_ERI_INT_MASK0_REG   (CLOUD_GIC_CFG_BASE + 0x2208) /* RAS ERI�ж����μĴ��� */
#define CLOUD_GIC_CFG_SC_RAS_ERI_INT_MASK1_REG   (CLOUD_GIC_CFG_BASE + 0x220C) /* RAS ERI�ж����μĴ��� */
#define CLOUD_GIC_CFG_SC_RAS_CE_INT_MASK0_REG    (CLOUD_GIC_CFG_BASE + 0x2210) /* RAS CE�ж����μĴ��� */
#define CLOUD_GIC_CFG_SC_RAS_CE_INT_MASK1_REG    (CLOUD_GIC_CFG_BASE + 0x2214) /* RAS CE�ж����μĴ��� */
#define CLOUD_GIC_CFG_SC_RAS_FE_INT_MASK0_REG    (CLOUD_GIC_CFG_BASE + 0x2218) /* RAS FE�ж����μĴ��� */
#define CLOUD_GIC_CFG_SC_RAS_FE_INT_MASK1_REG    (CLOUD_GIC_CFG_BASE + 0x221C) /* RAS FE�ж����μĴ��� */
#define CLOUD_GIC_CFG_SC_RAS_NFE_INT_MASK0_REG   (CLOUD_GIC_CFG_BASE + 0x2220) /* RAS NFE�ж����μĴ��� */
#define CLOUD_GIC_CFG_SC_RAS_NFE_INT_MASK1_REG   (CLOUD_GIC_CFG_BASE + 0x2224) /* RAS NFE�ж����μĴ��� */
#define CLOUD_GIC_CFG_SC_MEM_CTRL_SMMU_HISI_REG  (CLOUD_GIC_CFG_BASE + 0x3000) /* smmu mem���ƼĴ��� */
#define CLOUD_GIC_CFG_SC_MEM_CTRL_SMMU_REG       (CLOUD_GIC_CFG_BASE + 0x3004) /* smmu mem���ƼĴ��� */
#define CLOUD_GIC_CFG_SC_MEM_CTRL_GIC_HISI_REG   (CLOUD_GIC_CFG_BASE + 0x3020) /* gic mem���ƼĴ��� */
#define CLOUD_GIC_CFG_SC_MEM_CTRL_GIC_REG        (CLOUD_GIC_CFG_BASE + 0x3024) /* gic mem���ƼĴ��� */
#define CLOUD_GIC_CFG_SC_BUS_NUM_GIC_REG         (CLOUD_GIC_CFG_BASE + 0x3400) /* GIC SMMU BUSNUM���üĴ��� */
#define CLOUD_GIC_CFG_SC_DVE_NUM_GIC_REG         (CLOUD_GIC_CFG_BASE + 0x3404) /* GIC SMMU DVENUM���üĴ��� */
#define CLOUD_GIC_CFG_SC_GICD_INT_MAP_MODE_REG   (CLOUD_GIC_CFG_BASE + 0x4090) /* GICD SPI�ж�ӳ�䷽ʽѡ�� */
#define CLOUD_GIC_CFG_SC_SPI_INT_EN_REG          (CLOUD_GIC_CFG_BASE + 0x4094) /* SPI�ж��ϱ�ʹ���ź� */
#define CLOUD_GIC_CFG_SC_TIMER_INT_EN_REG        (CLOUD_GIC_CFG_BASE + 0x4098) /* TIMER �ж��ϱ�ʹ���ź� */
#define CLOUD_GIC_CFG_SC_N2N_INT_SEL0_REG        (CLOUD_GIC_CFG_BASE + 0x40A0) /* N-N���ж�Դѡ��Ĵ���0��ѡ��int_sysctrl_nnspi0 */
#define CLOUD_GIC_CFG_SC_N2N_INT_SEL1_REG        (CLOUD_GIC_CFG_BASE + 0x40A4) /* N-N���ж�Դѡ��Ĵ�1��ѡ��int_sysctrl_nnspi1 */
#define CLOUD_GIC_CFG_SC_N2N_INT_SEL2_REG        (CLOUD_GIC_CFG_BASE + 0x40A8) /* N-N���ж�Դѡ��Ĵ���2��ѡ��int_sysctrl_nnspi2 */
#define CLOUD_GIC_CFG_SC_N2N_INT_SEL3_REG        (CLOUD_GIC_CFG_BASE + 0x40AC) /* N-N���ж�Դѡ��Ĵ���3��ѡ��int_sysctrl_nnspi3 */
#define CLOUD_GIC_CFG_SC_N2N_INT_SEL4_REG        (CLOUD_GIC_CFG_BASE + 0x40B0) /* N-N���ж�Դѡ��Ĵ���4��ѡ��int_sysctrl_nnspi4 */
#define CLOUD_GIC_CFG_SC_N2N_INT_SEL5_REG        (CLOUD_GIC_CFG_BASE + 0x40B4) /* N-N���ж�Դѡ��Ĵ���5��ѡ��int_sysctrl_nnspi5 */
#define CLOUD_GIC_CFG_SC_N2N_INT_SEL6_REG        (CLOUD_GIC_CFG_BASE + 0x40B8) /* N-N���ж�Դѡ��Ĵ���6��ѡ��int_sysctrl_nnspi6 */
#define CLOUD_GIC_CFG_SC_N2N_INT_SEL7_REG        (CLOUD_GIC_CFG_BASE + 0x40BC) /* N-N���ж�Դѡ��Ĵ���7��ѡ��int_sysctrl_nnspi7 */
#define CLOUD_GIC_CFG_SC_N2N_INT_SEL8_REG        (CLOUD_GIC_CFG_BASE + 0x40C0) /* N-N���ж�Դѡ��Ĵ���8��ѡ��int_sysctrl_nnspi8 */
#define CLOUD_GIC_CFG_SC_N2N_INT_SEL9_REG        (CLOUD_GIC_CFG_BASE + 0x40C4) /* N-N���ж�Դѡ��Ĵ���9��ѡ��int_sysctrl_nnspi9 */
#define CLOUD_GIC_CFG_SC_INT_MODE_REG            (CLOUD_GIC_CFG_BASE + 0x40D0) /* PERF�ж�ģʽ���üĴ��� */
#define CLOUD_GIC_CFG_SC_ITS_CLK_ST_REG          (CLOUD_GIC_CFG_BASE + 0x5300) /* ITSʱ��״̬�Ĵ��� */
#define CLOUD_GIC_CFG_SC_FTE_CLK_ST_REG          (CLOUD_GIC_CFG_BASE + 0x5308) /* FTEʱ��״̬�Ĵ��� */
#define CLOUD_GIC_CFG_SC_SMMU_ICG_ST_REG         (CLOUD_GIC_CFG_BASE + 0x5380) /* SMMUʱ��״̬�Ĵ��� */
#define CLOUD_GIC_CFG_SC_KERNEL_SLOW_CLK_ST_REG  (CLOUD_GIC_CFG_BASE + 0x5400) /* KERNEL_SLOWʱ��״̬�Ĵ��� */
#define CLOUD_GIC_CFG_SC_GIC_CLK_ST_REG          (CLOUD_GIC_CFG_BASE + 0x5530) /* GICʱ��״̬�Ĵ��� */
#define CLOUD_GIC_CFG_SC_MBIGEN_CLK_ST_REG       (CLOUD_GIC_CFG_BASE + 0x5540) /* MBIGENʱ��״̬�Ĵ��� */
#define CLOUD_GIC_CFG_SC_ITS_RESET_ST_REG        (CLOUD_GIC_CFG_BASE + 0x5A00) /* ITS�ĸ�λ״̬�Ĵ��� */
#define CLOUD_GIC_CFG_SC_FTE_RESET_ST_REG        (CLOUD_GIC_CFG_BASE + 0x5A08) /* FTE��λ״̬�Ĵ��� */
#define CLOUD_GIC_CFG_SC_GIC_RESET_ST_REG        (CLOUD_GIC_CFG_BASE + 0x5C08) /* GIC��λ״̬�Ĵ��� */
#define CLOUD_GIC_CFG_SC_MBIGEN_RESET_ST_REG     (CLOUD_GIC_CFG_BASE + 0x5C40) /* MBIGEN��λ״̬�Ĵ��� */
#define CLOUD_GIC_CFG_SC_GIC_NOCMT_ST_REG        (CLOUD_GIC_CFG_BASE + 0x6000) /* ̩ɽ��ָ��״̬�Ĵ��� */
#define CLOUD_GIC_CFG_GIC_CFG_VERSION0_REG       (CLOUD_GIC_CFG_BASE + 0xE0A0) /* VERSION�Ĵ���0 */
#define CLOUD_GIC_CFG_GIC_CFG_MAGIC_WORD_REG     (CLOUD_GIC_CFG_BASE + 0xE0A4) /* GIC_CFG �汾�������Ĵ��� */
#define CLOUD_GIC_CFG_GIC_CFG_ECO_CFG0_REG       (CLOUD_GIC_CFG_BASE + 0xE0A8) /* ����ECO���������üĴ���1 */
#define CLOUD_GIC_CFG_GIC_CFG_ECO_CFG1_REG       (CLOUD_GIC_CFG_BASE + 0xE0AC) /* ����ECO���������üĴ���1 */
#define CLOUD_GIC_CFG_GIC_CFG_ECO_CFG2_REG       (CLOUD_GIC_CFG_BASE + 0xE0B0) /* ����ECO���������üĴ���2 */
#define CLOUD_GIC_CFG_GIC_CFG_ECO_CFG3_REG       (CLOUD_GIC_CFG_BASE + 0xE0B4) /* ����ECO���������üĴ���3 */
#define CLOUD_GIC_CFG_SC_SYSCTRL_LOCK_REG        (CLOUD_GIC_CFG_BASE + 0xF100) /* ϵͳ�����������Ĵ�������ע�⣺1���˼Ĵ����ռ�����ǰ�ȫ���ʲ��ܳɹ��� */
#define CLOUD_GIC_CFG_SC_SYSCTRL_UNLOCK_REG      (CLOUD_GIC_CFG_BASE + 0xF110) /* ϵͳ�����������Ĵ�������ע�⣺1���˼Ĵ����ռ�����ǰ�ȫ���ʲ��ܳɹ��� */
#define CLOUD_GIC_CFG_SC_N2N_INT_INFO0_REG       (CLOUD_GIC_CFG_BASE + 0xF200) /* N2N�жϹؼ���Ϣ��ѯ�Ĵ���0 */
#define CLOUD_GIC_CFG_SC_N2N_INT_INFO1_REG       (CLOUD_GIC_CFG_BASE + 0xF204) /* N2N�жϹؼ���Ϣ��ѯ�Ĵ���0 */
#define CLOUD_GIC_CFG_SC_N2N_INT_INFO2_REG       (CLOUD_GIC_CFG_BASE + 0xF208) /* N2N�жϹؼ���Ϣ��ѯ�Ĵ���0 */
#define CLOUD_GIC_CFG_SC_ECO_RSV0_REG            (CLOUD_GIC_CFG_BASE + 0xFF00) /* ECO �Ĵ��� */
#define CLOUD_GIC_CFG_SC_ECO_RSV1_REG            (CLOUD_GIC_CFG_BASE + 0xFF04) /* ECO �Ĵ���1 */
#define CLOUD_GIC_CFG_SC_ECO_RSV2_REG            (CLOUD_GIC_CFG_BASE + 0xFF08) /* ECO �Ĵ���2 */
#define CLOUD_GIC_CFG_SC_ECO_RSV3_REG            (CLOUD_GIC_CFG_BASE + 0xFF0C) /* ECO �Ĵ���3 */
#define CLOUD_GIC_CFG_SC_ECO_RSV4_REG            (CLOUD_GIC_CFG_BASE + 0xFF10) /* ECO �Ĵ���4 */
#define CLOUD_GIC_CFG_SC_ECO_RSV5_REG            (CLOUD_GIC_CFG_BASE + 0xFF14) /* ECO �Ĵ���5 */
#define CLOUD_GIC_CFG_FPGA_VER_REG               (CLOUD_GIC_CFG_BASE + 0xFFFC) /* FPGA�汾�Ĵ��� */

#endif // __GIC_CFG_REG_OFFSET_H__
