#define TCO_RLD(base)	((base) + 0x00)
#define TCO_TMR(base)	((base) + 0x01)
#define TCO_STS(base)	((base) + 0x04)
#  define TCO_STS_BOOT_STS	(1 << 9)
#  define TCO_STS_TCO_INT_STS	(1 << 1)
#  define TCO_STS_TCO2TO_STS	(1 << 10)
#  define TCO_STS_RESET		(TCO_STS_BOOT_STS | TCO_STS_TCO2TO_STS | \
TCO_STS_TCO_INT_STS)
#define TCO_CNT(base)	((base) + 0x08)
#  define TCO_CNT_TCOHALT	(1 << 12)
#define MCP51_SMBUS_SETUP_B 0xe8
#  define MCP51_SMBUS_SETUP_B_TCO_REBOOT (1 << 25)
#define MCP51_SMI_EN(base)	((base) - 0x40 + 0x04)
#  define MCP51_SMI_EN_TCO	((1 << 4) | (1 << 5))
