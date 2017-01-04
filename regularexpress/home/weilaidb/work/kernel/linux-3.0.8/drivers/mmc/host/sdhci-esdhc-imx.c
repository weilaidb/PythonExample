#define SDHCI_VENDOR_SPEC		0xC0
#define  SDHCI_VENDOR_SPEC_SDIO_QUIRK	0x00000002
#define ESDHC_FLAG_GPIO_FOR_CD_WP	(1 << 0)
#define ESDHC_FLAG_MULTIBLK_NO_INT	(1 << 1)
struct pltfm_imx_data ;
static inline void esdhc_clrset_le(struct sdhci_host *host, u32 mask, u32 val, int reg)
static u32 esdhc_readl_le(struct sdhci_host *host, int reg)
static void esdhc_writel_le(struct sdhci_host *host, u32 val, int reg)
static u16 esdhc_readw_le(struct sdhci_host *host, int reg)
static void esdhc_writew_le(struct sdhci_host *host, u16 val, int reg)
static void esdhc_writeb_le(struct sdhci_host *host, u8 val, int reg)
static unsigned int esdhc_pltfm_get_max_clock(struct sdhci_host *host)
static unsigned int esdhc_pltfm_get_min_clock(struct sdhci_host *host)
static unsigned int esdhc_pltfm_get_ro(struct sdhci_host *host)
static struct sdhci_ops sdhci_esdhc_ops = ;
static irqreturn_t cd_irq(int irq, void *data)
;
static int esdhc_pltfm_init(struct sdhci_host *host, struct sdhci_pltfm_data *pdata)
static void esdhc_pltfm_exit(struct sdhci_host *host)
struct sdhci_pltfm_data sdhci_esdhc_imx_pdata = ;
