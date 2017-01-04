#define __ASM_ARCH_HARDWARE_H
#define IO_BASE		0xF0000000
#define IO_ADDRESS(x)	(((((x) & 0xff000000) >> 4) | ((x) & 0xfffff)) |\
IO_BASE)
#define io_p2v(x)	((void __iomem *) (unsigned long) IO_ADDRESS(x))
#define io_v2p(x)	((((x) & 0x0ff00000) << 4) | ((x) & 0x000fffff))
