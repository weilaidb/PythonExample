#define _OMAP_WATCHDOG_H
#define OMAP_WATCHDOG_REV		(0x00)
#define OMAP_WATCHDOG_SYS_CONFIG	(0x10)
#define OMAP_WATCHDOG_STATUS		(0x14)
#define OMAP_WATCHDOG_CNTRL		(0x24)
#define OMAP_WATCHDOG_CRR		(0x28)
#define OMAP_WATCHDOG_LDR		(0x2c)
#define OMAP_WATCHDOG_TGR		(0x30)
#define OMAP_WATCHDOG_WPS		(0x34)
#define OMAP_WATCHDOG_SPR		(0x48)
#define TIMER_MARGIN_MAX	(24 * 60 * 60)
#define TIMER_MARGIN_DEFAULT	60
#define TIMER_MARGIN_MIN	1
#define PTV			0
#define GET_WLDR_VAL(secs)	(0xffffffff - ((secs) * (32768/(1<<PTV))) + 1)
