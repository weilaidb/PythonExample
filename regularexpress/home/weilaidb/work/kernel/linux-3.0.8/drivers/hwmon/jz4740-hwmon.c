struct jz4740_hwmon ;
static ssize_t jz4740_hwmon_show_name(struct device *dev,
struct device_attribute *dev_attr, char *buf)
static irqreturn_t jz4740_hwmon_irq(int irq, void *data)
static ssize_t jz4740_hwmon_read_adcin(struct device *dev,
struct device_attribute *dev_attr, char *buf)
static DEVICE_ATTR(name, S_IRUGO, jz4740_hwmon_show_name, NULL);
static DEVICE_ATTR(in0_input, S_IRUGO, jz4740_hwmon_read_adcin, NULL);
static struct attribute *jz4740_hwmon_attributes[] = ;
static const struct attribute_group jz4740_hwmon_attr_group = ;
static int __devinit jz4740_hwmon_probe(struct platform_device *pdev)
static int __devexit jz4740_hwmon_remove(struct platform_device *pdev)
struct platform_driver jz4740_hwmon_driver = ;
static int __init jz4740_hwmon_init(void)
module_init(jz4740_hwmon_init);
static void __exit jz4740_hwmon_exit(void)
module_exit(jz4740_hwmon_exit);
MODULE_DESCRIPTION("JZ4740 SoC HWMON driver");
MODULE_AUTHOR("Lars-Peter Clausen <lars@metafoo.de>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:jz4740-hwmon");
