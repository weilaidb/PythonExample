#define DAC7512_DRV_NAME	"dac7512"
#define DRIVER_VERSION		"1.0"
static ssize_t dac7512_store_val(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(value, S_IWUSR, NULL, dac7512_store_val);
static struct attribute *dac7512_attributes[] = ;
static const struct attribute_group dac7512_attr_group = ;
static int __devinit dac7512_probe(struct spi_device *spi)
static int __devexit dac7512_remove(struct spi_device *spi)
static struct spi_driver dac7512_driver = ;
static int __init dac7512_init(void)
static void __exit dac7512_exit(void)
MODULE_AUTHOR("Daniel Mack <daniel@caiaq.de>");
MODULE_DESCRIPTION("DAC7512 16-bit DAC");
MODULE_LICENSE("GPL v2");
MODULE_VERSION(DRIVER_VERSION);
module_init(dac7512_init);
module_exit(dac7512_exit);
