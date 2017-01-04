#define to_bus_attr(_attr) container_of(_attr, struct bus_attribute, attr)
#define to_drv_attr(_attr) container_of(_attr, struct driver_attribute, attr)
static int __must_check bus_rescan_devices_helper(struct device *dev,
void *data);
static struct bus_type *bus_get(struct bus_type *bus)
static void bus_put(struct bus_type *bus)
static ssize_t drv_attr_show(struct kobject *kobj, struct attribute *attr,
char *buf)
static ssize_t drv_attr_store(struct kobject *kobj, struct attribute *attr,
const char *buf, size_t count)
static const struct sysfs_ops driver_sysfs_ops = ;
static void driver_release(struct kobject *kobj)
static struct kobj_type driver_ktype = ;
static ssize_t bus_attr_show(struct kobject *kobj, struct attribute *attr,
char *buf)
static ssize_t bus_attr_store(struct kobject *kobj, struct attribute *attr,
const char *buf, size_t count)
static const struct sysfs_ops bus_sysfs_ops = ;
int bus_create_file(struct bus_type *bus, struct bus_attribute *attr)
EXPORT_SYMBOL_GPL(bus_create_file);
void bus_remove_file(struct bus_type *bus, struct bus_attribute *attr)
EXPORT_SYMBOL_GPL(bus_remove_file);
static struct kobj_type bus_ktype = ;
static int bus_uevent_filter(struct kset *kset, struct kobject *kobj)
static const struct kset_uevent_ops bus_uevent_ops = ;
static struct kset *bus_kset;
static ssize_t driver_unbind(struct device_driver *drv,
const char *buf, size_t count)
static DRIVER_ATTR(unbind, S_IWUSR, NULL, driver_unbind);
static ssize_t driver_bind(struct device_driver *drv,
const char *buf, size_t count)
static DRIVER_ATTR(bind, S_IWUSR, NULL, driver_bind);
static ssize_t show_drivers_autoprobe(struct bus_type *bus, char *buf)
static ssize_t store_drivers_autoprobe(struct bus_type *bus,
const char *buf, size_t count)
static ssize_t store_drivers_probe(struct bus_type *bus,
const char *buf, size_t count)
static struct device *next_device(struct klist_iter *i)
int bus_for_each_dev(struct bus_type *bus, struct device *start,
void *data, int (*fn)(struct device *, void *))
EXPORT_SYMBOL_GPL(bus_for_each_dev);
struct device *bus_find_device(struct bus_type *bus,
struct device *start, void *data,
int (*match)(struct device *dev, void *data))
EXPORT_SYMBOL_GPL(bus_find_device);
static int match_name(struct device *dev, void *data)
struct device *bus_find_device_by_name(struct bus_type *bus,
struct device *start, const char *name)
EXPORT_SYMBOL_GPL(bus_find_device_by_name);
static struct device_driver *next_driver(struct klist_iter *i)
int bus_for_each_drv(struct bus_type *bus, struct device_driver *start,
void *data, int (*fn)(struct device_driver *, void *))
EXPORT_SYMBOL_GPL(bus_for_each_drv);
static int device_add_attrs(struct bus_type *bus, struct device *dev)
static void device_remove_attrs(struct bus_type *bus, struct device *dev)
int bus_add_device(struct device *dev)
void bus_probe_device(struct device *dev)
void bus_remove_device(struct device *dev)
static int driver_add_attrs(struct bus_type *bus, struct device_driver *drv)
static void driver_remove_attrs(struct bus_type *bus,
struct device_driver *drv)
static int __must_check add_bind_files(struct device_driver *drv)
static void remove_bind_files(struct device_driver *drv)
static BUS_ATTR(drivers_probe, S_IWUSR, NULL, store_drivers_probe);
static BUS_ATTR(drivers_autoprobe, S_IWUSR | S_IRUGO,
show_drivers_autoprobe, store_drivers_autoprobe);
static int add_probe_files(struct bus_type *bus)
static void remove_probe_files(struct bus_type *bus)
static inline int add_bind_files(struct device_driver *drv)
static inline void remove_bind_files(struct device_driver *drv)
static inline int add_probe_files(struct bus_type *bus)
static inline void remove_probe_files(struct bus_type *bus)
static ssize_t driver_uevent_store(struct device_driver *drv,
const char *buf, size_t count)
static DRIVER_ATTR(uevent, S_IWUSR, NULL, driver_uevent_store);
int bus_add_driver(struct device_driver *drv)
void bus_remove_driver(struct device_driver *drv)
static int __must_check bus_rescan_devices_helper(struct device *dev,
void *data)
int bus_rescan_devices(struct bus_type *bus)
EXPORT_SYMBOL_GPL(bus_rescan_devices);
int device_reprobe(struct device *dev)
EXPORT_SYMBOL_GPL(device_reprobe);
static int bus_add_attrs(struct bus_type *bus)
static void bus_remove_attrs(struct bus_type *bus)
static void klist_devices_get(struct klist_node *n)
static void klist_devices_put(struct klist_node *n)
static ssize_t bus_uevent_store(struct bus_type *bus,
const char *buf, size_t count)
static BUS_ATTR(uevent, S_IWUSR, NULL, bus_uevent_store);
int bus_register(struct bus_type *bus)
EXPORT_SYMBOL_GPL(bus_register);
void bus_unregister(struct bus_type *bus)
EXPORT_SYMBOL_GPL(bus_unregister);
int bus_register_notifier(struct bus_type *bus, struct notifier_block *nb)
EXPORT_SYMBOL_GPL(bus_register_notifier);
int bus_unregister_notifier(struct bus_type *bus, struct notifier_block *nb)
EXPORT_SYMBOL_GPL(bus_unregister_notifier);
struct kset *bus_get_kset(struct bus_type *bus)
EXPORT_SYMBOL_GPL(bus_get_kset);
struct klist *bus_get_device_klist(struct bus_type *bus)
EXPORT_SYMBOL_GPL(bus_get_device_klist);
static void device_insertion_sort_klist(struct device *a, struct list_head *list,
int (*compare)(const struct device *a,
const struct device *b))
void bus_sort_breadthfirst(struct bus_type *bus,
int (*compare)(const struct device *a,
const struct device *b))
EXPORT_SYMBOL_GPL(bus_sort_breadthfirst);
int __init buses_init(void)
