#define __ASM_ARM_ARCH_IO_H
#define IO_SPACE_LIMIT 0xffff
#define __io(a)		__typesafe_io((a) + 0xf0000000)
#define __mem_pci(a)	(a)
