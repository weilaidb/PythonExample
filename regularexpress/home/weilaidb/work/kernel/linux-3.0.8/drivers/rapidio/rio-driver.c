static const struct rio_device_id *rio_match_device(const struct rio_device_id
*id,
const struct rio_dev *rdev)
struct rio_dev *rio_dev_get(struct rio_dev *rdev)
void rio_dev_put(struct rio_dev *rdev)
static int rio_device_probe(struct device *dev)
static int rio_device_remove(struct device *dev)
int rio_register_driver(struct rio_driver *rdrv)
void rio_unregister_driver(struct rio_driver *rdrv)
static int rio_match_bus(struct device *dev, struct device_driver *drv)
struct device rio_bus = ;
struct bus_type rio_bus_type = ;
static int __init rio_bus_init(void)
postcore_initcall(rio_bus_init);
EXPORT_SYMBOL_GPL(rio_register_driver);
EXPORT_SYMBOL_GPL(rio_unregister_driver);
EXPORT_SYMBOL_GPL(rio_bus_type);
EXPORT_SYMBOL_GPL(rio_dev_get);
EXPORT_SYMBOL_GPL(rio_dev_put);
