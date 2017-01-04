static ssize_t show_name(struct device *dev,
struct device_attribute *attr, char *buf)
static const char *input_names[] = ;
static ssize_t show_voltage(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_label(struct device *dev,
struct device_attribute *attr, char *buf)
#define WM8350_NAMED_VOLTAGE(id, name) \
static SENSOR_DEVICE_ATTR(in##id##_input, S_IRUGO, show_voltage,\
NULL, name);		\
static SENSOR_DEVICE_ATTR(in##id##_label, S_IRUGO, show_label,	\
NULL, name)
static DEVICE_ATTR(name, S_IRUGO, show_name, NULL);
WM8350_NAMED_VOLTAGE(0, WM8350_AUXADC_USB);
WM8350_NAMED_VOLTAGE(1, WM8350_AUXADC_BATT);
WM8350_NAMED_VOLTAGE(2, WM8350_AUXADC_LINE);
static struct attribute *wm8350_attributes[] = ;
static const struct attribute_group wm8350_attr_group = ;
static int __devinit wm8350_hwmon_probe(struct platform_device *pdev)
static int __devexit wm8350_hwmon_remove(struct platform_device *pdev)
static struct platform_driver wm8350_hwmon_driver = ;
static int __init wm8350_hwmon_init(void)
module_init(wm8350_hwmon_init);
static void __exit wm8350_hwmon_exit(void)
module_exit(wm8350_hwmon_exit);
MODULE_AUTHOR("Mark Brown <broonie@opensource.wolfsonmicro.com>");
MODULE_DESCRIPTION("WM8350 Hardware Monitoring");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:wm8350-hwmon");
