#define DRV_NAME "janz-cmodio"
#define CMODIO_MODULBUS_SIZE	0x200
#define CMODIO_MAX_MODULES	4
static unsigned int num_modules = CMODIO_MAX_MODULES;
static unsigned char *modules[CMODIO_MAX_MODULES] = ;
module_param_array(modules, charp, &num_modules, S_IRUGO);
MODULE_PARM_DESC(modules, "MODULbus modules attached to the carrier board");
static unsigned int cmodio_id;
struct cmodio_device ;
static int __devinit cmodio_setup_subdevice(struct cmodio_device *priv,
char *name, unsigned int devno,
unsigned int modno)
static int __devinit cmodio_probe_submodules(struct cmodio_device *priv)
static ssize_t mbus_show(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(modulbus_number, S_IRUGO, mbus_show, NULL);
static struct attribute *cmodio_sysfs_attrs[] = ;
static const struct attribute_group cmodio_sysfs_attr_group = ;
static int __devinit cmodio_pci_probe(struct pci_dev *dev,
const struct pci_device_id *id)
static void __devexit cmodio_pci_remove(struct pci_dev *dev)
#define PCI_VENDOR_ID_JANZ		0x13c3
static DEFINE_PCI_DEVICE_TABLE(cmodio_pci_ids) = ;
MODULE_DEVICE_TABLE(pci, cmodio_pci_ids);
static struct pci_driver cmodio_pci_driver = ;
static int __init cmodio_init(void)
static void __exit cmodio_exit(void)
MODULE_AUTHOR("Ira W. Snyder <iws@ovro.caltech.edu>");
MODULE_DESCRIPTION("Janz CMOD-IO PCI MODULbus Carrier Board Driver");
MODULE_LICENSE("GPL");
module_init(cmodio_init);
module_exit(cmodio_exit);
