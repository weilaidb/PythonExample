static int superhyway_devices;
static struct device superhyway_bus_device = ;
static void superhyway_device_release(struct device *dev)
int superhyway_add_device(unsigned long base, struct superhyway_device *sdev,
struct superhyway_bus *bus)
int superhyway_add_devices(struct superhyway_bus *bus,
struct superhyway_device **devices,
int nr_devices)
static int __init superhyway_init(void)
postcore_initcall(superhyway_init);
static const struct superhyway_device_id *
superhyway_match_id(const struct superhyway_device_id *ids,
struct superhyway_device *dev)
static int superhyway_device_probe(struct device *dev)
static int superhyway_device_remove(struct device *dev)
int superhyway_register_driver(struct superhyway_driver *drv)
void superhyway_unregister_driver(struct superhyway_driver *drv)
static int superhyway_bus_match(struct device *dev, struct device_driver *drv)
struct bus_type superhyway_bus_type = ;
static int __init superhyway_bus_init(void)
static void __exit superhyway_bus_exit(void)
core_initcall(superhyway_bus_init);
module_exit(superhyway_bus_exit);
EXPORT_SYMBOL(superhyway_bus_type);
EXPORT_SYMBOL(superhyway_add_device);
EXPORT_SYMBOL(superhyway_add_devices);
EXPORT_SYMBOL(superhyway_register_driver);
EXPORT_SYMBOL(superhyway_unregister_driver);
MODULE_LICENSE("GPL");
