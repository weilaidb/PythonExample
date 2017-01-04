struct pci_dynid ;
int pci_add_dynid(struct pci_driver *drv,
unsigned int vendor, unsigned int device,
unsigned int subvendor, unsigned int subdevice,
unsigned int class, unsigned int class_mask,
unsigned long driver_data)
static void pci_free_dynids(struct pci_driver *drv)
static ssize_t
store_new_id(struct device_driver *driver, const char *buf, size_t count)
static DRIVER_ATTR(new_id, S_IWUSR, NULL, store_new_id);
static ssize_t
store_remove_id(struct device_driver *driver, const char *buf, size_t count)
static DRIVER_ATTR(remove_id, S_IWUSR, NULL, store_remove_id);
static int
pci_create_newid_file(struct pci_driver *drv)
static void pci_remove_newid_file(struct pci_driver *drv)
static int
pci_create_removeid_file(struct pci_driver *drv)
static void pci_remove_removeid_file(struct pci_driver *drv)
static inline int pci_create_newid_file(struct pci_driver *drv)
static inline void pci_remove_newid_file(struct pci_driver *drv)
static inline int pci_create_removeid_file(struct pci_driver *drv)
static inline void pci_remove_removeid_file(struct pci_driver *drv)
const struct pci_device_id *pci_match_id(const struct pci_device_id *ids,
struct pci_dev *dev)
static const struct pci_device_id *pci_match_device(struct pci_driver *drv,
struct pci_dev *dev)
struct drv_dev_and_id ;
static long local_pci_probe(void *_ddi)
static int pci_call_probe(struct pci_driver *drv, struct pci_dev *dev,
const struct pci_device_id *id)
static int
__pci_device_probe(struct pci_driver *drv, struct pci_dev *pci_dev)
static int pci_device_probe(struct device * dev)
static int pci_device_remove(struct device * dev)
static void pci_device_shutdown(struct device *dev)
static int pci_restore_standard_config(struct pci_dev *pci_dev)
static void pci_pm_default_resume_early(struct pci_dev *pci_dev)
static void pci_pm_set_unknown_state(struct pci_dev *pci_dev)
static int pci_pm_reenable_device(struct pci_dev *pci_dev)
static int pci_legacy_suspend(struct device *dev, pm_message_t state)
static int pci_legacy_suspend_late(struct device *dev, pm_message_t state)
static int pci_legacy_resume_early(struct device *dev)
static int pci_legacy_resume(struct device *dev)
static void pci_pm_default_resume(struct pci_dev *pci_dev)
static void pci_pm_default_suspend(struct pci_dev *pci_dev)
static bool pci_has_legacy_pm_support(struct pci_dev *pci_dev)
static int pci_pm_prepare(struct device *dev)
static void pci_pm_complete(struct device *dev)
#define pci_pm_prepare	NULL
#define pci_pm_complete	NULL
static int pci_pm_suspend(struct device *dev)
static int pci_pm_suspend_noirq(struct device *dev)
static int pci_pm_resume_noirq(struct device *dev)
static int pci_pm_resume(struct device *dev)
#define pci_pm_suspend		NULL
#define pci_pm_suspend_noirq	NULL
#define pci_pm_resume		NULL
#define pci_pm_resume_noirq	NULL
static int pci_pm_freeze(struct device *dev)
static int pci_pm_freeze_noirq(struct device *dev)
static int pci_pm_thaw_noirq(struct device *dev)
static int pci_pm_thaw(struct device *dev)
static int pci_pm_poweroff(struct device *dev)
static int pci_pm_poweroff_noirq(struct device *dev)
static int pci_pm_restore_noirq(struct device *dev)
static int pci_pm_restore(struct device *dev)
#define pci_pm_freeze		NULL
#define pci_pm_freeze_noirq	NULL
#define pci_pm_thaw		NULL
#define pci_pm_thaw_noirq	NULL
#define pci_pm_poweroff		NULL
#define pci_pm_poweroff_noirq	NULL
#define pci_pm_restore		NULL
#define pci_pm_restore_noirq	NULL
static int pci_pm_runtime_suspend(struct device *dev)
static int pci_pm_runtime_resume(struct device *dev)
static int pci_pm_runtime_idle(struct device *dev)
#define pci_pm_runtime_suspend	NULL
#define pci_pm_runtime_resume	NULL
#define pci_pm_runtime_idle	NULL
const struct dev_pm_ops pci_dev_pm_ops = ;
#define PCI_PM_OPS_PTR	(&pci_dev_pm_ops)
#define PCI_PM_OPS_PTR	NULL
int __pci_register_driver(struct pci_driver *drv, struct module *owner,
const char *mod_name)
void
pci_unregister_driver(struct pci_driver *drv)
static struct pci_driver pci_compat_driver = ;
struct pci_driver *
pci_dev_driver(const struct pci_dev *dev)
static int pci_bus_match(struct device *dev, struct device_driver *drv)
struct pci_dev *pci_dev_get(struct pci_dev *dev)
void pci_dev_put(struct pci_dev *dev)
int pci_uevent(struct device *dev, struct kobj_uevent_env *env)
struct bus_type pci_bus_type = ;
static int __init pci_driver_init(void)
postcore_initcall(pci_driver_init);
EXPORT_SYMBOL_GPL(pci_add_dynid);
EXPORT_SYMBOL(pci_match_id);
EXPORT_SYMBOL(__pci_register_driver);
EXPORT_SYMBOL(pci_unregister_driver);
EXPORT_SYMBOL(pci_dev_driver);
EXPORT_SYMBOL(pci_bus_type);
EXPORT_SYMBOL(pci_dev_get);
EXPORT_SYMBOL(pci_dev_put);
