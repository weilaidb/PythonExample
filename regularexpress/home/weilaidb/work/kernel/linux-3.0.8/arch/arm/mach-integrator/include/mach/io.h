#define __ASM_ARM_ARCH_IO_H
#define IO_SPACE_LIMIT 0xffff
#define PCI_MEMORY_VADDR        0xe8000000
#define PCI_CONFIG_VADDR        0xec000000
#define PCI_V3_VADDR            0xed000000
#define PCI_IO_VADDR            0xee000000
#define __io(a)			((void __iomem *)(PCI_IO_VADDR + (a)))
#define __mem_pci(a)		(a)
