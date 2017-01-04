#define DRV_NAME "ad2s90"
struct ad2s90_state ;
static ssize_t ad2s90_show_angular(struct device *dev,
struct device_attribute *attr, char *buf)
#define IIO_DEV_ATTR_SIMPLE_RESOLVER(_show) \
IIO_DEVICE_ATTR(angular, S_IRUGO, _show, NULL, 0)
static IIO_CONST_ATTR(description,
"Low Cost, Complete 12-Bit Resolver-to-Digital Converter");
static IIO_DEV_ATTR_SIMPLE_RESOLVER(ad2s90_show_angular);
static struct attribute *ad2s90_attributes[] = ;
static const struct attribute_group ad2s90_attribute_group = ;
static const struct iio_info ad2s90_info = ;
static int __devinit ad2s90_probe(struct spi_device *spi)
static int __devexit ad2s90_remove(struct spi_device *spi)
static struct spi_driver ad2s90_driver = ;
static __init int ad2s90_spi_init(void)
module_init(ad2s90_spi_init);
static __exit void ad2s90_spi_exit(void)
module_exit(ad2s90_spi_exit);
MODULE_AUTHOR("Graff Yang <graff.yang@gmail.com>");
MODULE_DESCRIPTION("Analog Devices AD2S90 Resolver to Digital SPI driver");
MODULE_LICENSE("GPL v2");
