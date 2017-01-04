struct mmc_card;
struct omap2_hsmmc_info ;
#if defined(CONFIG_MMC_OMAP_HS) || defined(CONFIG_MMC_OMAP_HS_MODULE)
void omap2_hsmmc_init(struct omap2_hsmmc_info *);
static inline void omap2_hsmmc_init(struct omap2_hsmmc_info *info)
