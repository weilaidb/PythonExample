const struct zorro_device_id *
zorro_match_device(const struct zorro_device_id *ids,
const struct zorro_dev *z)
static int zorro_device_probe(struct device *dev)
static int zorro_device_remove(struct device *dev)
int zorro_register_driver(struct zorro_driver *drv)
void zorro_unregister_driver(struct zorro_driver *drv)
static int zorro_bus_match(struct device *dev, struct device_driver *drv)
static int zorro_uevent(struct device *dev, struct kobj_uevent_env *env)
struct bus_type zorro_bus_type = ;
static int __init zorro_driver_init(void)
postcore_initcall(zorro_driver_init);
EXPORT_SYMBOL(zorro_match_device);
EXPORT_SYMBOL(zorro_register_driver);
EXPORT_SYMBOL(zorro_unregister_driver);
EXPORT_SYMBOL(zorro_bus_type);
