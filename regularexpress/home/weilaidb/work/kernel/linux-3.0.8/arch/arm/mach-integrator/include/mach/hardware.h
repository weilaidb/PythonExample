#define __ASM_ARCH_HARDWARE_H
#define IO_BASE			0xF0000000
#define IO_SIZE			0x0B000000
#define IO_START		INTEGRATOR_HDR_BASE
#define PCIMEM_BASE		PCI_MEMORY_VADDR
#define pcibios_assign_all_busses()	1
#define PCIBIOS_MIN_IO		0x6000
#define PCIBIOS_MIN_MEM 	0x00100000
#define IO_ADDRESS(x)	(((x) & 0x000fffff) | (((x) >> 4) & 0x0ff00000) | IO_BASE)
#define IO_ADDRESS(x)	(x)
#define __io_address(n)		((void __iomem *)IO_ADDRESS(n))
