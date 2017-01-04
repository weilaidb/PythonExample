static ssize_t display_show_name(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t display_show_type(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t display_show_contrast(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t display_store_contrast(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t display_show_max_contrast(struct device *dev,
struct device_attribute *attr,
char *buf)
static struct device_attribute display_attrs[] = ;
static int display_suspend(struct device *dev, pm_message_t state)
;
static int display_resume(struct device *dev)
;
static struct mutex allocated_dsp_lock;
static DEFINE_IDR(allocated_dsp);
static struct class *display_class;
struct display_device *display_device_register(struct display_driver *driver,
struct device *parent, void *devdata)
EXPORT_SYMBOL(display_device_register);
void display_device_unregister(struct display_device *ddev)
EXPORT_SYMBOL(display_device_unregister);
static int __init display_class_init(void)
static void __exit display_class_exit(void)
module_init(display_class_init);
module_exit(display_class_exit);
MODULE_DESCRIPTION("Display Hardware handling");
MODULE_AUTHOR("James Simmons <jsimmons@infradead.org>");
MODULE_LICENSE("GPL");
