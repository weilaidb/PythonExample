static struct iio_chan_spec ad7298_channels[] = ;
static int ad7298_scan_direct(struct ad7298_state *st, unsigned ch)
static int ad7298_scan_temp(struct ad7298_state *st, int *val)
static int ad7298_read_raw(struct iio_dev *dev_info,
struct iio_chan_spec const *chan,
int *val,
int *val2,
long m)
static const struct iio_info ad7298_info = ;
static int __devinit ad7298_probe(struct spi_device *spi)
static int __devexit ad7298_remove(struct spi_device *spi)
static const struct spi_device_id ad7298_id[] = ;
static struct spi_driver ad7298_driver = ;
static int __init ad7298_init(void)
module_init(ad7298_init);
static void __exit ad7298_exit(void)
module_exit(ad7298_exit);
MODULE_AUTHOR("Michael Hennerich <hennerich@blackfin.uclinux.org>");
MODULE_DESCRIPTION("Analog Devices AD7298 ADC");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("spi:ad7298");
