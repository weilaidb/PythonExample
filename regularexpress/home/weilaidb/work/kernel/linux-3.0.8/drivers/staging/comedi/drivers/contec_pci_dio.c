enum contec_model ;
struct contec_board ;
static const struct contec_board contec_boards[] = ;
#define PCI_DEVICE_ID_PIO1616L 0x8172
static DEFINE_PCI_DEVICE_TABLE(contec_pci_table) = ;
MODULE_DEVICE_TABLE(pci, contec_pci_table);
#define thisboard ((const struct contec_board *)dev->board_ptr)
struct contec_private ;
#define devpriv ((struct contec_private *)dev->private)
static int contec_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int contec_detach(struct comedi_device *dev);
static struct comedi_driver driver_contec = ;
static int contec_di_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int contec_do_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int contec_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int contec_detach(struct comedi_device *dev)
static int contec_do_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int contec_di_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int __devinit driver_contec_pci_probe(struct pci_dev *dev,
const struct pci_device_id *ent)
static void __devexit driver_contec_pci_remove(struct pci_dev *dev)
static struct pci_driver driver_contec_pci_driver = ;
static int __init driver_contec_init_module(void)
static void __exit driver_contec_cleanup_module(void)
module_init(driver_contec_init_module);
module_exit(driver_contec_cleanup_module);
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
