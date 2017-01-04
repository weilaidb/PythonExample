#define sdio_config_attr(field, format_string)				\
static ssize_t								\
field##_show(struct device *dev, struct device_attribute *attr, char *buf)				\
sdio_config_attr(class, "0x%02x\n");
sdio_config_attr(vendor, "0x%04x\n");
sdio_config_attr(device, "0x%04x\n");
static ssize_t modalias_show(struct device *dev, struct device_attribute *attr, char *buf)
static struct device_attribute sdio_dev_attrs[] = ;
static const struct sdio_device_id *sdio_match_one(struct sdio_func *func,
const struct sdio_device_id *id)
static const struct sdio_device_id *sdio_match_device(struct sdio_func *func,
struct sdio_driver *sdrv)
static int sdio_bus_match(struct device *dev, struct device_driver *drv)
static int
sdio_bus_uevent(struct device *dev, struct kobj_uevent_env *env)
static int sdio_bus_probe(struct device *dev)
static int sdio_bus_remove(struct device *dev)
static const struct dev_pm_ops sdio_bus_pm_ops = ;
#define SDIO_PM_OPS_PTR	(&sdio_bus_pm_ops)
#define SDIO_PM_OPS_PTR	NULL
static struct bus_type sdio_bus_type = ;
int sdio_register_bus(void)
void sdio_unregister_bus(void)
int sdio_register_driver(struct sdio_driver *drv)
EXPORT_SYMBOL_GPL(sdio_register_driver);
void sdio_unregister_driver(struct sdio_driver *drv)
EXPORT_SYMBOL_GPL(sdio_unregister_driver);
static void sdio_release_func(struct device *dev)
struct sdio_func *sdio_alloc_func(struct mmc_card *card)
int sdio_add_func(struct sdio_func *func)
void sdio_remove_func(struct sdio_func *func)
