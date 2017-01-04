#define __ASM_ARCH_HARDWARE_H
#define VERSATILE_PCI_VIRT_BASE		(void __iomem *)0xe8000000ul
#define VERSATILE_PCI_CFG_VIRT_BASE	(void __iomem *)0xe9000000ul
#define PCIBIOS_MIN_IO			0x44000000
#define PCIBIOS_MIN_MEM			0x50000000
#define pcibios_assign_all_busses()     1
#define IO_ADDRESS(x)		(((x) & 0x0fffffff) + (((x) >> 4) & 0x0f000000) + 0xf0000000)
#define __io_address(n)		((void __iomem __force *)IO_ADDRESS(n))
