#define __PLAT_HARDWARE_H
#define IOMEM(x)	((void __iomem __force *)(x))
#define IOMEM(x)	(x)
