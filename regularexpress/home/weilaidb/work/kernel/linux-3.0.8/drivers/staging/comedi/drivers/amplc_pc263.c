#define PC263_DRIVER_NAME	"amplc_pc263"
#define PCI_VENDOR_ID_AMPLICON 0x14dc
#define PCI_DEVICE_ID_AMPLICON_PCI263 0x000c
#define PCI_DEVICE_ID_INVALID 0xffff
#define PC263_IO_SIZE	2
enum pc263_bustype ;
enum pc263_model ;
struct pc263_board ;
static const struct pc263_board pc263_boards[] = ;
static DEFINE_PCI_DEVICE_TABLE(pc263_pci_table) = ;
MODULE_DEVICE_TABLE(pci, pc263_pci_table);
#define thisboard ((const struct pc263_board *)dev->board_ptr)
struct pc263_private ;
#define devpriv ((struct pc263_private *)dev->private)
static int pc263_attach(struct comedi_device *dev, struct comedi_devconfig *it);
static int pc263_detach(struct comedi_device *dev);
static struct comedi_driver driver_amplc_pc263 = ;
static int pc263_request_region(unsigned minor, unsigned long from,
unsigned long extent);
static int pc263_dio_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int pc263_dio_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int
pc263_find_pci(struct comedi_device *dev, int bus, int slot,
struct pci_dev **pci_dev_p)
static int pc263_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int pc263_detach(struct comedi_device *dev)
static int pc263_request_region(unsigned minor, unsigned long from,
unsigned long extent)
static int pc263_dio_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pc263_dio_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int __devinit driver_amplc_pc263_pci_probe(struct pci_dev *dev,
const struct pci_device_id
*ent)
static void __devexit driver_amplc_pc263_pci_remove(struct pci_dev *dev)
static struct pci_driver driver_amplc_pc263_pci_driver = ;
static int __init driver_amplc_pc263_init_module(void)
static void __exit driver_amplc_pc263_cleanup_module(void)
module_init(driver_amplc_pc263_init_module);
module_exit(driver_amplc_pc263_cleanup_module);
static int __init driver_amplc_pc263_init_module(void)
static void __exit driver_amplc_pc263_cleanup_module(void)
module_init(driver_amplc_pc263_init_module);
module_exit(driver_amplc_pc263_cleanup_module);
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
