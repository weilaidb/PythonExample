#define PCI7230_DI      0x00
#define PCI7230_DO	    0x00
#define PCI_DEVICE_ID_PCI7230 0x7230
static DEFINE_PCI_DEVICE_TABLE(adl_pci7230_pci_table) = ;
MODULE_DEVICE_TABLE(pci, adl_pci7230_pci_table);
struct adl_pci7230_private ;
#define devpriv ((struct adl_pci7230_private *)dev->private)
static int adl_pci7230_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int adl_pci7230_detach(struct comedi_device *dev);
static struct comedi_driver driver_adl_pci7230 = ;
static int adl_pci7230_di_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data);
static int adl_pci7230_do_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data);
static int adl_pci7230_attach(struct comedi_device *dev,
struct comedi_devconfig *it)
static int adl_pci7230_detach(struct comedi_device *dev)
static int adl_pci7230_do_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int adl_pci7230_di_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int __devinit driver_adl_pci7230_pci_probe(struct pci_dev *dev,
const struct pci_device_id
*ent)
static void __devexit driver_adl_pci7230_pci_remove(struct pci_dev *dev)
static struct pci_driver driver_adl_pci7230_pci_driver = ;
static int __init driver_adl_pci7230_init_module(void)
static void __exit driver_adl_pci7230_cleanup_module(void)
module_init(driver_adl_pci7230_init_module);
module_exit(driver_adl_pci7230_cleanup_module);
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
