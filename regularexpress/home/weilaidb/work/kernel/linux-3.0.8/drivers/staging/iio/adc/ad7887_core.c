static int ad7887_scan_direct(struct ad7887_state *st, unsigned ch)
static int ad7887_read_raw(struct iio_dev *dev_info,
struct iio_chan_spec const *chan,
int *val,
int *val2,
long m)
static const struct ad7887_chip_info ad7887_chip_info_tbl[] = ;
static const struct iio_info ad7887_info = ;
static int __devinit ad7887_probe(struct spi_device *spi)
static int ad7887_remove(struct spi_device *spi)
static const struct spi_device_id ad7887_id[] = ;
static struct spi_driver ad7887_driver = ;
static int __init ad7887_init(void)
module_init(ad7887_init);
static void __exit ad7887_exit(void)
module_exit(ad7887_exit);
MODULE_AUTHOR("Michael Hennerich <hennerich@blackfin.uclinux.org>");
MODULE_DESCRIPTION("Analog Devices AD7887 ADC");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("spi:ad7887");
