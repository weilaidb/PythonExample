#if defined(CONFIG_MMC_OMAP) || defined(CONFIG_MMC_OMAP_MODULE)
static int mmc_set_power(struct device *dev, int slot, int power_on,
int vdd)
static struct omap_mmc_platform_data mmc1_data = ;
static struct omap_mmc_platform_data *mmc_data[OMAP16XX_NR_MMC];
void __init h3_mmc_init(void)
void __init h3_mmc_init(void)
