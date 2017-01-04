struct wm831x_hwmon ;
static ssize_t show_name(struct device *dev,
struct device_attribute *attr, char *buf)
static const char *input_names[] = ;
static ssize_t show_voltage(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_chip_temp(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_label(struct device *dev,
struct device_attribute *attr, char *buf)
#define WM831X_VOLTAGE(id, name) \
static SENSOR_DEVICE_ATTR(in##id##_input, S_IRUGO, show_voltage, \
NULL, name)
#define WM831X_NAMED_VOLTAGE(id, name) \
WM831X_VOLTAGE(id, name); \
static SENSOR_DEVICE_ATTR(in##id##_label, S_IRUGO, show_label,	\
NULL, name)
static DEVICE_ATTR(name, S_IRUGO, show_name, NULL);
WM831X_VOLTAGE(0, WM831X_AUX_AUX1);
WM831X_VOLTAGE(1, WM831X_AUX_AUX2);
WM831X_VOLTAGE(2, WM831X_AUX_AUX3);
WM831X_VOLTAGE(3, WM831X_AUX_AUX4);
WM831X_NAMED_VOLTAGE(4, WM831X_AUX_SYSVDD);
WM831X_NAMED_VOLTAGE(5, WM831X_AUX_USB);
WM831X_NAMED_VOLTAGE(6, WM831X_AUX_BATT);
WM831X_NAMED_VOLTAGE(7, WM831X_AUX_WALL);
WM831X_NAMED_VOLTAGE(8, WM831X_AUX_BKUP_BATT);
static SENSOR_DEVICE_ATTR(temp1_input, S_IRUGO, show_chip_temp, NULL,
WM831X_AUX_CHIP_TEMP);
static SENSOR_DEVICE_ATTR(temp1_label, S_IRUGO, show_label, NULL,
WM831X_AUX_CHIP_TEMP);
static SENSOR_DEVICE_ATTR(temp2_input, S_IRUGO, show_voltage, NULL,
WM831X_AUX_BATT_TEMP);
static SENSOR_DEVICE_ATTR(temp2_label, S_IRUGO, show_label, NULL,
WM831X_AUX_BATT_TEMP);
static struct attribute *wm831x_attributes[] = ;
static const struct attribute_group wm831x_attr_group = ;
static int __devinit wm831x_hwmon_probe(struct platform_device *pdev)
static int __devexit wm831x_hwmon_remove(struct platform_device *pdev)
static struct platform_driver wm831x_hwmon_driver = ;
static int __init wm831x_hwmon_init(void)
module_init(wm831x_hwmon_init);
static void __exit wm831x_hwmon_exit(void)
module_exit(wm831x_hwmon_exit);
MODULE_AUTHOR("Mark Brown <broonie@opensource.wolfsonmicro.com>");
MODULE_DESCRIPTION("WM831x Hardware Monitoring");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:wm831x-hwmon");
