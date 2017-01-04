#if defined(CONFIG_FB) || (defined(CONFIG_FB_MODULE) && \
defined(CONFIG_LCD_CLASS_DEVICE_MODULE))
static int fb_notifier_callback(struct notifier_block *self,
unsigned long event, void *data)
static int lcd_register_fb(struct lcd_device *ld)
static void lcd_unregister_fb(struct lcd_device *ld)
static int lcd_register_fb(struct lcd_device *ld)
static inline void lcd_unregister_fb(struct lcd_device *ld)
static ssize_t lcd_show_power(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t lcd_store_power(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static ssize_t lcd_show_contrast(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t lcd_store_contrast(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static ssize_t lcd_show_max_contrast(struct device *dev,
struct device_attribute *attr, char *buf)
static struct class *lcd_class;
static void lcd_device_release(struct device *dev)
static struct device_attribute lcd_device_attributes[] = ;
struct lcd_device *lcd_device_register(const char *name, struct device *parent,
void *devdata, struct lcd_ops *ops)
EXPORT_SYMBOL(lcd_device_register);
void lcd_device_unregister(struct lcd_device *ld)
EXPORT_SYMBOL(lcd_device_unregister);
static void __exit lcd_class_exit(void)
static int __init lcd_class_init(void)
postcore_initcall(lcd_class_init);
module_exit(lcd_class_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jamey Hicks <jamey.hicks@hp.com>, Andrew Zabolotny <zap@homelink.ru>");
MODULE_DESCRIPTION("LCD Lowlevel Control Abstraction");
