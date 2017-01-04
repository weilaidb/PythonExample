#define MAX_SPI_FREQ_HZ		23500000
static int ad7606_spi_read_block(struct device *dev,
int count, void *buf)
static const struct ad7606_bus_ops ad7606_spi_bops = ;
static int __devinit ad7606_spi_probe(struct spi_device *spi)
static int __devexit ad7606_spi_remove(struct spi_device *spi)
static int ad7606_spi_suspend(struct device *dev)
static int ad7606_spi_resume(struct device *dev)
static const struct dev_pm_ops ad7606_pm_ops = ;
#define AD7606_SPI_PM_OPS (&ad7606_pm_ops)
#define AD7606_SPI_PM_OPS NULL
static const struct spi_device_id ad7606_id[] = ;
static struct spi_driver ad7606_driver = ;
static int __init ad7606_spi_init(void)
module_init(ad7606_spi_init);
static void __exit ad7606_spi_exit(void)
module_exit(ad7606_spi_exit);
MODULE_AUTHOR("Michael Hennerich <hennerich@blackfin.uclinux.org>");
MODULE_DESCRIPTION("Analog Devices AD7606 ADC");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("spi:ad7606_spi");
