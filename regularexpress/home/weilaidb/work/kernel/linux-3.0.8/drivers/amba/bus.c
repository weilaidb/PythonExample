#define to_amba_driver(d)	container_of(d, struct amba_driver, drv)
static const struct amba_id *
amba_lookup(const struct amba_id *table, struct amba_device *dev)
static int amba_match(struct device *dev, struct device_driver *drv)
static int amba_uevent(struct device *dev, struct kobj_uevent_env *env)
#define amba_uevent NULL
#define amba_attr_func(name,fmt,arg...)					\
static ssize_t name##_show(struct device *_dev,				\
struct device_attribute *attr, char *buf)	\
#define amba_attr(name,fmt,arg...)	\
amba_attr_func(name,fmt,arg)		\
static DEVICE_ATTR(name, S_IRUGO, name##_show, NULL)
amba_attr_func(id, "%08x\n", dev->periphid);
amba_attr(irq0, "%u\n", dev->irq[0]);
amba_attr(irq1, "%u\n", dev->irq[1]);
amba_attr_func(resource, "\t%016llx\t%016llx\t%016lx\n",
(unsigned long long)dev->res.start, (unsigned long long)dev->res.end,
dev->res.flags);
static struct device_attribute amba_dev_attrs[] = ;
static int amba_legacy_suspend(struct device *dev, pm_message_t mesg)
static int amba_legacy_resume(struct device *dev)
static int amba_pm_prepare(struct device *dev)
static void amba_pm_complete(struct device *dev)
#define amba_pm_prepare		NULL
#define amba_pm_complete		NULL
static int amba_pm_suspend(struct device *dev)
static int amba_pm_suspend_noirq(struct device *dev)
static int amba_pm_resume(struct device *dev)
static int amba_pm_resume_noirq(struct device *dev)
#define amba_pm_suspend		NULL
#define amba_pm_resume		NULL
#define amba_pm_suspend_noirq	NULL
#define amba_pm_resume_noirq	NULL
static int amba_pm_freeze(struct device *dev)
static int amba_pm_freeze_noirq(struct device *dev)
static int amba_pm_thaw(struct device *dev)
static int amba_pm_thaw_noirq(struct device *dev)
static int amba_pm_poweroff(struct device *dev)
static int amba_pm_poweroff_noirq(struct device *dev)
static int amba_pm_restore(struct device *dev)
static int amba_pm_restore_noirq(struct device *dev)
#define amba_pm_freeze		NULL
#define amba_pm_thaw		NULL
#define amba_pm_poweroff		NULL
#define amba_pm_restore		NULL
#define amba_pm_freeze_noirq	NULL
#define amba_pm_thaw_noirq		NULL
#define amba_pm_poweroff_noirq	NULL
#define amba_pm_restore_noirq	NULL
static const struct dev_pm_ops amba_pm = ;
#define AMBA_PM (&amba_pm)
#define AMBA_PM	NULL
struct bus_type amba_bustype = ;
static int __init amba_init(void)
postcore_initcall(amba_init);
static int amba_get_enable_pclk(struct amba_device *pcdev)
static void amba_put_disable_pclk(struct amba_device *pcdev)
static int amba_get_enable_vcore(struct amba_device *pcdev)
static void amba_put_disable_vcore(struct amba_device *pcdev)
static int amba_probe(struct device *dev)
static int amba_remove(struct device *dev)
static void amba_shutdown(struct device *dev)
int amba_driver_register(struct amba_driver *drv)
void amba_driver_unregister(struct amba_driver *drv)
static void amba_device_release(struct device *dev)
int amba_device_register(struct amba_device *dev, struct resource *parent)
void amba_device_unregister(struct amba_device *dev)
struct find_data ;
static int amba_find_match(struct device *dev, void *data)
struct amba_device *
amba_find_device(const char *busid, struct device *parent, unsigned int id,
unsigned int mask)
int amba_request_regions(struct amba_device *dev, const char *name)
void amba_release_regions(struct amba_device *dev)
EXPORT_SYMBOL(amba_driver_register);
EXPORT_SYMBOL(amba_driver_unregister);
EXPORT_SYMBOL(amba_device_register);
EXPORT_SYMBOL(amba_device_unregister);
EXPORT_SYMBOL(amba_find_device);
EXPORT_SYMBOL(amba_request_regions);
EXPORT_SYMBOL(amba_release_regions);
