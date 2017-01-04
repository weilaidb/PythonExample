#define __ASM_ARCH_OMAP_H3_H
#define H3_TPS_GPIO_BASE		(OMAP_MAX_GPIO_LINES + 16)
#	define H3_TPS_GPIO_MMC_PWR_EN	(H3_TPS_GPIO_BASE + 4)
extern void h3_mmc_init(void);
