#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define GUID "C364AC71-36DB-495A-8494-B439D472A505"
#define TC1100_INSTANCE_WIRELESS		1
#define TC1100_INSTANCE_JOGDIAL		2
MODULE_AUTHOR("Jamey Hicks, Carlos Corbacho");
MODULE_DESCRIPTION("HP Compaq TC1100 Tablet WMI Extras");
MODULE_LICENSE("GPL");
MODULE_ALIAS("wmi:C364AC71-36DB-495A-8494-B439D472A505");
static struct platform_device *tc1100_device;
struct tc1100_data ;
static struct tc1100_data suspend_data;
static int get_state(u32 *out, u8 instance)
static int set_state(u32 *in, u8 instance)
#define show_set_bool(value, instance) \
static ssize_t \
show_bool_##value(struct device *dev, struct device_attribute *attr, \
char *buf) \
\
\
static ssize_t \
set_bool_##value(struct device *dev, struct device_attribute *attr, \
const char *buf, size_t count) \
\
static DEVICE_ATTR(value, S_IRUGO | S_IWUSR, \
show_bool_##value, set_bool_##value);
show_set_bool(wireless, TC1100_INSTANCE_WIRELESS);
show_set_bool(jogdial, TC1100_INSTANCE_JOGDIAL);
static struct attribute *tc1100_attributes[] = ;
static struct attribute_group tc1100_attribute_group = ;
static int __init tc1100_probe(struct platform_device *device)
static int __devexit tc1100_remove(struct platform_device *device)
static int tc1100_suspend(struct device *dev)
static int tc1100_resume(struct device *dev)
static const struct dev_pm_ops tc1100_pm_ops = ;
static struct platform_driver tc1100_driver = ;
static int __init tc1100_init(void)
static void __exit tc1100_exit(void)
module_init(tc1100_init);
module_exit(tc1100_exit);
