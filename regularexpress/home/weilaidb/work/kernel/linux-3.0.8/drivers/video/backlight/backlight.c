static const char const *backlight_types[] = ;
#if defined(CONFIG_FB) || (defined(CONFIG_FB_MODULE) && \
defined(CONFIG_BACKLIGHT_CLASS_DEVICE_MODULE))
static int fb_notifier_callback(struct notifier_block *self,
unsigned long event, void *data)
static int backlight_register_fb(struct backlight_device *bd)
static void backlight_unregister_fb(struct backlight_device *bd)
static inline int backlight_register_fb(struct backlight_device *bd)
static inline void backlight_unregister_fb(struct backlight_device *bd)
static void backlight_generate_event(struct backlight_device *bd,
enum backlight_update_reason reason)
static ssize_t backlight_show_power(struct device *dev,
struct device_attribute *attr,char *buf)
static ssize_t backlight_store_power(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static ssize_t backlight_show_brightness(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t backlight_store_brightness(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static ssize_t backlight_show_type(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t backlight_show_max_brightness(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t backlight_show_actual_brightness(struct device *dev,
struct device_attribute *attr, char *buf)
static struct class *backlight_class;
static int backlight_suspend(struct device *dev, pm_message_t state)
static int backlight_resume(struct device *dev)
static void bl_device_release(struct device *dev)
static struct device_attribute bl_device_attributes[] = ;
void backlight_force_update(struct backlight_device *bd,
enum backlight_update_reason reason)
EXPORT_SYMBOL(backlight_force_update);
struct backlight_device *backlight_device_register(const char *name,
struct device *parent, void *devdata, const struct backlight_ops *ops,
const struct backlight_properties *props)
EXPORT_SYMBOL(backlight_device_register);
void backlight_device_unregister(struct backlight_device *bd)
EXPORT_SYMBOL(backlight_device_unregister);
static void __exit backlight_class_exit(void)
static int __init backlight_class_init(void)
postcore_initcall(backlight_class_init);
module_exit(backlight_class_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jamey Hicks <jamey.hicks@hp.com>, Andrew Zabolotny <zap@homelink.ru>");
MODULE_DESCRIPTION("Backlight Lowlevel Control Abstraction");
