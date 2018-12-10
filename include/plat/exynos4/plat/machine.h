/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */

#ifndef __PLAT_MACHINE_H
#define __PLAT_MACHINE_H

#define N_INTERRUPTS     160

enum IRQConstants {
//  INTERRUPT_RESERVED         =   0,
//  INTERRUPT_RESERVED         =   1,
//  INTERRUPT_RESERVED         =   2,
//  INTERRUPT_RESERVED         =   3,
//  INTERRUPT_RESERVED         =   4,
//  INTERRUPT_RESERVED         =   5,
//  INTERRUPT_RESERVED         =   6,
//  INTERRUPT_RESERVED         =   7,
//  INTERRUPT_RESERVED         =   8,
//  INTERRUPT_RESERVED         =   9,
//  INTERRUPT_RESERVED         =  10,
//  INTERRUPT_RESERVED         =  11,
//  INTERRUPT_RESERVED         =  12,
//  INTERRUPT_RESERVED         =  13,
//  INTERRUPT_RESERVED         =  14,
//  INTERRUPT_RESERVED         =  15,
//  INTERRUPT_RESERVED         =  16,
//  INTERRUPT_RESERVED         =  17,
//  INTERRUPT_RESERVED         =  18,
//  INTERRUPT_RESERVED         =  19,
//  INTERRUPT_RESERVED         =  20,
//  INTERRUPT_RESERVED         =  21,
//  INTERRUPT_RESERVED         =  22,
//  INTERRUPT_RESERVED         =  23,
//  INTERRUPT_RESERVED         =  24,
    INTERRUPT_MCTG0            =  25,
    INTERRUPT_MCTG1            =  26,
//  INTERRUPT_RESERVED         =  27,
    INTERRUPT_MCTL0            =  28,
//  INTERRUPT_RESERVED         =  29,
//  INTERRUPT_RESERVED         =  30,
//  INTERRUPT_RESERVED         =  31,
//  INTERRUPT_RESERVED         =  32,
//  INTERRUPT_RESERVED         =  33,
    INTERRUPT_INTG2            =  34,
    INTERRUPT_INTG3            =  35,
    INTERRUPT_INTG4            =  36,
    INTERRUPT_INTG5            =  37,
    INTERRUPT_INTG6            =  38,
    INTERRUPT_INTG7            =  39,
    INTERRUPT_INTG8            =  40,
    INTERRUPT_INTG9            =  41,
    INTERRUPT_INTG10           =  42,
    INTERRUPT_INTG11           =  43,
    INTERRUPT_INTG12           =  44,
    INTERRUPT_INTG13           =  45,
    INTERRUPT_INTG14           =  46,
    INTERRUPT_INTG15           =  47,
    INTERRUPT_INTG16           =  48,
    INTERRUPT_INTG17           =  49,
    INTERRUPT_INTG18           =  50,
    INTERRUPT_INTG19           =  51,
    INTERRUPT_INTG20           =  52,
    INTERRUPT_INTG21           =  53,
    INTERRUPT_INTG22           =  54,
    INTERRUPT_INTG23           =  55,
    INTERRUPT_INTG24           =  56,
    INTERRUPT_INTG25           =  57,
    INTERRUPT_INTG26           =  58,
    INTERRUPT_INTG27           =  59,
    INTERRUPT_INTG28           =  60,
    INTERRUPT_INTG29           =  61,
    INTERRUPT_INTG30           =  62,
    INTERRUPT_INTG31           =  63,
    INTERRUPT_EXT_INT          =  64,
    INTERRUPT_MDMA_LCD0        =  66,
    INTERRUPT_PDMA0            =  67,
    INTERRUPT_PDMA1            =  68,
    INTERRUPT_TIMER0           =  69,
    INTERRUPT_TIMER1           =  70,
    INTERRUPT_TIMER2           =  71,
    INTERRUPT_TIMER3           =  72,
    INTERRUPT_TIMER4           =  73,
    INTERRUPT_MCT_L0           =  74,
    INTERRUPT_WDT              =  75,
    INTERRUPT_RTC_ALARM        =  76,
    INTERRUPT_RTC_TIC          =  77,
    INTERRUPT_GPIO_XB          =  78,
    INTERRUPT_GPIO_XA          =  79,
    INTERRUPT_MCT_L1           =  80,
    INTERRUPT_IEM_APC          =  81,
    INTERRUPT_IEM_IEC          =  82,
    INTERRUPT_NFC              =  83,
    INTERRUPT_UART0            =  84,
    INTERRUPT_UART1            =  85,
    INTERRUPT_UART2            =  86,
    INTERRUPT_UART3            =  87,
    INTERRUPT_UART4            =  88,
    INTERRUPT_MCT_G0           =  89,
    INTERRUPT_I2C0             =  90,
    INTERRUPT_I2C1             =  91,
    INTERRUPT_I2C2             =  92,
    INTERRUPT_I2C3             =  93,
    INTERRUPT_I2C4             =  94,
    INTERRUPT_I2C5             =  95,
    INTERRUPT_I2C6             =  96,
    INTERRUPT_I2C7             =  97,
    INTERRUPT_SPI0             =  98,
    INTERRUPT_SPI1             =  99,
    INTERRUPT_SPI2             = 100,
    INTERRUPT_MCT_G1           = 101,
    INTERRUPT_USB_HOST         = 102,
    INTERRUPT_USB_DEVICE       = 103,
    INTERRUPT_MODEMIF          = 104,
    INTERRUPT_HSMMC0           = 105,
    INTERRUPT_HSMMC1           = 106,
    INTERRUPT_HSMMC2           = 107,
    INTERRUPT_HSMMC3           = 108,
    INTERRUPT_SDMMC            = 109,
    INTERRUPT_MIPI_CSI_4LANE   = 110,
    INTERRUPT_MIPI_DSI_4LANE   = 111,
    INTERRUPT_MIPI_CSI_2LANE   = 112,
    INTERRUPT_MIPI_DSI_2LANE   = 113,
    INTERRUPT_ONENAND_AUDI     = 114,
    INTERRUPT_ROTATOR          = 115,
    INTERRUPT_FIMC0            = 116,
    INTERRUPT_FIMC1            = 117,
    INTERRUPT_FIMC2            = 118,
    INTERRUPT_FIMC3            = 119,
    INTERRUPT_JPEG             = 120,
    INTERRUPT_2D               = 121,
    INTERRUPT_PCIE             = 122,
    INTERRUPT_MIXER            = 123,
    INTERRUPT_HDMI             = 124,
    INTERRUPT_HDMI_I2C         = 125,
    INTERRUPT_MFC              = 126,
    INTERRUPT_TVENC            = 127,
    INTERRUPT_AUDIO_SS         = 128,
    INTERRUPT_I2S0             = 129,
    INTERRUPT_I2S1             = 130,
    INTERRUPT_I2S2             = 131,
    INTERRUPT_AC97             = 132,
    INTERRUPT_PCM0             = 133,
    INTERRUPT_PCM1             = 134,
    INTERRUPT_PCM2             = 135,
    INTERRUPT_SPDIF            = 136,
    INTERRUPT_ADC0             = 137,
    INTERRUPT_PEN0             = 138,
    INTERRUPT_ADC1             = 139,
    INTERRUPT_PEN1             = 140,
    INTERRUPT_KEYPAD           = 141,
    INTERRUPT_PMU              = 142,
    INTERRUPT_GPS              = 143,
    INTERRUPT_INTFEEDCTRL_SSS  = 144,
    INTERRUPT_SLIMBUS          = 145,
    INTERRUPT_CEC              = 146,
    INTERRUPT_TSI              = 147,
    INTERRUPT_SATA             = 148,
    INTERRUPT_G3D_IRQPMU       = 149,
    INTERRUPT_G3D_IRQPPMMU0    = 150,
    INTERRUPT_G3D_IRQPPMMU1    = 151,
    INTERRUPT_G3D_IRQPPMMU2    = 152,
    INTERRUPT_G3D_IRQPPMMU3    = 153,
    INTERRUPT_G3D_IRQGPMMU     = 154,
    INTERRUPT_G3D_IRQPP0       = 155,
    INTERRUPT_G3D_IRQPP1       = 156,
    INTERRUPT_G3D_IRQPP2       = 157,
    INTERRUPT_G3D_IRQPP3       = 158,
    INTERRUPT_G3D_IRQGP        = 159,
    maxIRQ = 159
} platform_interrupt_t;

#define KERNEL_TIMER_IRQ INTERRUPT_MCTG1

#include <arch/machine/gic_pl390.h>

#endif /* !__PLAT_MACHINE_H */
