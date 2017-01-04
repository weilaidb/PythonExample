#define __ASM_ARCH_OMAP_H2_H
#define H2_TPS_GPIO_BASE		(OMAP_MAX_GPIO_LINES + 16)
#	define H2_TPS_GPIO_MMC_PWR_EN	(H2_TPS_GPIO_BASE + 3)
extern void h2_mmc_init(void);
