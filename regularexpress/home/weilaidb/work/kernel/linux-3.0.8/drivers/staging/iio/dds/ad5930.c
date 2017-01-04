#define DRV_NAME "ad5930"
#define value_mask (u16)0xf000
#define addr_shift 12
struct ad5903_config ;
struct ad5930_state ;
static ssize_t ad5930_set_parameter(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(dds, S_IWUSR, NULL, ad5930_set_parameter, 0);
static struct attribute *ad5930_attributes[] = ;
static const struct attribute_group ad5930_attribute_group = ;
static const struct iio_info ad5930_info = ;
static int __devinit ad5930_probe(struct spi_device *spi)
static int __devexit ad5930_remove(struct spi_device *spi)
static struct spi_driver ad5930_driver = ;
static __init int ad5930_spi_init(void)
module_init(ad5930_spi_init);
static __exit void ad5930_spi_exit(void)
module_exit(ad5930_spi_exit);
MODULE_AUTHOR("Cliff Cai");
MODULE_DESCRIPTION("Analog Devices ad5930 driver");
MODULE_LICENSE("GPL v2");
