static struct device isa_bus = ;
struct isa_dev ;
#define to_isa_dev(x) container_of((x), struct isa_dev, dev)
static int isa_bus_match(struct device *dev, struct device_driver *driver)
static int isa_bus_probe(struct device *dev)
static int isa_bus_remove(struct device *dev)
static void isa_bus_shutdown(struct device *dev)
static int isa_bus_suspend(struct device *dev, pm_message_t state)
static int isa_bus_resume(struct device *dev)
static struct bus_type isa_bus_type = ;
static void isa_dev_release(struct device *dev)
void isa_unregister_driver(struct isa_driver *isa_driver)
EXPORT_SYMBOL_GPL(isa_unregister_driver);
int isa_register_driver(struct isa_driver *isa_driver, unsigned int ndev)
EXPORT_SYMBOL_GPL(isa_register_driver);
static int __init isa_bus_init(void)
device_initcall(isa_bus_init);
