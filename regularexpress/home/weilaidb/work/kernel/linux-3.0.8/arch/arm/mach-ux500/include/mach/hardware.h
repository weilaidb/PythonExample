#define __MACH_HARDWARE_H
#define U8500_IO_VIRTUAL	0xf0000000
#define U8500_IO_PHYSICAL	0xa0000000
#define IO_ADDRESS(x)           \
(((x) & 0x0fffffff) + (((x) >> 4) & 0x0f000000) + U8500_IO_VIRTUAL)
#define __io_address(n)		__io(IO_ADDRESS(n))
#define io_p2v(n)		__io_address(n)
extern void __iomem *_PRCMU_BASE;
#define ARRAY_AND_SIZE(x)	(x), ARRAY_SIZE(x)
