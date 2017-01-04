#define __MACH_MXS_HARDWARE_H__
#define IOMEM(addr)	(addr)
#define IOMEM(addr)	((void __force __iomem *)(addr))
