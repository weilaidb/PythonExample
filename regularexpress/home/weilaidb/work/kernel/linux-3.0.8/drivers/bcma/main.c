MODULE_DESCRIPTION("Broadcom's specific AMBA driver");
MODULE_LICENSE("GPL");
static int bcma_bus_match(struct device *dev, struct device_driver *drv);
static int bcma_device_probe(struct device *dev);
static int bcma_device_remove(struct device *dev);
static ssize_t manuf_show(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t id_show(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t rev_show(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t class_show(struct device *dev, struct device_attribute *attr, char *buf)
static struct device_attribute bcma_device_attrs[] = ;
static struct bus_type bcma_bus_type = ;
static struct bcma_device *bcma_find_core(struct bcma_bus *bus, u16 coreid)
static void bcma_release_core_dev(struct device *dev)
static int bcma_register_cores(struct bcma_bus *bus)
static void bcma_unregister_cores(struct bcma_bus *bus)
int bcma_bus_register(struct bcma_bus *bus)
EXPORT_SYMBOL_GPL(bcma_bus_register);
void bcma_bus_unregister(struct bcma_bus *bus)
EXPORT_SYMBOL_GPL(bcma_bus_unregister);
int __bcma_driver_register(struct bcma_driver *drv, struct module *owner)
EXPORT_SYMBOL_GPL(__bcma_driver_register);
void bcma_driver_unregister(struct bcma_driver *drv)
EXPORT_SYMBOL_GPL(bcma_driver_unregister);
static int bcma_bus_match(struct device *dev, struct device_driver *drv)
static int bcma_device_probe(struct device *dev)
static int bcma_device_remove(struct device *dev)
static int __init bcma_modinit(void)
fs_initcall(bcma_modinit);
static void __exit bcma_modexit(void)
module_exit(bcma_modexit)
