#define to_platform_driver(drv)	(container_of((drv), struct platform_driver, \
driver))
struct device platform_bus = ;
EXPORT_SYMBOL_GPL(platform_bus);
struct resource *platform_get_resource(struct platform_device *dev,
unsigned int type, unsigned int num)
EXPORT_SYMBOL_GPL(platform_get_resource);
int platform_get_irq(struct platform_device *dev, unsigned int num)
EXPORT_SYMBOL_GPL(platform_get_irq);
struct resource *platform_get_resource_byname(struct platform_device *dev,
unsigned int type,
const char *name)
EXPORT_SYMBOL_GPL(platform_get_resource_byname);
int platform_get_irq_byname(struct platform_device *dev, const char *name)
EXPORT_SYMBOL_GPL(platform_get_irq_byname);
int platform_add_devices(struct platform_device **devs, int num)
EXPORT_SYMBOL_GPL(platform_add_devices);
struct platform_object ;
void platform_device_put(struct platform_device *pdev)
EXPORT_SYMBOL_GPL(platform_device_put);
static void platform_device_release(struct device *dev)
struct platform_device *platform_device_alloc(const char *name, int id)
EXPORT_SYMBOL_GPL(platform_device_alloc);
int platform_device_add_resources(struct platform_device *pdev,
const struct resource *res, unsigned int num)
EXPORT_SYMBOL_GPL(platform_device_add_resources);
int platform_device_add_data(struct platform_device *pdev, const void *data,
size_t size)
EXPORT_SYMBOL_GPL(platform_device_add_data);
int platform_device_add(struct platform_device *pdev)
EXPORT_SYMBOL_GPL(platform_device_add);
void platform_device_del(struct platform_device *pdev)
EXPORT_SYMBOL_GPL(platform_device_del);
int platform_device_register(struct platform_device *pdev)
EXPORT_SYMBOL_GPL(platform_device_register);
void platform_device_unregister(struct platform_device *pdev)
EXPORT_SYMBOL_GPL(platform_device_unregister);
struct platform_device *platform_device_register_resndata(
struct device *parent,
const char *name, int id,
const struct resource *res, unsigned int num,
const void *data, size_t size)
EXPORT_SYMBOL_GPL(platform_device_register_resndata);
static int platform_drv_probe(struct device *_dev)
static int platform_drv_probe_fail(struct device *_dev)
static int platform_drv_remove(struct device *_dev)
static void platform_drv_shutdown(struct device *_dev)
int platform_driver_register(struct platform_driver *drv)
EXPORT_SYMBOL_GPL(platform_driver_register);
void platform_driver_unregister(struct platform_driver *drv)
EXPORT_SYMBOL_GPL(platform_driver_unregister);
int __init_or_module platform_driver_probe(struct platform_driver *drv,
int (*probe)(struct platform_device *))
EXPORT_SYMBOL_GPL(platform_driver_probe);
struct platform_device * __init_or_module platform_create_bundle(
struct platform_driver *driver,
int (*probe)(struct platform_device *),
struct resource *res, unsigned int n_res,
const void *data, size_t size)
EXPORT_SYMBOL_GPL(platform_create_bundle);
static ssize_t modalias_show(struct device *dev, struct device_attribute *a,
char *buf)
static struct device_attribute platform_dev_attrs[] = ;
static int platform_uevent(struct device *dev, struct kobj_uevent_env *env)
static const struct platform_device_id *platform_match_id(
const struct platform_device_id *id,
struct platform_device *pdev)
static int platform_match(struct device *dev, struct device_driver *drv)
static int platform_legacy_suspend(struct device *dev, pm_message_t mesg)
static int platform_legacy_resume(struct device *dev)
int platform_pm_prepare(struct device *dev)
void platform_pm_complete(struct device *dev)
int platform_pm_suspend(struct device *dev)
int platform_pm_suspend_noirq(struct device *dev)
int platform_pm_resume(struct device *dev)
int platform_pm_resume_noirq(struct device *dev)
int platform_pm_freeze(struct device *dev)
int platform_pm_freeze_noirq(struct device *dev)
int platform_pm_thaw(struct device *dev)
int platform_pm_thaw_noirq(struct device *dev)
int platform_pm_poweroff(struct device *dev)
int platform_pm_poweroff_noirq(struct device *dev)
int platform_pm_restore(struct device *dev)
int platform_pm_restore_noirq(struct device *dev)
static const struct dev_pm_ops platform_dev_pm_ops = ;
struct bus_type platform_bus_type = ;
EXPORT_SYMBOL_GPL(platform_bus_type);
int __init platform_bus_init(void)
u64 dma_get_required_mask(struct device *dev)
EXPORT_SYMBOL_GPL(dma_get_required_mask);
static __initdata LIST_HEAD(early_platform_driver_list);
static __initdata LIST_HEAD(early_platform_device_list);
int __init early_platform_driver_register(struct early_platform_driver *epdrv,
char *buf)
void __init early_platform_add_devices(struct platform_device **devs, int num)
void __init early_platform_driver_register_all(char *class_str)
static  __init struct platform_device *
early_platform_match(struct early_platform_driver *epdrv, int id)
static  __init int early_platform_left(struct early_platform_driver *epdrv,
int id)
static int __init early_platform_driver_probe_id(char *class_str,
int id,
int nr_probe)
int __init early_platform_driver_probe(char *class_str,
int nr_probe,
int user_only)
void __init early_platform_cleanup(void)
