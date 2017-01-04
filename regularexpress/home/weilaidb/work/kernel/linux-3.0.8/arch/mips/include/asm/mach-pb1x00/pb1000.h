#define __ASM_PB1000_H
#define PCMCIA_MAX_SOCK  1
#define PCMCIA_NUM_SOCKS (PCMCIA_MAX_SOCK + 1)
#define PB1000_PCR		0xBE000000
#  define PCR_SLOT_0_VPP0	(1 << 0)
#  define PCR_SLOT_0_VPP1	(1 << 1)
#  define PCR_SLOT_0_VCC0	(1 << 2)
#  define PCR_SLOT_0_VCC1	(1 << 3)
#  define PCR_SLOT_0_RST	(1 << 4)
#  define PCR_SLOT_1_VPP0	(1 << 8)
#  define PCR_SLOT_1_VPP1	(1 << 9)
#  define PCR_SLOT_1_VCC0	(1 << 10)
#  define PCR_SLOT_1_VCC1	(1 << 11)
#  define PCR_SLOT_1_RST	(1 << 12)
#define PB1000_MDR		0xBE000004
#  define MDR_PI		(1 << 5)
#  define MDR_EPI		(1 << 14)
#  define MDR_CPI		(1 << 15)
#define PB1000_ACR1		0xBE000008
#  define ACR1_SLOT_0_CD1	(1 << 0)
#  define ACR1_SLOT_0_CD2	(1 << 1)
#  define ACR1_SLOT_0_READY	(1 << 2)
#  define ACR1_SLOT_0_STATUS	(1 << 3)
#  define ACR1_SLOT_0_VS1	(1 << 4)
#  define ACR1_SLOT_0_VS2	(1 << 5)
#  define ACR1_SLOT_0_INPACK	(1 << 6)
#  define ACR1_SLOT_1_CD1	(1 << 8)
#  define ACR1_SLOT_1_CD2	(1 << 9)
#  define ACR1_SLOT_1_READY	(1 << 10)
#  define ACR1_SLOT_1_STATUS	(1 << 11)
#  define ACR1_SLOT_1_VS1	(1 << 12)
#  define ACR1_SLOT_1_VS2	(1 << 13)
#  define ACR1_SLOT_1_INPACK	(1 << 14)
#define CPLD_AUX0		0xBE00000C
#define CPLD_AUX1		0xBE000010
#define CPLD_AUX2		0xBE000014
#define VPP_GND ((0 << 1) | (0 << 0))
#define VPP_5V	((1 << 1) | (0 << 0))
#define VPP_3V	((0 << 1) | (1 << 0))
#define VPP_12V ((0 << 1) | (1 << 0))
#define VPP_HIZ ((1 << 1) | (1 << 0))
#define VCC_3V	((0 << 1) | (1 << 0))
#define VCC_5V	((1 << 1) | (0 << 0))
#define VCC_HIZ ((0 << 1) | (0 << 0))
#define SET_VCC_VPP(VCC, VPP, SLOT) \
((((VCC) << 2) | ((VPP) << 0)) << ((SLOT) * 8))
