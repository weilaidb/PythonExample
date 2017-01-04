struct adp5520_bl ;
static int adp5520_bl_set(struct backlight_device *bl, int brightness)
static int adp5520_bl_update_status(struct backlight_device *bl)
static int adp5520_bl_get_brightness(struct backlight_device *bl)
static const struct backlight_ops adp5520_bl_ops = ;
static int adp5520_bl_setup(struct backlight_device *bl)
static ssize_t adp5520_show(struct device *dev, char *buf, int reg)
static ssize_t adp5520_store(struct device *dev, const char *buf,
size_t count, int reg)
static ssize_t adp5520_bl_dark_max_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t adp5520_bl_dark_max_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(dark_max, 0664, adp5520_bl_dark_max_show,
adp5520_bl_dark_max_store);
static ssize_t adp5520_bl_office_max_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t adp5520_bl_office_max_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(office_max, 0664, adp5520_bl_office_max_show,
adp5520_bl_office_max_store);
static ssize_t adp5520_bl_daylight_max_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t adp5520_bl_daylight_max_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(daylight_max, 0664, adp5520_bl_daylight_max_show,
adp5520_bl_daylight_max_store);
static ssize_t adp5520_bl_dark_dim_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t adp5520_bl_dark_dim_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(dark_dim, 0664, adp5520_bl_dark_dim_show,
adp5520_bl_dark_dim_store);
static ssize_t adp5520_bl_office_dim_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t adp5520_bl_office_dim_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(office_dim, 0664, adp5520_bl_office_dim_show,
adp5520_bl_office_dim_store);
static ssize_t adp5520_bl_daylight_dim_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t adp5520_bl_daylight_dim_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(daylight_dim, 0664, adp5520_bl_daylight_dim_show,
adp5520_bl_daylight_dim_store);
static struct attribute *adp5520_bl_attributes[] = ;
static const struct attribute_group adp5520_bl_attr_group = ;
static int __devinit adp5520_bl_probe(struct platform_device *pdev)
static int __devexit adp5520_bl_remove(struct platform_device *pdev)
static int adp5520_bl_suspend(struct platform_device *pdev,
pm_message_t state)
static int adp5520_bl_resume(struct platform_device *pdev)
#define adp5520_bl_suspend	NULL
#define adp5520_bl_resume	NULL
static struct platform_driver adp5520_bl_driver = ;
static int __init adp5520_bl_init(void)
module_init(adp5520_bl_init);
static void __exit adp5520_bl_exit(void)
module_exit(adp5520_bl_exit);
MODULE_AUTHOR("Michael Hennerich <hennerich@blackfin.uclinux.org>");
MODULE_DESCRIPTION("ADP5520(01) Backlight Driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:adp5520-backlight");
