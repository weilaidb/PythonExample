#define __MACH_MXS_IO_H__
#define IO_SPACE_LIMIT 0xffffffff
#define __io(a)		__typesafe_io(a)
#define __mem_pci(a)	(a)
