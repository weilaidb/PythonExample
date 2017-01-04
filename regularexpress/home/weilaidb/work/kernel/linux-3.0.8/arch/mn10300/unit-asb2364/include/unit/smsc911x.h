#define _ASM_UNIT_SMSC911X_H
#define MN10300_USE_EXT_EEPROM
#define SMSC911X_BASE		0xA8000000UL
#define SMSC911X_BASE_END	0xA8000100UL
#define SMSC911X_IRQ		FPGA_LAN_IRQ
#undef SMSC_INITIALIZE
#define SMSC_INITIALIZE()					\
do  while (0)
#define EEPROM_ADDRESS	0xA0
#define MAC_OFFSET	0x0008
#define USE_IIC_CH	0
#define IIC_OFFSET	(0x80000 * USE_IIC_CH)
#define IIC_DTRM	__SYSREG(0xd8400000 + IIC_OFFSET, u32)
#define IIC_DREC	__SYSREG(0xd8400004 + IIC_OFFSET, u32)
#define IIC_MYADD	__SYSREG(0xd8400008 + IIC_OFFSET, u32)
#define IIC_CLK		__SYSREG(0xd840000c + IIC_OFFSET, u32)
#define IIC_BRST	__SYSREG(0xd8400010 + IIC_OFFSET, u32)
#define IIC_HOLD	__SYSREG(0xd8400014 + IIC_OFFSET, u32)
#define IIC_BSTS	__SYSREG(0xd8400018 + IIC_OFFSET, u32)
#define IIC_ICR		__SYSREG(0xd4000080 + 4 * USE_IIC_CH, u16)
#define IIC_CLK_PLS	((unsigned short)(MN10300_IOCLK / 100000 - 1))
#define IIC_CLK_LOW	((unsigned short)(IIC_CLK_PLS / 2))
#define SYS_IIC_DTRM_Bit_STA	((unsigned short)0x0400)
#define SYS_IIC_DTRM_Bit_STO	((unsigned short)0x0200)
#define SYS_IIC_DTRM_Bit_ACK	((unsigned short)0x0100)
#define SYS_IIC_DTRM_Bit_DATA	((unsigned short)0x00FF)
static inline void POLL_INT_REQ(volatile u16 *icr)
#undef smsc_get_mac
static inline int smsc_get_mac(struct net_device *dev)
