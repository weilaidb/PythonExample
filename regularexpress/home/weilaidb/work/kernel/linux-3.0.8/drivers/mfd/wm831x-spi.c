static int wm831x_spi_read_device(struct wm831x *wm831x, unsigned short reg,
int bytes, void *dest)
static int wm831x_spi_write_device(struct wm831x *wm831x, unsigned short reg,
int bytes, void *src)
static int __devinit wm831x_spi_probe(struct spi_device *spi)
static int __devexit wm831x_spi_remove(struct spi_device *spi)
static int wm831x_spi_suspend(struct device *dev)
static const struct dev_pm_ops wm831x_spi_pm = ;
static struct spi_driver wm8310_spi_driver = ;
static struct spi_driver wm8311_spi_driver = ;
static struct spi_driver wm8312_spi_driver = ;
static struct spi_driver wm8320_spi_driver = ;
static struct spi_driver wm8321_spi_driver = ;
static struct spi_driver wm8325_spi_driver = ;
static struct spi_driver wm8326_spi_driver = ;
static int __init wm831x_spi_init(void)
subsys_initcall(wm831x_spi_init);
static void __exit wm831x_spi_exit(void)
module_exit(wm831x_spi_exit);
MODULE_DESCRIPTION("SPI support for WM831x/2x AudioPlus PMICs");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mark Brown");
