// ****************************************************************************** 
// Copyright     :  Copyright (C) 2018, Hisilicon Technologies Co. Ltd.
// File name     :  gicd_regs_reg_offset.h
// Department    :  CAD Development Department
// Author        :  xxx
// Version       :  1
// Date          :  2013/3/10
// Description   :  The description of xxx project
// Others        :  Generated automatically by nManager V4.2 
// History       :  xxx 2018/07/19 11:13:37 Create file
// ******************************************************************************

#ifndef __GICD_REGS_REG_OFFSET_H__
#define __GICD_REGS_REG_OFFSET_H__

/* GICD_REGS Base address of Module's Register */
#define xxx_GICD_REGS_BASE                       (0xAA000000)

/******************************************************************************/
/*                      xxx GICD_REGS Registers' Definitions                            */
/******************************************************************************/

#define xxx_GICD_REGS_GICD_CTLR_NS_REG                     (xxx_GICD_REGS_BASE + 0x0)    /* Distributor�Ŀ��ƼĴ������ǰ�ȫ������ */
#define xxx_GICD_REGS_GICD_SETSPI_NSR_REG                  (xxx_GICD_REGS_BASE + 0x40)   /* �����ǰ�ȫSPI�Ĵ��� */
#define xxx_GICD_REGS_GICD_CLRSPI_NSR_REG                  (xxx_GICD_REGS_BASE + 0x48)   /* ����ǰ�ȫSPI�Ĵ��� */
#define xxx_GICD_REGS_GICD_SETSPI_SR_REG                   (xxx_GICD_REGS_BASE + 0x50)   /* ������ȫSPI�Ĵ��� */
#define xxx_GICD_REGS_GICD_CLRSPI_SR_REG                   (xxx_GICD_REGS_BASE + 0x58)   /* �����ȫSPI�Ĵ��� */
#define xxx_GICD_REGS_GICD_IGROUPR_SPI_0_REG               (xxx_GICD_REGS_BASE + 0x84)   /* ��ʶspi�жϷ�����Group0��Group1��n��ֵ��GICD_TYPER.ITLinesNumber������m{0,30} */
#define xxx_GICD_REGS_GICD_IGROUPR_SPI_1_REG               (xxx_GICD_REGS_BASE + 0x88)   /* ��ʶspi�жϷ�����Group0��Group1��n��ֵ��GICD_TYPER.ITLinesNumber������m{0,30} */
#define xxx_GICD_REGS_GICD_IGROUPR_SPI_2_REG               (xxx_GICD_REGS_BASE + 0x8C)   /* ��ʶspi�жϷ�����Group0��Group1��n��ֵ��GICD_TYPER.ITLinesNumber������m{0,30} */
#define xxx_GICD_REGS_GICD_IGROUPR_SPI_3_REG               (xxx_GICD_REGS_BASE + 0x90)   /* ��ʶspi�жϷ�����Group0��Group1��n��ֵ��GICD_TYPER.ITLinesNumber������m{0,30} */
#define xxx_GICD_REGS_GICD_IGROUPR_SPI_4_REG               (xxx_GICD_REGS_BASE + 0x94)   /* ��ʶspi�жϷ�����Group0��Group1��n��ֵ��GICD_TYPER.ITLinesNumber������m{0,30} */
#define xxx_GICD_REGS_GICD_IGROUPR_SPI_5_REG               (xxx_GICD_REGS_BASE + 0x98)   /* ��ʶspi�жϷ�����Group0��Group1��n��ֵ��GICD_TYPER.ITLinesNumber������m{0,30} */
#define xxx_GICD_REGS_GICD_IGROUPR_SPI_6_REG               (xxx_GICD_REGS_BASE + 0x9C)   /* ��ʶspi�жϷ�����Group0��Group1��n��ֵ��GICD_TYPER.ITLinesNumber������m{0,30} */
#define xxx_GICD_REGS_GICD_IGROUPR_SPI_7_REG               (xxx_GICD_REGS_BASE + 0xA0)   /* ��ʶspi�жϷ�����Group0��Group1��n��ֵ��GICD_TYPER.ITLinesNumber������m{0,30} */
#define xxx_GICD_REGS_GICD_IGROUPR_SPI_8_REG               (xxx_GICD_REGS_BASE + 0xA4)   /* ��ʶspi�жϷ�����Group0��Group1��n��ֵ��GICD_TYPER.ITLinesNumber������m{0,30} */
#define xxx_GICD_REGS_GICD_IGROUPR_SPI_9_REG               (xxx_GICD_REGS_BASE + 0xA8)   /* ��ʶspi�жϷ�����Group0��Group1��n��ֵ��GICD_TYPER.ITLinesNumber������m{0,30} */
#define xxx_GICD_REGS_GICD_IGROUPR_SPI_10_REG              (xxx_GICD_REGS_BASE + 0xAC)   /* ��ʶspi�жϷ�����Group0��Group1��n��ֵ��GICD_TYPER.ITLinesNumber������m{0,30} */
#define xxx_GICD_REGS_GICD_IGROUPR_SPI_11_REG              (xxx_GICD_REGS_BASE + 0xB0)   /* ��ʶspi�жϷ�����Group0��Group1��n��ֵ��GICD_TYPER.ITLinesNumber������m{0,30} */
#define xxx_GICD_REGS_GICD_IGROUPR_SPI_12_REG              (xxx_GICD_REGS_BASE + 0xB4)   /* ��ʶspi�жϷ�����Group0��Group1��n��ֵ��GICD_TYPER.ITLinesNumber������m{0,30} */
#define xxx_GICD_REGS_GICD_IGROUPR_SPI_13_REG              (xxx_GICD_REGS_BASE + 0xB8)   /* ��ʶspi�жϷ�����Group0��Group1��n��ֵ��GICD_TYPER.ITLinesNumber������m{0,30} */
#define xxx_GICD_REGS_GICD_IGROUPR_SPI_14_REG              (xxx_GICD_REGS_BASE + 0xBC)   /* ��ʶspi�жϷ�����Group0��Group1��n��ֵ��GICD_TYPER.ITLinesNumber������m{0,30} */
#define xxx_GICD_REGS_GICD_IGROUPR_SPI_15_REG              (xxx_GICD_REGS_BASE + 0xC0)   /* ��ʶspi�жϷ�����Group0��Group1��n��ֵ��GICD_TYPER.ITLinesNumber������m{0,30} */
#define xxx_GICD_REGS_GICD_IGROUPR_SPI_16_REG              (xxx_GICD_REGS_BASE + 0xC4)   /* ��ʶspi�жϷ�����Group0��Group1��n��ֵ��GICD_TYPER.ITLinesNumber������m{0,30} */
#define xxx_GICD_REGS_GICD_IGROUPR_SPI_17_REG              (xxx_GICD_REGS_BASE + 0xC8)   /* ��ʶspi�жϷ�����Group0��Group1��n��ֵ��GICD_TYPER.ITLinesNumber������m{0,30} */
#define xxx_GICD_REGS_GICD_IGROUPR_SPI_18_REG              (xxx_GICD_REGS_BASE + 0xCC)   /* ��ʶspi�жϷ�����Group0��Group1��n��ֵ��GICD_TYPER.ITLinesNumber������m{0,30} */
#define xxx_GICD_REGS_GICD_IGROUPR_SPI_19_REG              (xxx_GICD_REGS_BASE + 0xD0)   /* ��ʶspi�жϷ�����Group0��Group1��n��ֵ��GICD_TYPER.ITLinesNumber������m{0,30} */
#define xxx_GICD_REGS_GICD_IGROUPR_SPI_20_REG              (xxx_GICD_REGS_BASE + 0xD4)   /* ��ʶspi�жϷ�����Group0��Group1��n��ֵ��GICD_TYPER.ITLinesNumber������m{0,30} */
#define xxx_GICD_REGS_GICD_IGROUPR_SPI_21_REG              (xxx_GICD_REGS_BASE + 0xD8)   /* ��ʶspi�жϷ�����Group0��Group1��n��ֵ��GICD_TYPER.ITLinesNumber������m{0,30} */
#define xxx_GICD_REGS_GICD_IGROUPR_SPI_22_REG              (xxx_GICD_REGS_BASE + 0xDC)   /* ��ʶspi�жϷ�����Group0��Group1��n��ֵ��GICD_TYPER.ITLinesNumber������m{0,30} */
#define xxx_GICD_REGS_GICD_IGROUPR_SPI_23_REG              (xxx_GICD_REGS_BASE + 0xE0)   /* ��ʶspi�жϷ�����Group0��Group1��n��ֵ��GICD_TYPER.ITLinesNumber������m{0,30} */
#define xxx_GICD_REGS_GICD_IGROUPR_SPI_24_REG              (xxx_GICD_REGS_BASE + 0xE4)   /* ��ʶspi�жϷ�����Group0��Group1��n��ֵ��GICD_TYPER.ITLinesNumber������m{0,30} */
#define xxx_GICD_REGS_GICD_IGROUPR_SPI_25_REG              (xxx_GICD_REGS_BASE + 0xE8)   /* ��ʶspi�жϷ�����Group0��Group1��n��ֵ��GICD_TYPER.ITLinesNumber������m{0,30} */
#define xxx_GICD_REGS_GICD_IGROUPR_SPI_26_REG              (xxx_GICD_REGS_BASE + 0xEC)   /* ��ʶspi�жϷ�����Group0��Group1��n��ֵ��GICD_TYPER.ITLinesNumber������m{0,30} */
#define xxx_GICD_REGS_GICD_IGROUPR_SPI_27_REG              (xxx_GICD_REGS_BASE + 0xF0)   /* ��ʶspi�жϷ�����Group0��Group1��n��ֵ��GICD_TYPER.ITLinesNumber������m{0,30} */
#define xxx_GICD_REGS_GICD_IGROUPR_SPI_28_REG              (xxx_GICD_REGS_BASE + 0xF4)   /* ��ʶspi�жϷ�����Group0��Group1��n��ֵ��GICD_TYPER.ITLinesNumber������m{0,30} */
#define xxx_GICD_REGS_GICD_IGROUPR_SPI_29_REG              (xxx_GICD_REGS_BASE + 0xF8)   /* ��ʶspi�жϷ�����Group0��Group1��n��ֵ��GICD_TYPER.ITLinesNumber������m{0,30} */
#define xxx_GICD_REGS_GICD_IGROUPR_SPI_30_REG              (xxx_GICD_REGS_BASE + 0xFC)   /* ��ʶspi�жϷ�����Group0��Group1��n��ֵ��GICD_TYPER.ITLinesNumber������m{0,30} */
#define xxx_GICD_REGS_GICD_ISENABLER_LOW_REG               (xxx_GICD_REGS_BASE + 0x100)  /* lowid�ж��У���Ӧ�ж�ID�ķ�ΧΪ{0��31}�������жϵ�ʹ�ܼĴ����������Ƿ񷢸�Cpu Interface�� */
#define xxx_GICD_REGS_GICD_ISENABLER_SPI_0_REG             (xxx_GICD_REGS_BASE + 0x104)  /* spi�����жϵ�ʹ�ܼĴ����������Ƿ񷢸�Cpu Interface�� */
#define xxx_GICD_REGS_GICD_ISENABLER_SPI_1_REG             (xxx_GICD_REGS_BASE + 0x108)  /* spi�����жϵ�ʹ�ܼĴ����������Ƿ񷢸�Cpu Interface�� */
#define xxx_GICD_REGS_GICD_ISENABLER_SPI_2_REG             (xxx_GICD_REGS_BASE + 0x10C)  /* spi�����жϵ�ʹ�ܼĴ����������Ƿ񷢸�Cpu Interface�� */
#define xxx_GICD_REGS_GICD_ISENABLER_SPI_3_REG             (xxx_GICD_REGS_BASE + 0x110)  /* spi�����жϵ�ʹ�ܼĴ����������Ƿ񷢸�Cpu Interface�� */
#define xxx_GICD_REGS_GICD_ISENABLER_SPI_4_REG             (xxx_GICD_REGS_BASE + 0x114)  /* spi�����жϵ�ʹ�ܼĴ����������Ƿ񷢸�Cpu Interface�� */
#define xxx_GICD_REGS_GICD_ISENABLER_SPI_5_REG             (xxx_GICD_REGS_BASE + 0x118)  /* spi�����жϵ�ʹ�ܼĴ����������Ƿ񷢸�Cpu Interface�� */
#define xxx_GICD_REGS_GICD_ISENABLER_SPI_6_REG             (xxx_GICD_REGS_BASE + 0x11C)  /* spi�����жϵ�ʹ�ܼĴ����������Ƿ񷢸�Cpu Interface�� */
#define xxx_GICD_REGS_GICD_ISENABLER_SPI_7_REG             (xxx_GICD_REGS_BASE + 0x120)  /* spi�����жϵ�ʹ�ܼĴ����������Ƿ񷢸�Cpu Interface�� */
#define xxx_GICD_REGS_GICD_ISENABLER_SPI_8_REG             (xxx_GICD_REGS_BASE + 0x124)  /* spi�����жϵ�ʹ�ܼĴ����������Ƿ񷢸�Cpu Interface�� */
#define xxx_GICD_REGS_GICD_ISENABLER_SPI_9_REG             (xxx_GICD_REGS_BASE + 0x128)  /* spi�����жϵ�ʹ�ܼĴ����������Ƿ񷢸�Cpu Interface�� */
#define xxx_GICD_REGS_GICD_ISENABLER_SPI_10_REG            (xxx_GICD_REGS_BASE + 0x12C)  /* spi�����жϵ�ʹ�ܼĴ����������Ƿ񷢸�Cpu Interface�� */
#define xxx_GICD_REGS_GICD_ISENABLER_SPI_11_REG            (xxx_GICD_REGS_BASE + 0x130)  /* spi�����жϵ�ʹ�ܼĴ����������Ƿ񷢸�Cpu Interface�� */
#define xxx_GICD_REGS_GICD_ISENABLER_SPI_12_REG            (xxx_GICD_REGS_BASE + 0x134)  /* spi�����жϵ�ʹ�ܼĴ����������Ƿ񷢸�Cpu Interface�� */
#define xxx_GICD_REGS_GICD_ISENABLER_SPI_13_REG            (xxx_GICD_REGS_BASE + 0x138)  /* spi�����жϵ�ʹ�ܼĴ����������Ƿ񷢸�Cpu Interface�� */
#define xxx_GICD_REGS_GICD_ISENABLER_SPI_14_REG            (xxx_GICD_REGS_BASE + 0x13C)  /* spi�����жϵ�ʹ�ܼĴ����������Ƿ񷢸�Cpu Interface�� */
#define xxx_GICD_REGS_GICD_ISENABLER_SPI_15_REG            (xxx_GICD_REGS_BASE + 0x140)  /* spi�����жϵ�ʹ�ܼĴ����������Ƿ񷢸�Cpu Interface�� */
#define xxx_GICD_REGS_GICD_ISENABLER_SPI_16_REG            (xxx_GICD_REGS_BASE + 0x144)  /* spi�����жϵ�ʹ�ܼĴ����������Ƿ񷢸�Cpu Interface�� */
#define xxx_GICD_REGS_GICD_ISENABLER_SPI_17_REG            (xxx_GICD_REGS_BASE + 0x148)  /* spi�����жϵ�ʹ�ܼĴ����������Ƿ񷢸�Cpu Interface�� */
#define xxx_GICD_REGS_GICD_ISENABLER_SPI_18_REG            (xxx_GICD_REGS_BASE + 0x14C)  /* spi�����жϵ�ʹ�ܼĴ����������Ƿ񷢸�Cpu Interface�� */
#define xxx_GICD_REGS_GICD_ISENABLER_SPI_19_REG            (xxx_GICD_REGS_BASE + 0x150)  /* spi�����жϵ�ʹ�ܼĴ����������Ƿ񷢸�Cpu Interface�� */
#define xxx_GICD_REGS_GICD_ISENABLER_SPI_20_REG            (xxx_GICD_REGS_BASE + 0x154)  /* spi�����жϵ�ʹ�ܼĴ����������Ƿ񷢸�Cpu Interface�� */
#define xxx_GICD_REGS_GICD_ISENABLER_SPI_21_REG            (xxx_GICD_REGS_BASE + 0x158)  /* spi�����жϵ�ʹ�ܼĴ����������Ƿ񷢸�Cpu Interface�� */
#define xxx_GICD_REGS_GICD_ISENABLER_SPI_22_REG            (xxx_GICD_REGS_BASE + 0x15C)  /* spi�����жϵ�ʹ�ܼĴ����������Ƿ񷢸�Cpu Interface�� */
#define xxx_GICD_REGS_GICD_ISENABLER_SPI_23_REG            (xxx_GICD_REGS_BASE + 0x160)  /* spi�����жϵ�ʹ�ܼĴ����������Ƿ񷢸�Cpu Interface�� */
#define xxx_GICD_REGS_GICD_ISENABLER_SPI_24_REG            (xxx_GICD_REGS_BASE + 0x164)  /* spi�����жϵ�ʹ�ܼĴ����������Ƿ񷢸�Cpu Interface�� */
#define xxx_GICD_REGS_GICD_ISENABLER_SPI_25_REG            (xxx_GICD_REGS_BASE + 0x168)  /* spi�����жϵ�ʹ�ܼĴ����������Ƿ񷢸�Cpu Interface�� */
#define xxx_GICD_REGS_GICD_ISENABLER_SPI_26_REG            (xxx_GICD_REGS_BASE + 0x16C)  /* spi�����жϵ�ʹ�ܼĴ����������Ƿ񷢸�Cpu Interface�� */
#define xxx_GICD_REGS_GICD_ISENABLER_SPI_27_REG            (xxx_GICD_REGS_BASE + 0x170)  /* spi�����жϵ�ʹ�ܼĴ����������Ƿ񷢸�Cpu Interface�� */
#define xxx_GICD_REGS_GICD_ISENABLER_SPI_28_REG            (xxx_GICD_REGS_BASE + 0x174)  /* spi�����жϵ�ʹ�ܼĴ����������Ƿ񷢸�Cpu Interface�� */
#define xxx_GICD_REGS_GICD_ISENABLER_SPI_29_REG            (xxx_GICD_REGS_BASE + 0x178)  /* spi�����жϵ�ʹ�ܼĴ����������Ƿ񷢸�Cpu Interface�� */
#define xxx_GICD_REGS_GICD_ISENABLER_SPI_30_REG            (xxx_GICD_REGS_BASE + 0x17C)  /* spi�����жϵ�ʹ�ܼĴ����������Ƿ񷢸�Cpu Interface�� */
#define xxx_GICD_REGS_GICD_ICENABLER_LOW_REG               (xxx_GICD_REGS_BASE + 0x180)  /* lowid�ж��е����жϵ����ʹ�ܵļĴ�����ȷ���Ƿ񷢸�CPU Interface�� */
#define xxx_GICD_REGS_GICD_ICENABLER_SPI_0_REG             (xxx_GICD_REGS_BASE + 0x184)  /* spi�����жϵ����ʹ�ܵļĴ�����ȷ���Ƿ񷢸�CPU Interface��m��ֵ��GICD_TYPER.ITLinesNumber����,m{0,2} */
#define xxx_GICD_REGS_GICD_ICENABLER_SPI_1_REG             (xxx_GICD_REGS_BASE + 0x188)  /* spi�����жϵ����ʹ�ܵļĴ�����ȷ���Ƿ񷢸�CPU Interface��m��ֵ��GICD_TYPER.ITLinesNumber����,m{0,2} */
#define xxx_GICD_REGS_GICD_ICENABLER_SPI_2_REG             (xxx_GICD_REGS_BASE + 0x18C)  /* spi�����жϵ����ʹ�ܵļĴ�����ȷ���Ƿ񷢸�CPU Interface��m��ֵ��GICD_TYPER.ITLinesNumber����,m{0,2} */
#define xxx_GICD_REGS_GICD_ICENABLER_SPI_3_REG             (xxx_GICD_REGS_BASE + 0x190)  /* spi�����жϵ����ʹ�ܵļĴ�����ȷ���Ƿ񷢸�CPU Interface��m��ֵ��GICD_TYPER.ITLinesNumber����,m{0,2} */
#define xxx_GICD_REGS_GICD_ICENABLER_SPI_4_REG             (xxx_GICD_REGS_BASE + 0x194)  /* spi�����жϵ����ʹ�ܵļĴ�����ȷ���Ƿ񷢸�CPU Interface��m��ֵ��GICD_TYPER.ITLinesNumber����,m{0,2} */
#define xxx_GICD_REGS_GICD_ICENABLER_SPI_5_REG             (xxx_GICD_REGS_BASE + 0x198)  /* spi�����жϵ����ʹ�ܵļĴ�����ȷ���Ƿ񷢸�CPU Interface��m��ֵ��GICD_TYPER.ITLinesNumber����,m{0,2} */
#define xxx_GICD_REGS_GICD_ICENABLER_SPI_6_REG             (xxx_GICD_REGS_BASE + 0x19C)  /* spi�����жϵ����ʹ�ܵļĴ�����ȷ���Ƿ񷢸�CPU Interface��m��ֵ��GICD_TYPER.ITLinesNumber����,m{0,2} */
#define xxx_GICD_REGS_GICD_ICENABLER_SPI_7_REG             (xxx_GICD_REGS_BASE + 0x1A0)  /* spi�����жϵ����ʹ�ܵļĴ�����ȷ���Ƿ񷢸�CPU Interface��m��ֵ��GICD_TYPER.ITLinesNumber����,m{0,2} */
#define xxx_GICD_REGS_GICD_ICENABLER_SPI_8_REG             (xxx_GICD_REGS_BASE + 0x1A4)  /* spi�����жϵ����ʹ�ܵļĴ�����ȷ���Ƿ񷢸�CPU Interface��m��ֵ��GICD_TYPER.ITLinesNumber����,m{0,2} */
#define xxx_GICD_REGS_GICD_ICENABLER_SPI_9_REG             (xxx_GICD_REGS_BASE + 0x1A8)  /* spi�����жϵ����ʹ�ܵļĴ�����ȷ���Ƿ񷢸�CPU Interface��m��ֵ��GICD_TYPER.ITLinesNumber����,m{0,2} */
#define xxx_GICD_REGS_GICD_ICENABLER_SPI_10_REG            (xxx_GICD_REGS_BASE + 0x1AC)  /* spi�����жϵ����ʹ�ܵļĴ�����ȷ���Ƿ񷢸�CPU Interface��m��ֵ��GICD_TYPER.ITLinesNumber����,m{0,2} */
#define xxx_GICD_REGS_GICD_ICENABLER_SPI_11_REG            (xxx_GICD_REGS_BASE + 0x1B0)  /* spi�����жϵ����ʹ�ܵļĴ�����ȷ���Ƿ񷢸�CPU Interface��m��ֵ��GICD_TYPER.ITLinesNumber����,m{0,2} */
#define xxx_GICD_REGS_GICD_ICENABLER_SPI_12_REG            (xxx_GICD_REGS_BASE + 0x1B4)  /* spi�����жϵ����ʹ�ܵļĴ�����ȷ���Ƿ񷢸�CPU Interface��m��ֵ��GICD_TYPER.ITLinesNumber����,m{0,2} */
#define xxx_GICD_REGS_GICD_ICENABLER_SPI_13_REG            (xxx_GICD_REGS_BASE + 0x1B8)  /* spi�����жϵ����ʹ�ܵļĴ�����ȷ���Ƿ񷢸�CPU Interface��m��ֵ��GICD_TYPER.ITLinesNumber����,m{0,2} */
#define xxx_GICD_REGS_GICD_ICENABLER_SPI_14_REG            (xxx_GICD_REGS_BASE + 0x1BC)  /* spi�����жϵ����ʹ�ܵļĴ�����ȷ���Ƿ񷢸�CPU Interface��m��ֵ��GICD_TYPER.ITLinesNumber����,m{0,2} */
#define xxx_GICD_REGS_GICD_ICENABLER_SPI_15_REG            (xxx_GICD_REGS_BASE + 0x1C0)  /* spi�����жϵ����ʹ�ܵļĴ�����ȷ���Ƿ񷢸�CPU Interface��m��ֵ��GICD_TYPER.ITLinesNumber����,m{0,2} */
#define xxx_GICD_REGS_GICD_ICENABLER_SPI_16_REG            (xxx_GICD_REGS_BASE + 0x1C4)  /* spi�����жϵ����ʹ�ܵļĴ�����ȷ���Ƿ񷢸�CPU Interface��m��ֵ��GICD_TYPER.ITLinesNumber����,m{0,2} */
#define xxx_GICD_REGS_GICD_ICENABLER_SPI_17_REG            (xxx_GICD_REGS_BASE + 0x1C8)  /* spi�����жϵ����ʹ�ܵļĴ�����ȷ���Ƿ񷢸�CPU Interface��m��ֵ��GICD_TYPER.ITLinesNumber����,m{0,2} */
#define xxx_GICD_REGS_GICD_ICENABLER_SPI_18_REG            (xxx_GICD_REGS_BASE + 0x1CC)  /* spi�����жϵ����ʹ�ܵļĴ�����ȷ���Ƿ񷢸�CPU Interface��m��ֵ��GICD_TYPER.ITLinesNumber����,m{0,2} */
#define xxx_GICD_REGS_GICD_ICENABLER_SPI_19_REG            (xxx_GICD_REGS_BASE + 0x1D0)  /* spi�����жϵ����ʹ�ܵļĴ�����ȷ���Ƿ񷢸�CPU Interface��m��ֵ��GICD_TYPER.ITLinesNumber����,m{0,2} */
#define xxx_GICD_REGS_GICD_ICENABLER_SPI_20_REG            (xxx_GICD_REGS_BASE + 0x1D4)  /* spi�����жϵ����ʹ�ܵļĴ�����ȷ���Ƿ񷢸�CPU Interface��m��ֵ��GICD_TYPER.ITLinesNumber����,m{0,2} */
#define xxx_GICD_REGS_GICD_ICENABLER_SPI_21_REG            (xxx_GICD_REGS_BASE + 0x1D8)  /* spi�����жϵ����ʹ�ܵļĴ�����ȷ���Ƿ񷢸�CPU Interface��m��ֵ��GICD_TYPER.ITLinesNumber����,m{0,2} */
#define xxx_GICD_REGS_GICD_ICENABLER_SPI_22_REG            (xxx_GICD_REGS_BASE + 0x1DC)  /* spi�����жϵ����ʹ�ܵļĴ�����ȷ���Ƿ񷢸�CPU Interface��m��ֵ��GICD_TYPER.ITLinesNumber����,m{0,2} */
#define xxx_GICD_REGS_GICD_ICENABLER_SPI_23_REG            (xxx_GICD_REGS_BASE + 0x1E0)  /* spi�����жϵ����ʹ�ܵļĴ�����ȷ���Ƿ񷢸�CPU Interface��m��ֵ��GICD_TYPER.ITLinesNumber����,m{0,2} */
#define xxx_GICD_REGS_GICD_ICENABLER_SPI_24_REG            (xxx_GICD_REGS_BASE + 0x1E4)  /* spi�����жϵ����ʹ�ܵļĴ�����ȷ���Ƿ񷢸�CPU Interface��m��ֵ��GICD_TYPER.ITLinesNumber����,m{0,2} */
#define xxx_GICD_REGS_GICD_ICENABLER_SPI_25_REG            (xxx_GICD_REGS_BASE + 0x1E8)  /* spi�����жϵ����ʹ�ܵļĴ�����ȷ���Ƿ񷢸�CPU Interface��m��ֵ��GICD_TYPER.ITLinesNumber����,m{0,2} */
#define xxx_GICD_REGS_GICD_ICENABLER_SPI_26_REG            (xxx_GICD_REGS_BASE + 0x1EC)  /* spi�����жϵ����ʹ�ܵļĴ�����ȷ���Ƿ񷢸�CPU Interface��m��ֵ��GICD_TYPER.ITLinesNumber����,m{0,2} */
#define xxx_GICD_REGS_GICD_ICENABLER_SPI_27_REG            (xxx_GICD_REGS_BASE + 0x1F0)  /* spi�����жϵ����ʹ�ܵļĴ�����ȷ���Ƿ񷢸�CPU Interface��m��ֵ��GICD_TYPER.ITLinesNumber����,m{0,2} */
#define xxx_GICD_REGS_GICD_ICENABLER_SPI_28_REG            (xxx_GICD_REGS_BASE + 0x1F4)  /* spi�����жϵ����ʹ�ܵļĴ�����ȷ���Ƿ񷢸�CPU Interface��m��ֵ��GICD_TYPER.ITLinesNumber����,m{0,2} */
#define xxx_GICD_REGS_GICD_ICENABLER_SPI_29_REG            (xxx_GICD_REGS_BASE + 0x1F8)  /* spi�����жϵ����ʹ�ܵļĴ�����ȷ���Ƿ񷢸�CPU Interface��m��ֵ��GICD_TYPER.ITLinesNumber����,m{0,2} */
#define xxx_GICD_REGS_GICD_ICENABLER_SPI_30_REG            (xxx_GICD_REGS_BASE + 0x1FC)  /* spi�����жϵ����ʹ�ܵļĴ�����ȷ���Ƿ񷢸�CPU Interface��m��ֵ��GICD_TYPER.ITLinesNumber����,m{0,2} */
#define xxx_GICD_REGS_GICD_IPRIORITY_LOWSGI_NS_0_REG       (xxx_GICD_REGS_BASE + 0x400)  /* ÿ8bit��Ӧһ���жϵ����ȼ���x{0,3} */
#define xxx_GICD_REGS_GICD_IPRIORITY_LOWSGI_NS_1_REG       (xxx_GICD_REGS_BASE + 0x404)  /* ÿ8bit��Ӧһ���жϵ����ȼ���x{0,3} */
#define xxx_GICD_REGS_GICD_IPRIORITY_LOWSGI_NS_2_REG       (xxx_GICD_REGS_BASE + 0x408)  /* ÿ8bit��Ӧһ���жϵ����ȼ���x{0,3} */
#define xxx_GICD_REGS_GICD_IPRIORITY_LOWSGI_NS_3_REG       (xxx_GICD_REGS_BASE + 0x40C)  /* ÿ8bit��Ӧһ���жϵ����ȼ���x{0,3} */
#define xxx_GICD_REGS_GICD_IPRIORITY_LOWPPI2023_NS_REG     (xxx_GICD_REGS_BASE + 0x414)  /* ÿ8bit��Ӧһ���жϵ����ȼ��� */
#define xxx_GICD_REGS_GICD_IPRIORITY_LOWPPI24TO31_NS_0_REG (xxx_GICD_REGS_BASE + 0x418)  /* ÿ8bit��Ӧһ���жϵ����ȼ���y{0,1} */
#define xxx_GICD_REGS_GICD_IPRIORITY_LOWPPI24TO31_NS_1_REG (xxx_GICD_REGS_BASE + 0x41C)  /* ÿ8bit��Ӧһ���жϵ����ȼ���y{0,1} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_0_REG         (xxx_GICD_REGS_BASE + 0x420)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_1_REG         (xxx_GICD_REGS_BASE + 0x424)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_2_REG         (xxx_GICD_REGS_BASE + 0x428)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_3_REG         (xxx_GICD_REGS_BASE + 0x42C)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_4_REG         (xxx_GICD_REGS_BASE + 0x430)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_5_REG         (xxx_GICD_REGS_BASE + 0x434)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_6_REG         (xxx_GICD_REGS_BASE + 0x438)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_7_REG         (xxx_GICD_REGS_BASE + 0x43C)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_8_REG         (xxx_GICD_REGS_BASE + 0x440)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_9_REG         (xxx_GICD_REGS_BASE + 0x444)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_10_REG        (xxx_GICD_REGS_BASE + 0x448)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_11_REG        (xxx_GICD_REGS_BASE + 0x44C)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_12_REG        (xxx_GICD_REGS_BASE + 0x450)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_13_REG        (xxx_GICD_REGS_BASE + 0x454)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_14_REG        (xxx_GICD_REGS_BASE + 0x458)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_15_REG        (xxx_GICD_REGS_BASE + 0x45C)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_16_REG        (xxx_GICD_REGS_BASE + 0x460)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_17_REG        (xxx_GICD_REGS_BASE + 0x464)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_18_REG        (xxx_GICD_REGS_BASE + 0x468)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_19_REG        (xxx_GICD_REGS_BASE + 0x46C)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_20_REG        (xxx_GICD_REGS_BASE + 0x470)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_21_REG        (xxx_GICD_REGS_BASE + 0x474)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_22_REG        (xxx_GICD_REGS_BASE + 0x478)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_23_REG        (xxx_GICD_REGS_BASE + 0x47C)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_24_REG        (xxx_GICD_REGS_BASE + 0x480)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_25_REG        (xxx_GICD_REGS_BASE + 0x484)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_26_REG        (xxx_GICD_REGS_BASE + 0x488)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_27_REG        (xxx_GICD_REGS_BASE + 0x48C)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_28_REG        (xxx_GICD_REGS_BASE + 0x490)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_29_REG        (xxx_GICD_REGS_BASE + 0x494)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_30_REG        (xxx_GICD_REGS_BASE + 0x498)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_31_REG        (xxx_GICD_REGS_BASE + 0x49C)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_32_REG        (xxx_GICD_REGS_BASE + 0x4A0)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_33_REG        (xxx_GICD_REGS_BASE + 0x4A4)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_34_REG        (xxx_GICD_REGS_BASE + 0x4A8)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_35_REG        (xxx_GICD_REGS_BASE + 0x4AC)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_36_REG        (xxx_GICD_REGS_BASE + 0x4B0)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_37_REG        (xxx_GICD_REGS_BASE + 0x4B4)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_38_REG        (xxx_GICD_REGS_BASE + 0x4B8)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_39_REG        (xxx_GICD_REGS_BASE + 0x4BC)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_40_REG        (xxx_GICD_REGS_BASE + 0x4C0)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_41_REG        (xxx_GICD_REGS_BASE + 0x4C4)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_42_REG        (xxx_GICD_REGS_BASE + 0x4C8)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_43_REG        (xxx_GICD_REGS_BASE + 0x4CC)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_44_REG        (xxx_GICD_REGS_BASE + 0x4D0)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_45_REG        (xxx_GICD_REGS_BASE + 0x4D4)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_46_REG        (xxx_GICD_REGS_BASE + 0x4D8)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_47_REG        (xxx_GICD_REGS_BASE + 0x4DC)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_48_REG        (xxx_GICD_REGS_BASE + 0x4E0)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_49_REG        (xxx_GICD_REGS_BASE + 0x4E4)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_50_REG        (xxx_GICD_REGS_BASE + 0x4E8)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_51_REG        (xxx_GICD_REGS_BASE + 0x4EC)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_52_REG        (xxx_GICD_REGS_BASE + 0x4F0)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_53_REG        (xxx_GICD_REGS_BASE + 0x4F4)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_54_REG        (xxx_GICD_REGS_BASE + 0x4F8)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_55_REG        (xxx_GICD_REGS_BASE + 0x4FC)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_56_REG        (xxx_GICD_REGS_BASE + 0x500)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_57_REG        (xxx_GICD_REGS_BASE + 0x504)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_58_REG        (xxx_GICD_REGS_BASE + 0x508)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_59_REG        (xxx_GICD_REGS_BASE + 0x50C)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_60_REG        (xxx_GICD_REGS_BASE + 0x510)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_61_REG        (xxx_GICD_REGS_BASE + 0x514)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_62_REG        (xxx_GICD_REGS_BASE + 0x518)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_63_REG        (xxx_GICD_REGS_BASE + 0x51C)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_64_REG        (xxx_GICD_REGS_BASE + 0x520)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_65_REG        (xxx_GICD_REGS_BASE + 0x524)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_66_REG        (xxx_GICD_REGS_BASE + 0x528)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_67_REG        (xxx_GICD_REGS_BASE + 0x52C)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_68_REG        (xxx_GICD_REGS_BASE + 0x530)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_69_REG        (xxx_GICD_REGS_BASE + 0x534)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_70_REG        (xxx_GICD_REGS_BASE + 0x538)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_71_REG        (xxx_GICD_REGS_BASE + 0x53C)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_72_REG        (xxx_GICD_REGS_BASE + 0x540)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_73_REG        (xxx_GICD_REGS_BASE + 0x544)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_74_REG        (xxx_GICD_REGS_BASE + 0x548)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_75_REG        (xxx_GICD_REGS_BASE + 0x54C)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_76_REG        (xxx_GICD_REGS_BASE + 0x550)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_77_REG        (xxx_GICD_REGS_BASE + 0x554)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_78_REG        (xxx_GICD_REGS_BASE + 0x558)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_79_REG        (xxx_GICD_REGS_BASE + 0x55C)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_80_REG        (xxx_GICD_REGS_BASE + 0x560)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_81_REG        (xxx_GICD_REGS_BASE + 0x564)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_82_REG        (xxx_GICD_REGS_BASE + 0x568)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_83_REG        (xxx_GICD_REGS_BASE + 0x56C)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_84_REG        (xxx_GICD_REGS_BASE + 0x570)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_85_REG        (xxx_GICD_REGS_BASE + 0x574)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_86_REG        (xxx_GICD_REGS_BASE + 0x578)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_87_REG        (xxx_GICD_REGS_BASE + 0x57C)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_88_REG        (xxx_GICD_REGS_BASE + 0x580)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_89_REG        (xxx_GICD_REGS_BASE + 0x584)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_90_REG        (xxx_GICD_REGS_BASE + 0x588)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_91_REG        (xxx_GICD_REGS_BASE + 0x58C)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_92_REG        (xxx_GICD_REGS_BASE + 0x590)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_93_REG        (xxx_GICD_REGS_BASE + 0x594)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_94_REG        (xxx_GICD_REGS_BASE + 0x598)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_95_REG        (xxx_GICD_REGS_BASE + 0x59C)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_96_REG        (xxx_GICD_REGS_BASE + 0x5A0)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_97_REG        (xxx_GICD_REGS_BASE + 0x5A4)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_98_REG        (xxx_GICD_REGS_BASE + 0x5A8)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_99_REG        (xxx_GICD_REGS_BASE + 0x5AC)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_100_REG       (xxx_GICD_REGS_BASE + 0x5B0)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_101_REG       (xxx_GICD_REGS_BASE + 0x5B4)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_102_REG       (xxx_GICD_REGS_BASE + 0x5B8)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_103_REG       (xxx_GICD_REGS_BASE + 0x5BC)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_104_REG       (xxx_GICD_REGS_BASE + 0x5C0)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_105_REG       (xxx_GICD_REGS_BASE + 0x5C4)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_106_REG       (xxx_GICD_REGS_BASE + 0x5C8)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_107_REG       (xxx_GICD_REGS_BASE + 0x5CC)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_108_REG       (xxx_GICD_REGS_BASE + 0x5D0)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_109_REG       (xxx_GICD_REGS_BASE + 0x5D4)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_110_REG       (xxx_GICD_REGS_BASE + 0x5D8)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_111_REG       (xxx_GICD_REGS_BASE + 0x5DC)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_112_REG       (xxx_GICD_REGS_BASE + 0x5E0)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_113_REG       (xxx_GICD_REGS_BASE + 0x5E4)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_114_REG       (xxx_GICD_REGS_BASE + 0x5E8)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_115_REG       (xxx_GICD_REGS_BASE + 0x5EC)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_116_REG       (xxx_GICD_REGS_BASE + 0x5F0)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_117_REG       (xxx_GICD_REGS_BASE + 0x5F4)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_118_REG       (xxx_GICD_REGS_BASE + 0x5F8)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_119_REG       (xxx_GICD_REGS_BASE + 0x5FC)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_120_REG       (xxx_GICD_REGS_BASE + 0x600)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_121_REG       (xxx_GICD_REGS_BASE + 0x604)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_122_REG       (xxx_GICD_REGS_BASE + 0x608)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_123_REG       (xxx_GICD_REGS_BASE + 0x60C)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_124_REG       (xxx_GICD_REGS_BASE + 0x610)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_125_REG       (xxx_GICD_REGS_BASE + 0x614)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_126_REG       (xxx_GICD_REGS_BASE + 0x618)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_127_REG       (xxx_GICD_REGS_BASE + 0x61C)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_128_REG       (xxx_GICD_REGS_BASE + 0x620)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_129_REG       (xxx_GICD_REGS_BASE + 0x624)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_130_REG       (xxx_GICD_REGS_BASE + 0x628)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_131_REG       (xxx_GICD_REGS_BASE + 0x62C)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_132_REG       (xxx_GICD_REGS_BASE + 0x630)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_133_REG       (xxx_GICD_REGS_BASE + 0x634)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_134_REG       (xxx_GICD_REGS_BASE + 0x638)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_135_REG       (xxx_GICD_REGS_BASE + 0x63C)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_136_REG       (xxx_GICD_REGS_BASE + 0x640)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_137_REG       (xxx_GICD_REGS_BASE + 0x644)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_138_REG       (xxx_GICD_REGS_BASE + 0x648)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_139_REG       (xxx_GICD_REGS_BASE + 0x64C)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_140_REG       (xxx_GICD_REGS_BASE + 0x650)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_141_REG       (xxx_GICD_REGS_BASE + 0x654)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_142_REG       (xxx_GICD_REGS_BASE + 0x658)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_143_REG       (xxx_GICD_REGS_BASE + 0x65C)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_144_REG       (xxx_GICD_REGS_BASE + 0x660)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_145_REG       (xxx_GICD_REGS_BASE + 0x664)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_146_REG       (xxx_GICD_REGS_BASE + 0x668)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_147_REG       (xxx_GICD_REGS_BASE + 0x66C)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_148_REG       (xxx_GICD_REGS_BASE + 0x670)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_149_REG       (xxx_GICD_REGS_BASE + 0x674)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_150_REG       (xxx_GICD_REGS_BASE + 0x678)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_151_REG       (xxx_GICD_REGS_BASE + 0x67C)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_152_REG       (xxx_GICD_REGS_BASE + 0x680)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_153_REG       (xxx_GICD_REGS_BASE + 0x684)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_154_REG       (xxx_GICD_REGS_BASE + 0x688)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_155_REG       (xxx_GICD_REGS_BASE + 0x68C)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_156_REG       (xxx_GICD_REGS_BASE + 0x690)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_157_REG       (xxx_GICD_REGS_BASE + 0x694)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_158_REG       (xxx_GICD_REGS_BASE + 0x698)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_159_REG       (xxx_GICD_REGS_BASE + 0x69C)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_160_REG       (xxx_GICD_REGS_BASE + 0x6A0)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_161_REG       (xxx_GICD_REGS_BASE + 0x6A4)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_162_REG       (xxx_GICD_REGS_BASE + 0x6A8)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_163_REG       (xxx_GICD_REGS_BASE + 0x6AC)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_164_REG       (xxx_GICD_REGS_BASE + 0x6B0)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_165_REG       (xxx_GICD_REGS_BASE + 0x6B4)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_166_REG       (xxx_GICD_REGS_BASE + 0x6B8)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_167_REG       (xxx_GICD_REGS_BASE + 0x6BC)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_168_REG       (xxx_GICD_REGS_BASE + 0x6C0)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_169_REG       (xxx_GICD_REGS_BASE + 0x6C4)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_170_REG       (xxx_GICD_REGS_BASE + 0x6C8)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_171_REG       (xxx_GICD_REGS_BASE + 0x6CC)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_172_REG       (xxx_GICD_REGS_BASE + 0x6D0)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_173_REG       (xxx_GICD_REGS_BASE + 0x6D4)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_174_REG       (xxx_GICD_REGS_BASE + 0x6D8)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_175_REG       (xxx_GICD_REGS_BASE + 0x6DC)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_176_REG       (xxx_GICD_REGS_BASE + 0x6E0)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_177_REG       (xxx_GICD_REGS_BASE + 0x6E4)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_178_REG       (xxx_GICD_REGS_BASE + 0x6E8)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_179_REG       (xxx_GICD_REGS_BASE + 0x6EC)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_180_REG       (xxx_GICD_REGS_BASE + 0x6F0)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_181_REG       (xxx_GICD_REGS_BASE + 0x6F4)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_182_REG       (xxx_GICD_REGS_BASE + 0x6F8)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_183_REG       (xxx_GICD_REGS_BASE + 0x6FC)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_184_REG       (xxx_GICD_REGS_BASE + 0x700)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_185_REG       (xxx_GICD_REGS_BASE + 0x704)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_186_REG       (xxx_GICD_REGS_BASE + 0x708)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_187_REG       (xxx_GICD_REGS_BASE + 0x70C)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_188_REG       (xxx_GICD_REGS_BASE + 0x710)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_189_REG       (xxx_GICD_REGS_BASE + 0x714)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_190_REG       (xxx_GICD_REGS_BASE + 0x718)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_191_REG       (xxx_GICD_REGS_BASE + 0x71C)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_192_REG       (xxx_GICD_REGS_BASE + 0x720)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_193_REG       (xxx_GICD_REGS_BASE + 0x724)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_194_REG       (xxx_GICD_REGS_BASE + 0x728)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_195_REG       (xxx_GICD_REGS_BASE + 0x72C)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_196_REG       (xxx_GICD_REGS_BASE + 0x730)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_197_REG       (xxx_GICD_REGS_BASE + 0x734)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_198_REG       (xxx_GICD_REGS_BASE + 0x738)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_199_REG       (xxx_GICD_REGS_BASE + 0x73C)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_200_REG       (xxx_GICD_REGS_BASE + 0x740)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_201_REG       (xxx_GICD_REGS_BASE + 0x744)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_202_REG       (xxx_GICD_REGS_BASE + 0x748)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_203_REG       (xxx_GICD_REGS_BASE + 0x74C)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_204_REG       (xxx_GICD_REGS_BASE + 0x750)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_205_REG       (xxx_GICD_REGS_BASE + 0x754)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_206_REG       (xxx_GICD_REGS_BASE + 0x758)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_207_REG       (xxx_GICD_REGS_BASE + 0x75C)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_208_REG       (xxx_GICD_REGS_BASE + 0x760)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_209_REG       (xxx_GICD_REGS_BASE + 0x764)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_210_REG       (xxx_GICD_REGS_BASE + 0x768)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_211_REG       (xxx_GICD_REGS_BASE + 0x76C)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_212_REG       (xxx_GICD_REGS_BASE + 0x770)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_213_REG       (xxx_GICD_REGS_BASE + 0x774)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_214_REG       (xxx_GICD_REGS_BASE + 0x778)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_215_REG       (xxx_GICD_REGS_BASE + 0x77C)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_216_REG       (xxx_GICD_REGS_BASE + 0x780)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_217_REG       (xxx_GICD_REGS_BASE + 0x784)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_218_REG       (xxx_GICD_REGS_BASE + 0x788)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_219_REG       (xxx_GICD_REGS_BASE + 0x78C)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_220_REG       (xxx_GICD_REGS_BASE + 0x790)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_221_REG       (xxx_GICD_REGS_BASE + 0x794)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_222_REG       (xxx_GICD_REGS_BASE + 0x798)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_223_REG       (xxx_GICD_REGS_BASE + 0x79C)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_224_REG       (xxx_GICD_REGS_BASE + 0x7A0)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_225_REG       (xxx_GICD_REGS_BASE + 0x7A4)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_226_REG       (xxx_GICD_REGS_BASE + 0x7A8)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_227_REG       (xxx_GICD_REGS_BASE + 0x7AC)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_228_REG       (xxx_GICD_REGS_BASE + 0x7B0)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_229_REG       (xxx_GICD_REGS_BASE + 0x7B4)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_230_REG       (xxx_GICD_REGS_BASE + 0x7B8)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_231_REG       (xxx_GICD_REGS_BASE + 0x7BC)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_232_REG       (xxx_GICD_REGS_BASE + 0x7C0)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_233_REG       (xxx_GICD_REGS_BASE + 0x7C4)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_234_REG       (xxx_GICD_REGS_BASE + 0x7C8)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_235_REG       (xxx_GICD_REGS_BASE + 0x7CC)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_236_REG       (xxx_GICD_REGS_BASE + 0x7D0)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_237_REG       (xxx_GICD_REGS_BASE + 0x7D4)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_238_REG       (xxx_GICD_REGS_BASE + 0x7D8)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_239_REG       (xxx_GICD_REGS_BASE + 0x7DC)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_240_REG       (xxx_GICD_REGS_BASE + 0x7E0)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_241_REG       (xxx_GICD_REGS_BASE + 0x7E4)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_242_REG       (xxx_GICD_REGS_BASE + 0x7E8)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_243_REG       (xxx_GICD_REGS_BASE + 0x7EC)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_244_REG       (xxx_GICD_REGS_BASE + 0x7F0)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_245_REG       (xxx_GICD_REGS_BASE + 0x7F4)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_246_REG       (xxx_GICD_REGS_BASE + 0x7F8)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_IPRIORITYR_SPI_NS_247_REG       (xxx_GICD_REGS_BASE + 0x7FC)  /* ÿ8bit��Ӧһ���жϵ����ȼ���n{0,23} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_0_REG             (xxx_GICD_REGS_BASE + 0x880)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_1_REG             (xxx_GICD_REGS_BASE + 0x884)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_2_REG             (xxx_GICD_REGS_BASE + 0x888)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_3_REG             (xxx_GICD_REGS_BASE + 0x88C)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_4_REG             (xxx_GICD_REGS_BASE + 0x890)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_5_REG             (xxx_GICD_REGS_BASE + 0x894)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_6_REG             (xxx_GICD_REGS_BASE + 0x898)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_7_REG             (xxx_GICD_REGS_BASE + 0x89C)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_8_REG             (xxx_GICD_REGS_BASE + 0x8A0)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_9_REG             (xxx_GICD_REGS_BASE + 0x8A4)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_10_REG            (xxx_GICD_REGS_BASE + 0x8A8)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_11_REG            (xxx_GICD_REGS_BASE + 0x8AC)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_12_REG            (xxx_GICD_REGS_BASE + 0x8B0)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_13_REG            (xxx_GICD_REGS_BASE + 0x8B4)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_14_REG            (xxx_GICD_REGS_BASE + 0x8B8)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_15_REG            (xxx_GICD_REGS_BASE + 0x8BC)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_16_REG            (xxx_GICD_REGS_BASE + 0x8C0)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_17_REG            (xxx_GICD_REGS_BASE + 0x8C4)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_18_REG            (xxx_GICD_REGS_BASE + 0x8C8)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_19_REG            (xxx_GICD_REGS_BASE + 0x8CC)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_20_REG            (xxx_GICD_REGS_BASE + 0x8D0)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_21_REG            (xxx_GICD_REGS_BASE + 0x8D4)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_22_REG            (xxx_GICD_REGS_BASE + 0x8D8)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_23_REG            (xxx_GICD_REGS_BASE + 0x8DC)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_24_REG            (xxx_GICD_REGS_BASE + 0x8E0)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_25_REG            (xxx_GICD_REGS_BASE + 0x8E4)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_26_REG            (xxx_GICD_REGS_BASE + 0x8E8)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_27_REG            (xxx_GICD_REGS_BASE + 0x8EC)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_28_REG            (xxx_GICD_REGS_BASE + 0x8F0)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_29_REG            (xxx_GICD_REGS_BASE + 0x8F4)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_30_REG            (xxx_GICD_REGS_BASE + 0x8F8)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_31_REG            (xxx_GICD_REGS_BASE + 0x8FC)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_32_REG            (xxx_GICD_REGS_BASE + 0x900)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_33_REG            (xxx_GICD_REGS_BASE + 0x904)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_34_REG            (xxx_GICD_REGS_BASE + 0x908)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_35_REG            (xxx_GICD_REGS_BASE + 0x90C)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_36_REG            (xxx_GICD_REGS_BASE + 0x910)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_37_REG            (xxx_GICD_REGS_BASE + 0x914)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_38_REG            (xxx_GICD_REGS_BASE + 0x918)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_39_REG            (xxx_GICD_REGS_BASE + 0x91C)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_40_REG            (xxx_GICD_REGS_BASE + 0x920)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_41_REG            (xxx_GICD_REGS_BASE + 0x924)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_42_REG            (xxx_GICD_REGS_BASE + 0x928)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_43_REG            (xxx_GICD_REGS_BASE + 0x92C)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_44_REG            (xxx_GICD_REGS_BASE + 0x930)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_45_REG            (xxx_GICD_REGS_BASE + 0x934)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_46_REG            (xxx_GICD_REGS_BASE + 0x938)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_47_REG            (xxx_GICD_REGS_BASE + 0x93C)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_48_REG            (xxx_GICD_REGS_BASE + 0x940)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_49_REG            (xxx_GICD_REGS_BASE + 0x944)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_50_REG            (xxx_GICD_REGS_BASE + 0x948)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_51_REG            (xxx_GICD_REGS_BASE + 0x94C)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_52_REG            (xxx_GICD_REGS_BASE + 0x950)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_53_REG            (xxx_GICD_REGS_BASE + 0x954)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_54_REG            (xxx_GICD_REGS_BASE + 0x958)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_55_REG            (xxx_GICD_REGS_BASE + 0x95C)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_56_REG            (xxx_GICD_REGS_BASE + 0x960)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_57_REG            (xxx_GICD_REGS_BASE + 0x964)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_58_REG            (xxx_GICD_REGS_BASE + 0x968)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_59_REG            (xxx_GICD_REGS_BASE + 0x96C)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_60_REG            (xxx_GICD_REGS_BASE + 0x970)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_61_REG            (xxx_GICD_REGS_BASE + 0x974)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_62_REG            (xxx_GICD_REGS_BASE + 0x978)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_63_REG            (xxx_GICD_REGS_BASE + 0x97C)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_64_REG            (xxx_GICD_REGS_BASE + 0x980)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_65_REG            (xxx_GICD_REGS_BASE + 0x984)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_66_REG            (xxx_GICD_REGS_BASE + 0x988)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_67_REG            (xxx_GICD_REGS_BASE + 0x98C)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_68_REG            (xxx_GICD_REGS_BASE + 0x990)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_69_REG            (xxx_GICD_REGS_BASE + 0x994)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_70_REG            (xxx_GICD_REGS_BASE + 0x998)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_71_REG            (xxx_GICD_REGS_BASE + 0x99C)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_72_REG            (xxx_GICD_REGS_BASE + 0x9A0)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_73_REG            (xxx_GICD_REGS_BASE + 0x9A4)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_74_REG            (xxx_GICD_REGS_BASE + 0x9A8)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_75_REG            (xxx_GICD_REGS_BASE + 0x9AC)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_76_REG            (xxx_GICD_REGS_BASE + 0x9B0)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_77_REG            (xxx_GICD_REGS_BASE + 0x9B4)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_78_REG            (xxx_GICD_REGS_BASE + 0x9B8)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_79_REG            (xxx_GICD_REGS_BASE + 0x9BC)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_80_REG            (xxx_GICD_REGS_BASE + 0x9C0)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_81_REG            (xxx_GICD_REGS_BASE + 0x9C4)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_82_REG            (xxx_GICD_REGS_BASE + 0x9C8)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_83_REG            (xxx_GICD_REGS_BASE + 0x9CC)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_84_REG            (xxx_GICD_REGS_BASE + 0x9D0)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_85_REG            (xxx_GICD_REGS_BASE + 0x9D4)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_86_REG            (xxx_GICD_REGS_BASE + 0x9D8)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_87_REG            (xxx_GICD_REGS_BASE + 0x9DC)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_88_REG            (xxx_GICD_REGS_BASE + 0x9E0)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_89_REG            (xxx_GICD_REGS_BASE + 0x9E4)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_90_REG            (xxx_GICD_REGS_BASE + 0x9E8)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_91_REG            (xxx_GICD_REGS_BASE + 0x9EC)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_92_REG            (xxx_GICD_REGS_BASE + 0x9F0)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_93_REG            (xxx_GICD_REGS_BASE + 0x9F4)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_94_REG            (xxx_GICD_REGS_BASE + 0x9F8)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_95_REG            (xxx_GICD_REGS_BASE + 0x9FC)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_96_REG            (xxx_GICD_REGS_BASE + 0xA00)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_97_REG            (xxx_GICD_REGS_BASE + 0xA04)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_98_REG            (xxx_GICD_REGS_BASE + 0xA08)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_99_REG            (xxx_GICD_REGS_BASE + 0xA0C)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_100_REG           (xxx_GICD_REGS_BASE + 0xA10)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_101_REG           (xxx_GICD_REGS_BASE + 0xA14)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_102_REG           (xxx_GICD_REGS_BASE + 0xA18)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_103_REG           (xxx_GICD_REGS_BASE + 0xA1C)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_104_REG           (xxx_GICD_REGS_BASE + 0xA20)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_105_REG           (xxx_GICD_REGS_BASE + 0xA24)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_106_REG           (xxx_GICD_REGS_BASE + 0xA28)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_107_REG           (xxx_GICD_REGS_BASE + 0xA2C)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_108_REG           (xxx_GICD_REGS_BASE + 0xA30)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_109_REG           (xxx_GICD_REGS_BASE + 0xA34)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_110_REG           (xxx_GICD_REGS_BASE + 0xA38)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_111_REG           (xxx_GICD_REGS_BASE + 0xA3C)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_112_REG           (xxx_GICD_REGS_BASE + 0xA40)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_113_REG           (xxx_GICD_REGS_BASE + 0xA44)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_114_REG           (xxx_GICD_REGS_BASE + 0xA48)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_115_REG           (xxx_GICD_REGS_BASE + 0xA4C)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_116_REG           (xxx_GICD_REGS_BASE + 0xA50)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_117_REG           (xxx_GICD_REGS_BASE + 0xA54)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_118_REG           (xxx_GICD_REGS_BASE + 0xA58)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_119_REG           (xxx_GICD_REGS_BASE + 0xA5C)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_120_REG           (xxx_GICD_REGS_BASE + 0xA60)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_121_REG           (xxx_GICD_REGS_BASE + 0xA64)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_122_REG           (xxx_GICD_REGS_BASE + 0xA68)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_123_REG           (xxx_GICD_REGS_BASE + 0xA6C)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_124_REG           (xxx_GICD_REGS_BASE + 0xA70)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_125_REG           (xxx_GICD_REGS_BASE + 0xA74)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_126_REG           (xxx_GICD_REGS_BASE + 0xA78)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_127_REG           (xxx_GICD_REGS_BASE + 0xA7C)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_128_REG           (xxx_GICD_REGS_BASE + 0xA80)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_129_REG           (xxx_GICD_REGS_BASE + 0xA84)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_130_REG           (xxx_GICD_REGS_BASE + 0xA88)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_131_REG           (xxx_GICD_REGS_BASE + 0xA8C)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_132_REG           (xxx_GICD_REGS_BASE + 0xA90)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_133_REG           (xxx_GICD_REGS_BASE + 0xA94)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_134_REG           (xxx_GICD_REGS_BASE + 0xA98)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_135_REG           (xxx_GICD_REGS_BASE + 0xA9C)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_136_REG           (xxx_GICD_REGS_BASE + 0xAA0)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_137_REG           (xxx_GICD_REGS_BASE + 0xAA4)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_138_REG           (xxx_GICD_REGS_BASE + 0xAA8)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_139_REG           (xxx_GICD_REGS_BASE + 0xAAC)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_140_REG           (xxx_GICD_REGS_BASE + 0xAB0)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_141_REG           (xxx_GICD_REGS_BASE + 0xAB4)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_142_REG           (xxx_GICD_REGS_BASE + 0xAB8)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_143_REG           (xxx_GICD_REGS_BASE + 0xABC)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_144_REG           (xxx_GICD_REGS_BASE + 0xAC0)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_145_REG           (xxx_GICD_REGS_BASE + 0xAC4)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_146_REG           (xxx_GICD_REGS_BASE + 0xAC8)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_147_REG           (xxx_GICD_REGS_BASE + 0xACC)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_148_REG           (xxx_GICD_REGS_BASE + 0xAD0)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_149_REG           (xxx_GICD_REGS_BASE + 0xAD4)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_150_REG           (xxx_GICD_REGS_BASE + 0xAD8)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_151_REG           (xxx_GICD_REGS_BASE + 0xADC)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_152_REG           (xxx_GICD_REGS_BASE + 0xAE0)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_153_REG           (xxx_GICD_REGS_BASE + 0xAE4)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_154_REG           (xxx_GICD_REGS_BASE + 0xAE8)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_155_REG           (xxx_GICD_REGS_BASE + 0xAEC)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_156_REG           (xxx_GICD_REGS_BASE + 0xAF0)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_157_REG           (xxx_GICD_REGS_BASE + 0xAF4)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_158_REG           (xxx_GICD_REGS_BASE + 0xAF8)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_159_REG           (xxx_GICD_REGS_BASE + 0xAFC)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_160_REG           (xxx_GICD_REGS_BASE + 0xB00)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_161_REG           (xxx_GICD_REGS_BASE + 0xB04)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_162_REG           (xxx_GICD_REGS_BASE + 0xB08)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_163_REG           (xxx_GICD_REGS_BASE + 0xB0C)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_164_REG           (xxx_GICD_REGS_BASE + 0xB10)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_165_REG           (xxx_GICD_REGS_BASE + 0xB14)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_166_REG           (xxx_GICD_REGS_BASE + 0xB18)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_167_REG           (xxx_GICD_REGS_BASE + 0xB1C)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_168_REG           (xxx_GICD_REGS_BASE + 0xB20)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_169_REG           (xxx_GICD_REGS_BASE + 0xB24)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_170_REG           (xxx_GICD_REGS_BASE + 0xB28)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_171_REG           (xxx_GICD_REGS_BASE + 0xB2C)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_172_REG           (xxx_GICD_REGS_BASE + 0xB30)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_173_REG           (xxx_GICD_REGS_BASE + 0xB34)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_174_REG           (xxx_GICD_REGS_BASE + 0xB38)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_175_REG           (xxx_GICD_REGS_BASE + 0xB3C)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_176_REG           (xxx_GICD_REGS_BASE + 0xB40)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_177_REG           (xxx_GICD_REGS_BASE + 0xB44)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_178_REG           (xxx_GICD_REGS_BASE + 0xB48)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_179_REG           (xxx_GICD_REGS_BASE + 0xB4C)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_180_REG           (xxx_GICD_REGS_BASE + 0xB50)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_181_REG           (xxx_GICD_REGS_BASE + 0xB54)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_182_REG           (xxx_GICD_REGS_BASE + 0xB58)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_183_REG           (xxx_GICD_REGS_BASE + 0xB5C)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_184_REG           (xxx_GICD_REGS_BASE + 0xB60)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_185_REG           (xxx_GICD_REGS_BASE + 0xB64)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_186_REG           (xxx_GICD_REGS_BASE + 0xB68)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_187_REG           (xxx_GICD_REGS_BASE + 0xB6C)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_188_REG           (xxx_GICD_REGS_BASE + 0xB70)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_189_REG           (xxx_GICD_REGS_BASE + 0xB74)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_190_REG           (xxx_GICD_REGS_BASE + 0xB78)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_191_REG           (xxx_GICD_REGS_BASE + 0xB7C)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_192_REG           (xxx_GICD_REGS_BASE + 0xB80)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_193_REG           (xxx_GICD_REGS_BASE + 0xB84)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_194_REG           (xxx_GICD_REGS_BASE + 0xB88)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_195_REG           (xxx_GICD_REGS_BASE + 0xB8C)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_196_REG           (xxx_GICD_REGS_BASE + 0xB90)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_197_REG           (xxx_GICD_REGS_BASE + 0xB94)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_198_REG           (xxx_GICD_REGS_BASE + 0xB98)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_199_REG           (xxx_GICD_REGS_BASE + 0xB9C)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_200_REG           (xxx_GICD_REGS_BASE + 0xBA0)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_201_REG           (xxx_GICD_REGS_BASE + 0xBA4)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_202_REG           (xxx_GICD_REGS_BASE + 0xBA8)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_203_REG           (xxx_GICD_REGS_BASE + 0xBAC)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_204_REG           (xxx_GICD_REGS_BASE + 0xBB0)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_205_REG           (xxx_GICD_REGS_BASE + 0xBB4)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_206_REG           (xxx_GICD_REGS_BASE + 0xBB8)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_207_REG           (xxx_GICD_REGS_BASE + 0xBBC)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_208_REG           (xxx_GICD_REGS_BASE + 0xBC0)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_209_REG           (xxx_GICD_REGS_BASE + 0xBC4)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_210_REG           (xxx_GICD_REGS_BASE + 0xBC8)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_211_REG           (xxx_GICD_REGS_BASE + 0xBCC)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_212_REG           (xxx_GICD_REGS_BASE + 0xBD0)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_213_REG           (xxx_GICD_REGS_BASE + 0xBD4)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_214_REG           (xxx_GICD_REGS_BASE + 0xBD8)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_215_REG           (xxx_GICD_REGS_BASE + 0xBDC)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_216_REG           (xxx_GICD_REGS_BASE + 0xBE0)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_217_REG           (xxx_GICD_REGS_BASE + 0xBE4)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_218_REG           (xxx_GICD_REGS_BASE + 0xBE8)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_219_REG           (xxx_GICD_REGS_BASE + 0xBEC)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_220_REG           (xxx_GICD_REGS_BASE + 0xBF0)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_221_REG           (xxx_GICD_REGS_BASE + 0xBF4)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_222_REG           (xxx_GICD_REGS_BASE + 0xBF8)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ITARGETSR_SPI_223_REG           (xxx_GICD_REGS_BASE + 0xBFC)  /* SPI_BLOCKÿ32bit��Ӧһ���жϵ�������Ӧ��CPU Interface��h{0,223} */
#define xxx_GICD_REGS_GICD_ICFGR_LOW_SGI_REG               (xxx_GICD_REGS_BASE + 0xC00)  /* �üĴ���ÿ2bit��ʾһ��SGI�ж��ǵ�ƽ���л��Ǳ��ش��� */
#define xxx_GICD_REGS_GICD_ICFGR_LOW_PPI_REG               (xxx_GICD_REGS_BASE + 0xC04)  /* �üĴ���ÿ2bit��ʾһ��PPI�ж��ǵ�ƽ���л��Ǳ��ش��� */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_0_REG          (xxx_GICD_REGS_BASE + 0xC10)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_1_REG          (xxx_GICD_REGS_BASE + 0xC14)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_2_REG          (xxx_GICD_REGS_BASE + 0xC18)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_3_REG          (xxx_GICD_REGS_BASE + 0xC1C)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_4_REG          (xxx_GICD_REGS_BASE + 0xC20)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_5_REG          (xxx_GICD_REGS_BASE + 0xC24)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_6_REG          (xxx_GICD_REGS_BASE + 0xC28)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_7_REG          (xxx_GICD_REGS_BASE + 0xC2C)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_8_REG          (xxx_GICD_REGS_BASE + 0xC30)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_9_REG          (xxx_GICD_REGS_BASE + 0xC34)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_10_REG         (xxx_GICD_REGS_BASE + 0xC38)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_11_REG         (xxx_GICD_REGS_BASE + 0xC3C)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_12_REG         (xxx_GICD_REGS_BASE + 0xC40)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_13_REG         (xxx_GICD_REGS_BASE + 0xC44)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_14_REG         (xxx_GICD_REGS_BASE + 0xC48)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_15_REG         (xxx_GICD_REGS_BASE + 0xC4C)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_16_REG         (xxx_GICD_REGS_BASE + 0xC50)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_17_REG         (xxx_GICD_REGS_BASE + 0xC54)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_18_REG         (xxx_GICD_REGS_BASE + 0xC58)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_19_REG         (xxx_GICD_REGS_BASE + 0xC5C)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_20_REG         (xxx_GICD_REGS_BASE + 0xC60)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_21_REG         (xxx_GICD_REGS_BASE + 0xC64)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_22_REG         (xxx_GICD_REGS_BASE + 0xC68)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_23_REG         (xxx_GICD_REGS_BASE + 0xC6C)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_24_REG         (xxx_GICD_REGS_BASE + 0xC70)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_25_REG         (xxx_GICD_REGS_BASE + 0xC74)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_26_REG         (xxx_GICD_REGS_BASE + 0xC78)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_27_REG         (xxx_GICD_REGS_BASE + 0xC7C)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_28_REG         (xxx_GICD_REGS_BASE + 0xC80)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_29_REG         (xxx_GICD_REGS_BASE + 0xC84)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_30_REG         (xxx_GICD_REGS_BASE + 0xC88)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_31_REG         (xxx_GICD_REGS_BASE + 0xC8C)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_32_REG         (xxx_GICD_REGS_BASE + 0xC90)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_33_REG         (xxx_GICD_REGS_BASE + 0xC94)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_34_REG         (xxx_GICD_REGS_BASE + 0xC98)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_35_REG         (xxx_GICD_REGS_BASE + 0xC9C)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_36_REG         (xxx_GICD_REGS_BASE + 0xCA0)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_37_REG         (xxx_GICD_REGS_BASE + 0xCA4)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_38_REG         (xxx_GICD_REGS_BASE + 0xCA8)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_39_REG         (xxx_GICD_REGS_BASE + 0xCAC)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_40_REG         (xxx_GICD_REGS_BASE + 0xCB0)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_41_REG         (xxx_GICD_REGS_BASE + 0xCB4)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_42_REG         (xxx_GICD_REGS_BASE + 0xCB8)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_43_REG         (xxx_GICD_REGS_BASE + 0xCBC)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_44_REG         (xxx_GICD_REGS_BASE + 0xCC0)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_45_REG         (xxx_GICD_REGS_BASE + 0xCC4)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_46_REG         (xxx_GICD_REGS_BASE + 0xCC8)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_47_REG         (xxx_GICD_REGS_BASE + 0xCCC)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_48_REG         (xxx_GICD_REGS_BASE + 0xCD0)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_49_REG         (xxx_GICD_REGS_BASE + 0xCD4)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_50_REG         (xxx_GICD_REGS_BASE + 0xCD8)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_51_REG         (xxx_GICD_REGS_BASE + 0xCDC)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_52_REG         (xxx_GICD_REGS_BASE + 0xCE0)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_53_REG         (xxx_GICD_REGS_BASE + 0xCE4)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_54_REG         (xxx_GICD_REGS_BASE + 0xCE8)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_55_REG         (xxx_GICD_REGS_BASE + 0xCEC)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_56_REG         (xxx_GICD_REGS_BASE + 0xCF0)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_57_REG         (xxx_GICD_REGS_BASE + 0xCF4)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_58_REG         (xxx_GICD_REGS_BASE + 0xCF8)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_ICFGR_SPI_COMMON_59_REG         (xxx_GICD_REGS_BASE + 0xCFC)  /* �üĴ���ÿ2bit��ʾһ��1-N SPI�ж��ǵ�ƽ���л��Ǳ��ش���,g{0,59} */
#define xxx_GICD_REGS_GICD_IGRPMODR_LOW_REG                (xxx_GICD_REGS_BASE + 0xD00)  /* ��ʶlowid�жϣ���Ӧ�ж�ID�ķ�ΧΪ{0��31}����������� */
#define xxx_GICD_REGS_GICD_IGRPMODR_SPI_0_REG              (xxx_GICD_REGS_BASE + 0xD04)  /* ��ʶ�жϷ�������Σ�n��ֵ��GICD_TYPER.ITLinesNumber������m{0,2} */
#define xxx_GICD_REGS_GICD_IGRPMODR_SPI_1_REG              (xxx_GICD_REGS_BASE + 0xD08)  /* ��ʶ�жϷ�������Σ�n��ֵ��GICD_TYPER.ITLinesNumber������m{0,2} */
#define xxx_GICD_REGS_GICD_IGRPMODR_SPI_2_REG              (xxx_GICD_REGS_BASE + 0xD0C)  /* ��ʶ�жϷ�������Σ�n��ֵ��GICD_TYPER.ITLinesNumber������m{0,2} */
#define xxx_GICD_REGS_GICD_IGRPMODR_SPI_3_REG              (xxx_GICD_REGS_BASE + 0xD10)  /* ��ʶ�жϷ�������Σ�n��ֵ��GICD_TYPER.ITLinesNumber������m{0,2} */
#define xxx_GICD_REGS_GICD_IGRPMODR_SPI_4_REG              (xxx_GICD_REGS_BASE + 0xD14)  /* ��ʶ�жϷ�������Σ�n��ֵ��GICD_TYPER.ITLinesNumber������m{0,2} */
#define xxx_GICD_REGS_GICD_IGRPMODR_SPI_5_REG              (xxx_GICD_REGS_BASE + 0xD18)  /* ��ʶ�жϷ�������Σ�n��ֵ��GICD_TYPER.ITLinesNumber������m{0,2} */
#define xxx_GICD_REGS_GICD_IGRPMODR_SPI_6_REG              (xxx_GICD_REGS_BASE + 0xD1C)  /* ��ʶ�жϷ�������Σ�n��ֵ��GICD_TYPER.ITLinesNumber������m{0,2} */
#define xxx_GICD_REGS_GICD_IGRPMODR_SPI_7_REG              (xxx_GICD_REGS_BASE + 0xD20)  /* ��ʶ�жϷ�������Σ�n��ֵ��GICD_TYPER.ITLinesNumber������m{0,2} */
#define xxx_GICD_REGS_GICD_IGRPMODR_SPI_8_REG              (xxx_GICD_REGS_BASE + 0xD24)  /* ��ʶ�жϷ�������Σ�n��ֵ��GICD_TYPER.ITLinesNumber������m{0,2} */
#define xxx_GICD_REGS_GICD_IGRPMODR_SPI_9_REG              (xxx_GICD_REGS_BASE + 0xD28)  /* ��ʶ�жϷ�������Σ�n��ֵ��GICD_TYPER.ITLinesNumber������m{0,2} */
#define xxx_GICD_REGS_GICD_IGRPMODR_SPI_10_REG             (xxx_GICD_REGS_BASE + 0xD2C)  /* ��ʶ�жϷ�������Σ�n��ֵ��GICD_TYPER.ITLinesNumber������m{0,2} */
#define xxx_GICD_REGS_GICD_IGRPMODR_SPI_11_REG             (xxx_GICD_REGS_BASE + 0xD30)  /* ��ʶ�жϷ�������Σ�n��ֵ��GICD_TYPER.ITLinesNumber������m{0,2} */
#define xxx_GICD_REGS_GICD_IGRPMODR_SPI_12_REG             (xxx_GICD_REGS_BASE + 0xD34)  /* ��ʶ�жϷ�������Σ�n��ֵ��GICD_TYPER.ITLinesNumber������m{0,2} */
#define xxx_GICD_REGS_GICD_IGRPMODR_SPI_13_REG             (xxx_GICD_REGS_BASE + 0xD38)  /* ��ʶ�жϷ�������Σ�n��ֵ��GICD_TYPER.ITLinesNumber������m{0,2} */
#define xxx_GICD_REGS_GICD_IGRPMODR_SPI_14_REG             (xxx_GICD_REGS_BASE + 0xD3C)  /* ��ʶ�жϷ�������Σ�n��ֵ��GICD_TYPER.ITLinesNumber������m{0,2} */
#define xxx_GICD_REGS_GICD_IGRPMODR_SPI_15_REG             (xxx_GICD_REGS_BASE + 0xD40)  /* ��ʶ�жϷ�������Σ�n��ֵ��GICD_TYPER.ITLinesNumber������m{0,2} */
#define xxx_GICD_REGS_GICD_IGRPMODR_SPI_16_REG             (xxx_GICD_REGS_BASE + 0xD44)  /* ��ʶ�жϷ�������Σ�n��ֵ��GICD_TYPER.ITLinesNumber������m{0,2} */
#define xxx_GICD_REGS_GICD_IGRPMODR_SPI_17_REG             (xxx_GICD_REGS_BASE + 0xD48)  /* ��ʶ�жϷ�������Σ�n��ֵ��GICD_TYPER.ITLinesNumber������m{0,2} */
#define xxx_GICD_REGS_GICD_IGRPMODR_SPI_18_REG             (xxx_GICD_REGS_BASE + 0xD4C)  /* ��ʶ�жϷ�������Σ�n��ֵ��GICD_TYPER.ITLinesNumber������m{0,2} */
#define xxx_GICD_REGS_GICD_IGRPMODR_SPI_19_REG             (xxx_GICD_REGS_BASE + 0xD50)  /* ��ʶ�жϷ�������Σ�n��ֵ��GICD_TYPER.ITLinesNumber������m{0,2} */
#define xxx_GICD_REGS_GICD_IGRPMODR_SPI_20_REG             (xxx_GICD_REGS_BASE + 0xD54)  /* ��ʶ�жϷ�������Σ�n��ֵ��GICD_TYPER.ITLinesNumber������m{0,2} */
#define xxx_GICD_REGS_GICD_IGRPMODR_SPI_21_REG             (xxx_GICD_REGS_BASE + 0xD58)  /* ��ʶ�жϷ�������Σ�n��ֵ��GICD_TYPER.ITLinesNumber������m{0,2} */
#define xxx_GICD_REGS_GICD_IGRPMODR_SPI_22_REG             (xxx_GICD_REGS_BASE + 0xD5C)  /* ��ʶ�жϷ�������Σ�n��ֵ��GICD_TYPER.ITLinesNumber������m{0,2} */
#define xxx_GICD_REGS_GICD_IGRPMODR_SPI_23_REG             (xxx_GICD_REGS_BASE + 0xD60)  /* ��ʶ�жϷ�������Σ�n��ֵ��GICD_TYPER.ITLinesNumber������m{0,2} */
#define xxx_GICD_REGS_GICD_IGRPMODR_SPI_24_REG             (xxx_GICD_REGS_BASE + 0xD64)  /* ��ʶ�жϷ�������Σ�n��ֵ��GICD_TYPER.ITLinesNumber������m{0,2} */
#define xxx_GICD_REGS_GICD_IGRPMODR_SPI_25_REG             (xxx_GICD_REGS_BASE + 0xD68)  /* ��ʶ�жϷ�������Σ�n��ֵ��GICD_TYPER.ITLinesNumber������m{0,2} */
#define xxx_GICD_REGS_GICD_IGRPMODR_SPI_26_REG             (xxx_GICD_REGS_BASE + 0xD6C)  /* ��ʶ�жϷ�������Σ�n��ֵ��GICD_TYPER.ITLinesNumber������m{0,2} */
#define xxx_GICD_REGS_GICD_IGRPMODR_SPI_27_REG             (xxx_GICD_REGS_BASE + 0xD70)  /* ��ʶ�жϷ�������Σ�n��ֵ��GICD_TYPER.ITLinesNumber������m{0,2} */
#define xxx_GICD_REGS_GICD_IGRPMODR_SPI_28_REG             (xxx_GICD_REGS_BASE + 0xD74)  /* ��ʶ�жϷ�������Σ�n��ֵ��GICD_TYPER.ITLinesNumber������m{0,2} */
#define xxx_GICD_REGS_GICD_IGRPMODR_SPI_29_REG             (xxx_GICD_REGS_BASE + 0xD78)  /* ��ʶ�жϷ�������Σ�n��ֵ��GICD_TYPER.ITLinesNumber������m{0,2} */
#define xxx_GICD_REGS_GICD_IGRPMODR_SPI_30_REG             (xxx_GICD_REGS_BASE + 0xD7C)  /* ��ʶ�жϷ�������Σ�n��ֵ��GICD_TYPER.ITLinesNumber������m{0,2} */
#define xxx_GICD_REGS_GICD_NSACR_0_REG                     (xxx_GICD_REGS_BASE + 0xE00)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_1_REG                     (xxx_GICD_REGS_BASE + 0xE04)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_2_REG                     (xxx_GICD_REGS_BASE + 0xE08)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_3_REG                     (xxx_GICD_REGS_BASE + 0xE0C)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_4_REG                     (xxx_GICD_REGS_BASE + 0xE10)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_5_REG                     (xxx_GICD_REGS_BASE + 0xE14)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_6_REG                     (xxx_GICD_REGS_BASE + 0xE18)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_7_REG                     (xxx_GICD_REGS_BASE + 0xE1C)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_8_REG                     (xxx_GICD_REGS_BASE + 0xE20)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_9_REG                     (xxx_GICD_REGS_BASE + 0xE24)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_10_REG                    (xxx_GICD_REGS_BASE + 0xE28)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_11_REG                    (xxx_GICD_REGS_BASE + 0xE2C)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_12_REG                    (xxx_GICD_REGS_BASE + 0xE30)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_13_REG                    (xxx_GICD_REGS_BASE + 0xE34)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_14_REG                    (xxx_GICD_REGS_BASE + 0xE38)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_15_REG                    (xxx_GICD_REGS_BASE + 0xE3C)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_16_REG                    (xxx_GICD_REGS_BASE + 0xE40)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_17_REG                    (xxx_GICD_REGS_BASE + 0xE44)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_18_REG                    (xxx_GICD_REGS_BASE + 0xE48)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_19_REG                    (xxx_GICD_REGS_BASE + 0xE4C)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_20_REG                    (xxx_GICD_REGS_BASE + 0xE50)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_21_REG                    (xxx_GICD_REGS_BASE + 0xE54)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_22_REG                    (xxx_GICD_REGS_BASE + 0xE58)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_23_REG                    (xxx_GICD_REGS_BASE + 0xE5C)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_24_REG                    (xxx_GICD_REGS_BASE + 0xE60)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_25_REG                    (xxx_GICD_REGS_BASE + 0xE64)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_26_REG                    (xxx_GICD_REGS_BASE + 0xE68)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_27_REG                    (xxx_GICD_REGS_BASE + 0xE6C)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_28_REG                    (xxx_GICD_REGS_BASE + 0xE70)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_29_REG                    (xxx_GICD_REGS_BASE + 0xE74)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_30_REG                    (xxx_GICD_REGS_BASE + 0xE78)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_31_REG                    (xxx_GICD_REGS_BASE + 0xE7C)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_32_REG                    (xxx_GICD_REGS_BASE + 0xE80)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_33_REG                    (xxx_GICD_REGS_BASE + 0xE84)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_34_REG                    (xxx_GICD_REGS_BASE + 0xE88)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_35_REG                    (xxx_GICD_REGS_BASE + 0xE8C)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_36_REG                    (xxx_GICD_REGS_BASE + 0xE90)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_37_REG                    (xxx_GICD_REGS_BASE + 0xE94)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_38_REG                    (xxx_GICD_REGS_BASE + 0xE98)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_39_REG                    (xxx_GICD_REGS_BASE + 0xE9C)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_40_REG                    (xxx_GICD_REGS_BASE + 0xEA0)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_41_REG                    (xxx_GICD_REGS_BASE + 0xEA4)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_42_REG                    (xxx_GICD_REGS_BASE + 0xEA8)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_43_REG                    (xxx_GICD_REGS_BASE + 0xEAC)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_44_REG                    (xxx_GICD_REGS_BASE + 0xEB0)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_45_REG                    (xxx_GICD_REGS_BASE + 0xEB4)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_46_REG                    (xxx_GICD_REGS_BASE + 0xEB8)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_47_REG                    (xxx_GICD_REGS_BASE + 0xEBC)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_48_REG                    (xxx_GICD_REGS_BASE + 0xEC0)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_49_REG                    (xxx_GICD_REGS_BASE + 0xEC4)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_50_REG                    (xxx_GICD_REGS_BASE + 0xEC8)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_51_REG                    (xxx_GICD_REGS_BASE + 0xECC)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_52_REG                    (xxx_GICD_REGS_BASE + 0xED0)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_53_REG                    (xxx_GICD_REGS_BASE + 0xED4)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_54_REG                    (xxx_GICD_REGS_BASE + 0xED8)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_55_REG                    (xxx_GICD_REGS_BASE + 0xEDC)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_56_REG                    (xxx_GICD_REGS_BASE + 0xEE0)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_57_REG                    (xxx_GICD_REGS_BASE + 0xEE4)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_58_REG                    (xxx_GICD_REGS_BASE + 0xEE8)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_59_REG                    (xxx_GICD_REGS_BASE + 0xEEC)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_60_REG                    (xxx_GICD_REGS_BASE + 0xEF0)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_61_REG                    (xxx_GICD_REGS_BASE + 0xEF4)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_62_REG                    (xxx_GICD_REGS_BASE + 0xEF8)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_NSACR_63_REG                    (xxx_GICD_REGS_BASE + 0xEFC)  /* �ǰ�ȫ�������Ȩ�޹���d{0,63} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_0_REG                (xxx_GICD_REGS_BASE + 0x6000) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_1_REG                (xxx_GICD_REGS_BASE + 0x6008) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_2_REG                (xxx_GICD_REGS_BASE + 0x6010) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_3_REG                (xxx_GICD_REGS_BASE + 0x6018) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_4_REG                (xxx_GICD_REGS_BASE + 0x6020) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_5_REG                (xxx_GICD_REGS_BASE + 0x6028) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_6_REG                (xxx_GICD_REGS_BASE + 0x6030) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_7_REG                (xxx_GICD_REGS_BASE + 0x6038) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_8_REG                (xxx_GICD_REGS_BASE + 0x6040) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_9_REG                (xxx_GICD_REGS_BASE + 0x6048) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_10_REG               (xxx_GICD_REGS_BASE + 0x6050) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_11_REG               (xxx_GICD_REGS_BASE + 0x6058) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_12_REG               (xxx_GICD_REGS_BASE + 0x6060) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_13_REG               (xxx_GICD_REGS_BASE + 0x6068) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_14_REG               (xxx_GICD_REGS_BASE + 0x6070) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_15_REG               (xxx_GICD_REGS_BASE + 0x6078) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_16_REG               (xxx_GICD_REGS_BASE + 0x6080) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_17_REG               (xxx_GICD_REGS_BASE + 0x6088) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_18_REG               (xxx_GICD_REGS_BASE + 0x6090) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_19_REG               (xxx_GICD_REGS_BASE + 0x6098) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_20_REG               (xxx_GICD_REGS_BASE + 0x60A0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_21_REG               (xxx_GICD_REGS_BASE + 0x60A8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_22_REG               (xxx_GICD_REGS_BASE + 0x60B0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_23_REG               (xxx_GICD_REGS_BASE + 0x60B8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_24_REG               (xxx_GICD_REGS_BASE + 0x60C0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_25_REG               (xxx_GICD_REGS_BASE + 0x60C8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_26_REG               (xxx_GICD_REGS_BASE + 0x60D0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_27_REG               (xxx_GICD_REGS_BASE + 0x60D8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_28_REG               (xxx_GICD_REGS_BASE + 0x60E0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_29_REG               (xxx_GICD_REGS_BASE + 0x60E8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_30_REG               (xxx_GICD_REGS_BASE + 0x60F0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_31_REG               (xxx_GICD_REGS_BASE + 0x60F8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_32_REG               (xxx_GICD_REGS_BASE + 0x6100) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_33_REG               (xxx_GICD_REGS_BASE + 0x6108) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_34_REG               (xxx_GICD_REGS_BASE + 0x6110) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_35_REG               (xxx_GICD_REGS_BASE + 0x6118) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_36_REG               (xxx_GICD_REGS_BASE + 0x6120) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_37_REG               (xxx_GICD_REGS_BASE + 0x6128) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_38_REG               (xxx_GICD_REGS_BASE + 0x6130) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_39_REG               (xxx_GICD_REGS_BASE + 0x6138) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_40_REG               (xxx_GICD_REGS_BASE + 0x6140) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_41_REG               (xxx_GICD_REGS_BASE + 0x6148) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_42_REG               (xxx_GICD_REGS_BASE + 0x6150) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_43_REG               (xxx_GICD_REGS_BASE + 0x6158) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_44_REG               (xxx_GICD_REGS_BASE + 0x6160) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_45_REG               (xxx_GICD_REGS_BASE + 0x6168) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_46_REG               (xxx_GICD_REGS_BASE + 0x6170) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_47_REG               (xxx_GICD_REGS_BASE + 0x6178) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_48_REG               (xxx_GICD_REGS_BASE + 0x6180) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_49_REG               (xxx_GICD_REGS_BASE + 0x6188) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_50_REG               (xxx_GICD_REGS_BASE + 0x6190) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_51_REG               (xxx_GICD_REGS_BASE + 0x6198) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_52_REG               (xxx_GICD_REGS_BASE + 0x61A0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_53_REG               (xxx_GICD_REGS_BASE + 0x61A8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_54_REG               (xxx_GICD_REGS_BASE + 0x61B0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_55_REG               (xxx_GICD_REGS_BASE + 0x61B8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_56_REG               (xxx_GICD_REGS_BASE + 0x61C0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_57_REG               (xxx_GICD_REGS_BASE + 0x61C8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_58_REG               (xxx_GICD_REGS_BASE + 0x61D0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_59_REG               (xxx_GICD_REGS_BASE + 0x61D8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_60_REG               (xxx_GICD_REGS_BASE + 0x61E0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_61_REG               (xxx_GICD_REGS_BASE + 0x61E8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_62_REG               (xxx_GICD_REGS_BASE + 0x61F0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_63_REG               (xxx_GICD_REGS_BASE + 0x61F8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_64_REG               (xxx_GICD_REGS_BASE + 0x6200) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_65_REG               (xxx_GICD_REGS_BASE + 0x6208) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_66_REG               (xxx_GICD_REGS_BASE + 0x6210) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_67_REG               (xxx_GICD_REGS_BASE + 0x6218) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_68_REG               (xxx_GICD_REGS_BASE + 0x6220) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_69_REG               (xxx_GICD_REGS_BASE + 0x6228) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_70_REG               (xxx_GICD_REGS_BASE + 0x6230) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_71_REG               (xxx_GICD_REGS_BASE + 0x6238) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_72_REG               (xxx_GICD_REGS_BASE + 0x6240) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_73_REG               (xxx_GICD_REGS_BASE + 0x6248) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_74_REG               (xxx_GICD_REGS_BASE + 0x6250) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_75_REG               (xxx_GICD_REGS_BASE + 0x6258) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_76_REG               (xxx_GICD_REGS_BASE + 0x6260) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_77_REG               (xxx_GICD_REGS_BASE + 0x6268) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_78_REG               (xxx_GICD_REGS_BASE + 0x6270) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_79_REG               (xxx_GICD_REGS_BASE + 0x6278) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_80_REG               (xxx_GICD_REGS_BASE + 0x6280) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_81_REG               (xxx_GICD_REGS_BASE + 0x6288) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_82_REG               (xxx_GICD_REGS_BASE + 0x6290) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_83_REG               (xxx_GICD_REGS_BASE + 0x6298) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_84_REG               (xxx_GICD_REGS_BASE + 0x62A0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_85_REG               (xxx_GICD_REGS_BASE + 0x62A8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_86_REG               (xxx_GICD_REGS_BASE + 0x62B0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_87_REG               (xxx_GICD_REGS_BASE + 0x62B8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_88_REG               (xxx_GICD_REGS_BASE + 0x62C0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_89_REG               (xxx_GICD_REGS_BASE + 0x62C8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_90_REG               (xxx_GICD_REGS_BASE + 0x62D0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_91_REG               (xxx_GICD_REGS_BASE + 0x62D8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_92_REG               (xxx_GICD_REGS_BASE + 0x62E0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_93_REG               (xxx_GICD_REGS_BASE + 0x62E8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_94_REG               (xxx_GICD_REGS_BASE + 0x62F0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_95_REG               (xxx_GICD_REGS_BASE + 0x62F8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_96_REG               (xxx_GICD_REGS_BASE + 0x6300) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_97_REG               (xxx_GICD_REGS_BASE + 0x6308) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_98_REG               (xxx_GICD_REGS_BASE + 0x6310) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_99_REG               (xxx_GICD_REGS_BASE + 0x6318) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_100_REG              (xxx_GICD_REGS_BASE + 0x6320) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_101_REG              (xxx_GICD_REGS_BASE + 0x6328) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_102_REG              (xxx_GICD_REGS_BASE + 0x6330) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_103_REG              (xxx_GICD_REGS_BASE + 0x6338) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_104_REG              (xxx_GICD_REGS_BASE + 0x6340) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_105_REG              (xxx_GICD_REGS_BASE + 0x6348) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_106_REG              (xxx_GICD_REGS_BASE + 0x6350) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_107_REG              (xxx_GICD_REGS_BASE + 0x6358) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_108_REG              (xxx_GICD_REGS_BASE + 0x6360) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_109_REG              (xxx_GICD_REGS_BASE + 0x6368) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_110_REG              (xxx_GICD_REGS_BASE + 0x6370) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_111_REG              (xxx_GICD_REGS_BASE + 0x6378) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_112_REG              (xxx_GICD_REGS_BASE + 0x6380) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_113_REG              (xxx_GICD_REGS_BASE + 0x6388) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_114_REG              (xxx_GICD_REGS_BASE + 0x6390) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_115_REG              (xxx_GICD_REGS_BASE + 0x6398) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_116_REG              (xxx_GICD_REGS_BASE + 0x63A0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_117_REG              (xxx_GICD_REGS_BASE + 0x63A8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_118_REG              (xxx_GICD_REGS_BASE + 0x63B0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_119_REG              (xxx_GICD_REGS_BASE + 0x63B8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_120_REG              (xxx_GICD_REGS_BASE + 0x63C0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_121_REG              (xxx_GICD_REGS_BASE + 0x63C8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_122_REG              (xxx_GICD_REGS_BASE + 0x63D0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_123_REG              (xxx_GICD_REGS_BASE + 0x63D8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_124_REG              (xxx_GICD_REGS_BASE + 0x63E0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_125_REG              (xxx_GICD_REGS_BASE + 0x63E8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_126_REG              (xxx_GICD_REGS_BASE + 0x63F0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_127_REG              (xxx_GICD_REGS_BASE + 0x63F8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_128_REG              (xxx_GICD_REGS_BASE + 0x6400) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_129_REG              (xxx_GICD_REGS_BASE + 0x6408) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_130_REG              (xxx_GICD_REGS_BASE + 0x6410) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_131_REG              (xxx_GICD_REGS_BASE + 0x6418) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_132_REG              (xxx_GICD_REGS_BASE + 0x6420) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_133_REG              (xxx_GICD_REGS_BASE + 0x6428) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_134_REG              (xxx_GICD_REGS_BASE + 0x6430) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_135_REG              (xxx_GICD_REGS_BASE + 0x6438) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_136_REG              (xxx_GICD_REGS_BASE + 0x6440) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_137_REG              (xxx_GICD_REGS_BASE + 0x6448) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_138_REG              (xxx_GICD_REGS_BASE + 0x6450) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_139_REG              (xxx_GICD_REGS_BASE + 0x6458) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_140_REG              (xxx_GICD_REGS_BASE + 0x6460) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_141_REG              (xxx_GICD_REGS_BASE + 0x6468) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_142_REG              (xxx_GICD_REGS_BASE + 0x6470) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_143_REG              (xxx_GICD_REGS_BASE + 0x6478) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_144_REG              (xxx_GICD_REGS_BASE + 0x6480) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_145_REG              (xxx_GICD_REGS_BASE + 0x6488) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_146_REG              (xxx_GICD_REGS_BASE + 0x6490) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_147_REG              (xxx_GICD_REGS_BASE + 0x6498) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_148_REG              (xxx_GICD_REGS_BASE + 0x64A0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_149_REG              (xxx_GICD_REGS_BASE + 0x64A8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_150_REG              (xxx_GICD_REGS_BASE + 0x64B0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_151_REG              (xxx_GICD_REGS_BASE + 0x64B8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_152_REG              (xxx_GICD_REGS_BASE + 0x64C0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_153_REG              (xxx_GICD_REGS_BASE + 0x64C8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_154_REG              (xxx_GICD_REGS_BASE + 0x64D0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_155_REG              (xxx_GICD_REGS_BASE + 0x64D8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_156_REG              (xxx_GICD_REGS_BASE + 0x64E0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_157_REG              (xxx_GICD_REGS_BASE + 0x64E8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_158_REG              (xxx_GICD_REGS_BASE + 0x64F0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_159_REG              (xxx_GICD_REGS_BASE + 0x64F8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_160_REG              (xxx_GICD_REGS_BASE + 0x6500) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_161_REG              (xxx_GICD_REGS_BASE + 0x6508) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_162_REG              (xxx_GICD_REGS_BASE + 0x6510) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_163_REG              (xxx_GICD_REGS_BASE + 0x6518) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_164_REG              (xxx_GICD_REGS_BASE + 0x6520) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_165_REG              (xxx_GICD_REGS_BASE + 0x6528) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_166_REG              (xxx_GICD_REGS_BASE + 0x6530) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_167_REG              (xxx_GICD_REGS_BASE + 0x6538) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_168_REG              (xxx_GICD_REGS_BASE + 0x6540) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_169_REG              (xxx_GICD_REGS_BASE + 0x6548) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_170_REG              (xxx_GICD_REGS_BASE + 0x6550) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_171_REG              (xxx_GICD_REGS_BASE + 0x6558) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_172_REG              (xxx_GICD_REGS_BASE + 0x6560) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_173_REG              (xxx_GICD_REGS_BASE + 0x6568) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_174_REG              (xxx_GICD_REGS_BASE + 0x6570) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_175_REG              (xxx_GICD_REGS_BASE + 0x6578) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_176_REG              (xxx_GICD_REGS_BASE + 0x6580) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_177_REG              (xxx_GICD_REGS_BASE + 0x6588) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_178_REG              (xxx_GICD_REGS_BASE + 0x6590) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_179_REG              (xxx_GICD_REGS_BASE + 0x6598) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_180_REG              (xxx_GICD_REGS_BASE + 0x65A0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_181_REG              (xxx_GICD_REGS_BASE + 0x65A8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_182_REG              (xxx_GICD_REGS_BASE + 0x65B0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_183_REG              (xxx_GICD_REGS_BASE + 0x65B8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_184_REG              (xxx_GICD_REGS_BASE + 0x65C0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_185_REG              (xxx_GICD_REGS_BASE + 0x65C8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_186_REG              (xxx_GICD_REGS_BASE + 0x65D0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_187_REG              (xxx_GICD_REGS_BASE + 0x65D8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_188_REG              (xxx_GICD_REGS_BASE + 0x65E0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_189_REG              (xxx_GICD_REGS_BASE + 0x65E8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_190_REG              (xxx_GICD_REGS_BASE + 0x65F0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_191_REG              (xxx_GICD_REGS_BASE + 0x65F8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_192_REG              (xxx_GICD_REGS_BASE + 0x6600) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_193_REG              (xxx_GICD_REGS_BASE + 0x6608) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_194_REG              (xxx_GICD_REGS_BASE + 0x6610) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_195_REG              (xxx_GICD_REGS_BASE + 0x6618) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_196_REG              (xxx_GICD_REGS_BASE + 0x6620) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_197_REG              (xxx_GICD_REGS_BASE + 0x6628) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_198_REG              (xxx_GICD_REGS_BASE + 0x6630) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_199_REG              (xxx_GICD_REGS_BASE + 0x6638) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_200_REG              (xxx_GICD_REGS_BASE + 0x6640) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_201_REG              (xxx_GICD_REGS_BASE + 0x6648) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_202_REG              (xxx_GICD_REGS_BASE + 0x6650) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_203_REG              (xxx_GICD_REGS_BASE + 0x6658) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_204_REG              (xxx_GICD_REGS_BASE + 0x6660) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_205_REG              (xxx_GICD_REGS_BASE + 0x6668) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_206_REG              (xxx_GICD_REGS_BASE + 0x6670) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_207_REG              (xxx_GICD_REGS_BASE + 0x6678) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_208_REG              (xxx_GICD_REGS_BASE + 0x6680) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_209_REG              (xxx_GICD_REGS_BASE + 0x6688) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_210_REG              (xxx_GICD_REGS_BASE + 0x6690) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_211_REG              (xxx_GICD_REGS_BASE + 0x6698) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_212_REG              (xxx_GICD_REGS_BASE + 0x66A0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_213_REG              (xxx_GICD_REGS_BASE + 0x66A8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_214_REG              (xxx_GICD_REGS_BASE + 0x66B0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_215_REG              (xxx_GICD_REGS_BASE + 0x66B8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_216_REG              (xxx_GICD_REGS_BASE + 0x66C0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_217_REG              (xxx_GICD_REGS_BASE + 0x66C8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_218_REG              (xxx_GICD_REGS_BASE + 0x66D0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_219_REG              (xxx_GICD_REGS_BASE + 0x66D8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_220_REG              (xxx_GICD_REGS_BASE + 0x66E0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_221_REG              (xxx_GICD_REGS_BASE + 0x66E8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_222_REG              (xxx_GICD_REGS_BASE + 0x66F0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_223_REG              (xxx_GICD_REGS_BASE + 0x66F8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_224_REG              (xxx_GICD_REGS_BASE + 0x6700) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_225_REG              (xxx_GICD_REGS_BASE + 0x6708) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_226_REG              (xxx_GICD_REGS_BASE + 0x6710) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_227_REG              (xxx_GICD_REGS_BASE + 0x6718) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_228_REG              (xxx_GICD_REGS_BASE + 0x6720) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_229_REG              (xxx_GICD_REGS_BASE + 0x6728) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_230_REG              (xxx_GICD_REGS_BASE + 0x6730) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_231_REG              (xxx_GICD_REGS_BASE + 0x6738) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_232_REG              (xxx_GICD_REGS_BASE + 0x6740) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_233_REG              (xxx_GICD_REGS_BASE + 0x6748) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_234_REG              (xxx_GICD_REGS_BASE + 0x6750) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_235_REG              (xxx_GICD_REGS_BASE + 0x6758) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_236_REG              (xxx_GICD_REGS_BASE + 0x6760) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_237_REG              (xxx_GICD_REGS_BASE + 0x6768) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_238_REG              (xxx_GICD_REGS_BASE + 0x6770) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_239_REG              (xxx_GICD_REGS_BASE + 0x6778) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_240_REG              (xxx_GICD_REGS_BASE + 0x6780) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_241_REG              (xxx_GICD_REGS_BASE + 0x6788) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_242_REG              (xxx_GICD_REGS_BASE + 0x6790) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_243_REG              (xxx_GICD_REGS_BASE + 0x6798) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_244_REG              (xxx_GICD_REGS_BASE + 0x67A0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_245_REG              (xxx_GICD_REGS_BASE + 0x67A8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_246_REG              (xxx_GICD_REGS_BASE + 0x67B0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_247_REG              (xxx_GICD_REGS_BASE + 0x67B8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_248_REG              (xxx_GICD_REGS_BASE + 0x67C0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_249_REG              (xxx_GICD_REGS_BASE + 0x67C8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_250_REG              (xxx_GICD_REGS_BASE + 0x67D0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_251_REG              (xxx_GICD_REGS_BASE + 0x67D8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_252_REG              (xxx_GICD_REGS_BASE + 0x67E0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_253_REG              (xxx_GICD_REGS_BASE + 0x67E8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_254_REG              (xxx_GICD_REGS_BASE + 0x67F0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_255_REG              (xxx_GICD_REGS_BASE + 0x67F8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_256_REG              (xxx_GICD_REGS_BASE + 0x6800) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_257_REG              (xxx_GICD_REGS_BASE + 0x6808) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_258_REG              (xxx_GICD_REGS_BASE + 0x6810) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_259_REG              (xxx_GICD_REGS_BASE + 0x6818) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_260_REG              (xxx_GICD_REGS_BASE + 0x6820) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_261_REG              (xxx_GICD_REGS_BASE + 0x6828) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_262_REG              (xxx_GICD_REGS_BASE + 0x6830) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_263_REG              (xxx_GICD_REGS_BASE + 0x6838) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_264_REG              (xxx_GICD_REGS_BASE + 0x6840) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_265_REG              (xxx_GICD_REGS_BASE + 0x6848) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_266_REG              (xxx_GICD_REGS_BASE + 0x6850) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_267_REG              (xxx_GICD_REGS_BASE + 0x6858) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_268_REG              (xxx_GICD_REGS_BASE + 0x6860) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_269_REG              (xxx_GICD_REGS_BASE + 0x6868) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_270_REG              (xxx_GICD_REGS_BASE + 0x6870) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_271_REG              (xxx_GICD_REGS_BASE + 0x6878) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_272_REG              (xxx_GICD_REGS_BASE + 0x6880) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_273_REG              (xxx_GICD_REGS_BASE + 0x6888) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_274_REG              (xxx_GICD_REGS_BASE + 0x6890) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_275_REG              (xxx_GICD_REGS_BASE + 0x6898) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_276_REG              (xxx_GICD_REGS_BASE + 0x68A0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_277_REG              (xxx_GICD_REGS_BASE + 0x68A8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_278_REG              (xxx_GICD_REGS_BASE + 0x68B0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_279_REG              (xxx_GICD_REGS_BASE + 0x68B8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_280_REG              (xxx_GICD_REGS_BASE + 0x68C0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_281_REG              (xxx_GICD_REGS_BASE + 0x68C8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_282_REG              (xxx_GICD_REGS_BASE + 0x68D0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_283_REG              (xxx_GICD_REGS_BASE + 0x68D8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_284_REG              (xxx_GICD_REGS_BASE + 0x68E0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_285_REG              (xxx_GICD_REGS_BASE + 0x68E8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_286_REG              (xxx_GICD_REGS_BASE + 0x68F0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_287_REG              (xxx_GICD_REGS_BASE + 0x68F8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_288_REG              (xxx_GICD_REGS_BASE + 0x6900) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_289_REG              (xxx_GICD_REGS_BASE + 0x6908) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_290_REG              (xxx_GICD_REGS_BASE + 0x6910) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_291_REG              (xxx_GICD_REGS_BASE + 0x6918) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_292_REG              (xxx_GICD_REGS_BASE + 0x6920) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_293_REG              (xxx_GICD_REGS_BASE + 0x6928) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_294_REG              (xxx_GICD_REGS_BASE + 0x6930) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_295_REG              (xxx_GICD_REGS_BASE + 0x6938) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_296_REG              (xxx_GICD_REGS_BASE + 0x6940) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_297_REG              (xxx_GICD_REGS_BASE + 0x6948) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_298_REG              (xxx_GICD_REGS_BASE + 0x6950) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_299_REG              (xxx_GICD_REGS_BASE + 0x6958) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_300_REG              (xxx_GICD_REGS_BASE + 0x6960) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_301_REG              (xxx_GICD_REGS_BASE + 0x6968) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_302_REG              (xxx_GICD_REGS_BASE + 0x6970) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_303_REG              (xxx_GICD_REGS_BASE + 0x6978) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_304_REG              (xxx_GICD_REGS_BASE + 0x6980) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_305_REG              (xxx_GICD_REGS_BASE + 0x6988) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_306_REG              (xxx_GICD_REGS_BASE + 0x6990) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_307_REG              (xxx_GICD_REGS_BASE + 0x6998) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_308_REG              (xxx_GICD_REGS_BASE + 0x69A0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_309_REG              (xxx_GICD_REGS_BASE + 0x69A8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_310_REG              (xxx_GICD_REGS_BASE + 0x69B0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_311_REG              (xxx_GICD_REGS_BASE + 0x69B8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_312_REG              (xxx_GICD_REGS_BASE + 0x69C0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_313_REG              (xxx_GICD_REGS_BASE + 0x69C8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_314_REG              (xxx_GICD_REGS_BASE + 0x69D0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_315_REG              (xxx_GICD_REGS_BASE + 0x69D8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_316_REG              (xxx_GICD_REGS_BASE + 0x69E0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_317_REG              (xxx_GICD_REGS_BASE + 0x69E8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_318_REG              (xxx_GICD_REGS_BASE + 0x69F0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_319_REG              (xxx_GICD_REGS_BASE + 0x69F8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_320_REG              (xxx_GICD_REGS_BASE + 0x6A00) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_321_REG              (xxx_GICD_REGS_BASE + 0x6A08) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_322_REG              (xxx_GICD_REGS_BASE + 0x6A10) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_323_REG              (xxx_GICD_REGS_BASE + 0x6A18) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_324_REG              (xxx_GICD_REGS_BASE + 0x6A20) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_325_REG              (xxx_GICD_REGS_BASE + 0x6A28) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_326_REG              (xxx_GICD_REGS_BASE + 0x6A30) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_327_REG              (xxx_GICD_REGS_BASE + 0x6A38) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_328_REG              (xxx_GICD_REGS_BASE + 0x6A40) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_329_REG              (xxx_GICD_REGS_BASE + 0x6A48) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_330_REG              (xxx_GICD_REGS_BASE + 0x6A50) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_331_REG              (xxx_GICD_REGS_BASE + 0x6A58) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_332_REG              (xxx_GICD_REGS_BASE + 0x6A60) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_333_REG              (xxx_GICD_REGS_BASE + 0x6A68) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_334_REG              (xxx_GICD_REGS_BASE + 0x6A70) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_335_REG              (xxx_GICD_REGS_BASE + 0x6A78) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_336_REG              (xxx_GICD_REGS_BASE + 0x6A80) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_337_REG              (xxx_GICD_REGS_BASE + 0x6A88) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_338_REG              (xxx_GICD_REGS_BASE + 0x6A90) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_339_REG              (xxx_GICD_REGS_BASE + 0x6A98) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_340_REG              (xxx_GICD_REGS_BASE + 0x6AA0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_341_REG              (xxx_GICD_REGS_BASE + 0x6AA8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_342_REG              (xxx_GICD_REGS_BASE + 0x6AB0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_343_REG              (xxx_GICD_REGS_BASE + 0x6AB8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_344_REG              (xxx_GICD_REGS_BASE + 0x6AC0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_345_REG              (xxx_GICD_REGS_BASE + 0x6AC8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_346_REG              (xxx_GICD_REGS_BASE + 0x6AD0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_347_REG              (xxx_GICD_REGS_BASE + 0x6AD8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_348_REG              (xxx_GICD_REGS_BASE + 0x6AE0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_349_REG              (xxx_GICD_REGS_BASE + 0x6AE8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_350_REG              (xxx_GICD_REGS_BASE + 0x6AF0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_351_REG              (xxx_GICD_REGS_BASE + 0x6AF8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_352_REG              (xxx_GICD_REGS_BASE + 0x6B00) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_353_REG              (xxx_GICD_REGS_BASE + 0x6B08) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_354_REG              (xxx_GICD_REGS_BASE + 0x6B10) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_355_REG              (xxx_GICD_REGS_BASE + 0x6B18) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_356_REG              (xxx_GICD_REGS_BASE + 0x6B20) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_357_REG              (xxx_GICD_REGS_BASE + 0x6B28) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_358_REG              (xxx_GICD_REGS_BASE + 0x6B30) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_359_REG              (xxx_GICD_REGS_BASE + 0x6B38) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_360_REG              (xxx_GICD_REGS_BASE + 0x6B40) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_361_REG              (xxx_GICD_REGS_BASE + 0x6B48) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_362_REG              (xxx_GICD_REGS_BASE + 0x6B50) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_363_REG              (xxx_GICD_REGS_BASE + 0x6B58) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_364_REG              (xxx_GICD_REGS_BASE + 0x6B60) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_365_REG              (xxx_GICD_REGS_BASE + 0x6B68) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_366_REG              (xxx_GICD_REGS_BASE + 0x6B70) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_367_REG              (xxx_GICD_REGS_BASE + 0x6B78) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_368_REG              (xxx_GICD_REGS_BASE + 0x6B80) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_369_REG              (xxx_GICD_REGS_BASE + 0x6B88) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_370_REG              (xxx_GICD_REGS_BASE + 0x6B90) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_371_REG              (xxx_GICD_REGS_BASE + 0x6B98) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_372_REG              (xxx_GICD_REGS_BASE + 0x6BA0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_373_REG              (xxx_GICD_REGS_BASE + 0x6BA8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_374_REG              (xxx_GICD_REGS_BASE + 0x6BB0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_375_REG              (xxx_GICD_REGS_BASE + 0x6BB8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_376_REG              (xxx_GICD_REGS_BASE + 0x6BC0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_377_REG              (xxx_GICD_REGS_BASE + 0x6BC8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_378_REG              (xxx_GICD_REGS_BASE + 0x6BD0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_379_REG              (xxx_GICD_REGS_BASE + 0x6BD8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_380_REG              (xxx_GICD_REGS_BASE + 0x6BE0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_381_REG              (xxx_GICD_REGS_BASE + 0x6BE8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_382_REG              (xxx_GICD_REGS_BASE + 0x6BF0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_383_REG              (xxx_GICD_REGS_BASE + 0x6BF8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_384_REG              (xxx_GICD_REGS_BASE + 0x6C00) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_385_REG              (xxx_GICD_REGS_BASE + 0x6C08) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_386_REG              (xxx_GICD_REGS_BASE + 0x6C10) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_387_REG              (xxx_GICD_REGS_BASE + 0x6C18) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_388_REG              (xxx_GICD_REGS_BASE + 0x6C20) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_389_REG              (xxx_GICD_REGS_BASE + 0x6C28) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_390_REG              (xxx_GICD_REGS_BASE + 0x6C30) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_391_REG              (xxx_GICD_REGS_BASE + 0x6C38) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_392_REG              (xxx_GICD_REGS_BASE + 0x6C40) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_393_REG              (xxx_GICD_REGS_BASE + 0x6C48) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_394_REG              (xxx_GICD_REGS_BASE + 0x6C50) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_395_REG              (xxx_GICD_REGS_BASE + 0x6C58) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_396_REG              (xxx_GICD_REGS_BASE + 0x6C60) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_397_REG              (xxx_GICD_REGS_BASE + 0x6C68) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_398_REG              (xxx_GICD_REGS_BASE + 0x6C70) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_399_REG              (xxx_GICD_REGS_BASE + 0x6C78) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_400_REG              (xxx_GICD_REGS_BASE + 0x6C80) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_401_REG              (xxx_GICD_REGS_BASE + 0x6C88) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_402_REG              (xxx_GICD_REGS_BASE + 0x6C90) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_403_REG              (xxx_GICD_REGS_BASE + 0x6C98) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_404_REG              (xxx_GICD_REGS_BASE + 0x6CA0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_405_REG              (xxx_GICD_REGS_BASE + 0x6CA8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_406_REG              (xxx_GICD_REGS_BASE + 0x6CB0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_407_REG              (xxx_GICD_REGS_BASE + 0x6CB8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_408_REG              (xxx_GICD_REGS_BASE + 0x6CC0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_409_REG              (xxx_GICD_REGS_BASE + 0x6CC8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_410_REG              (xxx_GICD_REGS_BASE + 0x6CD0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_411_REG              (xxx_GICD_REGS_BASE + 0x6CD8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_412_REG              (xxx_GICD_REGS_BASE + 0x6CE0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_413_REG              (xxx_GICD_REGS_BASE + 0x6CE8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_414_REG              (xxx_GICD_REGS_BASE + 0x6CF0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_415_REG              (xxx_GICD_REGS_BASE + 0x6CF8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_416_REG              (xxx_GICD_REGS_BASE + 0x6D00) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_417_REG              (xxx_GICD_REGS_BASE + 0x6D08) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_418_REG              (xxx_GICD_REGS_BASE + 0x6D10) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_419_REG              (xxx_GICD_REGS_BASE + 0x6D18) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_420_REG              (xxx_GICD_REGS_BASE + 0x6D20) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_421_REG              (xxx_GICD_REGS_BASE + 0x6D28) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_422_REG              (xxx_GICD_REGS_BASE + 0x6D30) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_423_REG              (xxx_GICD_REGS_BASE + 0x6D38) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_424_REG              (xxx_GICD_REGS_BASE + 0x6D40) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_425_REG              (xxx_GICD_REGS_BASE + 0x6D48) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_426_REG              (xxx_GICD_REGS_BASE + 0x6D50) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_427_REG              (xxx_GICD_REGS_BASE + 0x6D58) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_428_REG              (xxx_GICD_REGS_BASE + 0x6D60) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_429_REG              (xxx_GICD_REGS_BASE + 0x6D68) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_430_REG              (xxx_GICD_REGS_BASE + 0x6D70) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_431_REG              (xxx_GICD_REGS_BASE + 0x6D78) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_432_REG              (xxx_GICD_REGS_BASE + 0x6D80) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_433_REG              (xxx_GICD_REGS_BASE + 0x6D88) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_434_REG              (xxx_GICD_REGS_BASE + 0x6D90) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_435_REG              (xxx_GICD_REGS_BASE + 0x6D98) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_436_REG              (xxx_GICD_REGS_BASE + 0x6DA0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_437_REG              (xxx_GICD_REGS_BASE + 0x6DA8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_438_REG              (xxx_GICD_REGS_BASE + 0x6DB0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_439_REG              (xxx_GICD_REGS_BASE + 0x6DB8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_440_REG              (xxx_GICD_REGS_BASE + 0x6DC0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_441_REG              (xxx_GICD_REGS_BASE + 0x6DC8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_442_REG              (xxx_GICD_REGS_BASE + 0x6DD0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_443_REG              (xxx_GICD_REGS_BASE + 0x6DD8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_444_REG              (xxx_GICD_REGS_BASE + 0x6DE0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_445_REG              (xxx_GICD_REGS_BASE + 0x6DE8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_446_REG              (xxx_GICD_REGS_BASE + 0x6DF0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_447_REG              (xxx_GICD_REGS_BASE + 0x6DF8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_448_REG              (xxx_GICD_REGS_BASE + 0x6E00) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_449_REG              (xxx_GICD_REGS_BASE + 0x6E08) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_450_REG              (xxx_GICD_REGS_BASE + 0x6E10) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_451_REG              (xxx_GICD_REGS_BASE + 0x6E18) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_452_REG              (xxx_GICD_REGS_BASE + 0x6E20) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_453_REG              (xxx_GICD_REGS_BASE + 0x6E28) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_454_REG              (xxx_GICD_REGS_BASE + 0x6E30) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_455_REG              (xxx_GICD_REGS_BASE + 0x6E38) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_456_REG              (xxx_GICD_REGS_BASE + 0x6E40) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_457_REG              (xxx_GICD_REGS_BASE + 0x6E48) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_458_REG              (xxx_GICD_REGS_BASE + 0x6E50) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_459_REG              (xxx_GICD_REGS_BASE + 0x6E58) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_460_REG              (xxx_GICD_REGS_BASE + 0x6E60) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_461_REG              (xxx_GICD_REGS_BASE + 0x6E68) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_462_REG              (xxx_GICD_REGS_BASE + 0x6E70) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_463_REG              (xxx_GICD_REGS_BASE + 0x6E78) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_464_REG              (xxx_GICD_REGS_BASE + 0x6E80) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_465_REG              (xxx_GICD_REGS_BASE + 0x6E88) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_466_REG              (xxx_GICD_REGS_BASE + 0x6E90) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_467_REG              (xxx_GICD_REGS_BASE + 0x6E98) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_468_REG              (xxx_GICD_REGS_BASE + 0x6EA0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_469_REG              (xxx_GICD_REGS_BASE + 0x6EA8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_470_REG              (xxx_GICD_REGS_BASE + 0x6EB0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_471_REG              (xxx_GICD_REGS_BASE + 0x6EB8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_472_REG              (xxx_GICD_REGS_BASE + 0x6EC0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_473_REG              (xxx_GICD_REGS_BASE + 0x6EC8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_474_REG              (xxx_GICD_REGS_BASE + 0x6ED0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_475_REG              (xxx_GICD_REGS_BASE + 0x6ED8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_476_REG              (xxx_GICD_REGS_BASE + 0x6EE0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_477_REG              (xxx_GICD_REGS_BASE + 0x6EE8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_478_REG              (xxx_GICD_REGS_BASE + 0x6EF0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_479_REG              (xxx_GICD_REGS_BASE + 0x6EF8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_480_REG              (xxx_GICD_REGS_BASE + 0x6F00) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_481_REG              (xxx_GICD_REGS_BASE + 0x6F08) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_482_REG              (xxx_GICD_REGS_BASE + 0x6F10) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_483_REG              (xxx_GICD_REGS_BASE + 0x6F18) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_484_REG              (xxx_GICD_REGS_BASE + 0x6F20) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_485_REG              (xxx_GICD_REGS_BASE + 0x6F28) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_486_REG              (xxx_GICD_REGS_BASE + 0x6F30) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_487_REG              (xxx_GICD_REGS_BASE + 0x6F38) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_488_REG              (xxx_GICD_REGS_BASE + 0x6F40) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_489_REG              (xxx_GICD_REGS_BASE + 0x6F48) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_490_REG              (xxx_GICD_REGS_BASE + 0x6F50) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_491_REG              (xxx_GICD_REGS_BASE + 0x6F58) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_492_REG              (xxx_GICD_REGS_BASE + 0x6F60) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_493_REG              (xxx_GICD_REGS_BASE + 0x6F68) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_494_REG              (xxx_GICD_REGS_BASE + 0x6F70) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_495_REG              (xxx_GICD_REGS_BASE + 0x6F78) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_496_REG              (xxx_GICD_REGS_BASE + 0x6F80) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_497_REG              (xxx_GICD_REGS_BASE + 0x6F88) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_498_REG              (xxx_GICD_REGS_BASE + 0x6F90) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_499_REG              (xxx_GICD_REGS_BASE + 0x6F98) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_500_REG              (xxx_GICD_REGS_BASE + 0x6FA0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_501_REG              (xxx_GICD_REGS_BASE + 0x6FA8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_502_REG              (xxx_GICD_REGS_BASE + 0x6FB0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_503_REG              (xxx_GICD_REGS_BASE + 0x6FB8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_504_REG              (xxx_GICD_REGS_BASE + 0x6FC0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_505_REG              (xxx_GICD_REGS_BASE + 0x6FC8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_506_REG              (xxx_GICD_REGS_BASE + 0x6FD0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_507_REG              (xxx_GICD_REGS_BASE + 0x6FD8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_508_REG              (xxx_GICD_REGS_BASE + 0x6FE0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_509_REG              (xxx_GICD_REGS_BASE + 0x6FE8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_510_REG              (xxx_GICD_REGS_BASE + 0x6FF0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_511_REG              (xxx_GICD_REGS_BASE + 0x6FF8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_512_REG              (xxx_GICD_REGS_BASE + 0x7000) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_513_REG              (xxx_GICD_REGS_BASE + 0x7008) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_514_REG              (xxx_GICD_REGS_BASE + 0x7010) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_515_REG              (xxx_GICD_REGS_BASE + 0x7018) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_516_REG              (xxx_GICD_REGS_BASE + 0x7020) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_517_REG              (xxx_GICD_REGS_BASE + 0x7028) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_518_REG              (xxx_GICD_REGS_BASE + 0x7030) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_519_REG              (xxx_GICD_REGS_BASE + 0x7038) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_520_REG              (xxx_GICD_REGS_BASE + 0x7040) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_521_REG              (xxx_GICD_REGS_BASE + 0x7048) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_522_REG              (xxx_GICD_REGS_BASE + 0x7050) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_523_REG              (xxx_GICD_REGS_BASE + 0x7058) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_524_REG              (xxx_GICD_REGS_BASE + 0x7060) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_525_REG              (xxx_GICD_REGS_BASE + 0x7068) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_526_REG              (xxx_GICD_REGS_BASE + 0x7070) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_527_REG              (xxx_GICD_REGS_BASE + 0x7078) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_528_REG              (xxx_GICD_REGS_BASE + 0x7080) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_529_REG              (xxx_GICD_REGS_BASE + 0x7088) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_530_REG              (xxx_GICD_REGS_BASE + 0x7090) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_531_REG              (xxx_GICD_REGS_BASE + 0x7098) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_532_REG              (xxx_GICD_REGS_BASE + 0x70A0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_533_REG              (xxx_GICD_REGS_BASE + 0x70A8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_534_REG              (xxx_GICD_REGS_BASE + 0x70B0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_535_REG              (xxx_GICD_REGS_BASE + 0x70B8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_536_REG              (xxx_GICD_REGS_BASE + 0x70C0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_537_REG              (xxx_GICD_REGS_BASE + 0x70C8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_538_REG              (xxx_GICD_REGS_BASE + 0x70D0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_539_REG              (xxx_GICD_REGS_BASE + 0x70D8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_540_REG              (xxx_GICD_REGS_BASE + 0x70E0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_541_REG              (xxx_GICD_REGS_BASE + 0x70E8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_542_REG              (xxx_GICD_REGS_BASE + 0x70F0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_543_REG              (xxx_GICD_REGS_BASE + 0x70F8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_544_REG              (xxx_GICD_REGS_BASE + 0x7100) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_545_REG              (xxx_GICD_REGS_BASE + 0x7108) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_546_REG              (xxx_GICD_REGS_BASE + 0x7110) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_547_REG              (xxx_GICD_REGS_BASE + 0x7118) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_548_REG              (xxx_GICD_REGS_BASE + 0x7120) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_549_REG              (xxx_GICD_REGS_BASE + 0x7128) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_550_REG              (xxx_GICD_REGS_BASE + 0x7130) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_551_REG              (xxx_GICD_REGS_BASE + 0x7138) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_552_REG              (xxx_GICD_REGS_BASE + 0x7140) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_553_REG              (xxx_GICD_REGS_BASE + 0x7148) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_554_REG              (xxx_GICD_REGS_BASE + 0x7150) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_555_REG              (xxx_GICD_REGS_BASE + 0x7158) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_556_REG              (xxx_GICD_REGS_BASE + 0x7160) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_557_REG              (xxx_GICD_REGS_BASE + 0x7168) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_558_REG              (xxx_GICD_REGS_BASE + 0x7170) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_559_REG              (xxx_GICD_REGS_BASE + 0x7178) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_560_REG              (xxx_GICD_REGS_BASE + 0x7180) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_561_REG              (xxx_GICD_REGS_BASE + 0x7188) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_562_REG              (xxx_GICD_REGS_BASE + 0x7190) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_563_REG              (xxx_GICD_REGS_BASE + 0x7198) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_564_REG              (xxx_GICD_REGS_BASE + 0x71A0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_565_REG              (xxx_GICD_REGS_BASE + 0x71A8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_566_REG              (xxx_GICD_REGS_BASE + 0x71B0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_567_REG              (xxx_GICD_REGS_BASE + 0x71B8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_568_REG              (xxx_GICD_REGS_BASE + 0x71C0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_569_REG              (xxx_GICD_REGS_BASE + 0x71C8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_570_REG              (xxx_GICD_REGS_BASE + 0x71D0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_571_REG              (xxx_GICD_REGS_BASE + 0x71D8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_572_REG              (xxx_GICD_REGS_BASE + 0x71E0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_573_REG              (xxx_GICD_REGS_BASE + 0x71E8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_574_REG              (xxx_GICD_REGS_BASE + 0x71F0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_575_REG              (xxx_GICD_REGS_BASE + 0x71F8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_576_REG              (xxx_GICD_REGS_BASE + 0x7200) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_577_REG              (xxx_GICD_REGS_BASE + 0x7208) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_578_REG              (xxx_GICD_REGS_BASE + 0x7210) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_579_REG              (xxx_GICD_REGS_BASE + 0x7218) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_580_REG              (xxx_GICD_REGS_BASE + 0x7220) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_581_REG              (xxx_GICD_REGS_BASE + 0x7228) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_582_REG              (xxx_GICD_REGS_BASE + 0x7230) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_583_REG              (xxx_GICD_REGS_BASE + 0x7238) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_584_REG              (xxx_GICD_REGS_BASE + 0x7240) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_585_REG              (xxx_GICD_REGS_BASE + 0x7248) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_586_REG              (xxx_GICD_REGS_BASE + 0x7250) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_587_REG              (xxx_GICD_REGS_BASE + 0x7258) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_588_REG              (xxx_GICD_REGS_BASE + 0x7260) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_589_REG              (xxx_GICD_REGS_BASE + 0x7268) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_590_REG              (xxx_GICD_REGS_BASE + 0x7270) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_591_REG              (xxx_GICD_REGS_BASE + 0x7278) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_592_REG              (xxx_GICD_REGS_BASE + 0x7280) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_593_REG              (xxx_GICD_REGS_BASE + 0x7288) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_594_REG              (xxx_GICD_REGS_BASE + 0x7290) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_595_REG              (xxx_GICD_REGS_BASE + 0x7298) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_596_REG              (xxx_GICD_REGS_BASE + 0x72A0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_597_REG              (xxx_GICD_REGS_BASE + 0x72A8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_598_REG              (xxx_GICD_REGS_BASE + 0x72B0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_599_REG              (xxx_GICD_REGS_BASE + 0x72B8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_600_REG              (xxx_GICD_REGS_BASE + 0x72C0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_601_REG              (xxx_GICD_REGS_BASE + 0x72C8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_602_REG              (xxx_GICD_REGS_BASE + 0x72D0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_603_REG              (xxx_GICD_REGS_BASE + 0x72D8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_604_REG              (xxx_GICD_REGS_BASE + 0x72E0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_605_REG              (xxx_GICD_REGS_BASE + 0x72E8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_606_REG              (xxx_GICD_REGS_BASE + 0x72F0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_607_REG              (xxx_GICD_REGS_BASE + 0x72F8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_608_REG              (xxx_GICD_REGS_BASE + 0x7300) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_609_REG              (xxx_GICD_REGS_BASE + 0x7308) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_610_REG              (xxx_GICD_REGS_BASE + 0x7310) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_611_REG              (xxx_GICD_REGS_BASE + 0x7318) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_612_REG              (xxx_GICD_REGS_BASE + 0x7320) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_613_REG              (xxx_GICD_REGS_BASE + 0x7328) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_614_REG              (xxx_GICD_REGS_BASE + 0x7330) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_615_REG              (xxx_GICD_REGS_BASE + 0x7338) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_616_REG              (xxx_GICD_REGS_BASE + 0x7340) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_617_REG              (xxx_GICD_REGS_BASE + 0x7348) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_618_REG              (xxx_GICD_REGS_BASE + 0x7350) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_619_REG              (xxx_GICD_REGS_BASE + 0x7358) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_620_REG              (xxx_GICD_REGS_BASE + 0x7360) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_621_REG              (xxx_GICD_REGS_BASE + 0x7368) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_622_REG              (xxx_GICD_REGS_BASE + 0x7370) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_623_REG              (xxx_GICD_REGS_BASE + 0x7378) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_624_REG              (xxx_GICD_REGS_BASE + 0x7380) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_625_REG              (xxx_GICD_REGS_BASE + 0x7388) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_626_REG              (xxx_GICD_REGS_BASE + 0x7390) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_627_REG              (xxx_GICD_REGS_BASE + 0x7398) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_628_REG              (xxx_GICD_REGS_BASE + 0x73A0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_629_REG              (xxx_GICD_REGS_BASE + 0x73A8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_630_REG              (xxx_GICD_REGS_BASE + 0x73B0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_631_REG              (xxx_GICD_REGS_BASE + 0x73B8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_632_REG              (xxx_GICD_REGS_BASE + 0x73C0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_633_REG              (xxx_GICD_REGS_BASE + 0x73C8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_634_REG              (xxx_GICD_REGS_BASE + 0x73D0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_635_REG              (xxx_GICD_REGS_BASE + 0x73D8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_636_REG              (xxx_GICD_REGS_BASE + 0x73E0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_637_REG              (xxx_GICD_REGS_BASE + 0x73E8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_638_REG              (xxx_GICD_REGS_BASE + 0x73F0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_639_REG              (xxx_GICD_REGS_BASE + 0x73F8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_640_REG              (xxx_GICD_REGS_BASE + 0x7400) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_641_REG              (xxx_GICD_REGS_BASE + 0x7408) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_642_REG              (xxx_GICD_REGS_BASE + 0x7410) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_643_REG              (xxx_GICD_REGS_BASE + 0x7418) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_644_REG              (xxx_GICD_REGS_BASE + 0x7420) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_645_REG              (xxx_GICD_REGS_BASE + 0x7428) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_646_REG              (xxx_GICD_REGS_BASE + 0x7430) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_647_REG              (xxx_GICD_REGS_BASE + 0x7438) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_648_REG              (xxx_GICD_REGS_BASE + 0x7440) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_649_REG              (xxx_GICD_REGS_BASE + 0x7448) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_650_REG              (xxx_GICD_REGS_BASE + 0x7450) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_651_REG              (xxx_GICD_REGS_BASE + 0x7458) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_652_REG              (xxx_GICD_REGS_BASE + 0x7460) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_653_REG              (xxx_GICD_REGS_BASE + 0x7468) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_654_REG              (xxx_GICD_REGS_BASE + 0x7470) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_655_REG              (xxx_GICD_REGS_BASE + 0x7478) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_656_REG              (xxx_GICD_REGS_BASE + 0x7480) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_657_REG              (xxx_GICD_REGS_BASE + 0x7488) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_658_REG              (xxx_GICD_REGS_BASE + 0x7490) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_659_REG              (xxx_GICD_REGS_BASE + 0x7498) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_660_REG              (xxx_GICD_REGS_BASE + 0x74A0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_661_REG              (xxx_GICD_REGS_BASE + 0x74A8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_662_REG              (xxx_GICD_REGS_BASE + 0x74B0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_663_REG              (xxx_GICD_REGS_BASE + 0x74B8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_664_REG              (xxx_GICD_REGS_BASE + 0x74C0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_665_REG              (xxx_GICD_REGS_BASE + 0x74C8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_666_REG              (xxx_GICD_REGS_BASE + 0x74D0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_667_REG              (xxx_GICD_REGS_BASE + 0x74D8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_668_REG              (xxx_GICD_REGS_BASE + 0x74E0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_669_REG              (xxx_GICD_REGS_BASE + 0x74E8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_670_REG              (xxx_GICD_REGS_BASE + 0x74F0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_671_REG              (xxx_GICD_REGS_BASE + 0x74F8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_672_REG              (xxx_GICD_REGS_BASE + 0x7500) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_673_REG              (xxx_GICD_REGS_BASE + 0x7508) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_674_REG              (xxx_GICD_REGS_BASE + 0x7510) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_675_REG              (xxx_GICD_REGS_BASE + 0x7518) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_676_REG              (xxx_GICD_REGS_BASE + 0x7520) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_677_REG              (xxx_GICD_REGS_BASE + 0x7528) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_678_REG              (xxx_GICD_REGS_BASE + 0x7530) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_679_REG              (xxx_GICD_REGS_BASE + 0x7538) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_680_REG              (xxx_GICD_REGS_BASE + 0x7540) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_681_REG              (xxx_GICD_REGS_BASE + 0x7548) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_682_REG              (xxx_GICD_REGS_BASE + 0x7550) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_683_REG              (xxx_GICD_REGS_BASE + 0x7558) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_684_REG              (xxx_GICD_REGS_BASE + 0x7560) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_685_REG              (xxx_GICD_REGS_BASE + 0x7568) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_686_REG              (xxx_GICD_REGS_BASE + 0x7570) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_687_REG              (xxx_GICD_REGS_BASE + 0x7578) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_688_REG              (xxx_GICD_REGS_BASE + 0x7580) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_689_REG              (xxx_GICD_REGS_BASE + 0x7588) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_690_REG              (xxx_GICD_REGS_BASE + 0x7590) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_691_REG              (xxx_GICD_REGS_BASE + 0x7598) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_692_REG              (xxx_GICD_REGS_BASE + 0x75A0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_693_REG              (xxx_GICD_REGS_BASE + 0x75A8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_694_REG              (xxx_GICD_REGS_BASE + 0x75B0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_695_REG              (xxx_GICD_REGS_BASE + 0x75B8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_696_REG              (xxx_GICD_REGS_BASE + 0x75C0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_697_REG              (xxx_GICD_REGS_BASE + 0x75C8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_698_REG              (xxx_GICD_REGS_BASE + 0x75D0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_699_REG              (xxx_GICD_REGS_BASE + 0x75D8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_700_REG              (xxx_GICD_REGS_BASE + 0x75E0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_701_REG              (xxx_GICD_REGS_BASE + 0x75E8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_702_REG              (xxx_GICD_REGS_BASE + 0x75F0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_703_REG              (xxx_GICD_REGS_BASE + 0x75F8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_704_REG              (xxx_GICD_REGS_BASE + 0x7600) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_705_REG              (xxx_GICD_REGS_BASE + 0x7608) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_706_REG              (xxx_GICD_REGS_BASE + 0x7610) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_707_REG              (xxx_GICD_REGS_BASE + 0x7618) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_708_REG              (xxx_GICD_REGS_BASE + 0x7620) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_709_REG              (xxx_GICD_REGS_BASE + 0x7628) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_710_REG              (xxx_GICD_REGS_BASE + 0x7630) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_711_REG              (xxx_GICD_REGS_BASE + 0x7638) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_712_REG              (xxx_GICD_REGS_BASE + 0x7640) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_713_REG              (xxx_GICD_REGS_BASE + 0x7648) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_714_REG              (xxx_GICD_REGS_BASE + 0x7650) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_715_REG              (xxx_GICD_REGS_BASE + 0x7658) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_716_REG              (xxx_GICD_REGS_BASE + 0x7660) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_717_REG              (xxx_GICD_REGS_BASE + 0x7668) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_718_REG              (xxx_GICD_REGS_BASE + 0x7670) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_719_REG              (xxx_GICD_REGS_BASE + 0x7678) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_720_REG              (xxx_GICD_REGS_BASE + 0x7680) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_721_REG              (xxx_GICD_REGS_BASE + 0x7688) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_722_REG              (xxx_GICD_REGS_BASE + 0x7690) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_723_REG              (xxx_GICD_REGS_BASE + 0x7698) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_724_REG              (xxx_GICD_REGS_BASE + 0x76A0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_725_REG              (xxx_GICD_REGS_BASE + 0x76A8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_726_REG              (xxx_GICD_REGS_BASE + 0x76B0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_727_REG              (xxx_GICD_REGS_BASE + 0x76B8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_728_REG              (xxx_GICD_REGS_BASE + 0x76C0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_729_REG              (xxx_GICD_REGS_BASE + 0x76C8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_730_REG              (xxx_GICD_REGS_BASE + 0x76D0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_731_REG              (xxx_GICD_REGS_BASE + 0x76D8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_732_REG              (xxx_GICD_REGS_BASE + 0x76E0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_733_REG              (xxx_GICD_REGS_BASE + 0x76E8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_734_REG              (xxx_GICD_REGS_BASE + 0x76F0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_735_REG              (xxx_GICD_REGS_BASE + 0x76F8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_736_REG              (xxx_GICD_REGS_BASE + 0x7700) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_737_REG              (xxx_GICD_REGS_BASE + 0x7708) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_738_REG              (xxx_GICD_REGS_BASE + 0x7710) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_739_REG              (xxx_GICD_REGS_BASE + 0x7718) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_740_REG              (xxx_GICD_REGS_BASE + 0x7720) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_741_REG              (xxx_GICD_REGS_BASE + 0x7728) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_742_REG              (xxx_GICD_REGS_BASE + 0x7730) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_743_REG              (xxx_GICD_REGS_BASE + 0x7738) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_744_REG              (xxx_GICD_REGS_BASE + 0x7740) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_745_REG              (xxx_GICD_REGS_BASE + 0x7748) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_746_REG              (xxx_GICD_REGS_BASE + 0x7750) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_747_REG              (xxx_GICD_REGS_BASE + 0x7758) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_748_REG              (xxx_GICD_REGS_BASE + 0x7760) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_749_REG              (xxx_GICD_REGS_BASE + 0x7768) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_750_REG              (xxx_GICD_REGS_BASE + 0x7770) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_751_REG              (xxx_GICD_REGS_BASE + 0x7778) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_752_REG              (xxx_GICD_REGS_BASE + 0x7780) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_753_REG              (xxx_GICD_REGS_BASE + 0x7788) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_754_REG              (xxx_GICD_REGS_BASE + 0x7790) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_755_REG              (xxx_GICD_REGS_BASE + 0x7798) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_756_REG              (xxx_GICD_REGS_BASE + 0x77A0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_757_REG              (xxx_GICD_REGS_BASE + 0x77A8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_758_REG              (xxx_GICD_REGS_BASE + 0x77B0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_759_REG              (xxx_GICD_REGS_BASE + 0x77B8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_760_REG              (xxx_GICD_REGS_BASE + 0x77C0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_761_REG              (xxx_GICD_REGS_BASE + 0x77C8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_762_REG              (xxx_GICD_REGS_BASE + 0x77D0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_763_REG              (xxx_GICD_REGS_BASE + 0x77D8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_764_REG              (xxx_GICD_REGS_BASE + 0x77E0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_765_REG              (xxx_GICD_REGS_BASE + 0x77E8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_766_REG              (xxx_GICD_REGS_BASE + 0x77F0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_767_REG              (xxx_GICD_REGS_BASE + 0x77F8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_768_REG              (xxx_GICD_REGS_BASE + 0x7800) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_769_REG              (xxx_GICD_REGS_BASE + 0x7808) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_770_REG              (xxx_GICD_REGS_BASE + 0x7810) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_771_REG              (xxx_GICD_REGS_BASE + 0x7818) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_772_REG              (xxx_GICD_REGS_BASE + 0x7820) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_773_REG              (xxx_GICD_REGS_BASE + 0x7828) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_774_REG              (xxx_GICD_REGS_BASE + 0x7830) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_775_REG              (xxx_GICD_REGS_BASE + 0x7838) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_776_REG              (xxx_GICD_REGS_BASE + 0x7840) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_777_REG              (xxx_GICD_REGS_BASE + 0x7848) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_778_REG              (xxx_GICD_REGS_BASE + 0x7850) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_779_REG              (xxx_GICD_REGS_BASE + 0x7858) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_780_REG              (xxx_GICD_REGS_BASE + 0x7860) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_781_REG              (xxx_GICD_REGS_BASE + 0x7868) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_782_REG              (xxx_GICD_REGS_BASE + 0x7870) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_783_REG              (xxx_GICD_REGS_BASE + 0x7878) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_784_REG              (xxx_GICD_REGS_BASE + 0x7880) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_785_REG              (xxx_GICD_REGS_BASE + 0x7888) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_786_REG              (xxx_GICD_REGS_BASE + 0x7890) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_787_REG              (xxx_GICD_REGS_BASE + 0x7898) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_788_REG              (xxx_GICD_REGS_BASE + 0x78A0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_789_REG              (xxx_GICD_REGS_BASE + 0x78A8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_790_REG              (xxx_GICD_REGS_BASE + 0x78B0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_791_REG              (xxx_GICD_REGS_BASE + 0x78B8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_792_REG              (xxx_GICD_REGS_BASE + 0x78C0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_793_REG              (xxx_GICD_REGS_BASE + 0x78C8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_794_REG              (xxx_GICD_REGS_BASE + 0x78D0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_795_REG              (xxx_GICD_REGS_BASE + 0x78D8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_796_REG              (xxx_GICD_REGS_BASE + 0x78E0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_797_REG              (xxx_GICD_REGS_BASE + 0x78E8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_798_REG              (xxx_GICD_REGS_BASE + 0x78F0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_799_REG              (xxx_GICD_REGS_BASE + 0x78F8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_800_REG              (xxx_GICD_REGS_BASE + 0x7900) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_801_REG              (xxx_GICD_REGS_BASE + 0x7908) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_802_REG              (xxx_GICD_REGS_BASE + 0x7910) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_803_REG              (xxx_GICD_REGS_BASE + 0x7918) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_804_REG              (xxx_GICD_REGS_BASE + 0x7920) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_805_REG              (xxx_GICD_REGS_BASE + 0x7928) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_806_REG              (xxx_GICD_REGS_BASE + 0x7930) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_807_REG              (xxx_GICD_REGS_BASE + 0x7938) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_808_REG              (xxx_GICD_REGS_BASE + 0x7940) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_809_REG              (xxx_GICD_REGS_BASE + 0x7948) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_810_REG              (xxx_GICD_REGS_BASE + 0x7950) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_811_REG              (xxx_GICD_REGS_BASE + 0x7958) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_812_REG              (xxx_GICD_REGS_BASE + 0x7960) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_813_REG              (xxx_GICD_REGS_BASE + 0x7968) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_814_REG              (xxx_GICD_REGS_BASE + 0x7970) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_815_REG              (xxx_GICD_REGS_BASE + 0x7978) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_816_REG              (xxx_GICD_REGS_BASE + 0x7980) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_817_REG              (xxx_GICD_REGS_BASE + 0x7988) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_818_REG              (xxx_GICD_REGS_BASE + 0x7990) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_819_REG              (xxx_GICD_REGS_BASE + 0x7998) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_820_REG              (xxx_GICD_REGS_BASE + 0x79A0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_821_REG              (xxx_GICD_REGS_BASE + 0x79A8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_822_REG              (xxx_GICD_REGS_BASE + 0x79B0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_823_REG              (xxx_GICD_REGS_BASE + 0x79B8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_824_REG              (xxx_GICD_REGS_BASE + 0x79C0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_825_REG              (xxx_GICD_REGS_BASE + 0x79C8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_826_REG              (xxx_GICD_REGS_BASE + 0x79D0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_827_REG              (xxx_GICD_REGS_BASE + 0x79D8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_828_REG              (xxx_GICD_REGS_BASE + 0x79E0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_829_REG              (xxx_GICD_REGS_BASE + 0x79E8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_830_REG              (xxx_GICD_REGS_BASE + 0x79F0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_831_REG              (xxx_GICD_REGS_BASE + 0x79F8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_832_REG              (xxx_GICD_REGS_BASE + 0x7A00) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_833_REG              (xxx_GICD_REGS_BASE + 0x7A08) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_834_REG              (xxx_GICD_REGS_BASE + 0x7A10) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_835_REG              (xxx_GICD_REGS_BASE + 0x7A18) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_836_REG              (xxx_GICD_REGS_BASE + 0x7A20) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_837_REG              (xxx_GICD_REGS_BASE + 0x7A28) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_838_REG              (xxx_GICD_REGS_BASE + 0x7A30) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_839_REG              (xxx_GICD_REGS_BASE + 0x7A38) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_840_REG              (xxx_GICD_REGS_BASE + 0x7A40) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_841_REG              (xxx_GICD_REGS_BASE + 0x7A48) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_842_REG              (xxx_GICD_REGS_BASE + 0x7A50) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_843_REG              (xxx_GICD_REGS_BASE + 0x7A58) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_844_REG              (xxx_GICD_REGS_BASE + 0x7A60) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_845_REG              (xxx_GICD_REGS_BASE + 0x7A68) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_846_REG              (xxx_GICD_REGS_BASE + 0x7A70) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_847_REG              (xxx_GICD_REGS_BASE + 0x7A78) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_848_REG              (xxx_GICD_REGS_BASE + 0x7A80) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_849_REG              (xxx_GICD_REGS_BASE + 0x7A88) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_850_REG              (xxx_GICD_REGS_BASE + 0x7A90) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_851_REG              (xxx_GICD_REGS_BASE + 0x7A98) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_852_REG              (xxx_GICD_REGS_BASE + 0x7AA0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_853_REG              (xxx_GICD_REGS_BASE + 0x7AA8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_854_REG              (xxx_GICD_REGS_BASE + 0x7AB0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_855_REG              (xxx_GICD_REGS_BASE + 0x7AB8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_856_REG              (xxx_GICD_REGS_BASE + 0x7AC0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_857_REG              (xxx_GICD_REGS_BASE + 0x7AC8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_858_REG              (xxx_GICD_REGS_BASE + 0x7AD0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_859_REG              (xxx_GICD_REGS_BASE + 0x7AD8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_860_REG              (xxx_GICD_REGS_BASE + 0x7AE0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_861_REG              (xxx_GICD_REGS_BASE + 0x7AE8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_862_REG              (xxx_GICD_REGS_BASE + 0x7AF0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_863_REG              (xxx_GICD_REGS_BASE + 0x7AF8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_864_REG              (xxx_GICD_REGS_BASE + 0x7B00) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_865_REG              (xxx_GICD_REGS_BASE + 0x7B08) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_866_REG              (xxx_GICD_REGS_BASE + 0x7B10) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_867_REG              (xxx_GICD_REGS_BASE + 0x7B18) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_868_REG              (xxx_GICD_REGS_BASE + 0x7B20) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_869_REG              (xxx_GICD_REGS_BASE + 0x7B28) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_870_REG              (xxx_GICD_REGS_BASE + 0x7B30) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_871_REG              (xxx_GICD_REGS_BASE + 0x7B38) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_872_REG              (xxx_GICD_REGS_BASE + 0x7B40) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_873_REG              (xxx_GICD_REGS_BASE + 0x7B48) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_874_REG              (xxx_GICD_REGS_BASE + 0x7B50) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_875_REG              (xxx_GICD_REGS_BASE + 0x7B58) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_876_REG              (xxx_GICD_REGS_BASE + 0x7B60) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_877_REG              (xxx_GICD_REGS_BASE + 0x7B68) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_878_REG              (xxx_GICD_REGS_BASE + 0x7B70) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_879_REG              (xxx_GICD_REGS_BASE + 0x7B78) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_880_REG              (xxx_GICD_REGS_BASE + 0x7B80) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_881_REG              (xxx_GICD_REGS_BASE + 0x7B88) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_882_REG              (xxx_GICD_REGS_BASE + 0x7B90) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_883_REG              (xxx_GICD_REGS_BASE + 0x7B98) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_884_REG              (xxx_GICD_REGS_BASE + 0x7BA0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_885_REG              (xxx_GICD_REGS_BASE + 0x7BA8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_886_REG              (xxx_GICD_REGS_BASE + 0x7BB0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_887_REG              (xxx_GICD_REGS_BASE + 0x7BB8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_888_REG              (xxx_GICD_REGS_BASE + 0x7BC0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_889_REG              (xxx_GICD_REGS_BASE + 0x7BC8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_890_REG              (xxx_GICD_REGS_BASE + 0x7BD0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_891_REG              (xxx_GICD_REGS_BASE + 0x7BD8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_892_REG              (xxx_GICD_REGS_BASE + 0x7BE0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_893_REG              (xxx_GICD_REGS_BASE + 0x7BE8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_894_REG              (xxx_GICD_REGS_BASE + 0x7BF0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_895_REG              (xxx_GICD_REGS_BASE + 0x7BF8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_896_REG              (xxx_GICD_REGS_BASE + 0x7C00) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_897_REG              (xxx_GICD_REGS_BASE + 0x7C08) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_898_REG              (xxx_GICD_REGS_BASE + 0x7C10) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_899_REG              (xxx_GICD_REGS_BASE + 0x7C18) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_900_REG              (xxx_GICD_REGS_BASE + 0x7C20) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_901_REG              (xxx_GICD_REGS_BASE + 0x7C28) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_902_REG              (xxx_GICD_REGS_BASE + 0x7C30) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_903_REG              (xxx_GICD_REGS_BASE + 0x7C38) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_904_REG              (xxx_GICD_REGS_BASE + 0x7C40) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_905_REG              (xxx_GICD_REGS_BASE + 0x7C48) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_906_REG              (xxx_GICD_REGS_BASE + 0x7C50) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_907_REG              (xxx_GICD_REGS_BASE + 0x7C58) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_908_REG              (xxx_GICD_REGS_BASE + 0x7C60) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_909_REG              (xxx_GICD_REGS_BASE + 0x7C68) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_910_REG              (xxx_GICD_REGS_BASE + 0x7C70) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_911_REG              (xxx_GICD_REGS_BASE + 0x7C78) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_912_REG              (xxx_GICD_REGS_BASE + 0x7C80) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_913_REG              (xxx_GICD_REGS_BASE + 0x7C88) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_914_REG              (xxx_GICD_REGS_BASE + 0x7C90) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_915_REG              (xxx_GICD_REGS_BASE + 0x7C98) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_916_REG              (xxx_GICD_REGS_BASE + 0x7CA0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_917_REG              (xxx_GICD_REGS_BASE + 0x7CA8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_918_REG              (xxx_GICD_REGS_BASE + 0x7CB0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_919_REG              (xxx_GICD_REGS_BASE + 0x7CB8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_920_REG              (xxx_GICD_REGS_BASE + 0x7CC0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_921_REG              (xxx_GICD_REGS_BASE + 0x7CC8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_922_REG              (xxx_GICD_REGS_BASE + 0x7CD0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_923_REG              (xxx_GICD_REGS_BASE + 0x7CD8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_924_REG              (xxx_GICD_REGS_BASE + 0x7CE0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_925_REG              (xxx_GICD_REGS_BASE + 0x7CE8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_926_REG              (xxx_GICD_REGS_BASE + 0x7CF0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_927_REG              (xxx_GICD_REGS_BASE + 0x7CF8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_928_REG              (xxx_GICD_REGS_BASE + 0x7D00) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_929_REG              (xxx_GICD_REGS_BASE + 0x7D08) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_930_REG              (xxx_GICD_REGS_BASE + 0x7D10) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_931_REG              (xxx_GICD_REGS_BASE + 0x7D18) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_932_REG              (xxx_GICD_REGS_BASE + 0x7D20) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_933_REG              (xxx_GICD_REGS_BASE + 0x7D28) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_934_REG              (xxx_GICD_REGS_BASE + 0x7D30) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_935_REG              (xxx_GICD_REGS_BASE + 0x7D38) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_936_REG              (xxx_GICD_REGS_BASE + 0x7D40) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_937_REG              (xxx_GICD_REGS_BASE + 0x7D48) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_938_REG              (xxx_GICD_REGS_BASE + 0x7D50) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_939_REG              (xxx_GICD_REGS_BASE + 0x7D58) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_940_REG              (xxx_GICD_REGS_BASE + 0x7D60) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_941_REG              (xxx_GICD_REGS_BASE + 0x7D68) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_942_REG              (xxx_GICD_REGS_BASE + 0x7D70) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_943_REG              (xxx_GICD_REGS_BASE + 0x7D78) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_944_REG              (xxx_GICD_REGS_BASE + 0x7D80) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_945_REG              (xxx_GICD_REGS_BASE + 0x7D88) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_946_REG              (xxx_GICD_REGS_BASE + 0x7D90) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_947_REG              (xxx_GICD_REGS_BASE + 0x7D98) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_948_REG              (xxx_GICD_REGS_BASE + 0x7DA0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_949_REG              (xxx_GICD_REGS_BASE + 0x7DA8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_950_REG              (xxx_GICD_REGS_BASE + 0x7DB0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_951_REG              (xxx_GICD_REGS_BASE + 0x7DB8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_952_REG              (xxx_GICD_REGS_BASE + 0x7DC0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_953_REG              (xxx_GICD_REGS_BASE + 0x7DC8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_954_REG              (xxx_GICD_REGS_BASE + 0x7DD0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_955_REG              (xxx_GICD_REGS_BASE + 0x7DD8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_956_REG              (xxx_GICD_REGS_BASE + 0x7DE0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_957_REG              (xxx_GICD_REGS_BASE + 0x7DE8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_958_REG              (xxx_GICD_REGS_BASE + 0x7DF0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_959_REG              (xxx_GICD_REGS_BASE + 0x7DF8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_960_REG              (xxx_GICD_REGS_BASE + 0x7E00) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_961_REG              (xxx_GICD_REGS_BASE + 0x7E08) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_962_REG              (xxx_GICD_REGS_BASE + 0x7E10) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_963_REG              (xxx_GICD_REGS_BASE + 0x7E18) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_964_REG              (xxx_GICD_REGS_BASE + 0x7E20) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_965_REG              (xxx_GICD_REGS_BASE + 0x7E28) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_966_REG              (xxx_GICD_REGS_BASE + 0x7E30) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_967_REG              (xxx_GICD_REGS_BASE + 0x7E38) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_968_REG              (xxx_GICD_REGS_BASE + 0x7E40) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_969_REG              (xxx_GICD_REGS_BASE + 0x7E48) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_970_REG              (xxx_GICD_REGS_BASE + 0x7E50) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_971_REG              (xxx_GICD_REGS_BASE + 0x7E58) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_972_REG              (xxx_GICD_REGS_BASE + 0x7E60) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_973_REG              (xxx_GICD_REGS_BASE + 0x7E68) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_974_REG              (xxx_GICD_REGS_BASE + 0x7E70) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_975_REG              (xxx_GICD_REGS_BASE + 0x7E78) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_976_REG              (xxx_GICD_REGS_BASE + 0x7E80) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_977_REG              (xxx_GICD_REGS_BASE + 0x7E88) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_978_REG              (xxx_GICD_REGS_BASE + 0x7E90) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_979_REG              (xxx_GICD_REGS_BASE + 0x7E98) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_980_REG              (xxx_GICD_REGS_BASE + 0x7EA0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_981_REG              (xxx_GICD_REGS_BASE + 0x7EA8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_982_REG              (xxx_GICD_REGS_BASE + 0x7EB0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_983_REG              (xxx_GICD_REGS_BASE + 0x7EB8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_984_REG              (xxx_GICD_REGS_BASE + 0x7EC0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_985_REG              (xxx_GICD_REGS_BASE + 0x7EC8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_986_REG              (xxx_GICD_REGS_BASE + 0x7ED0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_987_REG              (xxx_GICD_REGS_BASE + 0x7ED8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_988_REG              (xxx_GICD_REGS_BASE + 0x7EE0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_989_REG              (xxx_GICD_REGS_BASE + 0x7EE8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_990_REG              (xxx_GICD_REGS_BASE + 0x7EF0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_991_REG              (xxx_GICD_REGS_BASE + 0x7EF8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_992_REG              (xxx_GICD_REGS_BASE + 0x7F00) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_993_REG              (xxx_GICD_REGS_BASE + 0x7F08) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_994_REG              (xxx_GICD_REGS_BASE + 0x7F10) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_995_REG              (xxx_GICD_REGS_BASE + 0x7F18) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_996_REG              (xxx_GICD_REGS_BASE + 0x7F20) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_997_REG              (xxx_GICD_REGS_BASE + 0x7F28) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_998_REG              (xxx_GICD_REGS_BASE + 0x7F30) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_999_REG              (xxx_GICD_REGS_BASE + 0x7F38) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_1000_REG             (xxx_GICD_REGS_BASE + 0x7F40) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_1001_REG             (xxx_GICD_REGS_BASE + 0x7F48) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_1002_REG             (xxx_GICD_REGS_BASE + 0x7F50) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_1003_REG             (xxx_GICD_REGS_BASE + 0x7F58) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_1004_REG             (xxx_GICD_REGS_BASE + 0x7F60) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_1005_REG             (xxx_GICD_REGS_BASE + 0x7F68) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_1006_REG             (xxx_GICD_REGS_BASE + 0x7F70) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_1007_REG             (xxx_GICD_REGS_BASE + 0x7F78) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_1008_REG             (xxx_GICD_REGS_BASE + 0x7F80) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_1009_REG             (xxx_GICD_REGS_BASE + 0x7F88) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_1010_REG             (xxx_GICD_REGS_BASE + 0x7F90) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_1011_REG             (xxx_GICD_REGS_BASE + 0x7F98) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_1012_REG             (xxx_GICD_REGS_BASE + 0x7FA0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_1013_REG             (xxx_GICD_REGS_BASE + 0x7FA8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_1014_REG             (xxx_GICD_REGS_BASE + 0x7FB0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_1015_REG             (xxx_GICD_REGS_BASE + 0x7FB8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_1016_REG             (xxx_GICD_REGS_BASE + 0x7FC0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_1017_REG             (xxx_GICD_REGS_BASE + 0x7FC8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_1018_REG             (xxx_GICD_REGS_BASE + 0x7FD0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_1019_REG             (xxx_GICD_REGS_BASE + 0x7FD8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_1020_REG             (xxx_GICD_REGS_BASE + 0x7FE0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_1021_REG             (xxx_GICD_REGS_BASE + 0x7FE8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_1022_REG             (xxx_GICD_REGS_BASE + 0x7FF0) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_L_1023_REG             (xxx_GICD_REGS_BASE + 0x7FF8) /* �׺���·�ɼĴ�����[31:0]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_0_REG                (xxx_GICD_REGS_BASE + 0x6004) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_1_REG                (xxx_GICD_REGS_BASE + 0x600C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_2_REG                (xxx_GICD_REGS_BASE + 0x6014) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_3_REG                (xxx_GICD_REGS_BASE + 0x601C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_4_REG                (xxx_GICD_REGS_BASE + 0x6024) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_5_REG                (xxx_GICD_REGS_BASE + 0x602C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_6_REG                (xxx_GICD_REGS_BASE + 0x6034) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_7_REG                (xxx_GICD_REGS_BASE + 0x603C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_8_REG                (xxx_GICD_REGS_BASE + 0x6044) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_9_REG                (xxx_GICD_REGS_BASE + 0x604C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_10_REG               (xxx_GICD_REGS_BASE + 0x6054) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_11_REG               (xxx_GICD_REGS_BASE + 0x605C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_12_REG               (xxx_GICD_REGS_BASE + 0x6064) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_13_REG               (xxx_GICD_REGS_BASE + 0x606C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_14_REG               (xxx_GICD_REGS_BASE + 0x6074) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_15_REG               (xxx_GICD_REGS_BASE + 0x607C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_16_REG               (xxx_GICD_REGS_BASE + 0x6084) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_17_REG               (xxx_GICD_REGS_BASE + 0x608C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_18_REG               (xxx_GICD_REGS_BASE + 0x6094) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_19_REG               (xxx_GICD_REGS_BASE + 0x609C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_20_REG               (xxx_GICD_REGS_BASE + 0x60A4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_21_REG               (xxx_GICD_REGS_BASE + 0x60AC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_22_REG               (xxx_GICD_REGS_BASE + 0x60B4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_23_REG               (xxx_GICD_REGS_BASE + 0x60BC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_24_REG               (xxx_GICD_REGS_BASE + 0x60C4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_25_REG               (xxx_GICD_REGS_BASE + 0x60CC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_26_REG               (xxx_GICD_REGS_BASE + 0x60D4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_27_REG               (xxx_GICD_REGS_BASE + 0x60DC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_28_REG               (xxx_GICD_REGS_BASE + 0x60E4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_29_REG               (xxx_GICD_REGS_BASE + 0x60EC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_30_REG               (xxx_GICD_REGS_BASE + 0x60F4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_31_REG               (xxx_GICD_REGS_BASE + 0x60FC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_32_REG               (xxx_GICD_REGS_BASE + 0x6104) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_33_REG               (xxx_GICD_REGS_BASE + 0x610C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_34_REG               (xxx_GICD_REGS_BASE + 0x6114) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_35_REG               (xxx_GICD_REGS_BASE + 0x611C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_36_REG               (xxx_GICD_REGS_BASE + 0x6124) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_37_REG               (xxx_GICD_REGS_BASE + 0x612C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_38_REG               (xxx_GICD_REGS_BASE + 0x6134) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_39_REG               (xxx_GICD_REGS_BASE + 0x613C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_40_REG               (xxx_GICD_REGS_BASE + 0x6144) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_41_REG               (xxx_GICD_REGS_BASE + 0x614C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_42_REG               (xxx_GICD_REGS_BASE + 0x6154) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_43_REG               (xxx_GICD_REGS_BASE + 0x615C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_44_REG               (xxx_GICD_REGS_BASE + 0x6164) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_45_REG               (xxx_GICD_REGS_BASE + 0x616C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_46_REG               (xxx_GICD_REGS_BASE + 0x6174) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_47_REG               (xxx_GICD_REGS_BASE + 0x617C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_48_REG               (xxx_GICD_REGS_BASE + 0x6184) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_49_REG               (xxx_GICD_REGS_BASE + 0x618C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_50_REG               (xxx_GICD_REGS_BASE + 0x6194) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_51_REG               (xxx_GICD_REGS_BASE + 0x619C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_52_REG               (xxx_GICD_REGS_BASE + 0x61A4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_53_REG               (xxx_GICD_REGS_BASE + 0x61AC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_54_REG               (xxx_GICD_REGS_BASE + 0x61B4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_55_REG               (xxx_GICD_REGS_BASE + 0x61BC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_56_REG               (xxx_GICD_REGS_BASE + 0x61C4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_57_REG               (xxx_GICD_REGS_BASE + 0x61CC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_58_REG               (xxx_GICD_REGS_BASE + 0x61D4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_59_REG               (xxx_GICD_REGS_BASE + 0x61DC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_60_REG               (xxx_GICD_REGS_BASE + 0x61E4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_61_REG               (xxx_GICD_REGS_BASE + 0x61EC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_62_REG               (xxx_GICD_REGS_BASE + 0x61F4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_63_REG               (xxx_GICD_REGS_BASE + 0x61FC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_64_REG               (xxx_GICD_REGS_BASE + 0x6204) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_65_REG               (xxx_GICD_REGS_BASE + 0x620C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_66_REG               (xxx_GICD_REGS_BASE + 0x6214) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_67_REG               (xxx_GICD_REGS_BASE + 0x621C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_68_REG               (xxx_GICD_REGS_BASE + 0x6224) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_69_REG               (xxx_GICD_REGS_BASE + 0x622C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_70_REG               (xxx_GICD_REGS_BASE + 0x6234) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_71_REG               (xxx_GICD_REGS_BASE + 0x623C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_72_REG               (xxx_GICD_REGS_BASE + 0x6244) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_73_REG               (xxx_GICD_REGS_BASE + 0x624C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_74_REG               (xxx_GICD_REGS_BASE + 0x6254) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_75_REG               (xxx_GICD_REGS_BASE + 0x625C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_76_REG               (xxx_GICD_REGS_BASE + 0x6264) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_77_REG               (xxx_GICD_REGS_BASE + 0x626C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_78_REG               (xxx_GICD_REGS_BASE + 0x6274) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_79_REG               (xxx_GICD_REGS_BASE + 0x627C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_80_REG               (xxx_GICD_REGS_BASE + 0x6284) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_81_REG               (xxx_GICD_REGS_BASE + 0x628C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_82_REG               (xxx_GICD_REGS_BASE + 0x6294) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_83_REG               (xxx_GICD_REGS_BASE + 0x629C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_84_REG               (xxx_GICD_REGS_BASE + 0x62A4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_85_REG               (xxx_GICD_REGS_BASE + 0x62AC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_86_REG               (xxx_GICD_REGS_BASE + 0x62B4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_87_REG               (xxx_GICD_REGS_BASE + 0x62BC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_88_REG               (xxx_GICD_REGS_BASE + 0x62C4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_89_REG               (xxx_GICD_REGS_BASE + 0x62CC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_90_REG               (xxx_GICD_REGS_BASE + 0x62D4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_91_REG               (xxx_GICD_REGS_BASE + 0x62DC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_92_REG               (xxx_GICD_REGS_BASE + 0x62E4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_93_REG               (xxx_GICD_REGS_BASE + 0x62EC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_94_REG               (xxx_GICD_REGS_BASE + 0x62F4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_95_REG               (xxx_GICD_REGS_BASE + 0x62FC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_96_REG               (xxx_GICD_REGS_BASE + 0x6304) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_97_REG               (xxx_GICD_REGS_BASE + 0x630C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_98_REG               (xxx_GICD_REGS_BASE + 0x6314) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_99_REG               (xxx_GICD_REGS_BASE + 0x631C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_100_REG              (xxx_GICD_REGS_BASE + 0x6324) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_101_REG              (xxx_GICD_REGS_BASE + 0x632C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_102_REG              (xxx_GICD_REGS_BASE + 0x6334) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_103_REG              (xxx_GICD_REGS_BASE + 0x633C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_104_REG              (xxx_GICD_REGS_BASE + 0x6344) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_105_REG              (xxx_GICD_REGS_BASE + 0x634C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_106_REG              (xxx_GICD_REGS_BASE + 0x6354) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_107_REG              (xxx_GICD_REGS_BASE + 0x635C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_108_REG              (xxx_GICD_REGS_BASE + 0x6364) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_109_REG              (xxx_GICD_REGS_BASE + 0x636C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_110_REG              (xxx_GICD_REGS_BASE + 0x6374) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_111_REG              (xxx_GICD_REGS_BASE + 0x637C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_112_REG              (xxx_GICD_REGS_BASE + 0x6384) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_113_REG              (xxx_GICD_REGS_BASE + 0x638C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_114_REG              (xxx_GICD_REGS_BASE + 0x6394) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_115_REG              (xxx_GICD_REGS_BASE + 0x639C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_116_REG              (xxx_GICD_REGS_BASE + 0x63A4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_117_REG              (xxx_GICD_REGS_BASE + 0x63AC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_118_REG              (xxx_GICD_REGS_BASE + 0x63B4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_119_REG              (xxx_GICD_REGS_BASE + 0x63BC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_120_REG              (xxx_GICD_REGS_BASE + 0x63C4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_121_REG              (xxx_GICD_REGS_BASE + 0x63CC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_122_REG              (xxx_GICD_REGS_BASE + 0x63D4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_123_REG              (xxx_GICD_REGS_BASE + 0x63DC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_124_REG              (xxx_GICD_REGS_BASE + 0x63E4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_125_REG              (xxx_GICD_REGS_BASE + 0x63EC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_126_REG              (xxx_GICD_REGS_BASE + 0x63F4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_127_REG              (xxx_GICD_REGS_BASE + 0x63FC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_128_REG              (xxx_GICD_REGS_BASE + 0x6404) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_129_REG              (xxx_GICD_REGS_BASE + 0x640C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_130_REG              (xxx_GICD_REGS_BASE + 0x6414) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_131_REG              (xxx_GICD_REGS_BASE + 0x641C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_132_REG              (xxx_GICD_REGS_BASE + 0x6424) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_133_REG              (xxx_GICD_REGS_BASE + 0x642C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_134_REG              (xxx_GICD_REGS_BASE + 0x6434) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_135_REG              (xxx_GICD_REGS_BASE + 0x643C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_136_REG              (xxx_GICD_REGS_BASE + 0x6444) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_137_REG              (xxx_GICD_REGS_BASE + 0x644C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_138_REG              (xxx_GICD_REGS_BASE + 0x6454) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_139_REG              (xxx_GICD_REGS_BASE + 0x645C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_140_REG              (xxx_GICD_REGS_BASE + 0x6464) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_141_REG              (xxx_GICD_REGS_BASE + 0x646C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_142_REG              (xxx_GICD_REGS_BASE + 0x6474) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_143_REG              (xxx_GICD_REGS_BASE + 0x647C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_144_REG              (xxx_GICD_REGS_BASE + 0x6484) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_145_REG              (xxx_GICD_REGS_BASE + 0x648C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_146_REG              (xxx_GICD_REGS_BASE + 0x6494) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_147_REG              (xxx_GICD_REGS_BASE + 0x649C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_148_REG              (xxx_GICD_REGS_BASE + 0x64A4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_149_REG              (xxx_GICD_REGS_BASE + 0x64AC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_150_REG              (xxx_GICD_REGS_BASE + 0x64B4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_151_REG              (xxx_GICD_REGS_BASE + 0x64BC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_152_REG              (xxx_GICD_REGS_BASE + 0x64C4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_153_REG              (xxx_GICD_REGS_BASE + 0x64CC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_154_REG              (xxx_GICD_REGS_BASE + 0x64D4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_155_REG              (xxx_GICD_REGS_BASE + 0x64DC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_156_REG              (xxx_GICD_REGS_BASE + 0x64E4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_157_REG              (xxx_GICD_REGS_BASE + 0x64EC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_158_REG              (xxx_GICD_REGS_BASE + 0x64F4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_159_REG              (xxx_GICD_REGS_BASE + 0x64FC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_160_REG              (xxx_GICD_REGS_BASE + 0x6504) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_161_REG              (xxx_GICD_REGS_BASE + 0x650C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_162_REG              (xxx_GICD_REGS_BASE + 0x6514) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_163_REG              (xxx_GICD_REGS_BASE + 0x651C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_164_REG              (xxx_GICD_REGS_BASE + 0x6524) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_165_REG              (xxx_GICD_REGS_BASE + 0x652C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_166_REG              (xxx_GICD_REGS_BASE + 0x6534) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_167_REG              (xxx_GICD_REGS_BASE + 0x653C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_168_REG              (xxx_GICD_REGS_BASE + 0x6544) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_169_REG              (xxx_GICD_REGS_BASE + 0x654C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_170_REG              (xxx_GICD_REGS_BASE + 0x6554) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_171_REG              (xxx_GICD_REGS_BASE + 0x655C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_172_REG              (xxx_GICD_REGS_BASE + 0x6564) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_173_REG              (xxx_GICD_REGS_BASE + 0x656C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_174_REG              (xxx_GICD_REGS_BASE + 0x6574) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_175_REG              (xxx_GICD_REGS_BASE + 0x657C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_176_REG              (xxx_GICD_REGS_BASE + 0x6584) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_177_REG              (xxx_GICD_REGS_BASE + 0x658C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_178_REG              (xxx_GICD_REGS_BASE + 0x6594) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_179_REG              (xxx_GICD_REGS_BASE + 0x659C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_180_REG              (xxx_GICD_REGS_BASE + 0x65A4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_181_REG              (xxx_GICD_REGS_BASE + 0x65AC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_182_REG              (xxx_GICD_REGS_BASE + 0x65B4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_183_REG              (xxx_GICD_REGS_BASE + 0x65BC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_184_REG              (xxx_GICD_REGS_BASE + 0x65C4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_185_REG              (xxx_GICD_REGS_BASE + 0x65CC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_186_REG              (xxx_GICD_REGS_BASE + 0x65D4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_187_REG              (xxx_GICD_REGS_BASE + 0x65DC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_188_REG              (xxx_GICD_REGS_BASE + 0x65E4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_189_REG              (xxx_GICD_REGS_BASE + 0x65EC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_190_REG              (xxx_GICD_REGS_BASE + 0x65F4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_191_REG              (xxx_GICD_REGS_BASE + 0x65FC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_192_REG              (xxx_GICD_REGS_BASE + 0x6604) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_193_REG              (xxx_GICD_REGS_BASE + 0x660C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_194_REG              (xxx_GICD_REGS_BASE + 0x6614) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_195_REG              (xxx_GICD_REGS_BASE + 0x661C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_196_REG              (xxx_GICD_REGS_BASE + 0x6624) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_197_REG              (xxx_GICD_REGS_BASE + 0x662C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_198_REG              (xxx_GICD_REGS_BASE + 0x6634) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_199_REG              (xxx_GICD_REGS_BASE + 0x663C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_200_REG              (xxx_GICD_REGS_BASE + 0x6644) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_201_REG              (xxx_GICD_REGS_BASE + 0x664C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_202_REG              (xxx_GICD_REGS_BASE + 0x6654) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_203_REG              (xxx_GICD_REGS_BASE + 0x665C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_204_REG              (xxx_GICD_REGS_BASE + 0x6664) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_205_REG              (xxx_GICD_REGS_BASE + 0x666C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_206_REG              (xxx_GICD_REGS_BASE + 0x6674) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_207_REG              (xxx_GICD_REGS_BASE + 0x667C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_208_REG              (xxx_GICD_REGS_BASE + 0x6684) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_209_REG              (xxx_GICD_REGS_BASE + 0x668C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_210_REG              (xxx_GICD_REGS_BASE + 0x6694) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_211_REG              (xxx_GICD_REGS_BASE + 0x669C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_212_REG              (xxx_GICD_REGS_BASE + 0x66A4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_213_REG              (xxx_GICD_REGS_BASE + 0x66AC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_214_REG              (xxx_GICD_REGS_BASE + 0x66B4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_215_REG              (xxx_GICD_REGS_BASE + 0x66BC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_216_REG              (xxx_GICD_REGS_BASE + 0x66C4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_217_REG              (xxx_GICD_REGS_BASE + 0x66CC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_218_REG              (xxx_GICD_REGS_BASE + 0x66D4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_219_REG              (xxx_GICD_REGS_BASE + 0x66DC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_220_REG              (xxx_GICD_REGS_BASE + 0x66E4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_221_REG              (xxx_GICD_REGS_BASE + 0x66EC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_222_REG              (xxx_GICD_REGS_BASE + 0x66F4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_223_REG              (xxx_GICD_REGS_BASE + 0x66FC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_224_REG              (xxx_GICD_REGS_BASE + 0x6704) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_225_REG              (xxx_GICD_REGS_BASE + 0x670C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_226_REG              (xxx_GICD_REGS_BASE + 0x6714) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_227_REG              (xxx_GICD_REGS_BASE + 0x671C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_228_REG              (xxx_GICD_REGS_BASE + 0x6724) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_229_REG              (xxx_GICD_REGS_BASE + 0x672C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_230_REG              (xxx_GICD_REGS_BASE + 0x6734) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_231_REG              (xxx_GICD_REGS_BASE + 0x673C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_232_REG              (xxx_GICD_REGS_BASE + 0x6744) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_233_REG              (xxx_GICD_REGS_BASE + 0x674C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_234_REG              (xxx_GICD_REGS_BASE + 0x6754) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_235_REG              (xxx_GICD_REGS_BASE + 0x675C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_236_REG              (xxx_GICD_REGS_BASE + 0x6764) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_237_REG              (xxx_GICD_REGS_BASE + 0x676C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_238_REG              (xxx_GICD_REGS_BASE + 0x6774) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_239_REG              (xxx_GICD_REGS_BASE + 0x677C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_240_REG              (xxx_GICD_REGS_BASE + 0x6784) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_241_REG              (xxx_GICD_REGS_BASE + 0x678C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_242_REG              (xxx_GICD_REGS_BASE + 0x6794) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_243_REG              (xxx_GICD_REGS_BASE + 0x679C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_244_REG              (xxx_GICD_REGS_BASE + 0x67A4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_245_REG              (xxx_GICD_REGS_BASE + 0x67AC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_246_REG              (xxx_GICD_REGS_BASE + 0x67B4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_247_REG              (xxx_GICD_REGS_BASE + 0x67BC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_248_REG              (xxx_GICD_REGS_BASE + 0x67C4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_249_REG              (xxx_GICD_REGS_BASE + 0x67CC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_250_REG              (xxx_GICD_REGS_BASE + 0x67D4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_251_REG              (xxx_GICD_REGS_BASE + 0x67DC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_252_REG              (xxx_GICD_REGS_BASE + 0x67E4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_253_REG              (xxx_GICD_REGS_BASE + 0x67EC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_254_REG              (xxx_GICD_REGS_BASE + 0x67F4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_255_REG              (xxx_GICD_REGS_BASE + 0x67FC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_256_REG              (xxx_GICD_REGS_BASE + 0x6804) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_257_REG              (xxx_GICD_REGS_BASE + 0x680C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_258_REG              (xxx_GICD_REGS_BASE + 0x6814) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_259_REG              (xxx_GICD_REGS_BASE + 0x681C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_260_REG              (xxx_GICD_REGS_BASE + 0x6824) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_261_REG              (xxx_GICD_REGS_BASE + 0x682C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_262_REG              (xxx_GICD_REGS_BASE + 0x6834) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_263_REG              (xxx_GICD_REGS_BASE + 0x683C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_264_REG              (xxx_GICD_REGS_BASE + 0x6844) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_265_REG              (xxx_GICD_REGS_BASE + 0x684C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_266_REG              (xxx_GICD_REGS_BASE + 0x6854) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_267_REG              (xxx_GICD_REGS_BASE + 0x685C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_268_REG              (xxx_GICD_REGS_BASE + 0x6864) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_269_REG              (xxx_GICD_REGS_BASE + 0x686C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_270_REG              (xxx_GICD_REGS_BASE + 0x6874) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_271_REG              (xxx_GICD_REGS_BASE + 0x687C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_272_REG              (xxx_GICD_REGS_BASE + 0x6884) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_273_REG              (xxx_GICD_REGS_BASE + 0x688C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_274_REG              (xxx_GICD_REGS_BASE + 0x6894) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_275_REG              (xxx_GICD_REGS_BASE + 0x689C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_276_REG              (xxx_GICD_REGS_BASE + 0x68A4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_277_REG              (xxx_GICD_REGS_BASE + 0x68AC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_278_REG              (xxx_GICD_REGS_BASE + 0x68B4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_279_REG              (xxx_GICD_REGS_BASE + 0x68BC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_280_REG              (xxx_GICD_REGS_BASE + 0x68C4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_281_REG              (xxx_GICD_REGS_BASE + 0x68CC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_282_REG              (xxx_GICD_REGS_BASE + 0x68D4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_283_REG              (xxx_GICD_REGS_BASE + 0x68DC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_284_REG              (xxx_GICD_REGS_BASE + 0x68E4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_285_REG              (xxx_GICD_REGS_BASE + 0x68EC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_286_REG              (xxx_GICD_REGS_BASE + 0x68F4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_287_REG              (xxx_GICD_REGS_BASE + 0x68FC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_288_REG              (xxx_GICD_REGS_BASE + 0x6904) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_289_REG              (xxx_GICD_REGS_BASE + 0x690C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_290_REG              (xxx_GICD_REGS_BASE + 0x6914) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_291_REG              (xxx_GICD_REGS_BASE + 0x691C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_292_REG              (xxx_GICD_REGS_BASE + 0x6924) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_293_REG              (xxx_GICD_REGS_BASE + 0x692C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_294_REG              (xxx_GICD_REGS_BASE + 0x6934) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_295_REG              (xxx_GICD_REGS_BASE + 0x693C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_296_REG              (xxx_GICD_REGS_BASE + 0x6944) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_297_REG              (xxx_GICD_REGS_BASE + 0x694C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_298_REG              (xxx_GICD_REGS_BASE + 0x6954) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_299_REG              (xxx_GICD_REGS_BASE + 0x695C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_300_REG              (xxx_GICD_REGS_BASE + 0x6964) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_301_REG              (xxx_GICD_REGS_BASE + 0x696C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_302_REG              (xxx_GICD_REGS_BASE + 0x6974) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_303_REG              (xxx_GICD_REGS_BASE + 0x697C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_304_REG              (xxx_GICD_REGS_BASE + 0x6984) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_305_REG              (xxx_GICD_REGS_BASE + 0x698C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_306_REG              (xxx_GICD_REGS_BASE + 0x6994) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_307_REG              (xxx_GICD_REGS_BASE + 0x699C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_308_REG              (xxx_GICD_REGS_BASE + 0x69A4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_309_REG              (xxx_GICD_REGS_BASE + 0x69AC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_310_REG              (xxx_GICD_REGS_BASE + 0x69B4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_311_REG              (xxx_GICD_REGS_BASE + 0x69BC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_312_REG              (xxx_GICD_REGS_BASE + 0x69C4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_313_REG              (xxx_GICD_REGS_BASE + 0x69CC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_314_REG              (xxx_GICD_REGS_BASE + 0x69D4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_315_REG              (xxx_GICD_REGS_BASE + 0x69DC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_316_REG              (xxx_GICD_REGS_BASE + 0x69E4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_317_REG              (xxx_GICD_REGS_BASE + 0x69EC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_318_REG              (xxx_GICD_REGS_BASE + 0x69F4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_319_REG              (xxx_GICD_REGS_BASE + 0x69FC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_320_REG              (xxx_GICD_REGS_BASE + 0x6A04) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_321_REG              (xxx_GICD_REGS_BASE + 0x6A0C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_322_REG              (xxx_GICD_REGS_BASE + 0x6A14) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_323_REG              (xxx_GICD_REGS_BASE + 0x6A1C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_324_REG              (xxx_GICD_REGS_BASE + 0x6A24) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_325_REG              (xxx_GICD_REGS_BASE + 0x6A2C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_326_REG              (xxx_GICD_REGS_BASE + 0x6A34) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_327_REG              (xxx_GICD_REGS_BASE + 0x6A3C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_328_REG              (xxx_GICD_REGS_BASE + 0x6A44) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_329_REG              (xxx_GICD_REGS_BASE + 0x6A4C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_330_REG              (xxx_GICD_REGS_BASE + 0x6A54) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_331_REG              (xxx_GICD_REGS_BASE + 0x6A5C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_332_REG              (xxx_GICD_REGS_BASE + 0x6A64) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_333_REG              (xxx_GICD_REGS_BASE + 0x6A6C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_334_REG              (xxx_GICD_REGS_BASE + 0x6A74) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_335_REG              (xxx_GICD_REGS_BASE + 0x6A7C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_336_REG              (xxx_GICD_REGS_BASE + 0x6A84) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_337_REG              (xxx_GICD_REGS_BASE + 0x6A8C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_338_REG              (xxx_GICD_REGS_BASE + 0x6A94) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_339_REG              (xxx_GICD_REGS_BASE + 0x6A9C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_340_REG              (xxx_GICD_REGS_BASE + 0x6AA4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_341_REG              (xxx_GICD_REGS_BASE + 0x6AAC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_342_REG              (xxx_GICD_REGS_BASE + 0x6AB4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_343_REG              (xxx_GICD_REGS_BASE + 0x6ABC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_344_REG              (xxx_GICD_REGS_BASE + 0x6AC4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_345_REG              (xxx_GICD_REGS_BASE + 0x6ACC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_346_REG              (xxx_GICD_REGS_BASE + 0x6AD4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_347_REG              (xxx_GICD_REGS_BASE + 0x6ADC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_348_REG              (xxx_GICD_REGS_BASE + 0x6AE4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_349_REG              (xxx_GICD_REGS_BASE + 0x6AEC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_350_REG              (xxx_GICD_REGS_BASE + 0x6AF4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_351_REG              (xxx_GICD_REGS_BASE + 0x6AFC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_352_REG              (xxx_GICD_REGS_BASE + 0x6B04) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_353_REG              (xxx_GICD_REGS_BASE + 0x6B0C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_354_REG              (xxx_GICD_REGS_BASE + 0x6B14) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_355_REG              (xxx_GICD_REGS_BASE + 0x6B1C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_356_REG              (xxx_GICD_REGS_BASE + 0x6B24) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_357_REG              (xxx_GICD_REGS_BASE + 0x6B2C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_358_REG              (xxx_GICD_REGS_BASE + 0x6B34) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_359_REG              (xxx_GICD_REGS_BASE + 0x6B3C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_360_REG              (xxx_GICD_REGS_BASE + 0x6B44) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_361_REG              (xxx_GICD_REGS_BASE + 0x6B4C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_362_REG              (xxx_GICD_REGS_BASE + 0x6B54) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_363_REG              (xxx_GICD_REGS_BASE + 0x6B5C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_364_REG              (xxx_GICD_REGS_BASE + 0x6B64) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_365_REG              (xxx_GICD_REGS_BASE + 0x6B6C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_366_REG              (xxx_GICD_REGS_BASE + 0x6B74) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_367_REG              (xxx_GICD_REGS_BASE + 0x6B7C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_368_REG              (xxx_GICD_REGS_BASE + 0x6B84) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_369_REG              (xxx_GICD_REGS_BASE + 0x6B8C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_370_REG              (xxx_GICD_REGS_BASE + 0x6B94) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_371_REG              (xxx_GICD_REGS_BASE + 0x6B9C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_372_REG              (xxx_GICD_REGS_BASE + 0x6BA4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_373_REG              (xxx_GICD_REGS_BASE + 0x6BAC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_374_REG              (xxx_GICD_REGS_BASE + 0x6BB4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_375_REG              (xxx_GICD_REGS_BASE + 0x6BBC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_376_REG              (xxx_GICD_REGS_BASE + 0x6BC4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_377_REG              (xxx_GICD_REGS_BASE + 0x6BCC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_378_REG              (xxx_GICD_REGS_BASE + 0x6BD4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_379_REG              (xxx_GICD_REGS_BASE + 0x6BDC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_380_REG              (xxx_GICD_REGS_BASE + 0x6BE4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_381_REG              (xxx_GICD_REGS_BASE + 0x6BEC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_382_REG              (xxx_GICD_REGS_BASE + 0x6BF4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_383_REG              (xxx_GICD_REGS_BASE + 0x6BFC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_384_REG              (xxx_GICD_REGS_BASE + 0x6C04) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_385_REG              (xxx_GICD_REGS_BASE + 0x6C0C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_386_REG              (xxx_GICD_REGS_BASE + 0x6C14) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_387_REG              (xxx_GICD_REGS_BASE + 0x6C1C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_388_REG              (xxx_GICD_REGS_BASE + 0x6C24) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_389_REG              (xxx_GICD_REGS_BASE + 0x6C2C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_390_REG              (xxx_GICD_REGS_BASE + 0x6C34) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_391_REG              (xxx_GICD_REGS_BASE + 0x6C3C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_392_REG              (xxx_GICD_REGS_BASE + 0x6C44) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_393_REG              (xxx_GICD_REGS_BASE + 0x6C4C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_394_REG              (xxx_GICD_REGS_BASE + 0x6C54) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_395_REG              (xxx_GICD_REGS_BASE + 0x6C5C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_396_REG              (xxx_GICD_REGS_BASE + 0x6C64) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_397_REG              (xxx_GICD_REGS_BASE + 0x6C6C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_398_REG              (xxx_GICD_REGS_BASE + 0x6C74) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_399_REG              (xxx_GICD_REGS_BASE + 0x6C7C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_400_REG              (xxx_GICD_REGS_BASE + 0x6C84) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_401_REG              (xxx_GICD_REGS_BASE + 0x6C8C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_402_REG              (xxx_GICD_REGS_BASE + 0x6C94) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_403_REG              (xxx_GICD_REGS_BASE + 0x6C9C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_404_REG              (xxx_GICD_REGS_BASE + 0x6CA4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_405_REG              (xxx_GICD_REGS_BASE + 0x6CAC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_406_REG              (xxx_GICD_REGS_BASE + 0x6CB4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_407_REG              (xxx_GICD_REGS_BASE + 0x6CBC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_408_REG              (xxx_GICD_REGS_BASE + 0x6CC4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_409_REG              (xxx_GICD_REGS_BASE + 0x6CCC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_410_REG              (xxx_GICD_REGS_BASE + 0x6CD4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_411_REG              (xxx_GICD_REGS_BASE + 0x6CDC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_412_REG              (xxx_GICD_REGS_BASE + 0x6CE4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_413_REG              (xxx_GICD_REGS_BASE + 0x6CEC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_414_REG              (xxx_GICD_REGS_BASE + 0x6CF4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_415_REG              (xxx_GICD_REGS_BASE + 0x6CFC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_416_REG              (xxx_GICD_REGS_BASE + 0x6D04) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_417_REG              (xxx_GICD_REGS_BASE + 0x6D0C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_418_REG              (xxx_GICD_REGS_BASE + 0x6D14) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_419_REG              (xxx_GICD_REGS_BASE + 0x6D1C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_420_REG              (xxx_GICD_REGS_BASE + 0x6D24) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_421_REG              (xxx_GICD_REGS_BASE + 0x6D2C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_422_REG              (xxx_GICD_REGS_BASE + 0x6D34) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_423_REG              (xxx_GICD_REGS_BASE + 0x6D3C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_424_REG              (xxx_GICD_REGS_BASE + 0x6D44) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_425_REG              (xxx_GICD_REGS_BASE + 0x6D4C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_426_REG              (xxx_GICD_REGS_BASE + 0x6D54) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_427_REG              (xxx_GICD_REGS_BASE + 0x6D5C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_428_REG              (xxx_GICD_REGS_BASE + 0x6D64) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_429_REG              (xxx_GICD_REGS_BASE + 0x6D6C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_430_REG              (xxx_GICD_REGS_BASE + 0x6D74) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_431_REG              (xxx_GICD_REGS_BASE + 0x6D7C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_432_REG              (xxx_GICD_REGS_BASE + 0x6D84) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_433_REG              (xxx_GICD_REGS_BASE + 0x6D8C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_434_REG              (xxx_GICD_REGS_BASE + 0x6D94) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_435_REG              (xxx_GICD_REGS_BASE + 0x6D9C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_436_REG              (xxx_GICD_REGS_BASE + 0x6DA4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_437_REG              (xxx_GICD_REGS_BASE + 0x6DAC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_438_REG              (xxx_GICD_REGS_BASE + 0x6DB4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_439_REG              (xxx_GICD_REGS_BASE + 0x6DBC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_440_REG              (xxx_GICD_REGS_BASE + 0x6DC4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_441_REG              (xxx_GICD_REGS_BASE + 0x6DCC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_442_REG              (xxx_GICD_REGS_BASE + 0x6DD4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_443_REG              (xxx_GICD_REGS_BASE + 0x6DDC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_444_REG              (xxx_GICD_REGS_BASE + 0x6DE4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_445_REG              (xxx_GICD_REGS_BASE + 0x6DEC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_446_REG              (xxx_GICD_REGS_BASE + 0x6DF4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_447_REG              (xxx_GICD_REGS_BASE + 0x6DFC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_448_REG              (xxx_GICD_REGS_BASE + 0x6E04) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_449_REG              (xxx_GICD_REGS_BASE + 0x6E0C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_450_REG              (xxx_GICD_REGS_BASE + 0x6E14) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_451_REG              (xxx_GICD_REGS_BASE + 0x6E1C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_452_REG              (xxx_GICD_REGS_BASE + 0x6E24) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_453_REG              (xxx_GICD_REGS_BASE + 0x6E2C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_454_REG              (xxx_GICD_REGS_BASE + 0x6E34) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_455_REG              (xxx_GICD_REGS_BASE + 0x6E3C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_456_REG              (xxx_GICD_REGS_BASE + 0x6E44) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_457_REG              (xxx_GICD_REGS_BASE + 0x6E4C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_458_REG              (xxx_GICD_REGS_BASE + 0x6E54) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_459_REG              (xxx_GICD_REGS_BASE + 0x6E5C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_460_REG              (xxx_GICD_REGS_BASE + 0x6E64) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_461_REG              (xxx_GICD_REGS_BASE + 0x6E6C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_462_REG              (xxx_GICD_REGS_BASE + 0x6E74) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_463_REG              (xxx_GICD_REGS_BASE + 0x6E7C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_464_REG              (xxx_GICD_REGS_BASE + 0x6E84) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_465_REG              (xxx_GICD_REGS_BASE + 0x6E8C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_466_REG              (xxx_GICD_REGS_BASE + 0x6E94) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_467_REG              (xxx_GICD_REGS_BASE + 0x6E9C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_468_REG              (xxx_GICD_REGS_BASE + 0x6EA4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_469_REG              (xxx_GICD_REGS_BASE + 0x6EAC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_470_REG              (xxx_GICD_REGS_BASE + 0x6EB4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_471_REG              (xxx_GICD_REGS_BASE + 0x6EBC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_472_REG              (xxx_GICD_REGS_BASE + 0x6EC4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_473_REG              (xxx_GICD_REGS_BASE + 0x6ECC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_474_REG              (xxx_GICD_REGS_BASE + 0x6ED4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_475_REG              (xxx_GICD_REGS_BASE + 0x6EDC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_476_REG              (xxx_GICD_REGS_BASE + 0x6EE4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_477_REG              (xxx_GICD_REGS_BASE + 0x6EEC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_478_REG              (xxx_GICD_REGS_BASE + 0x6EF4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_479_REG              (xxx_GICD_REGS_BASE + 0x6EFC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_480_REG              (xxx_GICD_REGS_BASE + 0x6F04) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_481_REG              (xxx_GICD_REGS_BASE + 0x6F0C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_482_REG              (xxx_GICD_REGS_BASE + 0x6F14) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_483_REG              (xxx_GICD_REGS_BASE + 0x6F1C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_484_REG              (xxx_GICD_REGS_BASE + 0x6F24) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_485_REG              (xxx_GICD_REGS_BASE + 0x6F2C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_486_REG              (xxx_GICD_REGS_BASE + 0x6F34) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_487_REG              (xxx_GICD_REGS_BASE + 0x6F3C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_488_REG              (xxx_GICD_REGS_BASE + 0x6F44) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_489_REG              (xxx_GICD_REGS_BASE + 0x6F4C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_490_REG              (xxx_GICD_REGS_BASE + 0x6F54) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_491_REG              (xxx_GICD_REGS_BASE + 0x6F5C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_492_REG              (xxx_GICD_REGS_BASE + 0x6F64) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_493_REG              (xxx_GICD_REGS_BASE + 0x6F6C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_494_REG              (xxx_GICD_REGS_BASE + 0x6F74) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_495_REG              (xxx_GICD_REGS_BASE + 0x6F7C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_496_REG              (xxx_GICD_REGS_BASE + 0x6F84) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_497_REG              (xxx_GICD_REGS_BASE + 0x6F8C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_498_REG              (xxx_GICD_REGS_BASE + 0x6F94) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_499_REG              (xxx_GICD_REGS_BASE + 0x6F9C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_500_REG              (xxx_GICD_REGS_BASE + 0x6FA4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_501_REG              (xxx_GICD_REGS_BASE + 0x6FAC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_502_REG              (xxx_GICD_REGS_BASE + 0x6FB4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_503_REG              (xxx_GICD_REGS_BASE + 0x6FBC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_504_REG              (xxx_GICD_REGS_BASE + 0x6FC4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_505_REG              (xxx_GICD_REGS_BASE + 0x6FCC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_506_REG              (xxx_GICD_REGS_BASE + 0x6FD4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_507_REG              (xxx_GICD_REGS_BASE + 0x6FDC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_508_REG              (xxx_GICD_REGS_BASE + 0x6FE4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_509_REG              (xxx_GICD_REGS_BASE + 0x6FEC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_510_REG              (xxx_GICD_REGS_BASE + 0x6FF4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_511_REG              (xxx_GICD_REGS_BASE + 0x6FFC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_512_REG              (xxx_GICD_REGS_BASE + 0x7004) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_513_REG              (xxx_GICD_REGS_BASE + 0x700C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_514_REG              (xxx_GICD_REGS_BASE + 0x7014) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_515_REG              (xxx_GICD_REGS_BASE + 0x701C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_516_REG              (xxx_GICD_REGS_BASE + 0x7024) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_517_REG              (xxx_GICD_REGS_BASE + 0x702C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_518_REG              (xxx_GICD_REGS_BASE + 0x7034) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_519_REG              (xxx_GICD_REGS_BASE + 0x703C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_520_REG              (xxx_GICD_REGS_BASE + 0x7044) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_521_REG              (xxx_GICD_REGS_BASE + 0x704C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_522_REG              (xxx_GICD_REGS_BASE + 0x7054) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_523_REG              (xxx_GICD_REGS_BASE + 0x705C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_524_REG              (xxx_GICD_REGS_BASE + 0x7064) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_525_REG              (xxx_GICD_REGS_BASE + 0x706C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_526_REG              (xxx_GICD_REGS_BASE + 0x7074) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_527_REG              (xxx_GICD_REGS_BASE + 0x707C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_528_REG              (xxx_GICD_REGS_BASE + 0x7084) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_529_REG              (xxx_GICD_REGS_BASE + 0x708C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_530_REG              (xxx_GICD_REGS_BASE + 0x7094) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_531_REG              (xxx_GICD_REGS_BASE + 0x709C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_532_REG              (xxx_GICD_REGS_BASE + 0x70A4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_533_REG              (xxx_GICD_REGS_BASE + 0x70AC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_534_REG              (xxx_GICD_REGS_BASE + 0x70B4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_535_REG              (xxx_GICD_REGS_BASE + 0x70BC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_536_REG              (xxx_GICD_REGS_BASE + 0x70C4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_537_REG              (xxx_GICD_REGS_BASE + 0x70CC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_538_REG              (xxx_GICD_REGS_BASE + 0x70D4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_539_REG              (xxx_GICD_REGS_BASE + 0x70DC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_540_REG              (xxx_GICD_REGS_BASE + 0x70E4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_541_REG              (xxx_GICD_REGS_BASE + 0x70EC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_542_REG              (xxx_GICD_REGS_BASE + 0x70F4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_543_REG              (xxx_GICD_REGS_BASE + 0x70FC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_544_REG              (xxx_GICD_REGS_BASE + 0x7104) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_545_REG              (xxx_GICD_REGS_BASE + 0x710C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_546_REG              (xxx_GICD_REGS_BASE + 0x7114) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_547_REG              (xxx_GICD_REGS_BASE + 0x711C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_548_REG              (xxx_GICD_REGS_BASE + 0x7124) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_549_REG              (xxx_GICD_REGS_BASE + 0x712C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_550_REG              (xxx_GICD_REGS_BASE + 0x7134) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_551_REG              (xxx_GICD_REGS_BASE + 0x713C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_552_REG              (xxx_GICD_REGS_BASE + 0x7144) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_553_REG              (xxx_GICD_REGS_BASE + 0x714C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_554_REG              (xxx_GICD_REGS_BASE + 0x7154) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_555_REG              (xxx_GICD_REGS_BASE + 0x715C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_556_REG              (xxx_GICD_REGS_BASE + 0x7164) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_557_REG              (xxx_GICD_REGS_BASE + 0x716C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_558_REG              (xxx_GICD_REGS_BASE + 0x7174) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_559_REG              (xxx_GICD_REGS_BASE + 0x717C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_560_REG              (xxx_GICD_REGS_BASE + 0x7184) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_561_REG              (xxx_GICD_REGS_BASE + 0x718C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_562_REG              (xxx_GICD_REGS_BASE + 0x7194) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_563_REG              (xxx_GICD_REGS_BASE + 0x719C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_564_REG              (xxx_GICD_REGS_BASE + 0x71A4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_565_REG              (xxx_GICD_REGS_BASE + 0x71AC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_566_REG              (xxx_GICD_REGS_BASE + 0x71B4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_567_REG              (xxx_GICD_REGS_BASE + 0x71BC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_568_REG              (xxx_GICD_REGS_BASE + 0x71C4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_569_REG              (xxx_GICD_REGS_BASE + 0x71CC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_570_REG              (xxx_GICD_REGS_BASE + 0x71D4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_571_REG              (xxx_GICD_REGS_BASE + 0x71DC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_572_REG              (xxx_GICD_REGS_BASE + 0x71E4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_573_REG              (xxx_GICD_REGS_BASE + 0x71EC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_574_REG              (xxx_GICD_REGS_BASE + 0x71F4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_575_REG              (xxx_GICD_REGS_BASE + 0x71FC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_576_REG              (xxx_GICD_REGS_BASE + 0x7204) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_577_REG              (xxx_GICD_REGS_BASE + 0x720C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_578_REG              (xxx_GICD_REGS_BASE + 0x7214) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_579_REG              (xxx_GICD_REGS_BASE + 0x721C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_580_REG              (xxx_GICD_REGS_BASE + 0x7224) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_581_REG              (xxx_GICD_REGS_BASE + 0x722C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_582_REG              (xxx_GICD_REGS_BASE + 0x7234) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_583_REG              (xxx_GICD_REGS_BASE + 0x723C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_584_REG              (xxx_GICD_REGS_BASE + 0x7244) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_585_REG              (xxx_GICD_REGS_BASE + 0x724C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_586_REG              (xxx_GICD_REGS_BASE + 0x7254) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_587_REG              (xxx_GICD_REGS_BASE + 0x725C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_588_REG              (xxx_GICD_REGS_BASE + 0x7264) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_589_REG              (xxx_GICD_REGS_BASE + 0x726C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_590_REG              (xxx_GICD_REGS_BASE + 0x7274) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_591_REG              (xxx_GICD_REGS_BASE + 0x727C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_592_REG              (xxx_GICD_REGS_BASE + 0x7284) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_593_REG              (xxx_GICD_REGS_BASE + 0x728C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_594_REG              (xxx_GICD_REGS_BASE + 0x7294) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_595_REG              (xxx_GICD_REGS_BASE + 0x729C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_596_REG              (xxx_GICD_REGS_BASE + 0x72A4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_597_REG              (xxx_GICD_REGS_BASE + 0x72AC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_598_REG              (xxx_GICD_REGS_BASE + 0x72B4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_599_REG              (xxx_GICD_REGS_BASE + 0x72BC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_600_REG              (xxx_GICD_REGS_BASE + 0x72C4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_601_REG              (xxx_GICD_REGS_BASE + 0x72CC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_602_REG              (xxx_GICD_REGS_BASE + 0x72D4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_603_REG              (xxx_GICD_REGS_BASE + 0x72DC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_604_REG              (xxx_GICD_REGS_BASE + 0x72E4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_605_REG              (xxx_GICD_REGS_BASE + 0x72EC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_606_REG              (xxx_GICD_REGS_BASE + 0x72F4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_607_REG              (xxx_GICD_REGS_BASE + 0x72FC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_608_REG              (xxx_GICD_REGS_BASE + 0x7304) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_609_REG              (xxx_GICD_REGS_BASE + 0x730C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_610_REG              (xxx_GICD_REGS_BASE + 0x7314) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_611_REG              (xxx_GICD_REGS_BASE + 0x731C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_612_REG              (xxx_GICD_REGS_BASE + 0x7324) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_613_REG              (xxx_GICD_REGS_BASE + 0x732C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_614_REG              (xxx_GICD_REGS_BASE + 0x7334) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_615_REG              (xxx_GICD_REGS_BASE + 0x733C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_616_REG              (xxx_GICD_REGS_BASE + 0x7344) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_617_REG              (xxx_GICD_REGS_BASE + 0x734C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_618_REG              (xxx_GICD_REGS_BASE + 0x7354) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_619_REG              (xxx_GICD_REGS_BASE + 0x735C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_620_REG              (xxx_GICD_REGS_BASE + 0x7364) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_621_REG              (xxx_GICD_REGS_BASE + 0x736C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_622_REG              (xxx_GICD_REGS_BASE + 0x7374) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_623_REG              (xxx_GICD_REGS_BASE + 0x737C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_624_REG              (xxx_GICD_REGS_BASE + 0x7384) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_625_REG              (xxx_GICD_REGS_BASE + 0x738C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_626_REG              (xxx_GICD_REGS_BASE + 0x7394) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_627_REG              (xxx_GICD_REGS_BASE + 0x739C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_628_REG              (xxx_GICD_REGS_BASE + 0x73A4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_629_REG              (xxx_GICD_REGS_BASE + 0x73AC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_630_REG              (xxx_GICD_REGS_BASE + 0x73B4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_631_REG              (xxx_GICD_REGS_BASE + 0x73BC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_632_REG              (xxx_GICD_REGS_BASE + 0x73C4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_633_REG              (xxx_GICD_REGS_BASE + 0x73CC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_634_REG              (xxx_GICD_REGS_BASE + 0x73D4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_635_REG              (xxx_GICD_REGS_BASE + 0x73DC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_636_REG              (xxx_GICD_REGS_BASE + 0x73E4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_637_REG              (xxx_GICD_REGS_BASE + 0x73EC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_638_REG              (xxx_GICD_REGS_BASE + 0x73F4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_639_REG              (xxx_GICD_REGS_BASE + 0x73FC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_640_REG              (xxx_GICD_REGS_BASE + 0x7404) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_641_REG              (xxx_GICD_REGS_BASE + 0x740C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_642_REG              (xxx_GICD_REGS_BASE + 0x7414) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_643_REG              (xxx_GICD_REGS_BASE + 0x741C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_644_REG              (xxx_GICD_REGS_BASE + 0x7424) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_645_REG              (xxx_GICD_REGS_BASE + 0x742C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_646_REG              (xxx_GICD_REGS_BASE + 0x7434) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_647_REG              (xxx_GICD_REGS_BASE + 0x743C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_648_REG              (xxx_GICD_REGS_BASE + 0x7444) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_649_REG              (xxx_GICD_REGS_BASE + 0x744C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_650_REG              (xxx_GICD_REGS_BASE + 0x7454) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_651_REG              (xxx_GICD_REGS_BASE + 0x745C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_652_REG              (xxx_GICD_REGS_BASE + 0x7464) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_653_REG              (xxx_GICD_REGS_BASE + 0x746C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_654_REG              (xxx_GICD_REGS_BASE + 0x7474) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_655_REG              (xxx_GICD_REGS_BASE + 0x747C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_656_REG              (xxx_GICD_REGS_BASE + 0x7484) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_657_REG              (xxx_GICD_REGS_BASE + 0x748C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_658_REG              (xxx_GICD_REGS_BASE + 0x7494) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_659_REG              (xxx_GICD_REGS_BASE + 0x749C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_660_REG              (xxx_GICD_REGS_BASE + 0x74A4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_661_REG              (xxx_GICD_REGS_BASE + 0x74AC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_662_REG              (xxx_GICD_REGS_BASE + 0x74B4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_663_REG              (xxx_GICD_REGS_BASE + 0x74BC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_664_REG              (xxx_GICD_REGS_BASE + 0x74C4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_665_REG              (xxx_GICD_REGS_BASE + 0x74CC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_666_REG              (xxx_GICD_REGS_BASE + 0x74D4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_667_REG              (xxx_GICD_REGS_BASE + 0x74DC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_668_REG              (xxx_GICD_REGS_BASE + 0x74E4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_669_REG              (xxx_GICD_REGS_BASE + 0x74EC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_670_REG              (xxx_GICD_REGS_BASE + 0x74F4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_671_REG              (xxx_GICD_REGS_BASE + 0x74FC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_672_REG              (xxx_GICD_REGS_BASE + 0x7504) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_673_REG              (xxx_GICD_REGS_BASE + 0x750C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_674_REG              (xxx_GICD_REGS_BASE + 0x7514) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_675_REG              (xxx_GICD_REGS_BASE + 0x751C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_676_REG              (xxx_GICD_REGS_BASE + 0x7524) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_677_REG              (xxx_GICD_REGS_BASE + 0x752C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_678_REG              (xxx_GICD_REGS_BASE + 0x7534) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_679_REG              (xxx_GICD_REGS_BASE + 0x753C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_680_REG              (xxx_GICD_REGS_BASE + 0x7544) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_681_REG              (xxx_GICD_REGS_BASE + 0x754C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_682_REG              (xxx_GICD_REGS_BASE + 0x7554) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_683_REG              (xxx_GICD_REGS_BASE + 0x755C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_684_REG              (xxx_GICD_REGS_BASE + 0x7564) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_685_REG              (xxx_GICD_REGS_BASE + 0x756C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_686_REG              (xxx_GICD_REGS_BASE + 0x7574) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_687_REG              (xxx_GICD_REGS_BASE + 0x757C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_688_REG              (xxx_GICD_REGS_BASE + 0x7584) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_689_REG              (xxx_GICD_REGS_BASE + 0x758C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_690_REG              (xxx_GICD_REGS_BASE + 0x7594) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_691_REG              (xxx_GICD_REGS_BASE + 0x759C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_692_REG              (xxx_GICD_REGS_BASE + 0x75A4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_693_REG              (xxx_GICD_REGS_BASE + 0x75AC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_694_REG              (xxx_GICD_REGS_BASE + 0x75B4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_695_REG              (xxx_GICD_REGS_BASE + 0x75BC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_696_REG              (xxx_GICD_REGS_BASE + 0x75C4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_697_REG              (xxx_GICD_REGS_BASE + 0x75CC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_698_REG              (xxx_GICD_REGS_BASE + 0x75D4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_699_REG              (xxx_GICD_REGS_BASE + 0x75DC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_700_REG              (xxx_GICD_REGS_BASE + 0x75E4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_701_REG              (xxx_GICD_REGS_BASE + 0x75EC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_702_REG              (xxx_GICD_REGS_BASE + 0x75F4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_703_REG              (xxx_GICD_REGS_BASE + 0x75FC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_704_REG              (xxx_GICD_REGS_BASE + 0x7604) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_705_REG              (xxx_GICD_REGS_BASE + 0x760C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_706_REG              (xxx_GICD_REGS_BASE + 0x7614) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_707_REG              (xxx_GICD_REGS_BASE + 0x761C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_708_REG              (xxx_GICD_REGS_BASE + 0x7624) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_709_REG              (xxx_GICD_REGS_BASE + 0x762C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_710_REG              (xxx_GICD_REGS_BASE + 0x7634) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_711_REG              (xxx_GICD_REGS_BASE + 0x763C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_712_REG              (xxx_GICD_REGS_BASE + 0x7644) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_713_REG              (xxx_GICD_REGS_BASE + 0x764C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_714_REG              (xxx_GICD_REGS_BASE + 0x7654) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_715_REG              (xxx_GICD_REGS_BASE + 0x765C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_716_REG              (xxx_GICD_REGS_BASE + 0x7664) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_717_REG              (xxx_GICD_REGS_BASE + 0x766C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_718_REG              (xxx_GICD_REGS_BASE + 0x7674) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_719_REG              (xxx_GICD_REGS_BASE + 0x767C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_720_REG              (xxx_GICD_REGS_BASE + 0x7684) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_721_REG              (xxx_GICD_REGS_BASE + 0x768C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_722_REG              (xxx_GICD_REGS_BASE + 0x7694) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_723_REG              (xxx_GICD_REGS_BASE + 0x769C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_724_REG              (xxx_GICD_REGS_BASE + 0x76A4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_725_REG              (xxx_GICD_REGS_BASE + 0x76AC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_726_REG              (xxx_GICD_REGS_BASE + 0x76B4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_727_REG              (xxx_GICD_REGS_BASE + 0x76BC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_728_REG              (xxx_GICD_REGS_BASE + 0x76C4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_729_REG              (xxx_GICD_REGS_BASE + 0x76CC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_730_REG              (xxx_GICD_REGS_BASE + 0x76D4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_731_REG              (xxx_GICD_REGS_BASE + 0x76DC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_732_REG              (xxx_GICD_REGS_BASE + 0x76E4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_733_REG              (xxx_GICD_REGS_BASE + 0x76EC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_734_REG              (xxx_GICD_REGS_BASE + 0x76F4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_735_REG              (xxx_GICD_REGS_BASE + 0x76FC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_736_REG              (xxx_GICD_REGS_BASE + 0x7704) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_737_REG              (xxx_GICD_REGS_BASE + 0x770C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_738_REG              (xxx_GICD_REGS_BASE + 0x7714) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_739_REG              (xxx_GICD_REGS_BASE + 0x771C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_740_REG              (xxx_GICD_REGS_BASE + 0x7724) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_741_REG              (xxx_GICD_REGS_BASE + 0x772C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_742_REG              (xxx_GICD_REGS_BASE + 0x7734) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_743_REG              (xxx_GICD_REGS_BASE + 0x773C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_744_REG              (xxx_GICD_REGS_BASE + 0x7744) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_745_REG              (xxx_GICD_REGS_BASE + 0x774C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_746_REG              (xxx_GICD_REGS_BASE + 0x7754) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_747_REG              (xxx_GICD_REGS_BASE + 0x775C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_748_REG              (xxx_GICD_REGS_BASE + 0x7764) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_749_REG              (xxx_GICD_REGS_BASE + 0x776C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_750_REG              (xxx_GICD_REGS_BASE + 0x7774) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_751_REG              (xxx_GICD_REGS_BASE + 0x777C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_752_REG              (xxx_GICD_REGS_BASE + 0x7784) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_753_REG              (xxx_GICD_REGS_BASE + 0x778C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_754_REG              (xxx_GICD_REGS_BASE + 0x7794) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_755_REG              (xxx_GICD_REGS_BASE + 0x779C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_756_REG              (xxx_GICD_REGS_BASE + 0x77A4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_757_REG              (xxx_GICD_REGS_BASE + 0x77AC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_758_REG              (xxx_GICD_REGS_BASE + 0x77B4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_759_REG              (xxx_GICD_REGS_BASE + 0x77BC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_760_REG              (xxx_GICD_REGS_BASE + 0x77C4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_761_REG              (xxx_GICD_REGS_BASE + 0x77CC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_762_REG              (xxx_GICD_REGS_BASE + 0x77D4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_763_REG              (xxx_GICD_REGS_BASE + 0x77DC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_764_REG              (xxx_GICD_REGS_BASE + 0x77E4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_765_REG              (xxx_GICD_REGS_BASE + 0x77EC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_766_REG              (xxx_GICD_REGS_BASE + 0x77F4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_767_REG              (xxx_GICD_REGS_BASE + 0x77FC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_768_REG              (xxx_GICD_REGS_BASE + 0x7804) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_769_REG              (xxx_GICD_REGS_BASE + 0x780C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_770_REG              (xxx_GICD_REGS_BASE + 0x7814) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_771_REG              (xxx_GICD_REGS_BASE + 0x781C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_772_REG              (xxx_GICD_REGS_BASE + 0x7824) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_773_REG              (xxx_GICD_REGS_BASE + 0x782C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_774_REG              (xxx_GICD_REGS_BASE + 0x7834) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_775_REG              (xxx_GICD_REGS_BASE + 0x783C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_776_REG              (xxx_GICD_REGS_BASE + 0x7844) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_777_REG              (xxx_GICD_REGS_BASE + 0x784C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_778_REG              (xxx_GICD_REGS_BASE + 0x7854) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_779_REG              (xxx_GICD_REGS_BASE + 0x785C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_780_REG              (xxx_GICD_REGS_BASE + 0x7864) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_781_REG              (xxx_GICD_REGS_BASE + 0x786C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_782_REG              (xxx_GICD_REGS_BASE + 0x7874) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_783_REG              (xxx_GICD_REGS_BASE + 0x787C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_784_REG              (xxx_GICD_REGS_BASE + 0x7884) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_785_REG              (xxx_GICD_REGS_BASE + 0x788C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_786_REG              (xxx_GICD_REGS_BASE + 0x7894) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_787_REG              (xxx_GICD_REGS_BASE + 0x789C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_788_REG              (xxx_GICD_REGS_BASE + 0x78A4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_789_REG              (xxx_GICD_REGS_BASE + 0x78AC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_790_REG              (xxx_GICD_REGS_BASE + 0x78B4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_791_REG              (xxx_GICD_REGS_BASE + 0x78BC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_792_REG              (xxx_GICD_REGS_BASE + 0x78C4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_793_REG              (xxx_GICD_REGS_BASE + 0x78CC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_794_REG              (xxx_GICD_REGS_BASE + 0x78D4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_795_REG              (xxx_GICD_REGS_BASE + 0x78DC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_796_REG              (xxx_GICD_REGS_BASE + 0x78E4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_797_REG              (xxx_GICD_REGS_BASE + 0x78EC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_798_REG              (xxx_GICD_REGS_BASE + 0x78F4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_799_REG              (xxx_GICD_REGS_BASE + 0x78FC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_800_REG              (xxx_GICD_REGS_BASE + 0x7904) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_801_REG              (xxx_GICD_REGS_BASE + 0x790C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_802_REG              (xxx_GICD_REGS_BASE + 0x7914) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_803_REG              (xxx_GICD_REGS_BASE + 0x791C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_804_REG              (xxx_GICD_REGS_BASE + 0x7924) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_805_REG              (xxx_GICD_REGS_BASE + 0x792C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_806_REG              (xxx_GICD_REGS_BASE + 0x7934) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_807_REG              (xxx_GICD_REGS_BASE + 0x793C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_808_REG              (xxx_GICD_REGS_BASE + 0x7944) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_809_REG              (xxx_GICD_REGS_BASE + 0x794C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_810_REG              (xxx_GICD_REGS_BASE + 0x7954) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_811_REG              (xxx_GICD_REGS_BASE + 0x795C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_812_REG              (xxx_GICD_REGS_BASE + 0x7964) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_813_REG              (xxx_GICD_REGS_BASE + 0x796C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_814_REG              (xxx_GICD_REGS_BASE + 0x7974) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_815_REG              (xxx_GICD_REGS_BASE + 0x797C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_816_REG              (xxx_GICD_REGS_BASE + 0x7984) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_817_REG              (xxx_GICD_REGS_BASE + 0x798C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_818_REG              (xxx_GICD_REGS_BASE + 0x7994) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_819_REG              (xxx_GICD_REGS_BASE + 0x799C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_820_REG              (xxx_GICD_REGS_BASE + 0x79A4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_821_REG              (xxx_GICD_REGS_BASE + 0x79AC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_822_REG              (xxx_GICD_REGS_BASE + 0x79B4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_823_REG              (xxx_GICD_REGS_BASE + 0x79BC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_824_REG              (xxx_GICD_REGS_BASE + 0x79C4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_825_REG              (xxx_GICD_REGS_BASE + 0x79CC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_826_REG              (xxx_GICD_REGS_BASE + 0x79D4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_827_REG              (xxx_GICD_REGS_BASE + 0x79DC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_828_REG              (xxx_GICD_REGS_BASE + 0x79E4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_829_REG              (xxx_GICD_REGS_BASE + 0x79EC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_830_REG              (xxx_GICD_REGS_BASE + 0x79F4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_831_REG              (xxx_GICD_REGS_BASE + 0x79FC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_832_REG              (xxx_GICD_REGS_BASE + 0x7A04) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_833_REG              (xxx_GICD_REGS_BASE + 0x7A0C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_834_REG              (xxx_GICD_REGS_BASE + 0x7A14) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_835_REG              (xxx_GICD_REGS_BASE + 0x7A1C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_836_REG              (xxx_GICD_REGS_BASE + 0x7A24) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_837_REG              (xxx_GICD_REGS_BASE + 0x7A2C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_838_REG              (xxx_GICD_REGS_BASE + 0x7A34) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_839_REG              (xxx_GICD_REGS_BASE + 0x7A3C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_840_REG              (xxx_GICD_REGS_BASE + 0x7A44) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_841_REG              (xxx_GICD_REGS_BASE + 0x7A4C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_842_REG              (xxx_GICD_REGS_BASE + 0x7A54) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_843_REG              (xxx_GICD_REGS_BASE + 0x7A5C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_844_REG              (xxx_GICD_REGS_BASE + 0x7A64) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_845_REG              (xxx_GICD_REGS_BASE + 0x7A6C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_846_REG              (xxx_GICD_REGS_BASE + 0x7A74) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_847_REG              (xxx_GICD_REGS_BASE + 0x7A7C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_848_REG              (xxx_GICD_REGS_BASE + 0x7A84) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_849_REG              (xxx_GICD_REGS_BASE + 0x7A8C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_850_REG              (xxx_GICD_REGS_BASE + 0x7A94) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_851_REG              (xxx_GICD_REGS_BASE + 0x7A9C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_852_REG              (xxx_GICD_REGS_BASE + 0x7AA4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_853_REG              (xxx_GICD_REGS_BASE + 0x7AAC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_854_REG              (xxx_GICD_REGS_BASE + 0x7AB4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_855_REG              (xxx_GICD_REGS_BASE + 0x7ABC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_856_REG              (xxx_GICD_REGS_BASE + 0x7AC4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_857_REG              (xxx_GICD_REGS_BASE + 0x7ACC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_858_REG              (xxx_GICD_REGS_BASE + 0x7AD4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_859_REG              (xxx_GICD_REGS_BASE + 0x7ADC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_860_REG              (xxx_GICD_REGS_BASE + 0x7AE4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_861_REG              (xxx_GICD_REGS_BASE + 0x7AEC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_862_REG              (xxx_GICD_REGS_BASE + 0x7AF4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_863_REG              (xxx_GICD_REGS_BASE + 0x7AFC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_864_REG              (xxx_GICD_REGS_BASE + 0x7B04) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_865_REG              (xxx_GICD_REGS_BASE + 0x7B0C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_866_REG              (xxx_GICD_REGS_BASE + 0x7B14) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_867_REG              (xxx_GICD_REGS_BASE + 0x7B1C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_868_REG              (xxx_GICD_REGS_BASE + 0x7B24) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_869_REG              (xxx_GICD_REGS_BASE + 0x7B2C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_870_REG              (xxx_GICD_REGS_BASE + 0x7B34) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_871_REG              (xxx_GICD_REGS_BASE + 0x7B3C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_872_REG              (xxx_GICD_REGS_BASE + 0x7B44) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_873_REG              (xxx_GICD_REGS_BASE + 0x7B4C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_874_REG              (xxx_GICD_REGS_BASE + 0x7B54) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_875_REG              (xxx_GICD_REGS_BASE + 0x7B5C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_876_REG              (xxx_GICD_REGS_BASE + 0x7B64) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_877_REG              (xxx_GICD_REGS_BASE + 0x7B6C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_878_REG              (xxx_GICD_REGS_BASE + 0x7B74) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_879_REG              (xxx_GICD_REGS_BASE + 0x7B7C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_880_REG              (xxx_GICD_REGS_BASE + 0x7B84) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_881_REG              (xxx_GICD_REGS_BASE + 0x7B8C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_882_REG              (xxx_GICD_REGS_BASE + 0x7B94) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_883_REG              (xxx_GICD_REGS_BASE + 0x7B9C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_884_REG              (xxx_GICD_REGS_BASE + 0x7BA4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_885_REG              (xxx_GICD_REGS_BASE + 0x7BAC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_886_REG              (xxx_GICD_REGS_BASE + 0x7BB4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_887_REG              (xxx_GICD_REGS_BASE + 0x7BBC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_888_REG              (xxx_GICD_REGS_BASE + 0x7BC4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_889_REG              (xxx_GICD_REGS_BASE + 0x7BCC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_890_REG              (xxx_GICD_REGS_BASE + 0x7BD4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_891_REG              (xxx_GICD_REGS_BASE + 0x7BDC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_892_REG              (xxx_GICD_REGS_BASE + 0x7BE4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_893_REG              (xxx_GICD_REGS_BASE + 0x7BEC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_894_REG              (xxx_GICD_REGS_BASE + 0x7BF4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_895_REG              (xxx_GICD_REGS_BASE + 0x7BFC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_896_REG              (xxx_GICD_REGS_BASE + 0x7C04) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_897_REG              (xxx_GICD_REGS_BASE + 0x7C0C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_898_REG              (xxx_GICD_REGS_BASE + 0x7C14) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_899_REG              (xxx_GICD_REGS_BASE + 0x7C1C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_900_REG              (xxx_GICD_REGS_BASE + 0x7C24) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_901_REG              (xxx_GICD_REGS_BASE + 0x7C2C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_902_REG              (xxx_GICD_REGS_BASE + 0x7C34) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_903_REG              (xxx_GICD_REGS_BASE + 0x7C3C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_904_REG              (xxx_GICD_REGS_BASE + 0x7C44) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_905_REG              (xxx_GICD_REGS_BASE + 0x7C4C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_906_REG              (xxx_GICD_REGS_BASE + 0x7C54) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_907_REG              (xxx_GICD_REGS_BASE + 0x7C5C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_908_REG              (xxx_GICD_REGS_BASE + 0x7C64) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_909_REG              (xxx_GICD_REGS_BASE + 0x7C6C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_910_REG              (xxx_GICD_REGS_BASE + 0x7C74) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_911_REG              (xxx_GICD_REGS_BASE + 0x7C7C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_912_REG              (xxx_GICD_REGS_BASE + 0x7C84) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_913_REG              (xxx_GICD_REGS_BASE + 0x7C8C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_914_REG              (xxx_GICD_REGS_BASE + 0x7C94) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_915_REG              (xxx_GICD_REGS_BASE + 0x7C9C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_916_REG              (xxx_GICD_REGS_BASE + 0x7CA4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_917_REG              (xxx_GICD_REGS_BASE + 0x7CAC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_918_REG              (xxx_GICD_REGS_BASE + 0x7CB4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_919_REG              (xxx_GICD_REGS_BASE + 0x7CBC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_920_REG              (xxx_GICD_REGS_BASE + 0x7CC4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_921_REG              (xxx_GICD_REGS_BASE + 0x7CCC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_922_REG              (xxx_GICD_REGS_BASE + 0x7CD4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_923_REG              (xxx_GICD_REGS_BASE + 0x7CDC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_924_REG              (xxx_GICD_REGS_BASE + 0x7CE4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_925_REG              (xxx_GICD_REGS_BASE + 0x7CEC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_926_REG              (xxx_GICD_REGS_BASE + 0x7CF4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_927_REG              (xxx_GICD_REGS_BASE + 0x7CFC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_928_REG              (xxx_GICD_REGS_BASE + 0x7D04) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_929_REG              (xxx_GICD_REGS_BASE + 0x7D0C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_930_REG              (xxx_GICD_REGS_BASE + 0x7D14) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_931_REG              (xxx_GICD_REGS_BASE + 0x7D1C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_932_REG              (xxx_GICD_REGS_BASE + 0x7D24) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_933_REG              (xxx_GICD_REGS_BASE + 0x7D2C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_934_REG              (xxx_GICD_REGS_BASE + 0x7D34) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_935_REG              (xxx_GICD_REGS_BASE + 0x7D3C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_936_REG              (xxx_GICD_REGS_BASE + 0x7D44) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_937_REG              (xxx_GICD_REGS_BASE + 0x7D4C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_938_REG              (xxx_GICD_REGS_BASE + 0x7D54) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_939_REG              (xxx_GICD_REGS_BASE + 0x7D5C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_940_REG              (xxx_GICD_REGS_BASE + 0x7D64) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_941_REG              (xxx_GICD_REGS_BASE + 0x7D6C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_942_REG              (xxx_GICD_REGS_BASE + 0x7D74) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_943_REG              (xxx_GICD_REGS_BASE + 0x7D7C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_944_REG              (xxx_GICD_REGS_BASE + 0x7D84) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_945_REG              (xxx_GICD_REGS_BASE + 0x7D8C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_946_REG              (xxx_GICD_REGS_BASE + 0x7D94) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_947_REG              (xxx_GICD_REGS_BASE + 0x7D9C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_948_REG              (xxx_GICD_REGS_BASE + 0x7DA4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_949_REG              (xxx_GICD_REGS_BASE + 0x7DAC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_950_REG              (xxx_GICD_REGS_BASE + 0x7DB4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_951_REG              (xxx_GICD_REGS_BASE + 0x7DBC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_952_REG              (xxx_GICD_REGS_BASE + 0x7DC4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_953_REG              (xxx_GICD_REGS_BASE + 0x7DCC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_954_REG              (xxx_GICD_REGS_BASE + 0x7DD4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_955_REG              (xxx_GICD_REGS_BASE + 0x7DDC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_956_REG              (xxx_GICD_REGS_BASE + 0x7DE4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_957_REG              (xxx_GICD_REGS_BASE + 0x7DEC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_958_REG              (xxx_GICD_REGS_BASE + 0x7DF4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_959_REG              (xxx_GICD_REGS_BASE + 0x7DFC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_960_REG              (xxx_GICD_REGS_BASE + 0x7E04) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_961_REG              (xxx_GICD_REGS_BASE + 0x7E0C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_962_REG              (xxx_GICD_REGS_BASE + 0x7E14) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_963_REG              (xxx_GICD_REGS_BASE + 0x7E1C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_964_REG              (xxx_GICD_REGS_BASE + 0x7E24) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_965_REG              (xxx_GICD_REGS_BASE + 0x7E2C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_966_REG              (xxx_GICD_REGS_BASE + 0x7E34) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_967_REG              (xxx_GICD_REGS_BASE + 0x7E3C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_968_REG              (xxx_GICD_REGS_BASE + 0x7E44) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_969_REG              (xxx_GICD_REGS_BASE + 0x7E4C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_970_REG              (xxx_GICD_REGS_BASE + 0x7E54) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_971_REG              (xxx_GICD_REGS_BASE + 0x7E5C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_972_REG              (xxx_GICD_REGS_BASE + 0x7E64) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_973_REG              (xxx_GICD_REGS_BASE + 0x7E6C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_974_REG              (xxx_GICD_REGS_BASE + 0x7E74) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_975_REG              (xxx_GICD_REGS_BASE + 0x7E7C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_976_REG              (xxx_GICD_REGS_BASE + 0x7E84) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_977_REG              (xxx_GICD_REGS_BASE + 0x7E8C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_978_REG              (xxx_GICD_REGS_BASE + 0x7E94) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_979_REG              (xxx_GICD_REGS_BASE + 0x7E9C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_980_REG              (xxx_GICD_REGS_BASE + 0x7EA4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_981_REG              (xxx_GICD_REGS_BASE + 0x7EAC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_982_REG              (xxx_GICD_REGS_BASE + 0x7EB4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_983_REG              (xxx_GICD_REGS_BASE + 0x7EBC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_984_REG              (xxx_GICD_REGS_BASE + 0x7EC4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_985_REG              (xxx_GICD_REGS_BASE + 0x7ECC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_986_REG              (xxx_GICD_REGS_BASE + 0x7ED4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_987_REG              (xxx_GICD_REGS_BASE + 0x7EDC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_988_REG              (xxx_GICD_REGS_BASE + 0x7EE4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_989_REG              (xxx_GICD_REGS_BASE + 0x7EEC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_990_REG              (xxx_GICD_REGS_BASE + 0x7EF4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_991_REG              (xxx_GICD_REGS_BASE + 0x7EFC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_992_REG              (xxx_GICD_REGS_BASE + 0x7F04) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_993_REG              (xxx_GICD_REGS_BASE + 0x7F0C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_994_REG              (xxx_GICD_REGS_BASE + 0x7F14) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_995_REG              (xxx_GICD_REGS_BASE + 0x7F1C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_996_REG              (xxx_GICD_REGS_BASE + 0x7F24) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_997_REG              (xxx_GICD_REGS_BASE + 0x7F2C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_998_REG              (xxx_GICD_REGS_BASE + 0x7F34) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_999_REG              (xxx_GICD_REGS_BASE + 0x7F3C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_1000_REG             (xxx_GICD_REGS_BASE + 0x7F44) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_1001_REG             (xxx_GICD_REGS_BASE + 0x7F4C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_1002_REG             (xxx_GICD_REGS_BASE + 0x7F54) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_1003_REG             (xxx_GICD_REGS_BASE + 0x7F5C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_1004_REG             (xxx_GICD_REGS_BASE + 0x7F64) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_1005_REG             (xxx_GICD_REGS_BASE + 0x7F6C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_1006_REG             (xxx_GICD_REGS_BASE + 0x7F74) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_1007_REG             (xxx_GICD_REGS_BASE + 0x7F7C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_1008_REG             (xxx_GICD_REGS_BASE + 0x7F84) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_1009_REG             (xxx_GICD_REGS_BASE + 0x7F8C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_1010_REG             (xxx_GICD_REGS_BASE + 0x7F94) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_1011_REG             (xxx_GICD_REGS_BASE + 0x7F9C) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_1012_REG             (xxx_GICD_REGS_BASE + 0x7FA4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_1013_REG             (xxx_GICD_REGS_BASE + 0x7FAC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_1014_REG             (xxx_GICD_REGS_BASE + 0x7FB4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_1015_REG             (xxx_GICD_REGS_BASE + 0x7FBC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_1016_REG             (xxx_GICD_REGS_BASE + 0x7FC4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_1017_REG             (xxx_GICD_REGS_BASE + 0x7FCC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_1018_REG             (xxx_GICD_REGS_BASE + 0x7FD4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_1019_REG             (xxx_GICD_REGS_BASE + 0x7FDC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_1020_REG             (xxx_GICD_REGS_BASE + 0x7FE4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_1021_REG             (xxx_GICD_REGS_BASE + 0x7FEC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_1022_REG             (xxx_GICD_REGS_BASE + 0x7FF4) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_GICD_IROUTERN_H_1023_REG             (xxx_GICD_REGS_BASE + 0x7FFC) /* �׺���·�ɼĴ�����[63:32]����a{0,127} */
#define xxx_GICD_REGS_INT_TMOUT_REG                        (xxx_GICD_REGS_BASE + 0x1000) /* �ж�TimeOutʱ�����üĴ��� */
#define xxx_GICD_REGS_GIC_FUNC_EN_REG                      (xxx_GICD_REGS_BASE + 0x2080) /* GICD����ʹ�ܿ��� */
#define xxx_GICD_REGS_GICD_1NSPI_CTRL_REG                  (xxx_GICD_REGS_BASE + 0x2084) /* 1-N SPI�жϵ��ȿ��� */
#define xxx_GICD_REGS_DFX_INT_MONITOR_CTRL_REG             (xxx_GICD_REGS_BASE + 0x3500) /* �ж�ͳ�Ƽ�����ͳ��ѡ����ƼĴ����� */
#define xxx_GICD_REGS_GICD_REGS_CNT_CLR_CE_REG             (xxx_GICD_REGS_BASE + 0x3504) /* GICD��CNT_CYC���ͼĴ�����������ź� */
#define xxx_GICD_REGS_DFX_CPUIF_INT_ACP_CNT_REG            (xxx_GICD_REGS_BASE + 0x3508) /* �жϱ�FSM��������ͳ�Ƽ������� */
#define xxx_GICD_REGS_DFX_CPUIF_LEGACY_RDY_CNT_REG         (xxx_GICD_REGS_BASE + 0x350C) /* �ж�������Ч����ͳ�Ƽ������� */
#define xxx_GICD_REGS_DFX_CPUIF_LEGACY_ACK_CNT_REG         (xxx_GICD_REGS_BASE + 0x3510) /* �ж�������Ч����ͳ�Ƽ������� */
#define xxx_GICD_REGS_DFX_CPUIF_DEGACY_DEACT_CNT_REG       (xxx_GICD_REGS_BASE + 0x3514) /* �ж��ϱ����յ�DEACTIVATE��Ӧ����ͳ�Ƽ������� */
#define xxx_GICD_REGS_DFX_CPUIF_LPI_RDY_CNT_REG            (xxx_GICD_REGS_BASE + 0x3518) /* �ж�������Ч����ͳ�Ƽ������� */
#define xxx_GICD_REGS_DFX_CPUIF_LPI_ACK_CNT_REG            (xxx_GICD_REGS_BASE + 0x351C) /* �ж�������Ч����ͳ�Ƽ������� */
#define xxx_GICD_REGS_DFX_CPUIF_VLPI_RDY_CNT_REG           (xxx_GICD_REGS_BASE + 0x3520) /* �ж��ϱ����յ�ACTIVATE��Ӧ����ͳ�Ƽ������� */
#define xxx_GICD_REGS_DFX_CPUIF_VLPI_ACK_CNT_REG           (xxx_GICD_REGS_BASE + 0x3524) /* �ж��ϱ����յ�ACTIVATE��Ӧ����ͳ�Ƽ������� */
#define xxx_GICD_REGS_DFX_SPI_MONITOR_CTRL_REG             (xxx_GICD_REGS_BASE + 0x3644) /* SPI�ж�ͳ�Ƽ�����ͳ��ѡ����ƼĴ����� */
#define xxx_GICD_REGS_DFX_GICD_CFG_ERR_REG                 (xxx_GICD_REGS_BASE + 0x3648) /* GICD���ô���״̬�Ĵ����� */
#define xxx_GICD_REGS_DFX_LOWIDS_MERGE_CNT_REG             (xxx_GICD_REGS_BASE + 0x3650) /* SGI/PPI�жϱ��ϲ����¼���¼�Ĵ��� */
#define xxx_GICD_REGS_DFX_LOWIDS_SPLIT_CNT_REG             (xxx_GICD_REGS_BASE + 0x3654) /* SGI/�ж���ɵ��ж�Դδ������¼���¼�Ĵ��� */
#define xxx_GICD_REGS_DFX_LOWIDS_DROP_CNT_REG              (xxx_GICD_REGS_BASE + 0x3658) /* SGI/PPI�жϱ��������¼���¼�Ĵ��� */
#define xxx_GICD_REGS_DFX_SPIS_MERGE_CNT_REG               (xxx_GICD_REGS_BASE + 0x365C) /* SPI�жϱ��ϲ����¼���¼�Ĵ��� */
#define xxx_GICD_REGS_DFX_SPIS_SPLIT_CNT_REG               (xxx_GICD_REGS_BASE + 0x3660) /* SPI�ж���ɵ��ж�Դδ������¼���¼�Ĵ��� */
#define xxx_GICD_REGS_DFX_SPIS_DROP_CNT_REG                (xxx_GICD_REGS_BASE + 0x3664) /* SPI�жϱ��������¼���¼�Ĵ��� */
#define xxx_GICD_REGS_DFX_ID_SET_MAXTIME_STAT_0_REG        (xxx_GICD_REGS_BASE + 0x3924) /* �ж��ϱ������ʱͳ�ƼĴ���0 */
#define xxx_GICD_REGS_DFX_ID_SET_MAXTIME_STAT_1_REG        (xxx_GICD_REGS_BASE + 0x3928) /* �ж��ϱ������ʱͳ�ƼĴ���1 */
#define xxx_GICD_REGS_DFX_STREAM_NODE_STATUS_REG           (xxx_GICD_REGS_BASE + 0x3B20) /* STREAM����NODE״̬�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO_0_REG             (xxx_GICD_REGS_BASE + 0xB000) /* GICD_CPUIF�ӿ�״̬��0״̬��ָʾ�� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO_1_REG             (xxx_GICD_REGS_BASE + 0xB040) /* GICD_CPUIF�ӿ�״̬��0״̬��ָʾ�� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO_2_REG             (xxx_GICD_REGS_BASE + 0xB080) /* GICD_CPUIF�ӿ�״̬��0״̬��ָʾ�� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO_3_REG             (xxx_GICD_REGS_BASE + 0xB0C0) /* GICD_CPUIF�ӿ�״̬��0״̬��ָʾ�� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO_4_REG             (xxx_GICD_REGS_BASE + 0xB100) /* GICD_CPUIF�ӿ�״̬��0״̬��ָʾ�� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO_5_REG             (xxx_GICD_REGS_BASE + 0xB140) /* GICD_CPUIF�ӿ�״̬��0״̬��ָʾ�� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO_6_REG             (xxx_GICD_REGS_BASE + 0xB180) /* GICD_CPUIF�ӿ�״̬��0״̬��ָʾ�� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO_7_REG             (xxx_GICD_REGS_BASE + 0xB1C0) /* GICD_CPUIF�ӿ�״̬��0״̬��ָʾ�� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO_8_REG             (xxx_GICD_REGS_BASE + 0xB200) /* GICD_CPUIF�ӿ�״̬��0״̬��ָʾ�� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO_9_REG             (xxx_GICD_REGS_BASE + 0xB240) /* GICD_CPUIF�ӿ�״̬��0״̬��ָʾ�� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO_10_REG            (xxx_GICD_REGS_BASE + 0xB280) /* GICD_CPUIF�ӿ�״̬��0״̬��ָʾ�� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO_11_REG            (xxx_GICD_REGS_BASE + 0xB2C0) /* GICD_CPUIF�ӿ�״̬��0״̬��ָʾ�� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO_12_REG            (xxx_GICD_REGS_BASE + 0xB300) /* GICD_CPUIF�ӿ�״̬��0״̬��ָʾ�� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO_13_REG            (xxx_GICD_REGS_BASE + 0xB340) /* GICD_CPUIF�ӿ�״̬��0״̬��ָʾ�� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO_14_REG            (xxx_GICD_REGS_BASE + 0xB380) /* GICD_CPUIF�ӿ�״̬��0״̬��ָʾ�� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO_15_REG            (xxx_GICD_REGS_BASE + 0xB3C0) /* GICD_CPUIF�ӿ�״̬��0״̬��ָʾ�� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO_16_REG            (xxx_GICD_REGS_BASE + 0xB400) /* GICD_CPUIF�ӿ�״̬��0״̬��ָʾ�� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO_17_REG            (xxx_GICD_REGS_BASE + 0xB440) /* GICD_CPUIF�ӿ�״̬��0״̬��ָʾ�� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO_18_REG            (xxx_GICD_REGS_BASE + 0xB480) /* GICD_CPUIF�ӿ�״̬��0״̬��ָʾ�� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO_19_REG            (xxx_GICD_REGS_BASE + 0xB4C0) /* GICD_CPUIF�ӿ�״̬��0״̬��ָʾ�� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO_20_REG            (xxx_GICD_REGS_BASE + 0xB500) /* GICD_CPUIF�ӿ�״̬��0״̬��ָʾ�� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO_21_REG            (xxx_GICD_REGS_BASE + 0xB540) /* GICD_CPUIF�ӿ�״̬��0״̬��ָʾ�� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO_22_REG            (xxx_GICD_REGS_BASE + 0xB580) /* GICD_CPUIF�ӿ�״̬��0״̬��ָʾ�� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO_23_REG            (xxx_GICD_REGS_BASE + 0xB5C0) /* GICD_CPUIF�ӿ�״̬��0״̬��ָʾ�� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO_24_REG            (xxx_GICD_REGS_BASE + 0xB600) /* GICD_CPUIF�ӿ�״̬��0״̬��ָʾ�� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO_25_REG            (xxx_GICD_REGS_BASE + 0xB640) /* GICD_CPUIF�ӿ�״̬��0״̬��ָʾ�� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO_26_REG            (xxx_GICD_REGS_BASE + 0xB680) /* GICD_CPUIF�ӿ�״̬��0״̬��ָʾ�� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO_27_REG            (xxx_GICD_REGS_BASE + 0xB6C0) /* GICD_CPUIF�ӿ�״̬��0״̬��ָʾ�� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO_28_REG            (xxx_GICD_REGS_BASE + 0xB700) /* GICD_CPUIF�ӿ�״̬��0״̬��ָʾ�� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO_29_REG            (xxx_GICD_REGS_BASE + 0xB740) /* GICD_CPUIF�ӿ�״̬��0״̬��ָʾ�� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO_30_REG            (xxx_GICD_REGS_BASE + 0xB780) /* GICD_CPUIF�ӿ�״̬��0״̬��ָʾ�� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO_31_REG            (xxx_GICD_REGS_BASE + 0xB7C0) /* GICD_CPUIF�ӿ�״̬��0״̬��ָʾ�� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO1_0_REG            (xxx_GICD_REGS_BASE + 0xB004) /* GICD_CPUIF�ӿ�״̬��0�����ж�ID�����ȼ���Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO1_1_REG            (xxx_GICD_REGS_BASE + 0xB044) /* GICD_CPUIF�ӿ�״̬��0�����ж�ID�����ȼ���Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO1_2_REG            (xxx_GICD_REGS_BASE + 0xB084) /* GICD_CPUIF�ӿ�״̬��0�����ж�ID�����ȼ���Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO1_3_REG            (xxx_GICD_REGS_BASE + 0xB0C4) /* GICD_CPUIF�ӿ�״̬��0�����ж�ID�����ȼ���Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO1_4_REG            (xxx_GICD_REGS_BASE + 0xB104) /* GICD_CPUIF�ӿ�״̬��0�����ж�ID�����ȼ���Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO1_5_REG            (xxx_GICD_REGS_BASE + 0xB144) /* GICD_CPUIF�ӿ�״̬��0�����ж�ID�����ȼ���Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO1_6_REG            (xxx_GICD_REGS_BASE + 0xB184) /* GICD_CPUIF�ӿ�״̬��0�����ж�ID�����ȼ���Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO1_7_REG            (xxx_GICD_REGS_BASE + 0xB1C4) /* GICD_CPUIF�ӿ�״̬��0�����ж�ID�����ȼ���Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO1_8_REG            (xxx_GICD_REGS_BASE + 0xB204) /* GICD_CPUIF�ӿ�״̬��0�����ж�ID�����ȼ���Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO1_9_REG            (xxx_GICD_REGS_BASE + 0xB244) /* GICD_CPUIF�ӿ�״̬��0�����ж�ID�����ȼ���Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO1_10_REG           (xxx_GICD_REGS_BASE + 0xB284) /* GICD_CPUIF�ӿ�״̬��0�����ж�ID�����ȼ���Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO1_11_REG           (xxx_GICD_REGS_BASE + 0xB2C4) /* GICD_CPUIF�ӿ�״̬��0�����ж�ID�����ȼ���Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO1_12_REG           (xxx_GICD_REGS_BASE + 0xB304) /* GICD_CPUIF�ӿ�״̬��0�����ж�ID�����ȼ���Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO1_13_REG           (xxx_GICD_REGS_BASE + 0xB344) /* GICD_CPUIF�ӿ�״̬��0�����ж�ID�����ȼ���Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO1_14_REG           (xxx_GICD_REGS_BASE + 0xB384) /* GICD_CPUIF�ӿ�״̬��0�����ж�ID�����ȼ���Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO1_15_REG           (xxx_GICD_REGS_BASE + 0xB3C4) /* GICD_CPUIF�ӿ�״̬��0�����ж�ID�����ȼ���Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO1_16_REG           (xxx_GICD_REGS_BASE + 0xB404) /* GICD_CPUIF�ӿ�״̬��0�����ж�ID�����ȼ���Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO1_17_REG           (xxx_GICD_REGS_BASE + 0xB444) /* GICD_CPUIF�ӿ�״̬��0�����ж�ID�����ȼ���Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO1_18_REG           (xxx_GICD_REGS_BASE + 0xB484) /* GICD_CPUIF�ӿ�״̬��0�����ж�ID�����ȼ���Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO1_19_REG           (xxx_GICD_REGS_BASE + 0xB4C4) /* GICD_CPUIF�ӿ�״̬��0�����ж�ID�����ȼ���Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO1_20_REG           (xxx_GICD_REGS_BASE + 0xB504) /* GICD_CPUIF�ӿ�״̬��0�����ж�ID�����ȼ���Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO1_21_REG           (xxx_GICD_REGS_BASE + 0xB544) /* GICD_CPUIF�ӿ�״̬��0�����ж�ID�����ȼ���Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO1_22_REG           (xxx_GICD_REGS_BASE + 0xB584) /* GICD_CPUIF�ӿ�״̬��0�����ж�ID�����ȼ���Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO1_23_REG           (xxx_GICD_REGS_BASE + 0xB5C4) /* GICD_CPUIF�ӿ�״̬��0�����ж�ID�����ȼ���Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO1_24_REG           (xxx_GICD_REGS_BASE + 0xB604) /* GICD_CPUIF�ӿ�״̬��0�����ж�ID�����ȼ���Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO1_25_REG           (xxx_GICD_REGS_BASE + 0xB644) /* GICD_CPUIF�ӿ�״̬��0�����ж�ID�����ȼ���Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO1_26_REG           (xxx_GICD_REGS_BASE + 0xB684) /* GICD_CPUIF�ӿ�״̬��0�����ж�ID�����ȼ���Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO1_27_REG           (xxx_GICD_REGS_BASE + 0xB6C4) /* GICD_CPUIF�ӿ�״̬��0�����ж�ID�����ȼ���Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO1_28_REG           (xxx_GICD_REGS_BASE + 0xB704) /* GICD_CPUIF�ӿ�״̬��0�����ж�ID�����ȼ���Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO1_29_REG           (xxx_GICD_REGS_BASE + 0xB744) /* GICD_CPUIF�ӿ�״̬��0�����ж�ID�����ȼ���Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO1_30_REG           (xxx_GICD_REGS_BASE + 0xB784) /* GICD_CPUIF�ӿ�״̬��0�����ж�ID�����ȼ���Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_FSM_INFO1_31_REG           (xxx_GICD_REGS_BASE + 0xB7C4) /* GICD_CPUIF�ӿ�״̬��0�����ж�ID�����ȼ���Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS0_0_REG              (xxx_GICD_REGS_BASE + 0xB010) /* GICD_CPUIF�ӿڷ���SET����ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS0_1_REG              (xxx_GICD_REGS_BASE + 0xB050) /* GICD_CPUIF�ӿڷ���SET����ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS0_2_REG              (xxx_GICD_REGS_BASE + 0xB090) /* GICD_CPUIF�ӿڷ���SET����ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS0_3_REG              (xxx_GICD_REGS_BASE + 0xB0D0) /* GICD_CPUIF�ӿڷ���SET����ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS0_4_REG              (xxx_GICD_REGS_BASE + 0xB110) /* GICD_CPUIF�ӿڷ���SET����ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS0_5_REG              (xxx_GICD_REGS_BASE + 0xB150) /* GICD_CPUIF�ӿڷ���SET����ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS0_6_REG              (xxx_GICD_REGS_BASE + 0xB190) /* GICD_CPUIF�ӿڷ���SET����ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS0_7_REG              (xxx_GICD_REGS_BASE + 0xB1D0) /* GICD_CPUIF�ӿڷ���SET����ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS0_8_REG              (xxx_GICD_REGS_BASE + 0xB210) /* GICD_CPUIF�ӿڷ���SET����ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS0_9_REG              (xxx_GICD_REGS_BASE + 0xB250) /* GICD_CPUIF�ӿڷ���SET����ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS0_10_REG             (xxx_GICD_REGS_BASE + 0xB290) /* GICD_CPUIF�ӿڷ���SET����ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS0_11_REG             (xxx_GICD_REGS_BASE + 0xB2D0) /* GICD_CPUIF�ӿڷ���SET����ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS0_12_REG             (xxx_GICD_REGS_BASE + 0xB310) /* GICD_CPUIF�ӿڷ���SET����ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS0_13_REG             (xxx_GICD_REGS_BASE + 0xB350) /* GICD_CPUIF�ӿڷ���SET����ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS0_14_REG             (xxx_GICD_REGS_BASE + 0xB390) /* GICD_CPUIF�ӿڷ���SET����ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS0_15_REG             (xxx_GICD_REGS_BASE + 0xB3D0) /* GICD_CPUIF�ӿڷ���SET����ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS0_16_REG             (xxx_GICD_REGS_BASE + 0xB410) /* GICD_CPUIF�ӿڷ���SET����ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS0_17_REG             (xxx_GICD_REGS_BASE + 0xB450) /* GICD_CPUIF�ӿڷ���SET����ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS0_18_REG             (xxx_GICD_REGS_BASE + 0xB490) /* GICD_CPUIF�ӿڷ���SET����ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS0_19_REG             (xxx_GICD_REGS_BASE + 0xB4D0) /* GICD_CPUIF�ӿڷ���SET����ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS0_20_REG             (xxx_GICD_REGS_BASE + 0xB510) /* GICD_CPUIF�ӿڷ���SET����ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS0_21_REG             (xxx_GICD_REGS_BASE + 0xB550) /* GICD_CPUIF�ӿڷ���SET����ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS0_22_REG             (xxx_GICD_REGS_BASE + 0xB590) /* GICD_CPUIF�ӿڷ���SET����ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS0_23_REG             (xxx_GICD_REGS_BASE + 0xB5D0) /* GICD_CPUIF�ӿڷ���SET����ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS0_24_REG             (xxx_GICD_REGS_BASE + 0xB610) /* GICD_CPUIF�ӿڷ���SET����ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS0_25_REG             (xxx_GICD_REGS_BASE + 0xB650) /* GICD_CPUIF�ӿڷ���SET����ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS0_26_REG             (xxx_GICD_REGS_BASE + 0xB690) /* GICD_CPUIF�ӿڷ���SET����ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS0_27_REG             (xxx_GICD_REGS_BASE + 0xB6D0) /* GICD_CPUIF�ӿڷ���SET����ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS0_28_REG             (xxx_GICD_REGS_BASE + 0xB710) /* GICD_CPUIF�ӿڷ���SET����ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS0_29_REG             (xxx_GICD_REGS_BASE + 0xB750) /* GICD_CPUIF�ӿڷ���SET����ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS0_30_REG             (xxx_GICD_REGS_BASE + 0xB790) /* GICD_CPUIF�ӿڷ���SET����ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS0_31_REG             (xxx_GICD_REGS_BASE + 0xB7D0) /* GICD_CPUIF�ӿڷ���SET����ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS1_0_REG              (xxx_GICD_REGS_BASE + 0xB014) /* GICD_CPUIF�ӿڽ�������״̬FIFO������PMR��Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS1_1_REG              (xxx_GICD_REGS_BASE + 0xB054) /* GICD_CPUIF�ӿڽ�������״̬FIFO������PMR��Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS1_2_REG              (xxx_GICD_REGS_BASE + 0xB094) /* GICD_CPUIF�ӿڽ�������״̬FIFO������PMR��Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS1_3_REG              (xxx_GICD_REGS_BASE + 0xB0D4) /* GICD_CPUIF�ӿڽ�������״̬FIFO������PMR��Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS1_4_REG              (xxx_GICD_REGS_BASE + 0xB114) /* GICD_CPUIF�ӿڽ�������״̬FIFO������PMR��Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS1_5_REG              (xxx_GICD_REGS_BASE + 0xB154) /* GICD_CPUIF�ӿڽ�������״̬FIFO������PMR��Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS1_6_REG              (xxx_GICD_REGS_BASE + 0xB194) /* GICD_CPUIF�ӿڽ�������״̬FIFO������PMR��Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS1_7_REG              (xxx_GICD_REGS_BASE + 0xB1D4) /* GICD_CPUIF�ӿڽ�������״̬FIFO������PMR��Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS1_8_REG              (xxx_GICD_REGS_BASE + 0xB214) /* GICD_CPUIF�ӿڽ�������״̬FIFO������PMR��Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS1_9_REG              (xxx_GICD_REGS_BASE + 0xB254) /* GICD_CPUIF�ӿڽ�������״̬FIFO������PMR��Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS1_10_REG             (xxx_GICD_REGS_BASE + 0xB294) /* GICD_CPUIF�ӿڽ�������״̬FIFO������PMR��Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS1_11_REG             (xxx_GICD_REGS_BASE + 0xB2D4) /* GICD_CPUIF�ӿڽ�������״̬FIFO������PMR��Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS1_12_REG             (xxx_GICD_REGS_BASE + 0xB314) /* GICD_CPUIF�ӿڽ�������״̬FIFO������PMR��Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS1_13_REG             (xxx_GICD_REGS_BASE + 0xB354) /* GICD_CPUIF�ӿڽ�������״̬FIFO������PMR��Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS1_14_REG             (xxx_GICD_REGS_BASE + 0xB394) /* GICD_CPUIF�ӿڽ�������״̬FIFO������PMR��Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS1_15_REG             (xxx_GICD_REGS_BASE + 0xB3D4) /* GICD_CPUIF�ӿڽ�������״̬FIFO������PMR��Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS1_16_REG             (xxx_GICD_REGS_BASE + 0xB414) /* GICD_CPUIF�ӿڽ�������״̬FIFO������PMR��Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS1_17_REG             (xxx_GICD_REGS_BASE + 0xB454) /* GICD_CPUIF�ӿڽ�������״̬FIFO������PMR��Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS1_18_REG             (xxx_GICD_REGS_BASE + 0xB494) /* GICD_CPUIF�ӿڽ�������״̬FIFO������PMR��Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS1_19_REG             (xxx_GICD_REGS_BASE + 0xB4D4) /* GICD_CPUIF�ӿڽ�������״̬FIFO������PMR��Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS1_20_REG             (xxx_GICD_REGS_BASE + 0xB514) /* GICD_CPUIF�ӿڽ�������״̬FIFO������PMR��Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS1_21_REG             (xxx_GICD_REGS_BASE + 0xB554) /* GICD_CPUIF�ӿڽ�������״̬FIFO������PMR��Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS1_22_REG             (xxx_GICD_REGS_BASE + 0xB594) /* GICD_CPUIF�ӿڽ�������״̬FIFO������PMR��Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS1_23_REG             (xxx_GICD_REGS_BASE + 0xB5D4) /* GICD_CPUIF�ӿڽ�������״̬FIFO������PMR��Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS1_24_REG             (xxx_GICD_REGS_BASE + 0xB614) /* GICD_CPUIF�ӿڽ�������״̬FIFO������PMR��Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS1_25_REG             (xxx_GICD_REGS_BASE + 0xB654) /* GICD_CPUIF�ӿڽ�������״̬FIFO������PMR��Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS1_26_REG             (xxx_GICD_REGS_BASE + 0xB694) /* GICD_CPUIF�ӿڽ�������״̬FIFO������PMR��Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS1_27_REG             (xxx_GICD_REGS_BASE + 0xB6D4) /* GICD_CPUIF�ӿڽ�������״̬FIFO������PMR��Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS1_28_REG             (xxx_GICD_REGS_BASE + 0xB714) /* GICD_CPUIF�ӿڽ�������״̬FIFO������PMR��Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS1_29_REG             (xxx_GICD_REGS_BASE + 0xB754) /* GICD_CPUIF�ӿڽ�������״̬FIFO������PMR��Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS1_30_REG             (xxx_GICD_REGS_BASE + 0xB794) /* GICD_CPUIF�ӿڽ�������״̬FIFO������PMR��Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS1_31_REG             (xxx_GICD_REGS_BASE + 0xB7D4) /* GICD_CPUIF�ӿڽ�������״̬FIFO������PMR��Ϣ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS2_0_REG              (xxx_GICD_REGS_BASE + 0xB018) /* GICD_CPUIF�ӿڽ�����������ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS2_1_REG              (xxx_GICD_REGS_BASE + 0xB058) /* GICD_CPUIF�ӿڽ�����������ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS2_2_REG              (xxx_GICD_REGS_BASE + 0xB098) /* GICD_CPUIF�ӿڽ�����������ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS2_3_REG              (xxx_GICD_REGS_BASE + 0xB0D8) /* GICD_CPUIF�ӿڽ�����������ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS2_4_REG              (xxx_GICD_REGS_BASE + 0xB118) /* GICD_CPUIF�ӿڽ�����������ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS2_5_REG              (xxx_GICD_REGS_BASE + 0xB158) /* GICD_CPUIF�ӿڽ�����������ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS2_6_REG              (xxx_GICD_REGS_BASE + 0xB198) /* GICD_CPUIF�ӿڽ�����������ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS2_7_REG              (xxx_GICD_REGS_BASE + 0xB1D8) /* GICD_CPUIF�ӿڽ�����������ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS2_8_REG              (xxx_GICD_REGS_BASE + 0xB218) /* GICD_CPUIF�ӿڽ�����������ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS2_9_REG              (xxx_GICD_REGS_BASE + 0xB258) /* GICD_CPUIF�ӿڽ�����������ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS2_10_REG             (xxx_GICD_REGS_BASE + 0xB298) /* GICD_CPUIF�ӿڽ�����������ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS2_11_REG             (xxx_GICD_REGS_BASE + 0xB2D8) /* GICD_CPUIF�ӿڽ�����������ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS2_12_REG             (xxx_GICD_REGS_BASE + 0xB318) /* GICD_CPUIF�ӿڽ�����������ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS2_13_REG             (xxx_GICD_REGS_BASE + 0xB358) /* GICD_CPUIF�ӿڽ�����������ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS2_14_REG             (xxx_GICD_REGS_BASE + 0xB398) /* GICD_CPUIF�ӿڽ�����������ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS2_15_REG             (xxx_GICD_REGS_BASE + 0xB3D8) /* GICD_CPUIF�ӿڽ�����������ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS2_16_REG             (xxx_GICD_REGS_BASE + 0xB418) /* GICD_CPUIF�ӿڽ�����������ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS2_17_REG             (xxx_GICD_REGS_BASE + 0xB458) /* GICD_CPUIF�ӿڽ�����������ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS2_18_REG             (xxx_GICD_REGS_BASE + 0xB498) /* GICD_CPUIF�ӿڽ�����������ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS2_19_REG             (xxx_GICD_REGS_BASE + 0xB4D8) /* GICD_CPUIF�ӿڽ�����������ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS2_20_REG             (xxx_GICD_REGS_BASE + 0xB518) /* GICD_CPUIF�ӿڽ�����������ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS2_21_REG             (xxx_GICD_REGS_BASE + 0xB558) /* GICD_CPUIF�ӿڽ�����������ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS2_22_REG             (xxx_GICD_REGS_BASE + 0xB598) /* GICD_CPUIF�ӿڽ�����������ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS2_23_REG             (xxx_GICD_REGS_BASE + 0xB5D8) /* GICD_CPUIF�ӿڽ�����������ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS2_24_REG             (xxx_GICD_REGS_BASE + 0xB618) /* GICD_CPUIF�ӿڽ�����������ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS2_25_REG             (xxx_GICD_REGS_BASE + 0xB658) /* GICD_CPUIF�ӿڽ�����������ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS2_26_REG             (xxx_GICD_REGS_BASE + 0xB698) /* GICD_CPUIF�ӿڽ�����������ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS2_27_REG             (xxx_GICD_REGS_BASE + 0xB6D8) /* GICD_CPUIF�ӿڽ�����������ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS2_28_REG             (xxx_GICD_REGS_BASE + 0xB718) /* GICD_CPUIF�ӿڽ�����������ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS2_29_REG             (xxx_GICD_REGS_BASE + 0xB758) /* GICD_CPUIF�ӿڽ�����������ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS2_30_REG             (xxx_GICD_REGS_BASE + 0xB798) /* GICD_CPUIF�ӿڽ�����������ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS2_31_REG             (xxx_GICD_REGS_BASE + 0xB7D8) /* GICD_CPUIF�ӿڽ�����������ָʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS3_0_REG              (xxx_GICD_REGS_BASE + 0xB01C) /* GICD_CPUIF�ӿڽ���Upstream����״ָ̬ʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS3_1_REG              (xxx_GICD_REGS_BASE + 0xB05C) /* GICD_CPUIF�ӿڽ���Upstream����״ָ̬ʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS3_2_REG              (xxx_GICD_REGS_BASE + 0xB09C) /* GICD_CPUIF�ӿڽ���Upstream����״ָ̬ʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS3_3_REG              (xxx_GICD_REGS_BASE + 0xB0DC) /* GICD_CPUIF�ӿڽ���Upstream����״ָ̬ʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS3_4_REG              (xxx_GICD_REGS_BASE + 0xB11C) /* GICD_CPUIF�ӿڽ���Upstream����״ָ̬ʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS3_5_REG              (xxx_GICD_REGS_BASE + 0xB15C) /* GICD_CPUIF�ӿڽ���Upstream����״ָ̬ʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS3_6_REG              (xxx_GICD_REGS_BASE + 0xB19C) /* GICD_CPUIF�ӿڽ���Upstream����״ָ̬ʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS3_7_REG              (xxx_GICD_REGS_BASE + 0xB1DC) /* GICD_CPUIF�ӿڽ���Upstream����״ָ̬ʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS3_8_REG              (xxx_GICD_REGS_BASE + 0xB21C) /* GICD_CPUIF�ӿڽ���Upstream����״ָ̬ʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS3_9_REG              (xxx_GICD_REGS_BASE + 0xB25C) /* GICD_CPUIF�ӿڽ���Upstream����״ָ̬ʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS3_10_REG             (xxx_GICD_REGS_BASE + 0xB29C) /* GICD_CPUIF�ӿڽ���Upstream����״ָ̬ʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS3_11_REG             (xxx_GICD_REGS_BASE + 0xB2DC) /* GICD_CPUIF�ӿڽ���Upstream����״ָ̬ʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS3_12_REG             (xxx_GICD_REGS_BASE + 0xB31C) /* GICD_CPUIF�ӿڽ���Upstream����״ָ̬ʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS3_13_REG             (xxx_GICD_REGS_BASE + 0xB35C) /* GICD_CPUIF�ӿڽ���Upstream����״ָ̬ʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS3_14_REG             (xxx_GICD_REGS_BASE + 0xB39C) /* GICD_CPUIF�ӿڽ���Upstream����״ָ̬ʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS3_15_REG             (xxx_GICD_REGS_BASE + 0xB3DC) /* GICD_CPUIF�ӿڽ���Upstream����״ָ̬ʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS3_16_REG             (xxx_GICD_REGS_BASE + 0xB41C) /* GICD_CPUIF�ӿڽ���Upstream����״ָ̬ʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS3_17_REG             (xxx_GICD_REGS_BASE + 0xB45C) /* GICD_CPUIF�ӿڽ���Upstream����״ָ̬ʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS3_18_REG             (xxx_GICD_REGS_BASE + 0xB49C) /* GICD_CPUIF�ӿڽ���Upstream����״ָ̬ʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS3_19_REG             (xxx_GICD_REGS_BASE + 0xB4DC) /* GICD_CPUIF�ӿڽ���Upstream����״ָ̬ʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS3_20_REG             (xxx_GICD_REGS_BASE + 0xB51C) /* GICD_CPUIF�ӿڽ���Upstream����״ָ̬ʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS3_21_REG             (xxx_GICD_REGS_BASE + 0xB55C) /* GICD_CPUIF�ӿڽ���Upstream����״ָ̬ʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS3_22_REG             (xxx_GICD_REGS_BASE + 0xB59C) /* GICD_CPUIF�ӿڽ���Upstream����״ָ̬ʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS3_23_REG             (xxx_GICD_REGS_BASE + 0xB5DC) /* GICD_CPUIF�ӿڽ���Upstream����״ָ̬ʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS3_24_REG             (xxx_GICD_REGS_BASE + 0xB61C) /* GICD_CPUIF�ӿڽ���Upstream����״ָ̬ʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS3_25_REG             (xxx_GICD_REGS_BASE + 0xB65C) /* GICD_CPUIF�ӿڽ���Upstream����״ָ̬ʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS3_26_REG             (xxx_GICD_REGS_BASE + 0xB69C) /* GICD_CPUIF�ӿڽ���Upstream����״ָ̬ʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS3_27_REG             (xxx_GICD_REGS_BASE + 0xB6DC) /* GICD_CPUIF�ӿڽ���Upstream����״ָ̬ʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS3_28_REG             (xxx_GICD_REGS_BASE + 0xB71C) /* GICD_CPUIF�ӿڽ���Upstream����״ָ̬ʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS3_29_REG             (xxx_GICD_REGS_BASE + 0xB75C) /* GICD_CPUIF�ӿڽ���Upstream����״ָ̬ʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS3_30_REG             (xxx_GICD_REGS_BASE + 0xB79C) /* GICD_CPUIF�ӿڽ���Upstream����״ָ̬ʾ�Ĵ����� */
#define xxx_GICD_REGS_DFX_CPUIF_STATUS3_31_REG             (xxx_GICD_REGS_BASE + 0xB7DC) /* GICD_CPUIF�ӿڽ���Upstream����״ָ̬ʾ�Ĵ����� */
#define xxx_GICD_REGS_GICD_DFX_INFO0_REG                   (xxx_GICD_REGS_BASE + 0x3C00) /* ����ص��жϽ���ͳ�� */
#define xxx_GICD_REGS_GICD_DFX_INFO1_REG                   (xxx_GICD_REGS_BASE + 0x3C04) /* ����ص��жϱ�ACTIVEͳ�� */
#define xxx_GICD_REGS_GICD_DFX_INFO2_REG                   (xxx_GICD_REGS_BASE + 0x3C08) /* ����ص��жϱ�CLRͳ�� */
#define xxx_GICD_REGS_GICD_DFX_INFO3_REG                   (xxx_GICD_REGS_BASE + 0x3C0C) /* ����ص��жϱ��ϲ���ͳ�� */

#endif // __GICD_REGS_REG_OFFSET_H__
