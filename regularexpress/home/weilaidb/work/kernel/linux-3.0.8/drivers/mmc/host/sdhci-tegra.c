static u32 tegra_sdhci_readl(struct sdhci_host *host, int reg)
static u16 tegra_sdhci_readw(struct sdhci_host *host, int reg)
static void tegra_sdhci_writel(struct sdhci_host *host, u32 val, int reg)
static unsigned int tegra_sdhci_get_ro(struct sdhci_host *sdhci)
static irqreturn_t carddetect_irq(int irq, void *data)
;
static int tegra_sdhci_8bit(struct sdhci_host *host, int bus_width)
static int tegra_sdhci_pltfm_init(struct sdhci_host *host,
struct sdhci_pltfm_data *pdata)
static void tegra_sdhci_pltfm_exit(struct sdhci_host *host)
static struct sdhci_ops tegra_sdhci_ops = ;
struct sdhci_pltfm_data sdhci_tegra_pdata = ;
