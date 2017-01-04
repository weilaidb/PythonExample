#define __ASM_ARCH_HARDWARE_H
#define DAVINCI_SYSTEM_MODULE_BASE        0x01C40000
#define IO_PHYS				0x01c00000UL
#define IO_OFFSET			0xfd000000
#define IO_SIZE				0x00400000
#define IO_VIRT				(IO_PHYS + IO_OFFSET)
#define io_v2p(va)			((va) - IO_OFFSET)
#define __IO_ADDRESS(x)			((x) + IO_OFFSET)
#define IO_ADDRESS(pa)			IOMEM(__IO_ADDRESS(pa))
#define IOMEM(x)                	x
#define IOMEM(x)                	((void __force __iomem *)(x))
