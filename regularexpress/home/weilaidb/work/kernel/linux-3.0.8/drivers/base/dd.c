static void driver_bound(struct device *dev)
static int driver_sysfs_add(struct device *dev)
static void driver_sysfs_remove(struct device *dev)
int device_bind_driver(struct device *dev)
EXPORT_SYMBOL_GPL(device_bind_driver);
static atomic_t probe_count = ATOMIC_INIT(0);
static DECLARE_WAIT_QUEUE_HEAD(probe_waitqueue);
static int really_probe(struct device *dev, struct device_driver *drv)
int driver_probe_done(void)
void wait_for_device_probe(void)
EXPORT_SYMBOL_GPL(wait_for_device_probe);
int driver_probe_device(struct device_driver *drv, struct device *dev)
static int __device_attach(struct device_driver *drv, void *data)
int device_attach(struct device *dev)
EXPORT_SYMBOL_GPL(device_attach);
static int __driver_attach(struct device *dev, void *data)
int driver_attach(struct device_driver *drv)
EXPORT_SYMBOL_GPL(driver_attach);
static void __device_release_driver(struct device *dev)
void device_release_driver(struct device *dev)
EXPORT_SYMBOL_GPL(device_release_driver);
void driver_detach(struct device_driver *drv)
void *dev_get_drvdata(const struct device *dev)
EXPORT_SYMBOL(dev_get_drvdata);
int dev_set_drvdata(struct device *dev, void *data)
EXPORT_SYMBOL(dev_set_drvdata);
