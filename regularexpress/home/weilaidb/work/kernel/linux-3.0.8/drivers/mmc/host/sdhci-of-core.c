u32 sdhci_be32bs_readl(struct sdhci_host *host, int reg)
u16 sdhci_be32bs_readw(struct sdhci_host *host, int reg)
u8 sdhci_be32bs_readb(struct sdhci_host *host, int reg)
void sdhci_be32bs_writel(struct sdhci_host *host, u32 val, int reg)
void sdhci_be32bs_writew(struct sdhci_host *host, u16 val, int reg)
void sdhci_be32bs_writeb(struct sdhci_host *host, u8 val, int reg)
static int sdhci_of_suspend(struct platform_device *ofdev, pm_message_t state)
static int sdhci_of_resume(struct platform_device *ofdev)
#define sdhci_of_suspend NULL
#define sdhci_of_resume NULL
static bool __devinit sdhci_of_wp_inverted(struct device_node *np)
static const struct of_device_id sdhci_of_match[];
static int __devinit sdhci_of_probe(struct platform_device *ofdev)
static int __devexit sdhci_of_remove(struct platform_device *ofdev)
static const struct of_device_id sdhci_of_match[] = ;
MODULE_DEVICE_TABLE(of, sdhci_of_match);
static struct platform_driver sdhci_of_driver = ;
static int __init sdhci_of_init(void)
module_init(sdhci_of_init);
static void __exit sdhci_of_exit(void)
module_exit(sdhci_of_exit);
MODULE_DESCRIPTION("Secure Digital Host Controller Interface OF driver");
MODULE_AUTHOR("Xiaobo Xie <X.Xie@freescale.com>, "
"Anton Vorontsov <avorontsov@ru.mvista.com>");
MODULE_LICENSE("GPL");
