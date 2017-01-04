#undef DEBUG
#define MAX_NODE_NAME_SIZE (20 - 12)
static struct macio_chip      *macio_on_hold;
static int macio_bus_match(struct device *dev, struct device_driver *drv)
struct macio_dev *macio_dev_get(struct macio_dev *dev)
void macio_dev_put(struct macio_dev *dev)
static int macio_device_probe(struct device *dev)
static int macio_device_remove(struct device *dev)
static void macio_device_shutdown(struct device *dev)
static int macio_device_suspend(struct device *dev, pm_message_t state)
static int macio_device_resume(struct device * dev)
extern struct device_attribute macio_dev_attrs[];
struct bus_type macio_bus_type = ;
static int __init macio_bus_driver_init(void)
postcore_initcall(macio_bus_driver_init);
static void macio_release_dev(struct device *dev)
static int macio_resource_quirks(struct device_node *np, struct resource *res,
int index)
static void macio_create_fixup_irq(struct macio_dev *dev, int index,
unsigned int line)
static void macio_add_missing_resources(struct macio_dev *dev)
static void macio_setup_interrupts(struct macio_dev *dev)
static void macio_setup_resources(struct macio_dev *dev,
struct resource *parent_res)
static struct macio_dev * macio_add_one_device(struct macio_chip *chip,
struct device *parent,
struct device_node *np,
struct macio_dev *in_bay,
struct resource *parent_res)
static int macio_skip_device(struct device_node *np)
static void macio_pci_add_devices(struct macio_chip *chip)
int macio_register_driver(struct macio_driver *drv)
void macio_unregister_driver(struct macio_driver *drv)
struct macio_devres ;
static void maciom_release(struct device *gendev, void *res)
int macio_enable_devres(struct macio_dev *dev)
static struct macio_devres * find_macio_dr(struct macio_dev *dev)
int macio_request_resource(struct macio_dev *dev, int resource_no,
const char *name)
void macio_release_resource(struct macio_dev *dev, int resource_no)
int macio_request_resources(struct macio_dev *dev, const char *name)
void macio_release_resources(struct macio_dev *dev)
static int __devinit macio_pci_probe(struct pci_dev *pdev, const struct pci_device_id *ent)
static void __devexit macio_pci_remove(struct pci_dev* pdev)
static const struct pci_device_id __devinitdata pci_ids [] = ;
MODULE_DEVICE_TABLE (pci, pci_ids);
static struct pci_driver macio_pci_driver = ;
static int __init macio_module_init (void)
module_init(macio_module_init);
EXPORT_SYMBOL(macio_register_driver);
EXPORT_SYMBOL(macio_unregister_driver);
EXPORT_SYMBOL(macio_dev_get);
EXPORT_SYMBOL(macio_dev_put);
EXPORT_SYMBOL(macio_request_resource);
EXPORT_SYMBOL(macio_release_resource);
EXPORT_SYMBOL(macio_request_resources);
EXPORT_SYMBOL(macio_release_resources);
EXPORT_SYMBOL(macio_enable_devres);
