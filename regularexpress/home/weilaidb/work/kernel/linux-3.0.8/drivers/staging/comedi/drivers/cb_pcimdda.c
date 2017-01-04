#define PCI_VENDOR_ID_COMPUTERBOARDS	0x1307
#define PCI_ID_PCIM_DDA06_16		0x0053
struct board_struct ;
enum DIO_METHODS ;
static const struct board_struct boards[] = ;
#define thisboard    ((const struct board_struct *)dev->board_ptr)
#define REG_SZ (thisboard->reg_sz)
#define REGS_BADRINDEX (thisboard->regs_badrindex)
static DEFINE_PCI_DEVICE_TABLE(pci_table) = ;
MODULE_DEVICE_TABLE(pci, pci_table);
struct board_private_struct ;
#define devpriv ((struct board_private_struct *)dev->private)
static int attach(struct comedi_device *dev, struct comedi_devconfig *it);
static int detach(struct comedi_device *dev);
static struct comedi_driver cb_pcimdda_driver = ;
MODULE_AUTHOR("Calin A. Culianu <calin@rtlab.org>");
MODULE_DESCRIPTION("Comedi low-level driver for the Computerboards PCIM-DDA "
"series.  Currently only supports PCIM-DDA06-16 (which "
"also happens to be the only board in this series. :) ) ");
MODULE_LICENSE("GPL");
static int __devinit cb_pcimdda_driver_pci_probe(struct pci_dev *dev,
const struct pci_device_id
*ent)
static void __devexit cb_pcimdda_driver_pci_remove(struct pci_dev *dev)
static struct pci_driver cb_pcimdda_driver_pci_driver = ;
static int __init cb_pcimdda_driver_init_module(void)
static void __exit cb_pcimdda_driver_cleanup_module(void)
module_init(cb_pcimdda_driver_init_module);
module_exit(cb_pcimdda_driver_cleanup_module);
static int ao_winsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int ao_rinsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static inline unsigned int figure_out_maxdata(int bits)
static int probe(struct comedi_device *dev, const struct comedi_devconfig *it);
static int attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int detach(struct comedi_device *dev)
static int ao_winsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int ao_rinsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int probe(struct comedi_device *dev, const struct comedi_devconfig *it)
