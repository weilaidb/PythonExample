static int ad7606_par16_read_block(struct device *dev,
int count, void *buf)
static const struct ad7606_bus_ops ad7606_par16_bops = ;
static int ad7606_par8_read_block(struct device *dev,
int count, void *buf)
static const struct ad7606_bus_ops ad7606_par8_bops = ;
static int __devinit ad7606_par_probe(struct platform_device *pdev)
static int __devexit ad7606_par_remove(struct platform_device *pdev)
static int ad7606_par_suspend(struct device *dev)
static int ad7606_par_resume(struct device *dev)
static const struct dev_pm_ops ad7606_pm_ops = ;
#define AD7606_PAR_PM_OPS (&ad7606_pm_ops)
#define AD7606_PAR_PM_OPS NULL
static struct platform_device_id ad7606_driver_ids[] = ;
MODULE_DEVICE_TABLE(platform, ad7606_driver_ids);
static struct platform_driver ad7606_driver = ;
static int __init ad7606_init(void)
static void __exit ad7606_cleanup(void)
module_init(ad7606_init);
module_exit(ad7606_cleanup);
MODULE_AUTHOR("Michael Hennerich <hennerich@blackfin.uclinux.org>");
MODULE_DESCRIPTION("Analog Devices AD7606 ADC");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:ad7606_par");
