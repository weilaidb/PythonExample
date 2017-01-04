#define __OMAP2_MMC_H
#define OMAP15XX_NR_MMC		1
#define OMAP16XX_NR_MMC		2
#define OMAP1_MMC_SIZE		0x080
#define OMAP1_MMC1_BASE		0xfffb7800
#define OMAP1_MMC2_BASE		0xfffb7c00
#define OMAP24XX_NR_MMC		2
#define OMAP2420_MMC_SIZE	OMAP1_MMC_SIZE
#define OMAP2_MMC1_BASE		0x4809c000
#define OMAP4_MMC_REG_OFFSET	0x100
#define OMAP_MMC_MAX_SLOTS	2
#define OMAP_HSMMC_SUPPORTS_DUAL_VOLT	BIT(1)
struct omap_mmc_dev_attr ;
struct omap_mmc_platform_data ;
extern void omap_mmc_notify_cover_event(struct device *dev, int slot,
int is_closed);
#if	defined(CONFIG_MMC_OMAP) || defined(CONFIG_MMC_OMAP_MODULE) || \
defined(CONFIG_MMC_OMAP_HS) || defined(CONFIG_MMC_OMAP_HS_MODULE)
void omap1_init_mmc(struct omap_mmc_platform_data **mmc_data,
int nr_controllers);
void omap242x_init_mmc(struct omap_mmc_platform_data **mmc_data);
int omap_mmc_add(const char *name, int id, unsigned long base,
unsigned long size, unsigned int irq,
struct omap_mmc_platform_data *data);
static inline void omap1_init_mmc(struct omap_mmc_platform_data **mmc_data,
int nr_controllers)
static inline void omap242x_init_mmc(struct omap_mmc_platform_data **mmc_data)
static inline int omap_mmc_add(const char *name, int id, unsigned long base,
unsigned long size, unsigned int irq,
struct omap_mmc_platform_data *data)
