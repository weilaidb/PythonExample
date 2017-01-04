#define MMC_SDHCI_SPEAR_H
struct sdhci_plat_data ;
static inline void
sdhci_set_plat_data(struct platform_device *pdev, struct sdhci_plat_data *data)
