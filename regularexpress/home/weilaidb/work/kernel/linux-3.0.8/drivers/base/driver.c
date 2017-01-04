static struct device *next_device(struct klist_iter *i)
int driver_for_each_device(struct device_driver *drv, struct device *start,
void *data, int (*fn)(struct device *, void *))
EXPORT_SYMBOL_GPL(driver_for_each_device);
struct device *driver_find_device(struct device_driver *drv,
struct device *start, void *data,
int (*match)(struct device *dev, void *data))
EXPORT_SYMBOL_GPL(driver_find_device);
int driver_create_file(struct device_driver *drv,
const struct driver_attribute *attr)
EXPORT_SYMBOL_GPL(driver_create_file);
void driver_remove_file(struct device_driver *drv,
const struct driver_attribute *attr)
EXPORT_SYMBOL_GPL(driver_remove_file);
int driver_add_kobj(struct device_driver *drv, struct kobject *kobj,
const char *fmt, ...)
EXPORT_SYMBOL_GPL(driver_add_kobj);
struct device_driver *get_driver(struct device_driver *drv)
EXPORT_SYMBOL_GPL(get_driver);
void put_driver(struct device_driver *drv)
EXPORT_SYMBOL_GPL(put_driver);
static int driver_add_groups(struct device_driver *drv,
const struct attribute_group **groups)
static void driver_remove_groups(struct device_driver *drv,
const struct attribute_group **groups)
int driver_register(struct device_driver *drv)
EXPORT_SYMBOL_GPL(driver_register);
void driver_unregister(struct device_driver *drv)
EXPORT_SYMBOL_GPL(driver_unregister);
struct device_driver *driver_find(const char *name, struct bus_type *bus)
EXPORT_SYMBOL_GPL(driver_find);
