#define PORT1A 0
#define PORT2A 4
#define PORT3A 8
#define PORT4A 12
#define PCI_DEVICE_ID_PCI7296 0x7296
static DEFINE_PCI_DEVICE_TABLE(adl_pci7296_pci_table) = ;
MODULE_DEVICE_TABLE(pci, adl_pci7296_pci_table);
struct adl_pci7296_private ;
#define devpriv ((struct adl_pci7296_private *)dev->private)
static int adl_pci7296_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int adl_pci7296_detach(struct comedi_device *dev);
static struct comedi_driver driver_adl_pci7296 = ;
static int adl_pci7296_attach(struct comedi_device *dev,
struct comedi_devconfig *it)
static int adl_pci7296_detach(struct comedi_device *dev)
static int __devinit driver_adl_pci7296_pci_probe(struct pci_dev *dev,
const struct pci_device_id
*ent)
static void __devexit driver_adl_pci7296_pci_remove(struct pci_dev *dev)
static struct pci_driver driver_adl_pci7296_pci_driver = ;
static int __init driver_adl_pci7296_init_module(void)
static void __exit driver_adl_pci7296_cleanup_module(void)
module_init(driver_adl_pci7296_init_module);
module_exit(driver_adl_pci7296_cleanup_module);
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
