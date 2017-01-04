#define ASMARM_ARCH_MMC_H
struct device;
struct mmc_host;
struct pxamci_platform_data ;
extern void pxa_set_mci_info(struct pxamci_platform_data *info);
extern void pxa3xx_set_mci2_info(struct pxamci_platform_data *info);
extern void pxa3xx_set_mci3_info(struct pxamci_platform_data *info);
