const struct dio_device_id *
dio_match_device(const struct dio_device_id *ids,
const struct dio_dev *d)
static int dio_device_probe(struct device *dev)
int dio_register_driver(struct dio_driver *drv)
void dio_unregister_driver(struct dio_driver *drv)
static int dio_bus_match(struct device *dev, struct device_driver *drv)
struct bus_type dio_bus_type = ;
static int __init dio_driver_init(void)
postcore_initcall(dio_driver_init);
EXPORT_SYMBOL(dio_match_device);
EXPORT_SYMBOL(dio_register_driver);
EXPORT_SYMBOL(dio_unregister_driver);
EXPORT_SYMBOL(dio_bus_type);
