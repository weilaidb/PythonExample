#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define HWMON_ID_PREFIX "hwmon"
#define HWMON_ID_FORMAT HWMON_ID_PREFIX "%d"
static struct class *hwmon_class;
static DEFINE_IDR(hwmon_idr);
static DEFINE_SPINLOCK(idr_lock);
struct device *hwmon_device_register(struct device *dev)
void hwmon_device_unregister(struct device *dev)
static void __init hwmon_pci_quirks(void)
static int __init hwmon_init(void)
static void __exit hwmon_exit(void)
subsys_initcall(hwmon_init);
module_exit(hwmon_exit);
EXPORT_SYMBOL_GPL(hwmon_device_register);
EXPORT_SYMBOL_GPL(hwmon_device_unregister);
MODULE_AUTHOR("Mark M. Hoffman <mhoffman@lightlink.com>");
MODULE_DESCRIPTION("hardware monitoring sysfs/class support");
MODULE_LICENSE("GPL");
