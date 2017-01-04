#define __ASM_ARCH_HARDWARE_H
#define IO_ADDRESS(x)		(((x) & 0x03ffffff) + 0xfb000000)
#define IO_ADDRESS(x)		(x)
#define __io_address(n)		__io(IO_ADDRESS(n))
