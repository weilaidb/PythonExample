#define _bcmchip_h_
#define CORE_CC_REG(base, field)	(base + offsetof(chipcregs_t, field))
#define CORE_BUS_REG(base, field)	(base + offsetof(sdpcmd_regs_t, field))
#define CORE_SB(base, field) \
(base + SBCONFIGOFF + offsetof(sbconfig_t, field))
#define BCM4329_CORE_BUS_BASE		0x18011000
#define BCM4329_CORE_SOCRAM_BASE	0x18003000
#define BCM4329_CORE_ARM_BASE		0x18002000
#define BCM4329_RAMSIZE			0x48000
