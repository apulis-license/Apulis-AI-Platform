// ****************************************************************************** 
// Copyright     :  Copyright (C) 2019, Hisilicon Technologies Co. Ltd.
// File name     :  misc_down_cfg_reg_offset.h
// Project line  :  ICT
// Department    :  ICT Processor Chipset Development Dep
// Author        : huawei
// Version       :  1.0
// Date          :  2018/7/2
// Description   :  The description of CLOUD project
// Others        :  Generated automatically by nManager V4.2 
// History       : huawei 2019/01/26 15:24:23 Create file
// ******************************************************************************

#ifndef __MISC_DOWN_CFG_REG_OFFSET_H__
#define __MISC_DOWN_CFG_REG_OFFSET_H__

/* MISC_DOWN_CFG Base address of Module's Register */
#define SOC_MISC_DOWN_CFG_BASE                       (0x160000)

/******************************************************************************/
/*                      SOC MISC_DOWN_CFG Registers' Definitions                            */
/******************************************************************************/

#define SOC_MISC_DOWN_CFG_SC_PLL0_SEL_REG               (SOC_MISC_DOWN_CFG_BASE + 0x8)    /* PLL0ѡ�� */
#define SOC_MISC_DOWN_CFG_SC_PLL0_FCTRL_REG             (SOC_MISC_DOWN_CFG_BASE + 0x10)   /* SC_PLL0_FCTRLΪCDIE_CRG��PLL0������Ƶ */
#define SOC_MISC_DOWN_CFG_SC_PLL0_FCTRL_FRAC_REG        (SOC_MISC_DOWN_CFG_BASE + 0x14)   /* SC_PLL0_FCTRL_FRACΪCDIE_CRG��PLL0С����Ƶ */
#define SOC_MISC_DOWN_CFG_SC_PLL0_HI_FNPLL_CFG0_REG     (SOC_MISC_DOWN_CFG_BASE + 0x20)   /* PLL�������üĴ���;��̬�ź� */
#define SOC_MISC_DOWN_CFG_SC_PLL0_HI_FNPLL_CFG1_REG     (SOC_MISC_DOWN_CFG_BASE + 0x24)   /* PLL�������üĴ���;��̬�ź� */
#define SOC_MISC_DOWN_CFG_SC_PLL0_HI_FNPLL_CFG2_REG     (SOC_MISC_DOWN_CFG_BASE + 0x28)   /* PLL�������üĴ���;��̬�ź� */
#define SOC_MISC_DOWN_CFG_SC_PLL0_HI_FNPLL_CFG3_REG     (SOC_MISC_DOWN_CFG_BASE + 0x2C)   /* PLL�������üĴ���;��̬�ź� */
#define SOC_MISC_DOWN_CFG_SC_PLL0_HI_FNPLL_CFG4_REG     (SOC_MISC_DOWN_CFG_BASE + 0x30)   /* PLL�������üĴ���;��̬�ź� */
#define SOC_MISC_DOWN_CFG_SC_PLL0_HI_FNPLL_CFG5_REG     (SOC_MISC_DOWN_CFG_BASE + 0x34)   /* PLL�������üĴ���;��̬�ź� */
#define SOC_MISC_DOWN_CFG_SC_PLL0_HI_FNPLL_CFG6_REG     (SOC_MISC_DOWN_CFG_BASE + 0x38)   /* PLL�������üĴ���;��̬�ź� */
#define SOC_MISC_DOWN_CFG_SC_PLL0_HI_FNPLL_CFG7_REG     (SOC_MISC_DOWN_CFG_BASE + 0x3C)   /* PLL�������üĴ���;��̬�ź� */
#define SOC_MISC_DOWN_CFG_SC_PLL0_HI_FNPLL_CFG8_REG     (SOC_MISC_DOWN_CFG_BASE + 0x40)   /* PLL�������üĴ���;��̬�ź� */
#define SOC_MISC_DOWN_CFG_SC_PLL0_HI_FNPLL_CFG9_REG     (SOC_MISC_DOWN_CFG_BASE + 0x44)   /* PLL�������üĴ���;��̬�ź� */
#define SOC_MISC_DOWN_CFG_SC_PLL0_HI_FNPLL_CFG10_REG    (SOC_MISC_DOWN_CFG_BASE + 0x48)   /* PLL�������üĴ���;��̬�ź� */
#define SOC_MISC_DOWN_CFG_SC_PLL0_HI_FCTRL_REG          (SOC_MISC_DOWN_CFG_BASE + 0x80)   /* SC_PLL0_HI_FCTRLΪCDIE_CRG��PLL0_HI������Ƶ */
#define SOC_MISC_DOWN_CFG_SC_PLL0_HI_FCTRL_FRAC_REG     (SOC_MISC_DOWN_CFG_BASE + 0x84)   /* SC_PLL0_HI_FCTRL_FRACΪCDIE_CRG��PLL0_HIС����Ƶ */
#define SOC_MISC_DOWN_CFG_SC_PLL_CLK_BYPASS0_REG        (SOC_MISC_DOWN_CFG_BASE + 0xA0)   /* SC_PLL_CLK_BYPASS0ΪCDIE_CRG��PLL��ع���ʱ��ѡ�� */
#define SOC_MISC_DOWN_CFG_SC_SWITCH_CLK_SEL_REG         (SOC_MISC_DOWN_CFG_BASE + 0x110)  /* ����ʱ�ӵķ�Ƶѡ��Ĵ����� */
#define SOC_MISC_DOWN_CFG_SC_TSENSOR_A_CLK_SEL_REG      (SOC_MISC_DOWN_CFG_BASE + 0x120)  /* ����ʱ�ӵķ�Ƶѡ��Ĵ����� */
#define SOC_MISC_DOWN_CFG_SC_BYPASS_ICG_EN_PLL_REG      (SOC_MISC_DOWN_CFG_BASE + 0x160)  /* PLL���ƼĴ����� */
#define SOC_MISC_DOWN_CFG_SC_ACK_DLY_TIME_REG           (SOC_MISC_DOWN_CFG_BASE + 0x200)  /* �ȴ�DDR��HBM��ACK�ĳ�ʱʱ������ */
#define SOC_MISC_DOWN_CFG_SC_TIME_WAIT_EFUSE_DONE_REG   (SOC_MISC_DOWN_CFG_BASE + 0x204)  /* �ȴ�efuse done�ĳ�ʱʱ������ */
#define SOC_MISC_DOWN_CFG_SC_PORN_ENABLE_REG            (SOC_MISC_DOWN_CFG_BASE + 0x220)  /* ������λ�����ϵ���ϵ�ѡ�� */
#define SOC_MISC_DOWN_CFG_SC_REF_CLK_EN_REG             (SOC_MISC_DOWN_CFG_BASE + 0x600)  /* SC_REF_CLK_EN��clk_ref��ʱ��ʹ�ܼĴ����� */
#define SOC_MISC_DOWN_CFG_SC_REF_CLK_DIS_REG            (SOC_MISC_DOWN_CFG_BASE + 0x604)  /* SC_REF_CLK_DIS��clk_refʱ�ӽ�ֹ�Ĵ����� */
#define SOC_MISC_DOWN_CFG_SC_GPIO_CLK_DB_EN_REG         (SOC_MISC_DOWN_CFG_BASE + 0x608)  /* SC_GPIO_DB_CLK_EN��clk_gpio_db��ʱ��ʹ�ܼĴ����� */
#define SOC_MISC_DOWN_CFG_SC_GPIO_CLK_DB_DIS_REG        (SOC_MISC_DOWN_CFG_BASE + 0x60C)  /* SC_GPIO_DB_CLK_DIS��clk_gpio_dbʱ�ӽ�ֹ�Ĵ����� */
#define SOC_MISC_DOWN_CFG_SC_DJTAG_CLK_EN_REG           (SOC_MISC_DOWN_CFG_BASE + 0x618)  /* SC_DJTAG_CLKEN��ʾDJTAG�߼�ʱ��ʹ�����üĴ��� */
#define SOC_MISC_DOWN_CFG_SC_DJTAG_CLK_DIS_REG          (SOC_MISC_DOWN_CFG_BASE + 0x61C)  /* SC_DJTAG_CLK_DIS��ʾDJTAG�߼�ʱ�ӽ�ֹ�Ĵ��� */
#define SOC_MISC_DOWN_CFG_SC_FUNC_MBIST_CLK_EN_REG      (SOC_MISC_DOWN_CFG_BASE + 0x620)  /* FUNC_MBISTʱ��ʹ�ܼĴ��� */
#define SOC_MISC_DOWN_CFG_SC_FUNC_MBIST_CLK_DIS_REG     (SOC_MISC_DOWN_CFG_BASE + 0x624)  /* FUNC_MBISTʱ�ӽ�ֹ�Ĵ��� */
#define SOC_MISC_DOWN_CFG_SC_SYSCNT_CLK_EN_REG          (SOC_MISC_DOWN_CFG_BASE + 0x630)  /* SC_SYSCNT_CLK_EN��clk_syscnt��ʱ��ʹ�ܼĴ����� */
#define SOC_MISC_DOWN_CFG_SC_SYSCNT_CLK_DIS_REG         (SOC_MISC_DOWN_CFG_BASE + 0x634)  /* SC_SYSCNT_CLK_DIS��clk_syscntʱ�ӽ�ֹ�Ĵ����� */
#define SOC_MISC_DOWN_CFG_SC_DCIP_CLK_EN_REG            (SOC_MISC_DOWN_CFG_BASE + 0x650)  /* SC_DCIP_CLK_EN��ʱ��ʹ�ܼĴ����� */
#define SOC_MISC_DOWN_CFG_SC_DCIP_CLK_DIS_REG           (SOC_MISC_DOWN_CFG_BASE + 0x654)  /* SC_DCIP_CLK_DIS��DCIPʱ�ӽ�ֹ�Ĵ����� */
#define SOC_MISC_DOWN_CFG_SC_MESH_CLK_EN_REG            (SOC_MISC_DOWN_CFG_BASE + 0x700)  /* MESHʱ��ʹ�ܼĴ��� */
#define SOC_MISC_DOWN_CFG_SC_MESH_CLK_DIS_REG           (SOC_MISC_DOWN_CFG_BASE + 0x704)  /* MESHʱ�ӽ�ֹ�Ĵ��� */
#define SOC_MISC_DOWN_CFG_SC_HW_AIC_RESET_REQ_REG       (SOC_MISC_DOWN_CFG_BASE + 0xA00)  /* AIC��λ������ƼĴ��� */
#define SOC_MISC_DOWN_CFG_SC_HW_AIC_RESET_DREQ_REG      (SOC_MISC_DOWN_CFG_BASE + 0xA04)  /* AIC��λȥ������ƼĴ��� */
#define SOC_MISC_DOWN_CFG_SC_ACG_RESET_REQ_REG          (SOC_MISC_DOWN_CFG_BASE + 0xB00)  /* ACG FFS��λ�������üĴ��� */
#define SOC_MISC_DOWN_CFG_SC_ACG_RESET_DREQ_REG         (SOC_MISC_DOWN_CFG_BASE + 0xB04)  /* ACG FFS��λ�������üĴ��� */
#define SOC_MISC_DOWN_CFG_SC_CPM_RESET_REQ_REG          (SOC_MISC_DOWN_CFG_BASE + 0xB08)  /* ACG CPM��λ�������üĴ��� */
#define SOC_MISC_DOWN_CFG_SC_CPM_RESET_DREQ_REG         (SOC_MISC_DOWN_CFG_BASE + 0xB0C)  /* ACG CPM��λ�������üĴ��� */
#define SOC_MISC_DOWN_CFG_SC_DCIP_RESET_REQ_REG         (SOC_MISC_DOWN_CFG_BASE + 0xC60)  /* DCIPS��λ�����źš� */
#define SOC_MISC_DOWN_CFG_SC_DCIP_RESET_DREQ_REG        (SOC_MISC_DOWN_CFG_BASE + 0xC64)  /* DCIP��λȥ�����źš� */
#define SOC_MISC_DOWN_CFG_SC_DJTAG_RESET_REQ_REG        (SOC_MISC_DOWN_CFG_BASE + 0xD18)  /* SC_DJTAG_SRST_REQ��ʾDJTAG�߼���λ����Ĵ��� */
#define SOC_MISC_DOWN_CFG_SC_DJTAG_RESET_DREQ_REG       (SOC_MISC_DOWN_CFG_BASE + 0xD1C)  /* SC_DJTAG_SRST_DREQ��ʾDJTAG�߼���λȥ����Ĵ��� */
#define SOC_MISC_DOWN_CFG_SC_FUNC_MBIST_RESET_REQ_REG   (SOC_MISC_DOWN_CFG_BASE + 0xD20)  /* SC_FUNC_MBIST_RESET_REQ��ʾ�Ե�ǰFUNC_MBIST��RST_REQ�źŵ����á� */
#define SOC_MISC_DOWN_CFG_SC_FUNC_MBIST_RESET_DREQ_REG  (SOC_MISC_DOWN_CFG_BASE + 0xD24)  /* SC_FUNC_MBIST_RESET_DEREQ��ʾ�Ե�ǰFUNC_MBIST��RST_REQ�źŵ�ȥ��λ�� */
#define SOC_MISC_DOWN_CFG_SC_SYSCNT_RESET_REQ_REG       (SOC_MISC_DOWN_CFG_BASE + 0xD30)  /* SC_SYSCNT_SRST_REQ��ʾSYSCNT�߼���λ����Ĵ��� */
#define SOC_MISC_DOWN_CFG_SC_SYSCNT_RESET_DREQ_REG      (SOC_MISC_DOWN_CFG_BASE + 0xD34)  /* SC_SYSCNT_SRST_DREQ��ʾSYSCNT�߼���λȥ����Ĵ��� */
#define SOC_MISC_DOWN_CFG_SC_SYSCNT_CLK_SEL_REG         (SOC_MISC_DOWN_CFG_BASE + 0x2008) /* SYSCNTʱ��ѡ��Ĵ����� */
#define SOC_MISC_DOWN_CFG_SC_HBM_ENABLE0_REG            (SOC_MISC_DOWN_CFG_BASE + 0x2200) /* HBM0��HBM1ʹ�����ָʾ�Ĵ��� */
#define SOC_MISC_DOWN_CFG_SC_HBM_ENABLE1_REG            (SOC_MISC_DOWN_CFG_BASE + 0x2204) /* HBM2��HBM3ʹ�����ָʾ�Ĵ��� */
#define SOC_MISC_DOWN_CFG_SC_DDRC_ENABLE_REG            (SOC_MISC_DOWN_CFG_BASE + 0x2208) /* DDRCʹ�����ָʾ�Ĵ��� */
#define SOC_MISC_DOWN_CFG_SC_ACG_CFG0_REG               (SOC_MISC_DOWN_CFG_BASE + 0x3600) /* ACG��ACG�����üĴ��� */
#define SOC_MISC_DOWN_CFG_SC_ACG_CFG1_REG               (SOC_MISC_DOWN_CFG_BASE + 0x3614) /* ACG���üĴ���1 */
#define SOC_MISC_DOWN_CFG_SC_ACG_CFG2_REG               (SOC_MISC_DOWN_CFG_BASE + 0x3618) /* ACG��CPM�����üĴ��� */
#define SOC_MISC_DOWN_CFG_SC_ACG_BYPASS_REG             (SOC_MISC_DOWN_CFG_BASE + 0x3650) 
#define SOC_MISC_DOWN_CFG_SC_MESH_REACTIVATE_EN_REG     (SOC_MISC_DOWN_CFG_BASE + 0x3750) /* MESHʱ�����¼������üĴ��� */
#define SOC_MISC_DOWN_CFG_SC_MESH_REACTIVATE_CYCLES_REG (SOC_MISC_DOWN_CFG_BASE + 0x3754) /* MESHʱ�����¼���CYCLES���Ĵ��� */
#define SOC_MISC_DOWN_CFG_SC_PLL_SRC_INT_REG            (SOC_MISC_DOWN_CFG_BASE + 0x4000) /* PLL�ж�Դ�Ĵ��� */
#define SOC_MISC_DOWN_CFG_SC_PLL_INT_MASK_REG           (SOC_MISC_DOWN_CFG_BASE + 0x4004) /* PLL�ж����μĴ��� */
#define SOC_MISC_DOWN_CFG_SC_LAST_RST_STATUS_CLR_REG    (SOC_MISC_DOWN_CFG_BASE + 0x4100) /* ��λԭ���¼����Ĵ��� */
#define SOC_MISC_DOWN_CFG_SC_JITTER_MONITOR_CFG0_REG    (SOC_MISC_DOWN_CFG_BASE + 0x4400) /* JITTER MONITOR���üĴ��� */
#define SOC_MISC_DOWN_CFG_SC_JITTER_MONITOR_CFG1_REG    (SOC_MISC_DOWN_CFG_BASE + 0x4404) /* JITTER MONITOR���üĴ��� */
#define SOC_MISC_DOWN_CFG_SC_JITTER_MONITOR_CFG2_REG    (SOC_MISC_DOWN_CFG_BASE + 0x4408) /* JITTER MONITOR���üĴ��� */
#define SOC_MISC_DOWN_CFG_SC_JITTER_MONITOR_CFG3_REG    (SOC_MISC_DOWN_CFG_BASE + 0x440C) /* JITTER MONITOR���üĴ��� */
#define SOC_MISC_DOWN_CFG_SC_JITTER_MONITOR_CFG4_REG    (SOC_MISC_DOWN_CFG_BASE + 0x4410) /* JITTER MONITOR���üĴ��� */
#define SOC_MISC_DOWN_CFG_SC_JITTER_MONITOR_CFG5_REG    (SOC_MISC_DOWN_CFG_BASE + 0x4414) /* JITTER MONITOR���üĴ��� */
#define SOC_MISC_DOWN_CFG_SC_PLL_LOCK_STATUS_REG        (SOC_MISC_DOWN_CFG_BASE + 0x5000) /* PLL����״̬�Ĵ����� */
#define SOC_MISC_DOWN_CFG_PLL0_HI_FNPLL_STATE0_REG      (SOC_MISC_DOWN_CFG_BASE + 0x5004) /* PLL���״̬�Ĵ���;��̬�ź� */
#define SOC_MISC_DOWN_CFG_PLL0_HI_FNPLL_STATE1_REG      (SOC_MISC_DOWN_CFG_BASE + 0x5008) /* PLL���״̬�Ĵ���;��̬�ź� */
#define SOC_MISC_DOWN_CFG_SC_REF_CLK_ST_REG             (SOC_MISC_DOWN_CFG_BASE + 0x5600) /* SC_REF_CLK_ST��ʾCDIE_CRG��ref_clk��ʱ��״̬�� */
#define SOC_MISC_DOWN_CFG_SC_GPIO_DB_CLK_ST_REG         (SOC_MISC_DOWN_CFG_BASE + 0x5608) /* SC_GPIO_DB_CLK_ST��ʾCDIE_CRG��gpio_db_clk��ʱ��״̬�� */
#define SOC_MISC_DOWN_CFG_SC_DJTAG_CLK_ST_REG           (SOC_MISC_DOWN_CFG_BASE + 0x5618) /* SC_DJTAG_CLK_ST��ʾDJTAG����߼�ʱ��״̬ */
#define SOC_MISC_DOWN_CFG_SC_FUNC_MBIST_CLK_ST_REG      (SOC_MISC_DOWN_CFG_BASE + 0x5620) /* FUNC_MBISTʱ��״̬�Ĵ��� */
#define SOC_MISC_DOWN_CFG_SC_SYSCNT_CLK_ST_REG          (SOC_MISC_DOWN_CFG_BASE + 0x5630) /* SC_SYSCNT_CLK_ST��ʾCDIE_CRG��syscnt_clk��ʱ��״̬�� */
#define SOC_MISC_DOWN_CFG_SC_DCBIST_CLK_ST_REG          (SOC_MISC_DOWN_CFG_BASE + 0x5650) /* SC_DCBIST_CLK_ST��ʾDCIP��ʱ��״̬�� */
#define SOC_MISC_DOWN_CFG_SC_MESH_CLK_ST_REG            (SOC_MISC_DOWN_CFG_BASE + 0x5700) /* MESH��ʱ��״̬�Ĵ����� */
#define SOC_MISC_DOWN_CFG_SC_HW_AIC_RESET_ST_REG        (SOC_MISC_DOWN_CFG_BASE + 0x5A00) /* HW_AIC�ĵ�ǰ��λ״̬ */
#define SOC_MISC_DOWN_CFG_SC_ACG_RESET_ST_REG           (SOC_MISC_DOWN_CFG_BASE + 0x5B00) /* ACG��RST_REQ�źŵ�״̬�� */
#define SOC_MISC_DOWN_CFG_SC_CPM_RESET_ST_REG           (SOC_MISC_DOWN_CFG_BASE + 0x5B08) /* CPM��RST_REQ�źŵ�״̬�� */
#define SOC_MISC_DOWN_CFG_SC_DCIP_TRESET_ST_REG         (SOC_MISC_DOWN_CFG_BASE + 0x5C60) /* DCIP��RST_REQ�źŵ�״̬�� */
#define SOC_MISC_DOWN_CFG_SC_DJTAG_RESET_ST_REG         (SOC_MISC_DOWN_CFG_BASE + 0x5D18) /* SC_DJTAG_SRST_ST��ʾDJTAG����߼���λ״̬ */
#define SOC_MISC_DOWN_CFG_SC_FUNC_MBIST_RESET_ST_REG    (SOC_MISC_DOWN_CFG_BASE + 0x5D20) /* SC_FUNC_MBIST_RESET_ST��ʾ�Ե�ǰFUNC_MBIST��RST_REQ�źŵ�״̬�� */
#define SOC_MISC_DOWN_CFG_SC_SYSCNT_RESET_ST_REG        (SOC_MISC_DOWN_CFG_BASE + 0x5D30) /* SC_SYSCNT_SRST_ST��ʾDJTAG����߼���λ״̬ */
#define SOC_MISC_DOWN_CFG_SC_LAST_RST_STATUS_REG        (SOC_MISC_DOWN_CFG_BASE + 0x6100) /* ��λԭ���¼�Ĵ��� */
#define SOC_MISC_DOWN_CFG_SC_JITTER_MONITOR_STATE0_REG  (SOC_MISC_DOWN_CFG_BASE + 0x6200) /* JITTER MONITOR״̬�Ĵ��� */
#define SOC_MISC_DOWN_CFG_SC_JITTER_MONITOR_STATE1_REG  (SOC_MISC_DOWN_CFG_BASE + 0x6204) /* JITTER MONITOR״̬�Ĵ��� */
#define SOC_MISC_DOWN_CFG_SC_JITTER_MONITOR_STATE2_REG  (SOC_MISC_DOWN_CFG_BASE + 0x6208) /* JITTER MONITOR״̬�Ĵ��� */
#define SOC_MISC_DOWN_CFG_SC_JITTER_MONITOR_STATE3_REG  (SOC_MISC_DOWN_CFG_BASE + 0x620C) /* JITTER MONITOR״̬�Ĵ��� */
#define SOC_MISC_DOWN_CFG_SC_ACG_ST0_REG                (SOC_MISC_DOWN_CFG_BASE + 0x6600) /* ACG״̬�Ĵ��� */
#define SOC_MISC_DOWN_CFG_SC_ACG_ST1_REG                (SOC_MISC_DOWN_CFG_BASE + 0x6604) /* ACG��CPM��״̬�Ĵ��� */
#define SOC_MISC_DOWN_CFG_SC_PLL_INT_STATUS_REG         (SOC_MISC_DOWN_CFG_BASE + 0x8000) /* PLL�ж�״̬�Ĵ��� */
#define SOC_MISC_DOWN_CFG_SC_SYSCTRL_LOCK_REG           (SOC_MISC_DOWN_CFG_BASE + 0xF100) /* ϵͳ�����������Ĵ�������ע�⣺1���˼Ĵ����ռ�����ǰ�ȫ���ʲ��ܳɹ��� */
#define SOC_MISC_DOWN_CFG_SC_SYSCTRL_UNLOCK_REG         (SOC_MISC_DOWN_CFG_BASE + 0xF110) /* ϵͳ�����������Ĵ�������ע�⣺1���˼Ĵ����ռ�����ǰ�ȫ���ʲ��ܳɹ��� */
#define SOC_MISC_DOWN_CFG_SC_ECO_RSV0_REG               (SOC_MISC_DOWN_CFG_BASE + 0xFF00) /* ECO �Ĵ��� */
#define SOC_MISC_DOWN_CFG_SC_ECO_RSV1_REG               (SOC_MISC_DOWN_CFG_BASE + 0xFF04) /* ECO �Ĵ���1 */
#define SOC_MISC_DOWN_CFG_SC_ECO_RSV2_REG               (SOC_MISC_DOWN_CFG_BASE + 0xFF08) /* ECO �Ĵ���2 */
#define SOC_MISC_DOWN_CFG_SC_ECO_RSV3_REG               (SOC_MISC_DOWN_CFG_BASE + 0xFF0C) /* ECO �Ĵ���3 */
#define SOC_MISC_DOWN_CFG_SC_ECO_RSV4_REG               (SOC_MISC_DOWN_CFG_BASE + 0xFF10) /* ECO �Ĵ���4 */
#define SOC_MISC_DOWN_CFG_SC_ECO_RSV5_REG               (SOC_MISC_DOWN_CFG_BASE + 0xFF14) /* ECO �Ĵ���5 */
#define SOC_MISC_DOWN_CFG_FPGA_VER_REG                  (SOC_MISC_DOWN_CFG_BASE + 0xFFFC) /* FPGA�汾�Ĵ��� */

#endif // __MISC_DOWN_CFG_REG_OFFSET_H__
