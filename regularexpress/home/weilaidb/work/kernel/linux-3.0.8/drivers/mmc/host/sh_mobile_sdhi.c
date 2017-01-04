struct sh_mobile_sdhi ;
static void sh_mobile_sdhi_set_pwr(struct platform_device *pdev, int state)
static int sh_mobile_sdhi_get_cd(struct platform_device *pdev)
static int __devinit sh_mobile_sdhi_probe(struct platform_device *pdev)
static int sh_mobile_sdhi_remove(struct platform_device *pdev)
static const struct dev_pm_ops tmio_mmc_dev_pm_ops = ;
static struct platform_driver sh_mobile_sdhi_driver = ;
static int __init sh_mobile_sdhi_init(void)
static void __exit sh_mobile_sdhi_exit(void)
module_init(sh_mobile_sdhi_init);
module_exit(sh_mobile_sdhi_exit);
MODULE_DESCRIPTION("SuperH Mobile SDHI driver");
MODULE_AUTHOR("Magnus Damm");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:sh_mobile_sdhi");
