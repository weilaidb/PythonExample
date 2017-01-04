#define DRIVER_NAME	"sdhci-pxa"
#define SD_FIFO_PARAM		0x104
#define DIS_PAD_SD_CLK_GATE	0x400
struct sdhci_pxa ;
static void set_clock(struct sdhci_host *host, unsigned int clock)
static int set_uhs_signaling(struct sdhci_host *host, unsigned int uhs)
static struct sdhci_ops sdhci_pxa_ops = ;
static int __devinit sdhci_pxa_probe(struct platform_device *pdev)
static int __devexit sdhci_pxa_remove(struct platform_device *pdev)
static int sdhci_pxa_suspend(struct platform_device *dev, pm_message_t state)
static int sdhci_pxa_resume(struct platform_device *dev)
#define sdhci_pxa_suspend	NULL
#define sdhci_pxa_resume	NULL
static struct platform_driver sdhci_pxa_driver = ;
static int __init sdhci_pxa_init(void)
static void __exit sdhci_pxa_exit(void)
module_init(sdhci_pxa_init);
module_exit(sdhci_pxa_exit);
MODULE_DESCRIPTION("SDH controller driver for PXA168/PXA910/MMP2");
MODULE_AUTHOR("Zhangfei Gao <zhangfei.gao@marvell.com>");
MODULE_LICENSE("GPL v2");
