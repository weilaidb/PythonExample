#define to_mmc_driver(d)	container_of(d, struct mmc_driver, drv)
static ssize_t mmc_type_show(struct device *dev,
struct device_attribute *attr, char *buf)
static struct device_attribute mmc_dev_attrs[] = ;
static int mmc_bus_match(struct device *dev, struct device_driver *drv)
static int
mmc_bus_uevent(struct device *dev, struct kobj_uevent_env *env)
static int mmc_bus_probe(struct device *dev)
static int mmc_bus_remove(struct device *dev)
static int mmc_bus_suspend(struct device *dev, pm_message_t state)
static int mmc_bus_resume(struct device *dev)
static int mmc_runtime_suspend(struct device *dev)
static int mmc_runtime_resume(struct device *dev)
static int mmc_runtime_idle(struct device *dev)
static const struct dev_pm_ops mmc_bus_pm_ops = ;
#define MMC_PM_OPS_PTR	(&mmc_bus_pm_ops)
#define MMC_PM_OPS_PTR	NULL
static struct bus_type mmc_bus_type = ;
int mmc_register_bus(void)
void mmc_unregister_bus(void)
int mmc_register_driver(struct mmc_driver *drv)
EXPORT_SYMBOL(mmc_register_driver);
void mmc_unregister_driver(struct mmc_driver *drv)
EXPORT_SYMBOL(mmc_unregister_driver);
static void mmc_release_card(struct device *dev)
struct mmc_card *mmc_alloc_card(struct mmc_host *host, struct device_type *type)
int mmc_add_card(struct mmc_card *card)
void mmc_remove_card(struct mmc_card *card)
