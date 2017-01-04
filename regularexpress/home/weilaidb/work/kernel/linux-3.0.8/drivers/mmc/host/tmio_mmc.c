static int tmio_mmc_suspend(struct platform_device *dev, pm_message_t state)
static int tmio_mmc_resume(struct platform_device *dev)
#define tmio_mmc_suspend NULL
#define tmio_mmc_resume NULL
static int __devinit tmio_mmc_probe(struct platform_device *pdev)
static int __devexit tmio_mmc_remove(struct platform_device *pdev)
static struct platform_driver tmio_mmc_driver = ;
static int __init tmio_mmc_init(void)
static void __exit tmio_mmc_exit(void)
module_init(tmio_mmc_init);
module_exit(tmio_mmc_exit);
MODULE_DESCRIPTION("Toshiba TMIO SD/MMC driver");
MODULE_AUTHOR("Ian Molton <spyro@f2s.com>");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:tmio-mmc");
