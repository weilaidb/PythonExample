#define CCW_BUS_ID_SIZE		20
static int
ccwgroup_bus_match (struct device * dev, struct device_driver * drv)
static int
ccwgroup_uevent (struct device *dev, struct kobj_uevent_env *env)
static struct bus_type ccwgroup_bus_type;
static void
__ccwgroup_remove_symlinks(struct ccwgroup_device *gdev)
static void __ccwgroup_remove_cdev_refs(struct ccwgroup_device *gdev)
static void ccwgroup_ungroup_callback(struct device *dev)
static ssize_t
ccwgroup_ungroup_store(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(ungroup, 0200, NULL, ccwgroup_ungroup_store);
static void
ccwgroup_release (struct device *dev)
static int
__ccwgroup_create_symlinks(struct ccwgroup_device *gdev)
static int __get_next_bus_id(const char **buf, char *bus_id)
static int __is_valid_bus_id(char bus_id[CCW_BUS_ID_SIZE])
int ccwgroup_create_from_string(struct device *root, unsigned int creator_id,
struct ccw_driver *cdrv, int num_devices,
const char *buf)
EXPORT_SYMBOL(ccwgroup_create_from_string);
static int ccwgroup_notifier(struct notifier_block *nb, unsigned long action,
void *data);
static struct notifier_block ccwgroup_nb = ;
static int __init init_ccwgroup(void)
static void __exit cleanup_ccwgroup(void)
module_init(init_ccwgroup);
module_exit(cleanup_ccwgroup);
static int
ccwgroup_set_online(struct ccwgroup_device *gdev)
static int
ccwgroup_set_offline(struct ccwgroup_device *gdev)
static ssize_t
ccwgroup_online_store (struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static ssize_t
ccwgroup_online_show (struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(online, 0644, ccwgroup_online_show, ccwgroup_online_store);
static int
ccwgroup_probe (struct device *dev)
static int
ccwgroup_remove (struct device *dev)
static void ccwgroup_shutdown(struct device *dev)
static int ccwgroup_pm_prepare(struct device *dev)
static void ccwgroup_pm_complete(struct device *dev)
static int ccwgroup_pm_freeze(struct device *dev)
static int ccwgroup_pm_thaw(struct device *dev)
static int ccwgroup_pm_restore(struct device *dev)
static const struct dev_pm_ops ccwgroup_pm_ops = ;
static struct bus_type ccwgroup_bus_type = ;
static int ccwgroup_notifier(struct notifier_block *nb, unsigned long action,
void *data)
int ccwgroup_driver_register(struct ccwgroup_driver *cdriver)
static int
__ccwgroup_match_all(struct device *dev, void *data)
void ccwgroup_driver_unregister(struct ccwgroup_driver *cdriver)
int ccwgroup_probe_ccwdev(struct ccw_device *cdev)
void ccwgroup_remove_ccwdev(struct ccw_device *cdev)
MODULE_LICENSE("GPL");
EXPORT_SYMBOL(ccwgroup_driver_register);
EXPORT_SYMBOL(ccwgroup_driver_unregister);
EXPORT_SYMBOL(ccwgroup_probe_ccwdev);
EXPORT_SYMBOL(ccwgroup_remove_ccwdev);
