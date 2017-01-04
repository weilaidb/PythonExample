#define _ASM_POWERPC_TCE_H
#define TCE_VB  0
#define TCE_PCI 1
#define TCE_SHIFT	12
#define TCE_PAGE_SIZE	(1 << TCE_SHIFT)
#define TCE_ENTRY_SIZE		8
#define TCE_RPN_MASK		0xfffffffffful
#define TCE_RPN_SHIFT		12
#define TCE_VALID		0x800
#define TCE_ALLIO		0x400
#define TCE_PCI_WRITE		0x2
#define TCE_PCI_READ		0x1
#define TCE_VB_WRITE		0x1
