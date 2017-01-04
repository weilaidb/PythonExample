struct userspace_consumer_data ;
static ssize_t reg_show_name(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t reg_show_state(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t reg_set_state(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(name, 0444, reg_show_name, NULL);
static DEVICE_ATTR(state, 0644, reg_show_state, reg_set_state);
static struct attribute *attributes[] = ;
static const struct attribute_group attr_group = ;
static int regulator_userspace_consumer_probe(struct platform_device *pdev)
static int regulator_userspace_consumer_remove(struct platform_device *pdev)
static struct platform_driver regulator_userspace_consumer_driver = ;
static int __init regulator_userspace_consumer_init(void)
module_init(regulator_userspace_consumer_init);
static void __exit regulator_userspace_consumer_exit(void)
module_exit(regulator_userspace_consumer_exit);
MODULE_AUTHOR("Mike Rapoport <mike@compulab.co.il>");
MODULE_DESCRIPTION("Userspace consumer for voltage and current regulators");
MODULE_LICENSE("GPL");
