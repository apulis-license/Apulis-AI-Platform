// ****************************************************************************** 
// Copyright     :  Copyright (C) 2018, Hisilicon Technologies Co. Ltd.
// File name     :  peri_cfg_reg_offset.h
// Project line  :  ICT
// Department    :  ICT Processor Chipset Development Dep
// Author        :  huawei
// Version       :  1.0
// Date          :  2017/11/13
// Description   :  The description of Hi1910 project
// Others        :  Generated automatically by nManager V4.2 
// History       :  huawei 2018/03/16 18:04:33 Create file
// ******************************************************************************

#ifndef __PERI_CFG_REG_OFFSET_H__
#define __PERI_CFG_REG_OFFSET_H__

/* PERI_CFG Base address of Module's Register */
#define SOC_PERI_CFG_BASE                       (0xc000000)

/******************************************************************************/
/*                      SOC PERI_CFG Registers' Definitions                            */
/******************************************************************************/

#define SOC_PERI_CFG_SC_ITS_CLK_EN_REG                   (SOC_PERI_CFG_BASE + 0x300)  /* ITSʱ��ʹ�ܼĴ��� */
#define SOC_PERI_CFG_SC_ITS_CLK_DIS_REG                  (SOC_PERI_CFG_BASE + 0x304)  /* ITSʱ�ӽ�ֹ�Ĵ��� */
#define SOC_PERI_CFG_SC_FTE_CLK_EN_REG                   (SOC_PERI_CFG_BASE + 0x308)  /* FTEʱ��ʹ�ܼĴ��� */
#define SOC_PERI_CFG_SC_FTE_CLK_DIS_REG                  (SOC_PERI_CFG_BASE + 0x30C)  /* FTEʱ�ӽ�ֹ�Ĵ��� */
#define SOC_PERI_CFG_SC_DBG_CLK_EN_REG                   (SOC_PERI_CFG_BASE + 0x310)  /* DBGʱ��ʹ�ܼĴ��� */
#define SOC_PERI_CFG_SC_DBG_CLK_DIS_REG                  (SOC_PERI_CFG_BASE + 0x314)  /* DBGʱ�ӽ�ֹ�Ĵ��� */
#define SOC_PERI_CFG_SC_M3_CLK_EN_REG                    (SOC_PERI_CFG_BASE + 0x318)  /* M3ʱ��ʹ�ܼĴ��� */
#define SOC_PERI_CFG_SC_M3_CLK_DIS_REG                   (SOC_PERI_CFG_BASE + 0x31C)  /* M3ʱ�ӽ�ֹ�Ĵ��� */
#define SOC_PERI_CFG_SC_GPIO_CLK_EN_REG                  (SOC_PERI_CFG_BASE + 0x320)  /* GPIOʱ��ʹ�ܼĴ��� */
#define SOC_PERI_CFG_SC_GPIO_CLK_DIS_REG                 (SOC_PERI_CFG_BASE + 0x324)  /* GPIOʱ�ӽ�ֹ�Ĵ��� */
#define SOC_PERI_CFG_SC_GIC_CLK_EN_REG                   (SOC_PERI_CFG_BASE + 0x330)  /* GICʱ��ʹ�ܼĴ��� */
#define SOC_PERI_CFG_SC_GIC_CLK_DIS_REG                  (SOC_PERI_CFG_BASE + 0x334)  /* GICʱ�ӽ�ֹ�Ĵ��� */
#define SOC_PERI_CFG_SC_SMMU_ICG_EN_REG                  (SOC_PERI_CFG_BASE + 0x380)  /* SMMUʱ��ʹ�ܼĴ��� */
#define SOC_PERI_CFG_SC_SMMU_ICG_DIS_REG                 (SOC_PERI_CFG_BASE + 0x384)  /* SMMUʱ�ӽ�ֹ�Ĵ��� */
#define SOC_PERI_CFG_SC_TIMER32_CLK_EN0_REG              (SOC_PERI_CFG_BASE + 0x500)  /* TIMER32ʱ��ʹ�ܼĴ��� */
#define SOC_PERI_CFG_SC_TIMER32_CLK_DIS0_REG             (SOC_PERI_CFG_BASE + 0x504)  /* TIMER32ʱ�ӽ�ֹ�Ĵ��� */
#define SOC_PERI_CFG_SC_TIMER32_CLK_EN1_REG              (SOC_PERI_CFG_BASE + 0x508)  /* TIMER32ʱ��ʹ�ܼĴ��� */
#define SOC_PERI_CFG_SC_TIMER32_CLK_DIS1_REG             (SOC_PERI_CFG_BASE + 0x50C)  /* TIMER32ʱ�ӽ�ֹ�Ĵ��� */
#define SOC_PERI_CFG_SC_TIMER64_CLK_EN_REG               (SOC_PERI_CFG_BASE + 0x510)  /* TIMER64ʱ��ʹ�ܼĴ��� */
#define SOC_PERI_CFG_SC_TIMER64_CLK_DIS_REG              (SOC_PERI_CFG_BASE + 0x514)  /* TIMER64ʱ�ӽ�ֹ�Ĵ��� */
#define SOC_PERI_CFG_SC_WATCHDOG_CLK_EN_REG              (SOC_PERI_CFG_BASE + 0x520)  /* WATCHDOGʱ��ʹ�ܼĴ��� */
#define SOC_PERI_CFG_SC_WATCHDOG_CLK_DIS_REG             (SOC_PERI_CFG_BASE + 0x524)  /* WATCHDOGʱ�ӽ�ֹ�Ĵ��� */
#define SOC_PERI_CFG_SC_UART_CLK_EN_REG                  (SOC_PERI_CFG_BASE + 0x548)  /* UARTʱ��ʹ�ܼĴ��� */
#define SOC_PERI_CFG_SC_UART_CLK_DIS_REG                 (SOC_PERI_CFG_BASE + 0x54C)  /* UARTʱ�ӽ�ֹ�Ĵ��� */
#define SOC_PERI_CFG_SC_MDIO_CLK_EN_REG                  (SOC_PERI_CFG_BASE + 0x560)  /* MDIOʱ��ʹ�ܼĴ��� */
#define SOC_PERI_CFG_SC_MDIO_CLK_DIS_REG                 (SOC_PERI_CFG_BASE + 0x564)  /* MDIOʱ�ӽ�ֹ�Ĵ��� */
#define SOC_PERI_CFG_SC_SMB_CLK_EN_REG                   (SOC_PERI_CFG_BASE + 0x590)  /* SMBʱ��ʹ�ܼĴ��� */
#define SOC_PERI_CFG_SC_SMB_CLK_DIS_REG                  (SOC_PERI_CFG_BASE + 0x594)  /* SMBʱ�ӽ�ֹ�Ĵ��� */
#define SOC_PERI_CFG_SC_CER_CLK_EN_REG                   (SOC_PERI_CFG_BASE + 0x598)  /* CERʱ��ʹ�ܼĴ��� */
#define SOC_PERI_CFG_SC_CER_CLK_DIS_REG                  (SOC_PERI_CFG_BASE + 0x59C)  /* CERʱ�ӽ�ֹ�Ĵ��� */
#define SOC_PERI_CFG_SC_SFC2X_CLK_EN_REG                 (SOC_PERI_CFG_BASE + 0x5A0)  /* SFC2Xʱ��ʹ�ܼĴ��� */
#define SOC_PERI_CFG_SC_SC2X_CLK_DIS_REG                 (SOC_PERI_CFG_BASE + 0x5A4)  /* SFC2Xʱ�ӽ�ֹ�Ĵ��� */
#define SOC_PERI_CFG_SC_SFC1X_CLK_EN_REG                 (SOC_PERI_CFG_BASE + 0x5A8)  /* SFC1Xʱ��ʹ�ܼĴ��� */
#define SOC_PERI_CFG_SC_SFC1X_CLK_DIS_REG                (SOC_PERI_CFG_BASE + 0x5AC)  /* SFC1Xʱ�ӽ�ֹ�Ĵ��� */
#define SOC_PERI_CFG_SC_SDMA_ICG_EN_REG                  (SOC_PERI_CFG_BASE + 0x5B0)  /* SDMAʱ��ʹ�ܼĴ��� */
#define SOC_PERI_CFG_SC_SDMA_ICG_DIS_REG                 (SOC_PERI_CFG_BASE + 0x5B4)  /* SDMAʱ�ӽ�ֹ�Ĵ��� */
#define SOC_PERI_CFG_SC_TRNG_ICG_EN_REG                  (SOC_PERI_CFG_BASE + 0x5B8)  /* TRNGʱ��ʹ�ܼĴ��� */
#define SOC_PERI_CFG_SC_TRNG_ICG_DIS_REG                 (SOC_PERI_CFG_BASE + 0x5BC)  /* TRNGʱ�ӽ�ֹ�Ĵ��� */
#define SOC_PERI_CFG_SC_EMMC_ICG_EN_REG                  (SOC_PERI_CFG_BASE + 0x5C0)  /* EMMCʱ��ʹ�ܼĴ��� */
#define SOC_PERI_CFG_SC_EMMC_ICG_DIS_REG                 (SOC_PERI_CFG_BASE + 0x5C4)  /* EMMCʱ�ӽ�ֹ�Ĵ��� */
#define SOC_PERI_CFG_SC_ITS_RESET_REQ_REG                (SOC_PERI_CFG_BASE + 0xA00)  /* ITS��λ������ƼĴ��� */
#define SOC_PERI_CFG_SC_ITS_RESET_DREQ_REG               (SOC_PERI_CFG_BASE + 0xA04)  /* ITS��λȥ������ƼĴ��� */
#define SOC_PERI_CFG_SC_FTE_RESET_REQ_REG                (SOC_PERI_CFG_BASE + 0xA08)  /* FTE��λ������ƼĴ��� */
#define SOC_PERI_CFG_SC_FTE_RESET_DREQ_REG               (SOC_PERI_CFG_BASE + 0xA0C)  /* FTE��λȥ������ƼĴ��� */
#define SOC_PERI_CFG_SC_DBG_RESET_REQ_REG                (SOC_PERI_CFG_BASE + 0xA10)  /* DBG��λ������ƼĴ��� */
#define SOC_PERI_CFG_SC_DBG_RESET_DREQ_REG               (SOC_PERI_CFG_BASE + 0xA14)  /* DBG��λȥ������ƼĴ��� */
#define SOC_PERI_CFG_SC_GPIO_RESET_REQ_REG               (SOC_PERI_CFG_BASE + 0xA20)  /* GPIO��λ������ƼĴ��� */
#define SOC_PERI_CFG_SC_GPIO_RESET_DREQ_REG              (SOC_PERI_CFG_BASE + 0xA24)  /* GPIO��λȥ������ƼĴ��� */
#define SOC_PERI_CFG_SC_WATCHDOG_RESET_REQ_REG           (SOC_PERI_CFG_BASE + 0xC00)  /* WATCHDOG��λ������ƼĴ��� */
#define SOC_PERI_CFG_SC_WATCHDOG_RESET_DREQ_REG          (SOC_PERI_CFG_BASE + 0xC04)  /* WATCHDOG��λȥ������ƼĴ��� */
#define SOC_PERI_CFG_SC_GIC_RESET_REQ_REG                (SOC_PERI_CFG_BASE + 0xC08)  /* GIC��λ������ƼĴ��� */
#define SOC_PERI_CFG_SC_GIC_RESET_DREQ_REG               (SOC_PERI_CFG_BASE + 0xC0C)  /* GIC��λȥ������ƼĴ��� */
#define SOC_PERI_CFG_SC_UART_RESET_REQ_REG               (SOC_PERI_CFG_BASE + 0xC28)  /* UART��λ������ƼĴ��� */
#define SOC_PERI_CFG_SC_UART_RESET_DREQ_REG              (SOC_PERI_CFG_BASE + 0xC2C)  /* UART��λȥ������ƼĴ��� */
#define SOC_PERI_CFG_SC_MDIO_RESET_REQ_REG               (SOC_PERI_CFG_BASE + 0xC40)  /* MDIO��λ������ƼĴ��� */
#define SOC_PERI_CFG_SC_MDIO_RESET_DREQ_REG              (SOC_PERI_CFG_BASE + 0xC44)  /* MDIO��λȥ������ƼĴ��� */
#define SOC_PERI_CFG_SC_M3_RESET_REQ_REG                 (SOC_PERI_CFG_BASE + 0xC68)  /* M3��λ������ƼĴ��� */
#define SOC_PERI_CFG_SC_M3_RESET_DREQ_REG                (SOC_PERI_CFG_BASE + 0xC6C)  /* M3��λȥ������ƼĴ��� */
#define SOC_PERI_CFG_SC_SMB_RESET_REQ_REG                (SOC_PERI_CFG_BASE + 0xC70)  /* SMB��λ������ƼĴ��� */
#define SOC_PERI_CFG_SC_SMB_RESET_DREQ_REG               (SOC_PERI_CFG_BASE + 0xC74)  /* SMB��λȥ������ƼĴ��� */
#define SOC_PERI_CFG_SC_CER_RESET_REQ_REG                (SOC_PERI_CFG_BASE + 0xC78)  /* CER��λ������ƼĴ��� */
#define SOC_PERI_CFG_SC_CER_RESET_DREQ_REG               (SOC_PERI_CFG_BASE + 0xC7C)  /* CER��λȥ������ƼĴ��� */
#define SOC_PERI_CFG_SC_TIMER_RESET_REQ_REG              (SOC_PERI_CFG_BASE + 0xC80)  /* TIMER��λ������ƼĴ��� */
#define SOC_PERI_CFG_SC_TIMER_RESET_DREQ_REG             (SOC_PERI_CFG_BASE + 0xC84)  /* TIMER��λ������ƼĴ��� */
#define SOC_PERI_CFG_SC_SFC_RESET_REQ_REG                (SOC_PERI_CFG_BASE + 0xC90)  /* SFC��λ������ƼĴ��� */
#define SOC_PERI_CFG_SC_SFC_RESET_DREQ_REG               (SOC_PERI_CFG_BASE + 0xC94)  /* SFC��λȥ������ƼĴ��� */
#define SOC_PERI_CFG_SC_SDMA_RESET_REQ_REG               (SOC_PERI_CFG_BASE + 0xCA0)  /* SDMA��λ������ƼĴ��� */
#define SOC_PERI_CFG_SC_SDMA_RESET_DREQ_REG              (SOC_PERI_CFG_BASE + 0xCA4)  /* SDMA��λȥ������ƼĴ��� */
#define SOC_PERI_CFG_SC_TRNG_RESET_REQ_REG               (SOC_PERI_CFG_BASE + 0xCA8)  /* TRNG��λ������ƼĴ��� */
#define SOC_PERI_CFG_SC_TRNG_RESET_DREQ_REG              (SOC_PERI_CFG_BASE + 0xCAC)  /* TRNG��λȥ������ƼĴ��� */
#define SOC_PERI_CFG_SC_EMMC_RESET_REQ_REG               (SOC_PERI_CFG_BASE + 0xCB0)  /* EMMC��λ������ƼĴ��� */
#define SOC_PERI_CFG_SC_EMMC_RESET_DREQ_REG              (SOC_PERI_CFG_BASE + 0xCB4)  /* EMMC��λȥ������ƼĴ��� */
#define SOC_PERI_CFG_SC_CHAIN_ERR_CLR_REG                (SOC_PERI_CFG_BASE + 0x1100) /* CFG_BUS�ж�����Ĵ��� */
#define SOC_PERI_CFG_SC_CHAIN_ERR_INTMASK_REG            (SOC_PERI_CFG_BASE + 0x1104) /* CFG_BUS CHAIN ERR���ж����μĴ��� */
#define SOC_PERI_CFG_SC_CHAIN_ERR_INT_STATUS_REG         (SOC_PERI_CFG_BASE + 0x1108) /* CFG_BUS CHAIN ERR��ԭʼ�ж�״̬�Ĵ��� */
#define SOC_PERI_CFG_SC_CHAIN_ERR_CPU_CLR_REG            (SOC_PERI_CFG_BASE + 0x1110) /* CFG_BUS_CPU�ж�����Ĵ��� */
#define SOC_PERI_CFG_SC_CHAIN_ERR_CPU_INTMASK_REG        (SOC_PERI_CFG_BASE + 0x1114) /* CFG_BUS_CPU CHAIN ERR���ж����μĴ��� */
#define SOC_PERI_CFG_SC_CHAIN_ERR_CPU_INT_STATUS_REG     (SOC_PERI_CFG_BASE + 0x1118) /* CFG_BUS_CPU CHAIN ERR��ԭʼ�ж�״̬�Ĵ��� */
#define SOC_PERI_CFG_SC_DISPATCH_ERRRSP_REG              (SOC_PERI_CFG_BASE + 0x2064) /* dispatch��ERR��Ӧ���Ϳ��ƼĴ��� */
#define SOC_PERI_CFG_SC_M3_CTRL0_REG                     (SOC_PERI_CFG_BASE + 0x20B0) /* M3����0�Ĵ����� */
#define SOC_PERI_CFG_SC_M3_CTRL1_REG                     (SOC_PERI_CFG_BASE + 0x20B4) /* M3���ƼĴ���1�� */
#define SOC_PERI_CFG_SC_TSENSOR1_ALARM0_REG              (SOC_PERI_CFG_BASE + 0x20C0) /* Ƭ���¶ȴ������¶��������üĴ��� */
#define SOC_PERI_CFG_SC_TSENSOR1_SAMPLE_NUM_REG          (SOC_PERI_CFG_BASE + 0x20C4) /* Ӳ������Tsensor�¶�ֵ��ȡƽ�������üĴ�������ֹ����Ϊ0x0��0x1�� */
#define SOC_PERI_CFG_SC_TSENSOR1_CTRL_REG                (SOC_PERI_CFG_BASE + 0x20D0) /* Ƭ���¶ȴ�����Tsensor0�����������á� */
#define SOC_PERI_CFG_SC_ULTRASOC_USER_CFG_REG            (SOC_PERI_CFG_BASE + 0x2100) /* ULTRASOC AXI Master��USER������� */
#define SOC_PERI_CFG_SC_ULTRASOC_PORT_SEL_REG            (SOC_PERI_CFG_BASE + 0x2104) /* ULTRASOC PORTѡ�����üĴ��� */
#define SOC_PERI_CFG_SC_ULTRASOC_USER_NS_CFG_REG         (SOC_PERI_CFG_BASE + 0x2108) /* ULTRASOC AXI Master��USER�����NS���ã���ȫ�Ĵ����� */
#define SOC_PERI_CFG_SC_ULTRASOC_CTRL_REG                (SOC_PERI_CFG_BASE + 0x210C) /* ULTRASOC ���ƼĴ��� */
#define SOC_PERI_CFG_SC_M3_REMAP_ADDR_EN_REG             (SOC_PERI_CFG_BASE + 0x2190) /* m3��ַӳ��ʹ�ܼĴ����� */
#define SOC_PERI_CFG_SC_M3_REMAP_ADDR_0_REG              (SOC_PERI_CFG_BASE + 0x2194) /* M3 remap��spi flash�Ļ���ַ���üĴ����� */
#define SOC_PERI_CFG_SC_M3_REMAP_ADDR_1_REG              (SOC_PERI_CFG_BASE + 0x2198) /* M3 remap��sram�Ļ���ַ���üĴ����� */
#define SOC_PERI_CFG_SC_M3_REMAP_ADDR_2_REG              (SOC_PERI_CFG_BASE + 0x219C) /* M3��ַ��ӳ��Ĵ����� */
#define SOC_PERI_CFG_SC_M3_REMAP_ADDR_3_REG              (SOC_PERI_CFG_BASE + 0x21A0) /* M3��ַ��ӳ��Ĵ����� */
#define SOC_PERI_CFG_SC_M3_REMAP_ADDR_4_REG              (SOC_PERI_CFG_BASE + 0x21A4) /* M3��ַ��ӳ��Ĵ����� */
#define SOC_PERI_CFG_SC_M3_REMAP_ADDR_5_REG              (SOC_PERI_CFG_BASE + 0x21A8) /* M3��ַ��ӳ��Ĵ����� */
#define SOC_PERI_CFG_SC_M3_REMAP_ADDR_6_REG              (SOC_PERI_CFG_BASE + 0x21AC) /* M3��ַ��ӳ��Ĵ����� */
#define SOC_PERI_CFG_SC_M3_REMAP_ADDR_7_REG              (SOC_PERI_CFG_BASE + 0x21B0) /* M3��ַ��ӳ��Ĵ����� */
#define SOC_PERI_CFG_SC_M3_REMAP_ADDR_8_REG              (SOC_PERI_CFG_BASE + 0x21B4) /* M3��ַ��ӳ��Ĵ����� */
#define SOC_PERI_CFG_SC_M3_REMAP_ADDR_9_REG              (SOC_PERI_CFG_BASE + 0x21B8) /* M3��ַ��ӳ��Ĵ����� */
#define SOC_PERI_CFG_SC_M3_REMAP_ADDR_10_REG             (SOC_PERI_CFG_BASE + 0x21BC) /* M3��ַ��ӳ��Ĵ����� */
#define SOC_PERI_CFG_SC_M3_REMAP_ADDR_11_REG             (SOC_PERI_CFG_BASE + 0x21C0) /* M3��ַ��ӳ��Ĵ����� */
#define SOC_PERI_CFG_SC_M3_REMAP_ADDR_12_REG             (SOC_PERI_CFG_BASE + 0x21C4) /* M3��ַ��ӳ��Ĵ����� */
#define SOC_PERI_CFG_SC_M3_REMAP_ADDR_13_REG             (SOC_PERI_CFG_BASE + 0x21C8) /* M3��ַ��ӳ��Ĵ����� */
#define SOC_PERI_CFG_SC_M3_REMAP_ADDR_14_REG             (SOC_PERI_CFG_BASE + 0x21CC) /* M3��ַ��ӳ��Ĵ����� */
#define SOC_PERI_CFG_SC_M3_REMAP_ADDR_15_REG             (SOC_PERI_CFG_BASE + 0x21D0) /* M3��ַ��ӳ��Ĵ����� */
#define SOC_PERI_CFG_SC_CFG_AXUSER_L_M3_0_REG            (SOC_PERI_CFG_BASE + 0x2208) /* Э��AXUSER�ĵ�32bit���üĴ��� */
#define SOC_PERI_CFG_SC_CFG_AXUSER_M_M3_0_REG            (SOC_PERI_CFG_BASE + 0x220C) /* Э��AXUSER���м�32bit���üĴ��� */
#define SOC_PERI_CFG_SC_CFG_AXUSER_H_M3_0_REG            (SOC_PERI_CFG_BASE + 0x2210) /* Э��AXUSER�ĸ�4bit���üĴ��� */
#define SOC_PERI_CFG_SC_CFG_CACHE_CTRL_M3_0_REG          (SOC_PERI_CFG_BASE + 0x2214) /* M3 AXCACHE���ƼĴ��� */
#define SOC_PERI_CFG_SC_CFG_AXUSER_L_M3_1_REG            (SOC_PERI_CFG_BASE + 0x2220) /* Э��AXUSER�ĵ�32bit���üĴ��� */
#define SOC_PERI_CFG_SC_CFG_AXUSER_M_M3_1_REG            (SOC_PERI_CFG_BASE + 0x2224) /* Э��AXUSER���м�32bit���üĴ��� */
#define SOC_PERI_CFG_SC_CFG_AXUSER_H_M3_1_REG            (SOC_PERI_CFG_BASE + 0x2228) /* Э��AXUSER�ĸ�4bit���üĴ��� */
#define SOC_PERI_CFG_SC_CFG_CACHE_CTRL_M3_1_REG          (SOC_PERI_CFG_BASE + 0x222C) /* M3 AXCACHE���ƼĴ��� */
#define SOC_PERI_CFG_SC_CFG_AXUSER_L_M3_2_REG            (SOC_PERI_CFG_BASE + 0x2230) /* Э��AWUSER�ĵ�32bit���üĴ��� */
#define SOC_PERI_CFG_SC_CFG_AXUSER_M_M3_2_REG            (SOC_PERI_CFG_BASE + 0x2234) /* Э��AWUSER���м�32bit���üĴ��� */
#define SOC_PERI_CFG_SC_CFG_AXUSER_H_M3_2_REG            (SOC_PERI_CFG_BASE + 0x2238) /* Э��AWUSER�ĸ�4bit���üĴ��� */
#define SOC_PERI_CFG_SC_CFG_CACHE_CTRL_M3_2_REG          (SOC_PERI_CFG_BASE + 0x223C) /* M3 AXCACHE���ƼĴ��� */
#define SOC_PERI_CFG_SC_QOS_CTRL_M3_REG                  (SOC_PERI_CFG_BASE + 0x2240) /* M3 QOS���ƼĴ��� */
#define SOC_PERI_CFG_SC_QOS_CTRL_GIC_REG                 (SOC_PERI_CFG_BASE + 0x2244) /* GIC QOS���ƼĴ��� */
#define SOC_PERI_CFG_SC_QOS_CTRL_EMMC_REG                (SOC_PERI_CFG_BASE + 0x2248) /* EMMC QOS���ƼĴ��� */
#define SOC_PERI_CFG_SC_QOS_CTRL_SDMAM_REG               (SOC_PERI_CFG_BASE + 0x224C) /* SDMAM QOS���ƼĴ��� */
#define SOC_PERI_CFG_SC_EXT_INT_POLARITY_REG             (SOC_PERI_CFG_BASE + 0x2300) /* �ⲿ�жϼ������üĴ��� */
#define SOC_PERI_CFG_SC_CFG_BUS_CTRL0_REG                (SOC_PERI_CFG_BASE + 0x2400) /* CFG BUS����ֱ���ӳ�ʹ�ܼĴ��� */
#define SOC_PERI_CFG_SC_CFG_BUS_CTRL1_REG                (SOC_PERI_CFG_BASE + 0x2404) /* CFG BUS����ֱ���ӳ������� ���üĴ��� */
#define SOC_PERI_CFG_SC_CFG_BUS_DBG_CTRL0_REG            (SOC_PERI_CFG_BASE + 0x2408) /* CFG BUS����ֱ���ӳ�ʹ�ܼĴ��� */
#define SOC_PERI_CFG_SC_CFG_BUS_DBG_CTRL1_REG            (SOC_PERI_CFG_BASE + 0x240C) /* CFG BUS����ֱ���ӳ������� ���üĴ��� */
#define SOC_PERI_CFG_SC_MEM_CTRL_SMMU_REG                (SOC_PERI_CFG_BASE + 0x3000) /* smmu mem���ƼĴ���0 */
#define SOC_PERI_CFG_SC_MEM_CTRL_GIC_REG                 (SOC_PERI_CFG_BASE + 0x3020) /* gic mem���ƼĴ��� */
#define SOC_PERI_CFG_SC_MEM_CTRL_ULTRASOC_REG            (SOC_PERI_CFG_BASE + 0x3040) /* ultrasoc mem���ƼĴ���0 */
#define SOC_PERI_CFG_SC_MEM_CTRL_CER_REG                 (SOC_PERI_CFG_BASE + 0x3050) /* CER mem���ƼĴ���0 */
#define SOC_PERI_CFG_SC_MEM_CTRL_TRNG_REG                (SOC_PERI_CFG_BASE + 0x3060) /* TRNG mem���ƼĴ���0 */
#define SOC_PERI_CFG_SC_TIMER64_EN_CTRL_REG              (SOC_PERI_CFG_BASE + 0x3104) /* TIMER64���ⲿʹ�ܿ��ƼĴ��� */
#define SOC_PERI_CFG_SC_WDOG_SRST_MASK_REG               (SOC_PERI_CFG_BASE + 0x3200) /* �ǰ�ȫ����λ����MASK���ƼĴ��� */
#define SOC_PERI_CFG_SC_TIMER_CLK_SEL_REG                (SOC_PERI_CFG_BASE + 0x3134) /* TIMER��ʱ��ѡ��Ĵ��� */
#define SOC_PERI_CFG_SC_BUS_NUM_PERI_REG                 (SOC_PERI_CFG_BASE + 0x3400) /* PERI SMMU BUSNUM���üĴ��� */
#define SOC_PERI_CFG_SC_DVE_NUM_PERI_REG                 (SOC_PERI_CFG_BASE + 0x3404) /* PERI SMMU DVENUM���üĴ��� */
#define SOC_PERI_CFG_SC_CFG_BUS_WAIT_REG                 (SOC_PERI_CFG_BASE + 0x3410) /* CFG_BUS ��ʱ�ȴ����üĴ��� */
#define SOC_PERI_CFG_SC_EMMC_CLK_SEL_REG                 (SOC_PERI_CFG_BASE + 0x3500) /* EMMC_CLK_SEL���üĴ��� */
#define SOC_PERI_CFG_SC_AXI_USER_L32_EMMC_REG            (SOC_PERI_CFG_BASE + 0x3504) /* EMMC user��32-bit������üĴ��� */
#define SOC_PERI_CFG_SC_AXI_USER_H32_EMMC_REG            (SOC_PERI_CFG_BASE + 0x3508) /* EMMC user��32-bit������üĴ��� */
#define SOC_PERI_CFG_SC_AXI_USER_67_64_EMMC_REG          (SOC_PERI_CFG_BASE + 0x350C) /* EMMC user[67:64]���üĴ��� */
#define SOC_PERI_CFG_SC_AXI_CACHE_EMMC_REG               (SOC_PERI_CFG_BASE + 0x3510) /* AXI Cache���üĴ��� */
#define SOC_PERI_CFG_SC_AXI_PORT_SEL_REG                 (SOC_PERI_CFG_BASE + 0x3514) /* AXI MUX���üĴ��� */
#define SOC_PERI_CFG_SC_SFC_BYP_CTRL_REG                 (SOC_PERI_CFG_BASE + 0x3518) /* SFC AHB���������üĴ��� */
#define SOC_PERI_CFG_SC_AHB_BYP_CTRL_REG                 (SOC_PERI_CFG_BASE + 0x351C) /* AHB���������üĴ��� */
#define SOC_PERI_CFG_SC_UART_SEL_REG                     (SOC_PERI_CFG_BASE + 0x3520) /* UARTѡ��Ĵ��� */
#define SOC_PERI_CFG_SC_ULTRASOC_USER_CRL_REG            (SOC_PERI_CFG_BASE + 0x3600) /* ULTRASOC AxUSER���üĴ��� */
#define SOC_PERI_CFG_SC_ULTRASOC_AXPROT_CRL_REG          (SOC_PERI_CFG_BASE + 0x3604) /* ULTRASOC AxPROT���üĴ��� */
#define SOC_PERI_CFG_SC_SFC_DAW_CRL_REG                  (SOC_PERI_CFG_BASE + 0x3650) /* DAW SFC���ƼĴ��� */
#define SOC_PERI_CFG_SC_EMMC_HADDR39_CRL_REG             (SOC_PERI_CFG_BASE + 0x3680) /* EMMC HADDR���ƼĴ��� */
#define SOC_PERI_CFG_SC_EXT_INT_MASK_REG                 (SOC_PERI_CFG_BASE + 0x3800) /* �ⲿ�ܽ����μĴ��� */
#define SOC_PERI_CFG_SC_AO_WAKEUP_INT_MASK_REG           (SOC_PERI_CFG_BASE + 0x3804) /* AO�������ж����μĴ��� */
#define SOC_PERI_CFG_SC_TSENSOR1_INT_REG                 (SOC_PERI_CFG_BASE + 0x4010) /* TSENSOR�ж�Դ�Ĵ��� */
#define SOC_PERI_CFG_SC_TSENSOR1_INT_MASK_REG            (SOC_PERI_CFG_BASE + 0x4014) /* TSENSOR�ж����μĴ��� */
#define SOC_PERI_CFG_SC_PCIE_PERST_INT_REG               (SOC_PERI_CFG_BASE + 0x4050) /* PCIE PERST_N�ж�Դ�Ĵ��� */
#define SOC_PERI_CFG_SC_PCIE_PERST_INT_MASK_REG          (SOC_PERI_CFG_BASE + 0x4054) /* PCIE PERST_N�ж����μĴ��� */
#define SOC_PERI_CFG_SC_PWR_CORE_INT_REG                 (SOC_PERI_CFG_BASE + 0x4070) /* CORE���µ��ж�Դ�Ĵ��� */
#define SOC_PERI_CFG_SC_PWR_CORE_INT_MASK_REG            (SOC_PERI_CFG_BASE + 0x4074) /* CORE���µ��ж����μĴ��� */
#define SOC_PERI_CFG_SC_ITS_CLK_ST_REG                   (SOC_PERI_CFG_BASE + 0x5300) /* ITSʱ��״̬�Ĵ��� */
#define SOC_PERI_CFG_SC_FTE_CLK_ST_REG                   (SOC_PERI_CFG_BASE + 0x5308) /* FTEʱ��״̬�Ĵ��� */
#define SOC_PERI_CFG_SC_DBG_CLK_ST_REG                   (SOC_PERI_CFG_BASE + 0x5310) /* DBGʱ��״̬�Ĵ��� */
#define SOC_PERI_CFG_SC_M3_CLK_ST_REG                    (SOC_PERI_CFG_BASE + 0x5318) /* M3ʱ��״̬�Ĵ��� */
#define SOC_PERI_CFG_SC_GPIO_CLK_ST_REG                  (SOC_PERI_CFG_BASE + 0x5320) /* GPIOʱ��״̬�Ĵ��� */
#define SOC_PERI_CFG_SC_GIC_CLK_ST_REG                   (SOC_PERI_CFG_BASE + 0x5330) /* GICʱ��״̬�Ĵ��� */
#define SOC_PERI_CFG_SC_SMMU_ICG_ST_REG                  (SOC_PERI_CFG_BASE + 0x5380) /* SMMUʱ��״̬�Ĵ��� */
#define SOC_PERI_CFG_SC_TIMER32_CLK_ST0_REG              (SOC_PERI_CFG_BASE + 0x5500) /* TIMER32ʱ��״̬�Ĵ��� */
#define SOC_PERI_CFG_SC_TIMER32_CLK_ST1_REG              (SOC_PERI_CFG_BASE + 0x5508) /* TIMER32ʱ��״̬�Ĵ��� */
#define SOC_PERI_CFG_SC_TIMER64_CLK_ST_REG               (SOC_PERI_CFG_BASE + 0x5510) /* TIMER64ʱ��״̬�Ĵ��� */
#define SOC_PERI_CFG_SC_WATCHDOG_CLK_ST_REG              (SOC_PERI_CFG_BASE + 0x5520) /* WADTHDOGʱ��״̬�Ĵ��� */
#define SOC_PERI_CFG_SC_UART_CLK_ST_REG                  (SOC_PERI_CFG_BASE + 0x5548) /* UARTʱ��״̬�Ĵ��� */
#define SOC_PERI_CFG_SC_MDIO_CLK_ST_REG                  (SOC_PERI_CFG_BASE + 0x5560) /* MDIOʱ��״̬�Ĵ��� */
#define SOC_PERI_CFG_SC_SMB_CLK_ST_REG                   (SOC_PERI_CFG_BASE + 0x5590) /* SMBʱ��״̬�Ĵ��� */
#define SOC_PERI_CFG_SC_CER_CLK_ST_REG                   (SOC_PERI_CFG_BASE + 0x5598) /* CERʱ��״̬�Ĵ��� */
#define SOC_PERI_CFG_SC_SFC2X_CLK_ST_REG                 (SOC_PERI_CFG_BASE + 0x55A0) /* SFC2Xʱ��״̬�Ĵ��� */
#define SOC_PERI_CFG_SC_SFC1X_CLK_ST_REG                 (SOC_PERI_CFG_BASE + 0x55A8) /* SFC1Xʱ��״̬�Ĵ��� */
#define SOC_PERI_CFG_SC_SDMA_CLK_ST_REG                  (SOC_PERI_CFG_BASE + 0x55B0) /* SDMAʱ��״̬�Ĵ��� */
#define SOC_PERI_CFG_SC_TRNG_CLK_ST_REG                  (SOC_PERI_CFG_BASE + 0x55B8) /* TRNGʱ��״̬�Ĵ��� */
#define SOC_PERI_CFG_SC_EMMC_CLK_ST_REG                  (SOC_PERI_CFG_BASE + 0x55C0) /* EMMCʱ��״̬�Ĵ��� */
#define SOC_PERI_CFG_SC_ITS_RESET_ST_REG                 (SOC_PERI_CFG_BASE + 0x5A00) /* ITS�ĸ�λ״̬�Ĵ��� */
#define SOC_PERI_CFG_SC_FTE_RESET_ST_REG                 (SOC_PERI_CFG_BASE + 0x5A08) /* FTE��λ״̬�Ĵ��� */
#define SOC_PERI_CFG_SC_DBG_RESET_ST_REG                 (SOC_PERI_CFG_BASE + 0x5A10) /* DBG��λ״̬�Ĵ��� */
#define SOC_PERI_CFG_SC_GPIO_RESET_ST_REG                (SOC_PERI_CFG_BASE + 0x5A20) /* GPIO��λ״̬�Ĵ��� */
#define SOC_PERI_CFG_SC_WATCHDOG_RESET_ST_REG            (SOC_PERI_CFG_BASE + 0x5C00) /* WATCHDOG��λ״̬�Ĵ��� */
#define SOC_PERI_CFG_SC_GIC_RESET_ST_REG                 (SOC_PERI_CFG_BASE + 0x5C08) /* GIC��λ״̬�Ĵ��� */
#define SOC_PERI_CFG_SC_UART_RESET_ST_REG                (SOC_PERI_CFG_BASE + 0x5C28) /* UART��λ״̬�Ĵ��� */
#define SOC_PERI_CFG_SC_MDIO_RESET_ST_REG                (SOC_PERI_CFG_BASE + 0x5C40) /* MDIO��λ״̬�Ĵ��� */
#define SOC_PERI_CFG_SC_M3_RESET_ST_REG                  (SOC_PERI_CFG_BASE + 0x5C68) /* M3��λ״̬�Ĵ��� */
#define SOC_PERI_CFG_SC_SMB_RESET_ST_REG                 (SOC_PERI_CFG_BASE + 0x5C70) /* SMB��λ״̬�Ĵ��� */
#define SOC_PERI_CFG_SC_CER_RESET_ST_REG                 (SOC_PERI_CFG_BASE + 0x5C78) /* CER��λ״̬�Ĵ��� */
#define SOC_PERI_CFG_SC_TIMER_RESET_ST_REG               (SOC_PERI_CFG_BASE + 0x5C80) /* TIMER��λ״̬�Ĵ��� */
#define SOC_PERI_CFG_SC_SFC_RESET_ST_REG                 (SOC_PERI_CFG_BASE + 0x5C90) /* SFC��λ״̬�Ĵ��� */
#define SOC_PERI_CFG_SC_SDMA_RESET_ST_REG                (SOC_PERI_CFG_BASE + 0x5CA0) /* SDMA��λ״̬�Ĵ��� */
#define SOC_PERI_CFG_SC_TRNG_RESET_ST_REG                (SOC_PERI_CFG_BASE + 0x5CA8) /* TRNG��λ״̬�Ĵ��� */
#define SOC_PERI_CFG_SC_EMMC_RESET_ST_REG                (SOC_PERI_CFG_BASE + 0x5CB0) /* EMMC��λ״̬�Ĵ��� */
#define SOC_PERI_CFG_SC_TSENSOR1_ST_REG                  (SOC_PERI_CFG_BASE + 0x60D0) /* tsensorϵͳ״̬�Ĵ����� */
#define SOC_PERI_CFG_SC_TSENSOR1_TEMP_SAMPLE_AVERAGE_REG (SOC_PERI_CFG_BASE + 0x60D4) /* оƬ�¶Ȳ���ֵ */
#define SOC_PERI_CFG_SC_ULTRASOC_MEM_ECC_REG             (SOC_PERI_CFG_BASE + 0x6100) /* UltraSoC Memory ECC״̬ */
#define SOC_PERI_CFG_SC_M3_STAT_REG                      (SOC_PERI_CFG_BASE + 0x6104) 
#define SOC_PERI_CFG_SC_PCIE_PERESET_ST_REG              (SOC_PERI_CFG_BASE + 0x6200) /* PCIE PERST_N�ܽŵ�ƽ״̬�Ĵ����� */
#define SOC_PERI_CFG_SC_EXT_INT_POLARITY_ST_REG          (SOC_PERI_CFG_BASE + 0x6300) /* �ⲿ�ܽ��жϼ������ú��״̬�Ĵ��� */
#define SOC_PERI_CFG_SC_EXT_INT_POLARITY_MASK_ST_REG     (SOC_PERI_CFG_BASE + 0x6304) /* �ⲿ�ܽ��ж��������ú��״̬�Ĵ��� */
#define SOC_PERI_CFG_SC_TRNG_FSM_CTRL_REG                (SOC_PERI_CFG_BASE + 0x8000) /* TRNG FSM״̬�Ĵ��� */
#define SOC_PERI_CFG_SC_TSENSOR1_INT_STATUS_REG          (SOC_PERI_CFG_BASE + 0x8010) /* TSENSOR�ж�״̬�Ĵ��� */
#define SOC_PERI_CFG_SC_PCIE_PERST_INT_STATUS_REG        (SOC_PERI_CFG_BASE + 0x8050) /* PCIE PERST�ж�״̬�Ĵ��� */
#define SOC_PERI_CFG_SC_PWR_CORE_INT_STATUS_REG          (SOC_PERI_CFG_BASE + 0x8070) /* CORE���µ��ж�״̬�Ĵ��� */
#define SOC_PERI_CFG_SC_KEY_INFO_REG                     (SOC_PERI_CFG_BASE + 0xE000) /* �ؼ���Ϣ�Ĵ��� */
#define SOC_PERI_CFG_PERI_CFG_VERSION0_REG               (SOC_PERI_CFG_BASE + 0xE0A0) /* VERSION�Ĵ���0 */
#define SOC_PERI_CFG_PERI_CFG_MAGIC_WORD_REG             (SOC_PERI_CFG_BASE + 0xE0A4) /* PERI_CFG �汾�������Ĵ��� */
#define SOC_PERI_CFG_PERI_CFG_ECO_CFG0_REG               (SOC_PERI_CFG_BASE + 0xE0A8) /* ����ECO���������üĴ���1 */
#define SOC_PERI_CFG_PERI_CFG_ECO_CFG1_REG               (SOC_PERI_CFG_BASE + 0xE0AC) /* ����ECO���������üĴ���1 */
#define SOC_PERI_CFG_PERI_CFG_ECO_CFG2_REG               (SOC_PERI_CFG_BASE + 0xE0B0) /* ����ECO���������üĴ���2 */
#define SOC_PERI_CFG_PERI_CFG_ECO_CFG3_REG               (SOC_PERI_CFG_BASE + 0xE0B4) /* ����ECO���������üĴ���3 */
#define SOC_PERI_CFG_SC_SYSCTRL_LOCK_REG                 (SOC_PERI_CFG_BASE + 0xF100) /* ϵͳ�����������Ĵ�������ע�⣺1���˼Ĵ����ռ�����ǰ�ȫ���ʲ��ܳɹ��� */
#define SOC_PERI_CFG_SC_SYSCTRL_UNLOCK_REG               (SOC_PERI_CFG_BASE + 0xF110) /* ϵͳ�����������Ĵ�������ע�⣺1���˼Ĵ����ռ�����ǰ�ȫ���ʲ��ܳɹ��� */
#define SOC_PERI_CFG_SC_ECO_RSV0_REG                     (SOC_PERI_CFG_BASE + 0xFF00) /* ECO �Ĵ��� */
#define SOC_PERI_CFG_SC_ECO_RSV1_REG                     (SOC_PERI_CFG_BASE + 0xFF04) /* ECO �Ĵ���1 */
#define SOC_PERI_CFG_SC_ECO_RSV2_REG                     (SOC_PERI_CFG_BASE + 0xFF08) /* ECO �Ĵ���2 */
#define SOC_PERI_CFG_SC_ECO_RSV3_REG                     (SOC_PERI_CFG_BASE + 0xFF0C) /* ECO �Ĵ���3 */
#define SOC_PERI_CFG_SC_ECO_RSV4_REG                     (SOC_PERI_CFG_BASE + 0xFF10) /* ECO �Ĵ���4 */
#define SOC_PERI_CFG_SC_ECO_RSV5_REG                     (SOC_PERI_CFG_BASE + 0xFF14) /* ECO �Ĵ���5 */
#define SOC_PERI_CFG_FPGA_VER_REG                        (SOC_PERI_CFG_BASE + 0xFFFC) /* FPGA�汾�Ĵ��� */

#endif // __PERI_CFG_REG_OFFSET_H__
