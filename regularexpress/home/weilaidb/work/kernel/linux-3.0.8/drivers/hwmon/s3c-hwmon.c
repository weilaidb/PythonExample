struct s3c_hwmon_attr ;
struct s3c_hwmon ;
static int s3c_hwmon_read_ch(struct device *dev,
struct s3c_hwmon *hwmon, int channel)
static ssize_t s3c_hwmon_show_raw(struct device *dev,
struct device_attribute *attr, char *buf)
#define DEF_ADC_ATTR(x)	\
static SENSOR_DEVICE_ATTR(adc##x##_raw, S_IRUGO, s3c_hwmon_show_raw, NULL, x)
DEF_ADC_ATTR(0);
DEF_ADC_ATTR(1);
DEF_ADC_ATTR(2);
DEF_ADC_ATTR(3);
DEF_ADC_ATTR(4);
DEF_ADC_ATTR(5);
DEF_ADC_ATTR(6);
DEF_ADC_ATTR(7);
static struct attribute *s3c_hwmon_attrs[9] = ;
static struct attribute_group s3c_hwmon_attrgroup = ;
static inline int s3c_hwmon_add_raw(struct device *dev)
static inline void s3c_hwmon_remove_raw(struct device *dev)
static inline int s3c_hwmon_add_raw(struct device *dev)
static inline void s3c_hwmon_remove_raw(struct device *dev)
static ssize_t s3c_hwmon_ch_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t s3c_hwmon_label_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static int s3c_hwmon_create_attr(struct device *dev,
struct s3c_hwmon_chcfg *cfg,
struct s3c_hwmon_attr *attrs,
int channel)
static void s3c_hwmon_remove_attr(struct device *dev,
struct s3c_hwmon_attr *attrs)
static int __devinit s3c_hwmon_probe(struct platform_device *dev)
static int __devexit s3c_hwmon_remove(struct platform_device *dev)
static struct platform_driver s3c_hwmon_driver = ;
static int __init s3c_hwmon_init(void)
static void __exit s3c_hwmon_exit(void)
module_init(s3c_hwmon_init);
module_exit(s3c_hwmon_exit);
MODULE_AUTHOR("Ben Dooks <ben@simtec.co.uk>");
MODULE_DESCRIPTION("S3C ADC HWMon driver");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:s3c-hwmon");
