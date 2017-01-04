#define PC236_DRIVER_NAME	"amplc_pc236"
#define PCI_VENDOR_ID_AMPLICON 0x14dc
#define PCI_DEVICE_ID_AMPLICON_PCI236 0x0009
#define PCI_DEVICE_ID_INVALID 0xffff
#define PC236_IO_SIZE		4
#define PC236_LCR_IO_SIZE	128
#define PCI236_INTR_DISABLE (PLX9052_INTCSR_LI1ENAB_DISABLED \
| PLX9052_INTCSR_LI1POL_HIGH \
| PLX9052_INTCSR_LI2POL_HIGH \
| PLX9052_INTCSR_PCIENAB_DISABLED \
| PLX9052_INTCSR_LI1SEL_EDGE \
| PLX9052_INTCSR_LI1CLRINT_ASSERTED)
#define PCI236_INTR_ENABLE (PLX9052_INTCSR_LI1ENAB_ENABLED \
| PLX9052_INTCSR_LI1POL_HIGH \
| PLX9052_INTCSR_LI2POL_HIGH \
| PLX9052_INTCSR_PCIENAB_ENABLED \
| PLX9052_INTCSR_LI1SEL_EDGE \
| PLX9052_INTCSR_LI1CLRINT_ASSERTED)
enum pc236_bustype ;
enum pc236_model ;
struct pc236_board ;
static const struct pc236_board pc236_boards[] = ;
static DEFINE_PCI_DEVICE_TABLE(pc236_pci_table) = ;
MODULE_DEVICE_TABLE(pci, pc236_pci_table);
#define thisboard ((const struct pc236_board *)dev->board_ptr)
struct pc236_private ;
#define devpriv ((struct pc236_private *)dev->private)
static int pc236_attach(struct comedi_device *dev, struct comedi_devconfig *it);
static int pc236_detach(struct comedi_device *dev);
static struct comedi_driver driver_amplc_pc236 = ;
static int __devinit driver_amplc_pc236_pci_probe(struct pci_dev *dev,
const struct pci_device_id
*ent)
static void __devexit driver_amplc_pc236_pci_remove(struct pci_dev *dev)
static struct pci_driver driver_amplc_pc236_pci_driver = ;
static int __init driver_amplc_pc236_init_module(void)
static void __exit driver_amplc_pc236_cleanup_module(void)
module_init(driver_amplc_pc236_init_module);
module_exit(driver_amplc_pc236_cleanup_module);
static int __init driver_amplc_pc236_init_module(void)
static void __exit driver_amplc_pc236_cleanup_module(void)
module_init(driver_amplc_pc236_init_module);
module_exit(driver_amplc_pc236_cleanup_module);
static int pc236_request_region(unsigned minor, unsigned long from,
unsigned long extent);
static void pc236_intr_disable(struct comedi_device *dev);
static void pc236_intr_enable(struct comedi_device *dev);
static int pc236_intr_check(struct comedi_device *dev);
static int pc236_intr_insn(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data);
static int pc236_intr_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_cmd *cmd);
static int pc236_intr_cmd(struct comedi_device *dev,
struct comedi_subdevice *s);
static int pc236_intr_cancel(struct comedi_device *dev,
struct comedi_subdevice *s);
static irqreturn_t pc236_interrupt(int irq, void *d);
static int
pc236_find_pci(struct comedi_device *dev, int bus, int slot,
struct pci_dev **pci_dev_p)
static int pc236_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int pc236_detach(struct comedi_device *dev)
static int pc236_request_region(unsigned minor, unsigned long from,
unsigned long extent)
static void pc236_intr_disable(struct comedi_device *dev)
static void pc236_intr_enable(struct comedi_device *dev)
static int pc236_intr_check(struct comedi_device *dev)
static int pc236_intr_insn(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data)
static int pc236_intr_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_cmd *cmd)
static int pc236_intr_cmd(struct comedi_device *dev, struct comedi_subdevice *s)
static int pc236_intr_cancel(struct comedi_device *dev,
struct comedi_subdevice *s)
static irqreturn_t pc236_interrupt(int irq, void *d)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
