#define __ARCH_ARM_PLAT_OMAP_INCLUDE_PLAT_CLKDEV_OMAP_H
struct omap_clk ;
#define CLK(dev, con, ck, cp) 		\
#define CK_310		(1 << 0)
#define CK_7XX		(1 << 1)
#define CK_1510		(1 << 2)
#define CK_16XX		(1 << 3)
#define CK_242X		(1 << 4)
#define CK_243X		(1 << 5)
#define CK_3430ES1	(1 << 6)
#define CK_3430ES2PLUS	(1 << 7)
#define CK_3505		(1 << 8)
#define CK_3517		(1 << 9)
#define CK_36XX		(1 << 10)
#define CK_443X		(1 << 11)
#define CK_TI816X	(1 << 12)
#define CK_34XX		(CK_3430ES1 | CK_3430ES2PLUS)
#define CK_AM35XX	(CK_3505 | CK_3517)
#define CK_3XXX		(CK_34XX | CK_AM35XX | CK_36XX)
