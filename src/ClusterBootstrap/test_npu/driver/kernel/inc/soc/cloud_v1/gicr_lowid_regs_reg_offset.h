// ****************************************************************************** 
// Copyright     :  Copyright (C) 2018, Hisilicon Technologies Co. Ltd.
// File name     :  gicr_lowid_regs_reg_offset.h
// Department    :  CAD Development Department
// Author        :  xxx
// Version       :  1
// Date          :  2013/3/10
// Description   :  The description of xxx project
// Others        :  Generated automatically by nManager V4.2 
// History       :  xxx 2018/07/19 11:13:37 Create file
// ******************************************************************************

#ifndef __GICR_LOWID_REGS_REG_OFFSET_H__
#define __GICR_LOWID_REGS_REG_OFFSET_H__

/* GICR_LOWID_REGS Base address of Module's Register */
#define xxx_GICR_LOWID_REGS_BASE                       (0x60000000)

/******************************************************************************/
/*                      xxx GICR_LOWID_REGS Registers' Definitions                            */
/******************************************************************************/

#define xxx_GICR_LOWID_REGS_GICR_IGROUPR0_REG                    (xxx_GICR_LOWID_REGS_BASE + 0x80)  /* ��ʶ��Ӧ�ж�ID�ķ�ΧΪ{0��31}������Group0��Group1 */
#define xxx_GICR_LOWID_REGS_GICR_ISENABLER0_REG                  (xxx_GICR_LOWID_REGS_BASE + 0x100) /* �ж�ID{0��31}�е����жϵ�ʹ�ܼĴ����������Ƿ񷢸�Cpu Interface�� */
#define xxx_GICR_LOWID_REGS_GICR_ICENABLER0_REG                  (xxx_GICR_LOWID_REGS_BASE + 0x180) /* �ж�ID{0��31}�����жϵ����ʹ�ܵļĴ�����ȷ���Ƿ񷢸�CPU Interface�� */
#define xxx_GICR_LOWID_REGS_GICR_IPRIORITY_LOWSGI_NS_0_REG       (xxx_GICR_LOWID_REGS_BASE + 0x400) /* ÿ8bit��Ӧһ���жϵ����ȼ���x{0,3} */
#define xxx_GICR_LOWID_REGS_GICR_IPRIORITY_LOWSGI_NS_1_REG       (xxx_GICR_LOWID_REGS_BASE + 0x404) /* ÿ8bit��Ӧһ���жϵ����ȼ���x{0,3} */
#define xxx_GICR_LOWID_REGS_GICR_IPRIORITY_LOWSGI_NS_2_REG       (xxx_GICR_LOWID_REGS_BASE + 0x408) /* ÿ8bit��Ӧһ���жϵ����ȼ���x{0,3} */
#define xxx_GICR_LOWID_REGS_GICR_IPRIORITY_LOWSGI_NS_3_REG       (xxx_GICR_LOWID_REGS_BASE + 0x40C) /* ÿ8bit��Ӧһ���жϵ����ȼ���x{0,3} */
#define xxx_GICR_LOWID_REGS_GICR_IPRIORITY_LOWPPI2023_NS_REG     (xxx_GICR_LOWID_REGS_BASE + 0x414) /* ÿ8bit��Ӧһ���жϵ����ȼ��� */
#define xxx_GICR_LOWID_REGS_GICR_IPRIORITY_LOWPPI23TO31_NS_0_REG (xxx_GICR_LOWID_REGS_BASE + 0x418) /* ÿ8bit��Ӧһ���жϵ����ȼ���y{0,1} */
#define xxx_GICR_LOWID_REGS_GICR_IPRIORITY_LOWPPI23TO31_NS_1_REG (xxx_GICR_LOWID_REGS_BASE + 0x41C) /* ÿ8bit��Ӧһ���жϵ����ȼ���y{0,1} */
#define xxx_GICR_LOWID_REGS_GICR_ICFGR_LOW_SGI_REG               (xxx_GICR_LOWID_REGS_BASE + 0xC00) /* �üĴ���ÿ2bit��ʾһ��SGI�ж��ǵ�ƽ���л��Ǳ��ش��� */
#define xxx_GICR_LOWID_REGS_GICR_ICFGR_LOW_PPI_REG               (xxx_GICR_LOWID_REGS_BASE + 0xC04) /* �üĴ���ÿ2bit��ʾһ��PPI�ж��ǵ�ƽ���л��Ǳ��ش��� */
#define xxx_GICR_LOWID_REGS_GICR_NSACR_REG                       (xxx_GICR_LOWID_REGS_BASE + 0xE00) /* �����Ƿ�����ǰ�ȫ���������ȫSGI�жϼĴ��� */
#define xxx_GICR_LOWID_REGS_GICR_IGRPMODR0_REG                   (xxx_GICR_LOWID_REGS_BASE + 0xD00) /* ��ʶ��Ӧ�ж�ID�ķ�ΧΪ{0��31}��������� */

#endif // __GICR_LOWID_REGS_REG_OFFSET_H__
