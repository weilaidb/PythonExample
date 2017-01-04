#define to_lm_device(d)	container_of(d, struct lm_device, dev)
#define to_lm_driver(d)	container_of(d, struct lm_driver, drv)
static int lm_match(struct device *dev, struct device_driver *drv)
static int lm_bus_probe(struct device *dev)
static int lm_bus_remove(struct device *dev)
static struct bus_type lm_bustype = ;
static int __init lm_init(void)
postcore_initcall(lm_init);
int lm_driver_register(struct lm_driver *drv)
void lm_driver_unregister(struct lm_driver *drv)
static void lm_device_release(struct device *dev)
int lm_device_register(struct lm_device *dev)
EXPORT_SYMBOL(lm_driver_register);
EXPORT_SYMBOL(lm_driver_unregister);
