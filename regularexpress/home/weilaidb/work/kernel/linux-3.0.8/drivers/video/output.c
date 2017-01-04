MODULE_DESCRIPTION("Display Output Switcher Lowlevel Control Abstraction");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Luming Yu <luming.yu@intel.com>");
static ssize_t video_output_show_state(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t video_output_store_state(struct device *dev,
struct device_attribute *attr,
const char *buf,size_t count)
static void video_output_release(struct device *dev)
static struct device_attribute video_output_attributes[] = ;
static struct class video_output_class = ;
struct output_device *video_output_register(const char *name,
struct device *dev,
void *devdata,
struct output_properties *op)
EXPORT_SYMBOL(video_output_register);
void video_output_unregister(struct output_device *dev)
EXPORT_SYMBOL(video_output_unregister);
static void __exit video_output_class_exit(void)
static int __init video_output_class_init(void)
postcore_initcall(video_output_class_init);
module_exit(video_output_class_exit);
