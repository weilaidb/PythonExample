#define PCI6208_DRIVER_NAME	"adl_pci6208"
struct pci6208_board ;
static const struct pci6208_board pci6208_boards[] = ;
static DEFINE_PCI_DEVICE_TABLE(pci6208_pci_table) = ;
MODULE_DEVICE_TABLE(pci, pci6208_pci_table);
#define thisboard ((const struct pci6208_board *)dev->board_ptr)
struct pci6208_private ;
#define devpriv ((struct pci6208_private *)dev->private)
static int pci6208_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int pci6208_detach(struct comedi_device *dev);
static struct comedi_driver driver_pci6208 = ;
static int __devinit driver_pci6208_pci_probe(struct pci_dev *dev,
const struct pci_device_id *ent)
static void __devexit driver_pci6208_pci_remove(struct pci_dev *dev)
static struct pci_driver driver_pci6208_pci_driver = ;
static int __init driver_pci6208_init_module(void)
static void __exit driver_pci6208_cleanup_module(void)
module_init(driver_pci6208_init_module);
module_exit(driver_pci6208_cleanup_module);
static int pci6208_find_device(struct comedi_device *dev, int bus, int slot);
static int
pci6208_pci_setup(struct pci_dev *pci_dev, unsigned long *io_base_ptr,
int dev_minor);
static int pci6208_ao_winsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int pci6208_ao_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int pci6208_attach(struct comedi_device *dev,
struct comedi_devconfig *it)
static int pci6208_detach(struct comedi_device *dev)
static int pci6208_ao_winsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pci6208_ao_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pci6208_find_device(struct comedi_device *dev, int bus, int slot)
static int
pci6208_pci_setup(struct pci_dev *pci_dev, unsigned long *io_base_ptr,
int dev_minor)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
