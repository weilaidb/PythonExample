#define __PLAT_IO_H
#define IO_SPACE_LIMIT		0xFFFFFFFF
#define __io(a)			__typesafe_io(a)
#define __mem_pci(a)		(a)
