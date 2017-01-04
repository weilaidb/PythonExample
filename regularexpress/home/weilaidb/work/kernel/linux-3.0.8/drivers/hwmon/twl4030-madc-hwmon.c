static ssize_t madc_read(struct device *dev,
struct device_attribute *devattr, char *buf)
static SENSOR_DEVICE_ATTR(in0_input, S_IRUGO, madc_read, NULL, 0);
static SENSOR_DEVICE_ATTR(temp1_input, S_IRUGO, madc_read, NULL, 1);
static SENSOR_DEVICE_ATTR(in2_input, S_IRUGO, madc_read, NULL, 2);
static SENSOR_DEVICE_ATTR(in3_input, S_IRUGO, madc_read, NULL, 3);
static SENSOR_DEVICE_ATTR(in4_input, S_IRUGO, madc_read, NULL, 4);
static SENSOR_DEVICE_ATTR(in5_input, S_IRUGO, madc_read, NULL, 5);
static SENSOR_DEVICE_ATTR(in6_input, S_IRUGO, madc_read, NULL, 6);
static SENSOR_DEVICE_ATTR(in7_input, S_IRUGO, madc_read, NULL, 7);
static SENSOR_DEVICE_ATTR(in8_input, S_IRUGO, madc_read, NULL, 8);
static SENSOR_DEVICE_ATTR(in9_input, S_IRUGO, madc_read, NULL, 9);
static SENSOR_DEVICE_ATTR(curr10_input, S_IRUGO, madc_read, NULL, 10);
static SENSOR_DEVICE_ATTR(in11_input, S_IRUGO, madc_read, NULL, 11);
static SENSOR_DEVICE_ATTR(in12_input, S_IRUGO, madc_read, NULL, 12);
static SENSOR_DEVICE_ATTR(in15_input, S_IRUGO, madc_read, NULL, 15);
static struct attribute *twl4030_madc_attributes[] = ;
static const struct attribute_group twl4030_madc_group = ;
static int __devinit twl4030_madc_hwmon_probe(struct platform_device *pdev)
static int __devexit twl4030_madc_hwmon_remove(struct platform_device *pdev)
static struct platform_driver twl4030_madc_hwmon_driver = ;
static int __init twl4030_madc_hwmon_init(void)
module_init(twl4030_madc_hwmon_init);
static void __exit twl4030_madc_hwmon_exit(void)
module_exit(twl4030_madc_hwmon_exit);
MODULE_DESCRIPTION("TWL4030 ADC Hwmon driver");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("J Keerthy");
MODULE_ALIAS("platform:twl4030_madc_hwmon");
