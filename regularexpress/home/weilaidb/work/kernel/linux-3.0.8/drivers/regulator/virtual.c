struct virtual_consumer_data ;
static void update_voltage_constraints(struct device *dev,
struct virtual_consumer_data *data)
static void update_current_limit_constraints(struct device *dev,
struct virtual_consumer_data *data)
static ssize_t show_min_uV(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t set_min_uV(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_max_uV(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t set_max_uV(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_min_uA(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t set_min_uA(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_max_uA(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t set_max_uA(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_mode(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t set_mode(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(min_microvolts, 0666, show_min_uV, set_min_uV);
static DEVICE_ATTR(max_microvolts, 0666, show_max_uV, set_max_uV);
static DEVICE_ATTR(min_microamps, 0666, show_min_uA, set_min_uA);
static DEVICE_ATTR(max_microamps, 0666, show_max_uA, set_max_uA);
static DEVICE_ATTR(mode, 0666, show_mode, set_mode);
static struct attribute *regulator_virtual_attributes[] = ;
static const struct attribute_group regulator_virtual_attr_group = ;
static int __devinit regulator_virtual_probe(struct platform_device *pdev)
static int __devexit regulator_virtual_remove(struct platform_device *pdev)
static struct platform_driver regulator_virtual_consumer_driver = ;
static int __init regulator_virtual_consumer_init(void)
module_init(regulator_virtual_consumer_init);
static void __exit regulator_virtual_consumer_exit(void)
module_exit(regulator_virtual_consumer_exit);
MODULE_AUTHOR("Mark Brown <broonie@opensource.wolfsonmicro.com>");
MODULE_DESCRIPTION("Virtual regulator consumer");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:reg-virt-consumer");
