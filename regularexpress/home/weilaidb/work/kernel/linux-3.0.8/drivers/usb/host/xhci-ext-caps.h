#define XHCI_MAX_HALT_USEC	(16*1000)
#define XHCI_STS_HALT		(1<<0)
#define XHCI_HCC_PARAMS_OFFSET	0x10
#define XHCI_HCC_EXT_CAPS(p)	(((p)>>16)&0xffff)
#define XHCI_CMD_OFFSET		0x00
#define XHCI_STS_OFFSET		0x04
#define XHCI_MAX_EXT_CAPS		50
#define XHCI_HC_LENGTH(p)	(((p)>>00)&0x00ff)
#define XHCI_EXT_CAPS_ID(p)	(((p)>>0)&0xff)
#define XHCI_EXT_CAPS_NEXT(p)	(((p)>>8)&0xff)
#define	XHCI_EXT_CAPS_VAL(p)	((p)>>16)
#define XHCI_EXT_CAPS_LEGACY	1
#define XHCI_EXT_CAPS_PROTOCOL	2
#define XHCI_EXT_CAPS_PM	3
#define XHCI_EXT_CAPS_VIRT	4
#define XHCI_EXT_CAPS_ROUTE	5
#define XHCI_EXT_CAPS_DEBUG	10
#define XHCI_HC_BIOS_OWNED	(1 << 16)
#define XHCI_HC_OS_OWNED	(1 << 24)
#define XHCI_LEGACY_SUPPORT_OFFSET	(0x00)
#define XHCI_LEGACY_CONTROL_OFFSET	(0x04)
#define	XHCI_LEGACY_DISABLE_SMI		((0x3 << 1) + (0xff << 5) + (0x7 << 17))
#define XHCI_CMD_RUN		(1 << 0)
#define XHCI_CMD_EIE		(1 << 2)
#define XHCI_CMD_HSEIE		(1 << 3)
#define XHCI_CMD_EWE		(1 << 10)
#define XHCI_IRQS		(XHCI_CMD_EIE | XHCI_CMD_HSEIE | XHCI_CMD_EWE)
#define XHCI_STS_CNR		(1 << 11)
static inline int xhci_find_next_cap_offset(void __iomem *base, int ext_offset)
static inline int xhci_find_ext_cap_by_id(void __iomem *base, int ext_offset, int id)
