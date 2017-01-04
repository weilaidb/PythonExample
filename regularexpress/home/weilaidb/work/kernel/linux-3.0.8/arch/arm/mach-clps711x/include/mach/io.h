#define __ASM_ARM_ARCH_IO_H
#define IO_SPACE_LIMIT 0xffffffff
#define __io(a)		__typesafe_io(a)
#define __mem_pci(a)	(a)
#define __raw_readsb(p,d,l)	do  while (0)
#define __raw_readsl(p,d,l)	do  while (0)
#define __raw_writesb(p,d,l)	do  while (0)
#define __raw_writesl(p,d,l)	do  while (0)
