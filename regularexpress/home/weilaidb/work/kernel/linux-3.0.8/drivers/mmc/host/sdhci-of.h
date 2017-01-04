#define __SDHCI_OF_H
struct sdhci_of_data ;
struct sdhci_of_host ;
extern u32 sdhci_be32bs_readl(struct sdhci_host *host, int reg);
extern u16 sdhci_be32bs_readw(struct sdhci_host *host, int reg);
extern u8 sdhci_be32bs_readb(struct sdhci_host *host, int reg);
extern void sdhci_be32bs_writel(struct sdhci_host *host, u32 val, int reg);
extern void sdhci_be32bs_writew(struct sdhci_host *host, u16 val, int reg);
extern void sdhci_be32bs_writeb(struct sdhci_host *host, u8 val, int reg);
extern struct sdhci_of_data sdhci_esdhc;
extern struct sdhci_of_data sdhci_hlwd;
