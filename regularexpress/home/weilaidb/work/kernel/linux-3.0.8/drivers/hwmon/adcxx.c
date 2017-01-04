#define DRVNAME		"adcxx"
struct adcxx ;
static ssize_t adcxx_read(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t adcxx_show_min(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t adcxx_show_max(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t adcxx_set_max(struct device *dev,
struct device_attribute *devattr, const char *buf, size_t count)
static ssize_t adcxx_show_name(struct device *dev, struct device_attribute
*devattr, char *buf)
static struct sensor_device_attribute ad_input[] = ;
static int __devinit adcxx_probe(struct spi_device *spi)
static int __devexit adcxx_remove(struct spi_device *spi)
static const struct spi_device_id adcxx_ids[] = ;
MODULE_DEVICE_TABLE(spi, adcxx_ids);
static struct spi_driver adcxx_driver = ;
static int __init init_adcxx(void)
static void __exit exit_adcxx(void)
module_init(init_adcxx);
module_exit(exit_adcxx);
MODULE_AUTHOR("Marc Pignat");
MODULE_DESCRIPTION("National Semiconductor adcxx8sxxx Linux driver");
MODULE_LICENSE("GPL");
