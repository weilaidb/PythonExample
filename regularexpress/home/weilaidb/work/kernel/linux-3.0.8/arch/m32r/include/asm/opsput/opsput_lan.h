#define _OPSPUT_OPSPUT_LAN_H
#define OPSPUT_LAN_BASE	(0x10000000)
#define OPSPUT_LAN_BASE	(0x10000000 + NONCACHE_OFFSET)
#define OPSPUT_LAN_IRQ_LAN	(OPSPUT_LAN_PLD_IRQ_BASE + 1)
#define OPSPUT_LAN_IRQ_I2C	(OPSPUT_LAN_PLD_IRQ_BASE + 3)
#define OPSPUT_LAN_ICUISTS	__reg16(OPSPUT_LAN_BASE + 0xc0002)
#define OPSPUT_LAN_ICUISTS_VECB_MASK	(0xf000)
#define OPSPUT_LAN_VECB(x)	((x) & OPSPUT_LAN_ICUISTS_VECB_MASK)
#define OPSPUT_LAN_ICUISTS_ISN_MASK	(0x07c0)
#define OPSPUT_LAN_ICUISTS_ISN(x)	((x) & OPSPUT_LAN_ICUISTS_ISN_MASK)
#define OPSPUT_LAN_ICUIREQ0	__reg16(OPSPUT_LAN_BASE + 0xc0004)
#define OPSPUT_LAN_ICUCR1	__reg16(OPSPUT_LAN_BASE + 0xc0010)
#define OPSPUT_LAN_ICUCR3	__reg16(OPSPUT_LAN_BASE + 0xc0014)
