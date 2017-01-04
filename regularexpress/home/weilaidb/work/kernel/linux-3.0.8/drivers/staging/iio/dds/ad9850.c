#define DRV_NAME "ad9850"
#define value_mask (u16)0xf000
#define addr_shift 12
struct ad9850_config ;
struct ad9850_state ;
static ssize_t ad9850_set_parameter(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(dds, S_IWUSR, NULL, ad9850_set_parameter, 0);
static struct attribute *ad9850_attributes[] = ;
static const struct attribute_group ad9850_attribute_group = ;
static const struct iio_info ad9850_info = ;
static int __devinit ad9850_probe(struct spi_device *spi)
static int __devexit ad9850_remove(struct spi_device *spi)
static struct spi_driver ad9850_driver = ;
static __init int ad9850_spi_init(void)
module_init(ad9850_spi_init);
static __exit void ad9850_spi_exit(void)
module_exit(ad9850_spi_exit);
MODULE_AUTHOR("Cliff Cai");
MODULE_DESCRIPTION("Analog Devices ad9850 driver");
MODULE_LICENSE("GPL v2");
