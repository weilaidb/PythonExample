static int ad7476_scan_direct(struct ad7476_state *st)
static int ad7476_read_raw(struct iio_dev *dev_info,
struct iio_chan_spec const *chan,
int *val,
int *val2,
long m)
static const struct ad7476_chip_info ad7476_chip_info_tbl[] = ;
static const struct iio_info ad7476_info = ;
static int __devinit ad7476_probe(struct spi_device *spi)
static int ad7476_remove(struct spi_device *spi)
static const struct spi_device_id ad7476_id[] = ;
static struct spi_driver ad7476_driver = ;
static int __init ad7476_init(void)
module_init(ad7476_init);
static void __exit ad7476_exit(void)
module_exit(ad7476_exit);
MODULE_AUTHOR("Michael Hennerich <hennerich@blackfin.uclinux.org>");
MODULE_DESCRIPTION("Analog Devices AD7475/6/7/8(A) AD7466/7/8 ADC");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("spi:ad7476");
