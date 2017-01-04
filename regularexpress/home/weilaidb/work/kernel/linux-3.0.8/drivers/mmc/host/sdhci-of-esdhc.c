static u16 esdhc_readw(struct sdhci_host *host, int reg)
static void esdhc_writew(struct sdhci_host *host, u16 val, int reg)
static void esdhc_writeb(struct sdhci_host *host, u8 val, int reg)
static int esdhc_of_enable_dma(struct sdhci_host *host)
static unsigned int esdhc_of_get_max_clock(struct sdhci_host *host)
static unsigned int esdhc_of_get_min_clock(struct sdhci_host *host)
struct sdhci_of_data sdhci_esdhc = ;
