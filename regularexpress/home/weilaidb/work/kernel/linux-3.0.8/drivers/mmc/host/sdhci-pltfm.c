static struct sdhci_ops sdhci_pltfm_ops = ;
static int __devinit sdhci_pltfm_probe(struct platform_device *pdev)
static int __devexit sdhci_pltfm_remove(struct platform_device *pdev)
static const struct platform_device_id sdhci_pltfm_ids[] = ;
MODULE_DEVICE_TABLE(platform, sdhci_pltfm_ids);
static int sdhci_pltfm_suspend(struct platform_device *dev, pm_message_t state)
static int sdhci_pltfm_resume(struct platform_device *dev)
#define sdhci_pltfm_suspend	NULL
#define sdhci_pltfm_resume	NULL
static struct platform_driver sdhci_pltfm_driver = ;
static int __init sdhci_drv_init(void)
static void __exit sdhci_drv_exit(void)
module_init(sdhci_drv_init);
module_exit(sdhci_drv_exit);
MODULE_DESCRIPTION("Secure Digital Host Controller Interface platform driver");
MODULE_AUTHOR("Mocean Laboratories <info@mocean-labs.com>");
MODULE_LICENSE("GPL v2");
