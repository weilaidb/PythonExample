#define MC13783_ADC_NAME	"mc13783-adc"
struct mc13783_adc_priv ;
static ssize_t mc13783_adc_show_name(struct device *dev, struct device_attribute
*devattr, char *buf)
static int mc13783_adc_read(struct device *dev,
struct device_attribute *devattr, unsigned int *val)
static ssize_t mc13783_adc_read_bp(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t mc13783_adc_read_gp(struct device *dev,
struct device_attribute *devattr, char *buf)
static DEVICE_ATTR(name, S_IRUGO, mc13783_adc_show_name, NULL);
static SENSOR_DEVICE_ATTR(in2_input, S_IRUGO, mc13783_adc_read_bp, NULL, 2);
static SENSOR_DEVICE_ATTR(in5_input, S_IRUGO, mc13783_adc_read_gp, NULL, 5);
static SENSOR_DEVICE_ATTR(in6_input, S_IRUGO, mc13783_adc_read_gp, NULL, 6);
static SENSOR_DEVICE_ATTR(in7_input, S_IRUGO, mc13783_adc_read_gp, NULL, 7);
static SENSOR_DEVICE_ATTR(in8_input, S_IRUGO, mc13783_adc_read_gp, NULL, 8);
static SENSOR_DEVICE_ATTR(in9_input, S_IRUGO, mc13783_adc_read_gp, NULL, 9);
static SENSOR_DEVICE_ATTR(in10_input, S_IRUGO, mc13783_adc_read_gp, NULL, 10);
static SENSOR_DEVICE_ATTR(in11_input, S_IRUGO, mc13783_adc_read_gp, NULL, 11);
static SENSOR_DEVICE_ATTR(in12_input, S_IRUGO, mc13783_adc_read_gp, NULL, 12);
static SENSOR_DEVICE_ATTR(in13_input, S_IRUGO, mc13783_adc_read_gp, NULL, 13);
static SENSOR_DEVICE_ATTR(in14_input, S_IRUGO, mc13783_adc_read_gp, NULL, 14);
static SENSOR_DEVICE_ATTR(in15_input, S_IRUGO, mc13783_adc_read_gp, NULL, 15);
static struct attribute *mc13783_attr[] = ;
static const struct attribute_group mc13783_group = ;
static struct attribute *mc13783_attr_ts[] = ;
static const struct attribute_group mc13783_group_ts = ;
static int mc13783_adc_use_touchscreen(struct platform_device *pdev)
static int __init mc13783_adc_probe(struct platform_device *pdev)
static int __devexit mc13783_adc_remove(struct platform_device *pdev)
static struct platform_driver mc13783_adc_driver = ;
static int __init mc13783_adc_init(void)
static void __exit mc13783_adc_exit(void)
module_init(mc13783_adc_init);
module_exit(mc13783_adc_exit);
MODULE_DESCRIPTION("MC13783 ADC driver");
MODULE_AUTHOR("Luotao Fu <l.fu@pengutronix.de>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:" MC13783_ADC_NAME);
