// ****************************************************************************** 
// Copyright     :  Copyright (C) 2019, Hisilicon Technologies Co. Ltd.
// File name     :  dha_reg_offset.h
// Department    :  CAD Development Department
// Author        :  xxx
// Version       :  1
// Date          :  2013/3/10
// Description   :  The description of xxx project
// Others        :  Generated automatically by nManager V4.2 
// History       :  xxx 2019/06/18 22:47:19 Create file
// ******************************************************************************

#ifndef __DHA_REG_OFFSET_H__
#define __DHA_REG_OFFSET_H__

/* DHA Base address of Module's Register */
#define SOC_DHA_BASE                       (0x1000)

/******************************************************************************/
/*                      SOC DHA Registers' Definitions                            */
/******************************************************************************/

#define SOC_DHA_DHA_CTRL_REG             (SOC_DHA_BASE + 0x0)    /* DHA���ƼĴ���(��̬����) */
#define SOC_DHA_DHA_CC_CTRL_REG          (SOC_DHA_BASE + 0x4)    /* DHAһ���Կ��ƼĴ���(��̬����) */
#define SOC_DHA_DHA_INIT_CTRL_REG        (SOC_DHA_BASE + 0x8)    /* DHA��ʼ�����ƼĴ��� */
#define SOC_DHA_DHA_DIR_CTRL_REG         (SOC_DHA_BASE + 0xC)    /* DHA Dir���ƼĴ���(��̬����) */
#define SOC_DHA_DHA_FUNC_DIS_REG         (SOC_DHA_BASE + 0x10)   /* DHA���ܹرռĴ���(��̬����) */
#define SOC_DHA_DHA_L2_CTRL_REG          (SOC_DHA_BASE + 0x14)   /* L2���ƼĴ�������̬���ã� */
#define SOC_DHA_DHA_L2_FLUSH_CTRL_REG    (SOC_DHA_BASE + 0x18)   /* L2 FLUSH���ƼĴ��� */
#define SOC_DHA_DHA_L2_FLUSH_REG         (SOC_DHA_BASE + 0x1C)   /* L2 FLUSH״̬�Ĵ�������̬���ã� */
#define SOC_DHA_DHA_TOTEM_NUM_REG        (SOC_DHA_BASE + 0x20)   /* ϵͳTotem�ṹ���üĴ���(��̬����) */
#define SOC_DHA_DHA_CANUML_REG           (SOC_DHA_BASE + 0x24)   /* DHA CA�ṹ���üĴ�����λ(��̬����) */
#define SOC_DHA_DHA_CANUMH_REG           (SOC_DHA_BASE + 0x28)   /* DHA CA�ṹ���üĴ�����λ(��̬����) */
#define SOC_DHA_DHA_INTLV_REG            (SOC_DHA_BASE + 0x2C)   /* DHA�ڵ�ַ��֯���üĴ�������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_CBUF_SCH_TH_REG      (SOC_DHA_BASE + 0x30)   /* DHA��CBUF�ĵ��Ȳο�ˮ��ֵ���üĴ��� */
#define SOC_DHA_DHA_CBUF_RETRY_TH_REG    (SOC_DHA_BASE + 0x34)   /* DHA��CBUF��retryˮ��ֵ���üĴ��� */
#define SOC_DHA_DHA_RXREQ_SCHCOEF_REG    (SOC_DHA_BASE + 0x38)   /* DHA��CBUF���Ⱥ�IQ��Pgnt������ϵ�����üĴ��� */
#define SOC_DHA_DHA_DMA_CTRL_REG         (SOC_DHA_BASE + 0x60)   /* DMA���ƼĴ��� */
#define SOC_DHA_DHA_DMA_THRES_REG        (SOC_DHA_BASE + 0x64)   /* DHA DMAˮ�����üĴ��� */
#define SOC_DHA_DHA_DMABW_CTRL0_REG      (SOC_DHA_BASE + 0x68)   /* SDMA��һ�������������üĴ��� */
#define SOC_DHA_DHA_DMABW_CTRL1_REG      (SOC_DHA_BASE + 0x6C)   /* SDMA�ڶ��������������üĴ��� */
#define SOC_DHA_DHA_RSPCOMB_PORT0_REG    (SOC_DHA_BASE + 0x80)   /* ϵͳ֧�ֵ�CCIX Port0����(���dbidResp��compResp��Ҫ�ϲ�ΪcompdbidResp���ص���������,��Ҫ��DVPP) */
#define SOC_DHA_DHA_RSPCOMB_PORT1_REG    (SOC_DHA_BASE + 0x84)   /* ϵͳ֧�ֵ�CCIX Port1����(��̬����) */
#define SOC_DHA_DHA_CACHE_MODE_REG       (SOC_DHA_BASE + 0x88)   /* L3 cacheģʽ���üĴ���(��̬����) */
#define SOC_DHA_DHA_DDRINTLV_ADDR_REG    (SOC_DHA_BASE + 0x8C)   /* ��DDR��֯ģʽѡȡ�ĵ�ַ�����ã���ȫ���Ծ�̬���üĴ����� */
#define SOC_DHA_DHA_SRAMINTLV_REG        (SOC_DHA_BASE + 0x98)   /* L3D��ΪSRAMʹ��ʱ�Ľ�֯���ƼĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW_CTRL_REG         (SOC_DHA_BASE + 0xC0)   /* DAW���ÿ��ƼĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW_EN_REG           (SOC_DHA_BASE + 0xD0)   /* DAW����ʹ�ܼĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW0_ADDR_REG        (SOC_DHA_BASE + 0x100)  /* һ��DAW0��ʼ��ַ���á�����ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW0_SIZE_ID_REG     (SOC_DHA_BASE + 0x104)  /* һ��DAW0���ڴ�С��Ŀ�����á�����ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW1_ADDR_REG        (SOC_DHA_BASE + 0x110)  /* һ��DAW1��ʼ��ַ���á�����ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW1_SIZE_ID_REG     (SOC_DHA_BASE + 0x114)  /* һ��DAW1���ڴ�С��Ŀ�����á�����ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW2_ADDR_REG        (SOC_DHA_BASE + 0x120)  /* һ��DAW2��ʼ��ַ���á�����ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW2_SIZE_ID_REG     (SOC_DHA_BASE + 0x124)  /* һ��DAW2���ڴ�С��Ŀ�����á�����ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW3_ADDR_REG        (SOC_DHA_BASE + 0x130)  /* һ��DAW3��ʼ��ַ���á�����ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW3_SIZE_ID_REG     (SOC_DHA_BASE + 0x134)  /* һ��DAW3���ڴ�С��Ŀ�����üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW4_ADDR_REG        (SOC_DHA_BASE + 0x140)  /* һ��DAW4��ʼ��ַ���üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW4_SIZE_ID_REG     (SOC_DHA_BASE + 0x144)  /* һ��DAW4���ڴ�С��Ŀ�����üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW5_ADDR_REG        (SOC_DHA_BASE + 0x150)  /* һ��DAW5��ʼ��ַ���üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW5_SIZE_ID_REG     (SOC_DHA_BASE + 0x154)  /* һ��DAW5���ڴ�С��Ŀ�����üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW6_ADDR_REG        (SOC_DHA_BASE + 0x160)  /* һ��DAW6��ʼ��ַ���üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW6_SIZE_ID_REG     (SOC_DHA_BASE + 0x164)  /* һ��DAW6���ڴ�С��Ŀ�����üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW7_ADDR_REG        (SOC_DHA_BASE + 0x170)  /* һ��DAW7��ʼ��ַ���üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW7_SIZE_ID_REG     (SOC_DHA_BASE + 0x174)  /* һ��DAW7���ڴ�С��Ŀ�����üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW8_ADDR_REG        (SOC_DHA_BASE + 0x180)  /* һ��DAW8��ʼ��ַ���üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW8_SIZE_ID_REG     (SOC_DHA_BASE + 0x184)  /* һ��DAW8���ڴ�С��Ŀ�����üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW9_ADDR_REG        (SOC_DHA_BASE + 0x190)  /* һ��DAW9��ʼ��ַ���üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW9_SIZE_ID_REG     (SOC_DHA_BASE + 0x194)  /* һ��DAW9���ڴ�С��Ŀ�����üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW10_ADDR_REG       (SOC_DHA_BASE + 0x1A0)  /* һ��DAW10��ʼ��ַ���üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW10_SIZE_ID_REG    (SOC_DHA_BASE + 0x1A4)  /* һ��DAW10���ڴ�С��Ŀ�����üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW11_ADDR_REG       (SOC_DHA_BASE + 0x1B0)  /* һ��DAW11��ʼ��ַ���üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW11_SIZE_ID_REG    (SOC_DHA_BASE + 0x1B4)  /* һ��DAW11���ڴ�С��Ŀ�����üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW12_ADDR_REG       (SOC_DHA_BASE + 0x1C0)  /* һ��DAW12��ʼ��ַ���üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW12_SIZE_ID_REG    (SOC_DHA_BASE + 0x1C4)  /* һ��DAW12���ڴ�С��Ŀ�����üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW13_ADDR_REG       (SOC_DHA_BASE + 0x1D0)  /* һ��DAW13��ʼ��ַ���üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW13_SIZE_ID_REG    (SOC_DHA_BASE + 0x1D4)  /* һ��DAW13���ڴ�С��Ŀ�����üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW14_ADDR_REG       (SOC_DHA_BASE + 0x1E0)  /* һ��DAW14��ʼ��ַ���üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW14_SIZE_ID_REG    (SOC_DHA_BASE + 0x1E4)  /* һ��DAW14���ڴ�С��Ŀ�����üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW15_ADDR_REG       (SOC_DHA_BASE + 0x1F0)  /* һ��DAW15��ʼ��ַ���üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW15_SIZE_ID_REG    (SOC_DHA_BASE + 0x1F4)  /* һ��DAW15���ڴ�С��Ŀ�����üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW16_ADDR_REG       (SOC_DHA_BASE + 0x200)  /* һ��DAW16��ʼ��ַ���üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW16_SIZE_ID_REG    (SOC_DHA_BASE + 0x204)  /* һ��DAW16���ڴ�С��Ŀ�����üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW17_ADDR_REG       (SOC_DHA_BASE + 0x210)  /* һ��DAW17��ʼ��ַ���üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW17_SIZE_ID_REG    (SOC_DHA_BASE + 0x214)  /* һ��DAW17���ڴ�С��Ŀ�����üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW18_ADDR_REG       (SOC_DHA_BASE + 0x220)  /* һ��DAW18��ʼ��ַ���üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW18_SIZE_ID_REG    (SOC_DHA_BASE + 0x224)  /* һ��DAW18���ڴ�С��Ŀ�����üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW19_ADDR_REG       (SOC_DHA_BASE + 0x230)  /* һ��DAW19��ʼ��ַ���üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW19_SIZE_ID_REG    (SOC_DHA_BASE + 0x234)  /* һ��DAW19���ڴ�С��Ŀ�����üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW20_ADDR_REG       (SOC_DHA_BASE + 0x240)  /* һ��DAW20��ʼ��ַ���üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW20_SIZE_ID_REG    (SOC_DHA_BASE + 0x244)  /* һ��DAW20���ڴ�С��Ŀ�����üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW21_ADDR_REG       (SOC_DHA_BASE + 0x250)  /* һ��DAW21��ʼ��ַ���üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW21_SIZE_ID_REG    (SOC_DHA_BASE + 0x254)  /* һ��DAW21���ڴ�С��Ŀ�����üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW22_ADDR_REG       (SOC_DHA_BASE + 0x260)  /* һ��DAW22��ʼ��ַ���üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW22_SIZE_ID_REG    (SOC_DHA_BASE + 0x264)  /* һ��DAW22���ڴ�С��Ŀ�����üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW23_ADDR_REG       (SOC_DHA_BASE + 0x270)  /* һ��DAW23��ʼ��ַ���üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW23_SIZE_ID_REG    (SOC_DHA_BASE + 0x274)  /* һ��DAW23���ڴ�С��Ŀ�����üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW24_ADDR_REG       (SOC_DHA_BASE + 0x280)  /* һ��DAW24��ʼ��ַ���üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW24_SIZE_ID_REG    (SOC_DHA_BASE + 0x284)  /* һ��DAW24���ڴ�С��Ŀ�����üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW25_ADDR_REG       (SOC_DHA_BASE + 0x290)  /* һ��DAW25��ʼ��ַ���üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW25_SIZE_ID_REG    (SOC_DHA_BASE + 0x294)  /* һ��DAW25���ڴ�С��Ŀ�����üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW26_ADDR_REG       (SOC_DHA_BASE + 0x2A0)  /* һ��DAW26��ʼ��ַ���üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW26_SIZE_ID_REG    (SOC_DHA_BASE + 0x2A4)  /* һ��DAW26���ڴ�С��Ŀ�����üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW27_ADDR_REG       (SOC_DHA_BASE + 0x2B0)  /* һ��DAW27��ʼ��ַ���üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW27_SIZE_ID_REG    (SOC_DHA_BASE + 0x2B4)  /* һ��DAW27���ڴ�С��Ŀ�����üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW28_ADDR_REG       (SOC_DHA_BASE + 0x2C0)  /* һ��DAW28��ʼ��ַ���üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW28_SIZE_ID_REG    (SOC_DHA_BASE + 0x2C4)  /* һ��DAW28���ڴ�С��Ŀ�����üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW29_ADDR_REG       (SOC_DHA_BASE + 0x2D0)  /* һ��DAW29��ʼ��ַ���üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW29_SIZE_ID_REG    (SOC_DHA_BASE + 0x2D4)  /* һ��DAW29���ڴ�С��Ŀ�����üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW30_ADDR_REG       (SOC_DHA_BASE + 0x2E0)  /* һ��DAW30��ʼ��ַ���üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW30_SIZE_ID_REG    (SOC_DHA_BASE + 0x2E4)  /* һ��DAW30���ڴ�С��Ŀ�����üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW31_ADDR_REG       (SOC_DHA_BASE + 0x2F0)  /* һ��DAW31��ʼ��ַ���üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DAW31_SIZE_ID_REG    (SOC_DHA_BASE + 0x2F4)  /* һ��DAW31���ڴ�С��Ŀ�����üĴ���������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_SEC_CTRL_REG         (SOC_DHA_BASE + 0x300)  /* DHA��ȫ���ƼĴ�����ַ��֯���üĴ�������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_SEC_ADDR0_REG        (SOC_DHA_BASE + 0x310)  /* DHA��ȫ�ռ��ַ�Ĵ�����ַ��֯���üĴ�������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_SEC_ADDR1_REG        (SOC_DHA_BASE + 0x314)  /* DHA��ȫ�ռ��ַ�Ĵ�����ַ��֯���üĴ�������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_SEC_ADDR2_REG        (SOC_DHA_BASE + 0x318)  /* DHA��ȫ�ռ��ַ�Ĵ�����ַ��֯���üĴ�������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_SEC_ADDR3_REG        (SOC_DHA_BASE + 0x31C)  /* DHA��ȫ�ռ��ַ�Ĵ�����ַ��֯���üĴ�������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_SEC_ADDR4_REG        (SOC_DHA_BASE + 0x320)  /* DHA��ȫ�ռ��ַ�Ĵ�����ַ��֯���üĴ�������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_SEC_ADDR5_REG        (SOC_DHA_BASE + 0x324)  /* DHA��ȫ�ռ��ַ�Ĵ�����ַ��֯���üĴ�������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_SEC_ADDR6_REG        (SOC_DHA_BASE + 0x328)  /* DHA��ȫ�ռ��ַ�Ĵ�����ַ��֯���üĴ�������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_SEC_ADDR7_REG        (SOC_DHA_BASE + 0x32C)  /* DHA��ȫ�ռ��ַ�Ĵ�����ַ��֯���üĴ�������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_SEC_SIZE0_REG        (SOC_DHA_BASE + 0x330)  /* DHA��ȫ�ռ䷶Χ�Ĵ�����ַ��֯���üĴ�������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_SEC_SIZE1_REG        (SOC_DHA_BASE + 0x334)  /* DHA��ȫ�ռ䷶Χ�Ĵ�����ַ��֯���üĴ�������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_SEC_SIZE2_REG        (SOC_DHA_BASE + 0x338)  /* DHA��ȫ�ռ䷶Χ�Ĵ�����ַ��֯���üĴ�������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_SEC_SIZE3_REG        (SOC_DHA_BASE + 0x33C)  /* DHA��ȫ�ռ䷶Χ�Ĵ�����ַ��֯���üĴ�������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_SEC_SIZE4_REG        (SOC_DHA_BASE + 0x340)  /* DHA��ȫ�ռ䷶Χ�Ĵ�����ַ��֯���üĴ�������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_SEC_SIZE5_REG        (SOC_DHA_BASE + 0x344)  /* DHA��ȫ�ռ䷶Χ�Ĵ�����ַ��֯���üĴ�������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_SEC_SIZE6_REG        (SOC_DHA_BASE + 0x348)  /* DHA��ȫ�ռ䷶Χ�Ĵ�����ַ��֯���üĴ�������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_SEC_SIZE7_REG        (SOC_DHA_BASE + 0x34C)  /* DHA��ȫ�ռ䷶Χ�Ĵ�����ַ��֯���üĴ�������ȫ���ԼĴ����� */
#define SOC_DHA_DHA_DDR_LEVEL_REG        (SOC_DHA_BASE + 0x350)  /* DHA��DDR���ˮ�����üĴ���(��̬����) */
#define SOC_DHA_DHA_INTCMD_NUM_REG       (SOC_DHA_BASE + 0x354)  /* DHA CMD buffer����Ƭ�������������üĴ���(��̬����) */
#define SOC_DHA_DHA_EXTSNP_TH_REG        (SOC_DHA_BASE + 0x358)  /* DHA������Ƭ��snoop outstanding���üĴ���(��̬����) */
#define SOC_DHA_DHA_SPILL_TH_REG         (SOC_DHA_BASE + 0x35C)  /* DHA Spill outstanding���üĴ���(��̬����) */
#define SOC_DHA_DHA_ALLOC_TH_REG         (SOC_DHA_BASE + 0x360)  /* DHAĿ¼ALLOCˮ�����üĴ���(��̬����) */
#define SOC_DHA_DHA_DDR_BW_REG           (SOC_DHA_BASE + 0x364)  /* DHA DDR������ƼĴ��� */
#define SOC_DHA_DHA_CMDSCH_TH_REG        (SOC_DHA_BASE + 0x368)  /* DHA�������ˮ�����üĴ��� */
#define SOC_DHA_DHA_ATOMIC_TH_REG        (SOC_DHA_BASE + 0x36C)  /* DHA Atomic monitorˮ�����üĴ��� */
#define SOC_DHA_DHA_COMSPEC_TH_REG       (SOC_DHA_BASE + 0x370)  /* DHA�ڴ�����ѹ��Ͷ����ȡDDRˮ������ */
#define SOC_DHA_DHA_DMCLBW_TH_REG        (SOC_DHA_BASE + 0x374)  /* DHA�ʹ���ˮ������ */
#define SOC_DHA_DHA_MSD0_CTRL_REG        (SOC_DHA_BASE + 0x380)  /* MSD0���üĴ���(��ȫ���Ծ�̬���üĴ���)�� */
#define SOC_DHA_DHA_MSD1_CTRL_REG        (SOC_DHA_BASE + 0x384)  /* MSD1���üĴ���(��ȫ���Ծ�̬���üĴ���)�� */
#define SOC_DHA_DHA_MSD2_CTRL_REG        (SOC_DHA_BASE + 0x388)  /* MSD2���üĴ���(��ȫ���Ծ�̬���üĴ���)�� */
#define SOC_DHA_DHA_MSD3_CTRL_REG        (SOC_DHA_BASE + 0x38C)  /* MSD3���üĴ���(��ȫ���Ծ�̬���üĴ���)�� */
#define SOC_DHA_DHA_MSD4_CTRL_REG        (SOC_DHA_BASE + 0x390)  /* MSD4���üĴ���(��ȫ���Ծ�̬���üĴ���)�� */
#define SOC_DHA_DHA_MSD5_CTRL_REG        (SOC_DHA_BASE + 0x394)  /* MSD5���üĴ���(��ȫ���Ծ�̬���üĴ���)�� */
#define SOC_DHA_DHA_MSD6_CTRL_REG        (SOC_DHA_BASE + 0x398)  /* MSD6���üĴ���(��ȫ���Ծ�̬���üĴ���)�� */
#define SOC_DHA_DHA_MSD7_CTRL_REG        (SOC_DHA_BASE + 0x39C)  /* MSD7���üĴ���(��ȫ���Ծ�̬���üĴ���)�� */
#define SOC_DHA_DHA_MSD0_MAP_REG         (SOC_DHA_BASE + 0x3A0)  /* MSD0��ַ����ӳ��Ĵ���(��ȫ���Ծ�̬���üĴ���)�� */
#define SOC_DHA_DHA_MSD1_MAP_REG         (SOC_DHA_BASE + 0x3A4)  /* MSD1��ַ����ӳ��Ĵ���(��ȫ���Ծ�̬���üĴ���)�� */
#define SOC_DHA_DHA_MSD2_MAP_REG         (SOC_DHA_BASE + 0x3A8)  /* MSD2��ַ����ӳ��Ĵ���(��ȫ���Ծ�̬���üĴ���)�� */
#define SOC_DHA_DHA_MSD3_MAP_REG         (SOC_DHA_BASE + 0x3AC)  /* MSD3��ַ����ӳ��Ĵ���(��ȫ���Ծ�̬���üĴ���)�� */
#define SOC_DHA_DHA_MSD4_MAP_REG         (SOC_DHA_BASE + 0x3B0)  /* MSD4��ַ����ӳ��Ĵ���(��ȫ���Ծ�̬���üĴ���)�� */
#define SOC_DHA_DHA_MSD5_MAP_REG         (SOC_DHA_BASE + 0x3B4)  /* MSD5��ַ����ӳ��Ĵ���(��ȫ���Ծ�̬���üĴ���)�� */
#define SOC_DHA_DHA_MSD6_MAP_REG         (SOC_DHA_BASE + 0x3B8)  /* MSD6��ַ����ӳ��Ĵ���(��ȫ���Ծ�̬���üĴ���)�� */
#define SOC_DHA_DHA_MSD7_MAP_REG         (SOC_DHA_BASE + 0x3BC)  /* MSD7��ַ����ӳ��Ĵ���(��ȫ���Ծ�̬���üĴ���)�� */
#define SOC_DHA_DHA_DIR_SCAN_CTRL_REG    (SOC_DHA_BASE + 0x3C4)  /* DIRɨ�����üĴ��� */
#define SOC_DHA_DHA_AICRC0_REG           (SOC_DHA_BASE + 0x3C8)  /* AICORE��ӦREADCNT���üĴ���0 */
#define SOC_DHA_DHA_AICRC1_REG           (SOC_DHA_BASE + 0x3CC)  /* AICORE��ӦREADCNT���üĴ���1 */
#define SOC_DHA_DHA_AICRC2_REG           (SOC_DHA_BASE + 0x3D0)  /* AICORE��ӦREADCNT���üĴ���2 */
#define SOC_DHA_DHA_AICRC3_REG           (SOC_DHA_BASE + 0x3D4)  /* AICORE��ӦREADCNT���üĴ���3 */
#define SOC_DHA_DHA_FLOW_MODE_REG        (SOC_DHA_BASE + 0x3D8)  /* DHA�������üĴ��� */
#define SOC_DHA_DHA_CMD_UTL_TH0_REG      (SOC_DHA_BASE + 0x3DC)  /* CMD��Ӧ����ˮ�����üĴ���0 */
#define SOC_DHA_DHA_CMD_UTL_TH1_REG      (SOC_DHA_BASE + 0x3E0)  /* CMD��Ӧ����ˮ�����üĴ���1 */
#define SOC_DHA_DHA_IQ_UTL_TH_REG        (SOC_DHA_BASE + 0x3E4)  /* IQ��Ӧ����ˮ�����üĴ��� */
#define SOC_DHA_DHA_TXDAT_DET_TTIME_REG  (SOC_DHA_BASE + 0x3E8)  /* ��������Ӧʱ�����üĴ��� */
#define SOC_DHA_DHA_TXDAT_PUSH_TTIME_REG (SOC_DHA_BASE + 0x3EC)  /* ����PUSH��Ӧʱ�����üĴ��� */
#define SOC_DHA_DHA_DYN_CTRL_REG         (SOC_DHA_BASE + 0x400)  /* DHA��̬���ƼĴ��� */
#define SOC_DHA_DHA_ECC_INJECT_REG       (SOC_DHA_BASE + 0x500)  /* DHA ECC����ע��Ĵ��� */
#define SOC_DHA_DHA_MAGIC_WORD_REG       (SOC_DHA_BASE + 0x7F0)  /* DHA�汾�޸ļĴ��� */
#define SOC_DHA_DHA_PERF_INTR_REG        (SOC_DHA_BASE + 0x800)  /* ͳ���¼����ԭʼ�ж�״̬�Ĵ��� */
#define SOC_DHA_DHA_PERF_INTM_REG        (SOC_DHA_BASE + 0x804)  /* ͳ���¼�����ж����μĴ��� */
#define SOC_DHA_DHA_PERF_INTS_REG        (SOC_DHA_BASE + 0x808)  /* ͳ���¼�����ж�״̬�Ĵ��� */
#define SOC_DHA_DHA_PERF_INTC_REG        (SOC_DHA_BASE + 0x80C)  /* ͳ���¼�����ж�����Ĵ��� */
#define SOC_DHA_DHA_RSVD0_REG            (SOC_DHA_BASE + 0xC00)  /* �����Ĵ���0 */
#define SOC_DHA_DHA_RSVD1_REG            (SOC_DHA_BASE + 0xC04)  /* �����Ĵ���1 */
#define SOC_DHA_DHA_RSVD2_REG            (SOC_DHA_BASE + 0xC08)  /* �����Ĵ���2 */
#define SOC_DHA_DHA_RSVD3_REG            (SOC_DHA_BASE + 0xC0C)  /* �����Ĵ���3 */
#define SOC_DHA_DHA_VERSION0_REG         (SOC_DHA_BASE + 0xC10)  /* DHA�汾�Ĵ��� */
#define SOC_DHA_DHA_VERSION1_REG         (SOC_DHA_BASE + 0xC14)  /* EMU/FPGA�汾�Ĵ��� */
#define SOC_DHA_DHA_STATUS0_REG          (SOC_DHA_BASE + 0x1000) /* DHA״̬�Ĵ��� */
#define SOC_DHA_DHA_STATUS1_REG          (SOC_DHA_BASE + 0x1004) /* DHA״̬�Ĵ��� */
#define SOC_DHA_DHA_OVERFLOW_REG         (SOC_DHA_BASE + 0x1008) /* DHA buffer���״̬�Ĵ��� */
#define SOC_DHA_DHA_STATUS_IFL_REG       (SOC_DHA_BASE + 0x100C) /* DHA Interface�ӿ�״̬�Ĵ��� */
#define SOC_DHA_DHA_STATUS_IFH_REG       (SOC_DHA_BASE + 0x1010) /* DHA Interface�ӿ�״̬�Ĵ��� */
#define SOC_DHA_DHA_PROBE_CTRL_REG       (SOC_DHA_BASE + 0x1014) /* DHA״̬��ѯ���ƼĴ��� */
#define SOC_DHA_DHA_PROBE_INFOL_REG      (SOC_DHA_BASE + 0x1020) /* DHA״̬�Ĵ���0 */
#define SOC_DHA_DHA_ERR_MASKL_REG        (SOC_DHA_BASE + 0x1048) /* DHA error mask�Ĵ��� */
#define SOC_DHA_DHA_ERR_MASKH_REG        (SOC_DHA_BASE + 0x104C) /* DHA error mask�Ĵ��� */
#define SOC_DHA_DHA_MEMCTRL_HISI_REG     (SOC_DHA_BASE + 0x1B00) /* DHA memory���ƼĴ��� */
#define SOC_DHA_DHA_SUBEVENT_CTRL_REG    (SOC_DHA_BASE + 0x1C00) /* DHA latencyͳ�ƿ��ƼĴ��� */
#define SOC_DHA_DHA_EVENT_REGION0_REG    (SOC_DHA_BASE + 0x1C10) /* DDRͳ�Ƶ�ַ�����üĴ���0 */
#define SOC_DHA_DHA_EVENT_REGION1_REG    (SOC_DHA_BASE + 0x1C14) /* DDRͳ�Ƶ�ַ�����üĴ���1 */
#define SOC_DHA_DHA_TOTAL_CMDLATL_REG    (SOC_DHA_BASE + 0x1D00) /* DHA�������ӳټĴ�����λ */
#define SOC_DHA_DHA_TOTAL_CMDLATH_REG    (SOC_DHA_BASE + 0x1D04) /* DHA�������ӳټĴ�����λ */
#define SOC_DHA_DHA_TOTAL_CMDCNTL_REG    (SOC_DHA_BASE + 0x1D08) /* DHA�����������Ĵ�����λ */
#define SOC_DHA_DHA_TOTAL_CMDCNTH_REG    (SOC_DHA_BASE + 0x1D0C) /* DHA�����������Ĵ�����λ */
#define SOC_DHA_DHA_TOTAL_DDRLATL_REG    (SOC_DHA_BASE + 0x1D10) /* DHA��DDR�������ӳټĴ�����λ */
#define SOC_DHA_DHA_TOTAL_DDRLATH_REG    (SOC_DHA_BASE + 0x1D14) /* DHA��DDR�������ӳټĴ�����λ */
#define SOC_DHA_DHA_TOTAL_DDRCNTL_REG    (SOC_DHA_BASE + 0x1D18) /* DHA��DDR�����������Ĵ�����λ */
#define SOC_DHA_DHA_TOTAL_DDRCNTH_REG    (SOC_DHA_BASE + 0x1D1C) /* DHA��DDR�����������Ĵ�����λ */
#define SOC_DHA_DHA_SENTRY_CNT_REG       (SOC_DHA_BASE + 0x1D20) /* DHA single pattern��ЧĿ¼entry������ */
#define SOC_DHA_DHA_DENTRY_CNT_REG       (SOC_DHA_BASE + 0x1D24) /* DHA double pattern��ЧĿ¼entry������ */
#define SOC_DHA_DHA_MCA_CNT_REG          (SOC_DHA_BASE + 0x1D28) /* DHA�ڲ�MCA/ECNTģʽĿ¼pattern������ */
#define SOC_DHA_DHA_EST_CNT_REG          (SOC_DHA_BASE + 0x1D2C) /* DHA�ڲ�ESTģʽĿ¼pattern������ */
#define SOC_DHA_DHA_TCA_CNT_REG          (SOC_DHA_BASE + 0x1D30) /* DHA�ڲ�TCA/ISCAģʽĿ¼pattern������ */
#define SOC_DHA_DHA_VCA_CNT_REG          (SOC_DHA_BASE + 0x1D34) /* DHA�ڲ�VCA/ITCA/AVECģʽĿ¼pattern������ */
#define SOC_DHA_DHA_PERF_ENABLE_REG      (SOC_DHA_BASE + 0x1E00) /* DHAͳ���¼�ȫ��ʹ�ܼĴ��� */
#define SOC_DHA_DHA_EVENT_CTRL_REG       (SOC_DHA_BASE + 0x1E04) /* DHA���¼�ͳ�ƿ��ƼĴ��� */
#define SOC_DHA_DHA_EVENT_TYPE0_REG      (SOC_DHA_BASE + 0x1E80) /* DHA_EVENT_TYPE0ΪDHA���¼�ͳ���������üĴ��� */
#define SOC_DHA_DHA_EVENT_TYPE1_REG      (SOC_DHA_BASE + 0x1E84) /* DHA_EVENT_TYPE1ΪDHA���¼�ͳ���������üĴ��� */
#define SOC_DHA_DHA_EVENT_CNT0L_REG      (SOC_DHA_BASE + 0x1F00) /* DHA_EVENT_CNT0LΪ�¼�ͳ�ƼĴ���0�ĵ�λ���� */
#define SOC_DHA_DHA_EVENT_CNT0H_REG      (SOC_DHA_BASE + 0x1F04) /* DHA_EVENT_CNT0HΪ�¼�ͳ�ƼĴ���0�ĸ�λ���� */
#define SOC_DHA_DHA_EVENT_CNT1L_REG      (SOC_DHA_BASE + 0x1F08) /* DHA_EVENT_CNT1LΪ�¼�ͳ�ƼĴ���1 */
#define SOC_DHA_DHA_EVENT_CNT1H_REG      (SOC_DHA_BASE + 0x1F0C) /* DHA_EVENT_CNT1HΪ�¼�ͳ�ƼĴ���1�ĸ�λ���� */
#define SOC_DHA_DHA_EVENT_CNT2L_REG      (SOC_DHA_BASE + 0x1F10) /* DHA_EVENT_CNT2LΪ�¼�ͳ�ƼĴ���2�ĵ�λ���� */
#define SOC_DHA_DHA_EVENT_CNT2H_REG      (SOC_DHA_BASE + 0x1F14) /* DHA_EVENT_CNT2HΪ�¼�ͳ�ƼĴ���2�ĸ�λ���� */
#define SOC_DHA_DHA_EVENT_CNT3L_REG      (SOC_DHA_BASE + 0x1F18) /* DHA_EVENT_CNT3LΪ�¼�ͳ�ƼĴ���3�ĵ�λ���� */
#define SOC_DHA_DHA_EVENT_CNT3H_REG      (SOC_DHA_BASE + 0x1F1C) /* DHA_EVENT_CNT3HΪ�¼�ͳ�ƼĴ���3�ĸ�λ���� */
#define SOC_DHA_DHA_EVENT_CNT4L_REG      (SOC_DHA_BASE + 0x1F20) /* DHA_EVENT_CNT4Ϊ�¼�ͳ�ƼĴ���4�ĵ�λ���� */
#define SOC_DHA_DHA_EVENT_CNT4H_REG      (SOC_DHA_BASE + 0x1F24) /* DHA_EVENT_CNT4HΪ�¼�ͳ�ƼĴ���4�ĸ�λ���� */
#define SOC_DHA_DHA_EVENT_CNT5L_REG      (SOC_DHA_BASE + 0x1F28) /* DHA_EVENT_CNT5LΪ�¼�ͳ�ƼĴ���5�ĵ�λ���� */
#define SOC_DHA_DHA_EVENT_CNT5H_REG      (SOC_DHA_BASE + 0x1F2C) /* DHA_EVENT_CNT5HΪ�¼�ͳ�ƼĴ���5�ĸ�λ���� */
#define SOC_DHA_DHA_EVENT_CNT6L_REG      (SOC_DHA_BASE + 0x1F30) /* DHA_EVENT_CNT6LΪ�¼�ͳ�ƼĴ���6�ĵ�λ���� */
#define SOC_DHA_DHA_EVENT_CNT6H_REG      (SOC_DHA_BASE + 0x1F34) /* DHA_EVENT_CNT6HΪ�¼�ͳ�ƼĴ���6�ĸ�λ���� */
#define SOC_DHA_DHA_EVENT_CNT7L_REG      (SOC_DHA_BASE + 0x1F38) /* DHA_EVENT_CNT7Ϊ�¼�ͳ�ƼĴ���7�ĵ�λ���� */
#define SOC_DHA_DHA_EVENT_CNT7H_REG      (SOC_DHA_BASE + 0x1F3C) /* DHA_EVENT_CNT7HΪ�¼�ͳ�ƼĴ���7�ĸ�λ���� */
#define SOC_DHA_DHA_ERR_FRL_REG          (SOC_DHA_BASE + 0x2000) /* �����¼���ԼĴ�����λ */
#define SOC_DHA_DHA_ERR_FRH_REG          (SOC_DHA_BASE + 0x2004) /* �����¼���ԼĴ�����λ */
#define SOC_DHA_DHA_ERR_CTRLL_REG        (SOC_DHA_BASE + 0x2008) /* �����¼���ƼĴ�����λ */
#define SOC_DHA_DHA_ERR_CTRLH_REG        (SOC_DHA_BASE + 0x200C) /* �����¼���ƼĴ�����λ */
#define SOC_DHA_DHA_ERR_STATUSL_REG      (SOC_DHA_BASE + 0x2010) /* �����¼ԭʼ״̬�Ĵ�����λ */
#define SOC_DHA_DHA_ERR_STATUSH_REG      (SOC_DHA_BASE + 0x2014) /* �����¼ԭʼ״̬�Ĵ�����λ */
#define SOC_DHA_DHA_ERR_ADDRL_REG        (SOC_DHA_BASE + 0x2018) /* �����¼��ַ�Ĵ�����λ */
#define SOC_DHA_DHA_ERR_ADDRH_REG        (SOC_DHA_BASE + 0x201C) /* �����¼��ַ�Ĵ�����λ */
#define SOC_DHA_DHA_ERR_MISC0L_REG       (SOC_DHA_BASE + 0x2020) /* �����¼��Ϣ�Ĵ�����λ */
#define SOC_DHA_DHA_ERR_MISC0H_REG       (SOC_DHA_BASE + 0x2024) /* �����¼��Ϣ�Ĵ�����λ */
#define SOC_DHA_DHA_ERR_MISC1L_REG       (SOC_DHA_BASE + 0x2028) /* �����¼��Ϣ�Ĵ�����λ */
#define SOC_DHA_DHA_ERR_MISC1H_REG       (SOC_DHA_BASE + 0x202C) /* �����¼��Ϣ�Ĵ�����λ */
#define SOC_DHA_SC_DHA_CLK_EN_REG        (SOC_DHA_BASE + 0x410)  /* DHAʱ��ʹ�ܼĴ��� */
#define SOC_DHA_SC_DHA_CLK_DIS_REG       (SOC_DHA_BASE + 0x414)  /* DHAʱ�ӽ�ֹ�Ĵ��� */
#define SOC_DHA_SC_DHA_RESET_REQ_REG     (SOC_DHA_BASE + 0xA10)  /* DHA��λ������ƼĴ��� */
#define SOC_DHA_SC_DHA_RESET_DREQ_REG    (SOC_DHA_BASE + 0xA14)  /* DHA��λȥ������ƼĴ��� */
#define SOC_DHA_SC_DHA_MBIST_REQ_REG     (SOC_DHA_BASE + 0x3510) /* DHA����MBIST�����ź� */
#define SOC_DHA_SC_DHA_CLK_ST_REG        (SOC_DHA_BASE + 0x5410) /* DHAʱ��״̬�Ĵ��� */
#define SOC_DHA_SC_DHA_RESET_ST_REG      (SOC_DHA_BASE + 0x5A10) /* DHA�ĵ�ǰ��λ״̬ */

#endif // __DHA_REG_OFFSET_H__
