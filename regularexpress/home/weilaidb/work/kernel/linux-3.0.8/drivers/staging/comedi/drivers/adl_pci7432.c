#define PCI7432_DI      0x00
#define PCI7432_DO	    0x00
#define PCI_DEVICE_ID_PCI7432 0x7432
static DEFINE_PCI_DEVICE_TABLE(adl_pci7432_pci_table) = ;
MODULE_DEVICE_TABLE(pci, adl_pci7432_pci_table);
struct adl_pci7432_private ;
#define devpriv ((struct adl_pci7432_private *)dev->private)
static int adl_pci7432_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int adl_pci7432_detach(struct comedi_device *dev);
static struct comedi_driver driver_adl_pci7432 = ;
static int adl_pci7432_di_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data);
static int adl_pci7432_do_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data);
static int adl_pci7432_attach(struct comedi_device *dev,
struct comedi_devconfig *it)
static int adl_pci7432_detach(struct comedi_device *dev)
static int adl_pci7432_do_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int adl_pci7432_di_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int __devinit driver_adl_pci7432_pci_probe(struct pci_dev *dev,
const struct pci_device_id
*ent)
static void __devexit driver_adl_pci7432_pci_remove(struct pci_dev *dev)
static struct pci_driver driver_adl_pci7432_pci_driver = ;
static int __init driver_adl_pci7432_init_module(void)
static void __exit driver_adl_pci7432_cleanup_module(void)
module_init(driver_adl_pci7432_init_module);
module_exit(driver_adl_pci7432_cleanup_module);
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
