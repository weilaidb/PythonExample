#define DEBUG 1
#define DEBUG_FLAGS
#define NI6527_DIO_SIZE 4096
#define NI6527_MITE_SIZE 4096
#define Port_Register(x)			(0x00+(x))
#define ID_Register				0x06
#define Clear_Register				0x07
#define ClrEdge				0x08
#define ClrOverflow			0x04
#define ClrFilter			0x02
#define ClrInterval			0x01
#define Filter_Interval(x)			(0x08+(x))
#define Filter_Enable(x)			(0x0c+(x))
#define Change_Status				0x14
#define MasterInterruptStatus		0x04
#define Overflow			0x02
#define EdgeStatus			0x01
#define Master_Interrupt_Control		0x15
#define FallingEdgeIntEnable		0x10
#define RisingEdgeIntEnable		0x08
#define MasterInterruptEnable		0x04
#define OverflowIntEnable		0x02
#define EdgeIntEnable			0x01
#define Rising_Edge_Detection_Enable(x)		(0x018+(x))
#define Falling_Edge_Detection_Enable(x)	(0x020+(x))
static int ni6527_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int ni6527_detach(struct comedi_device *dev);
static struct comedi_driver driver_ni6527 = ;
struct ni6527_board ;
static const struct ni6527_board ni6527_boards[] = ;
#define n_ni6527_boards ARRAY_SIZE(ni6527_boards)
#define this_board ((const struct ni6527_board *)dev->board_ptr)
static DEFINE_PCI_DEVICE_TABLE(ni6527_pci_table) = ;
MODULE_DEVICE_TABLE(pci, ni6527_pci_table);
struct ni6527_private ;
#define devpriv ((struct ni6527_private *)dev->private)
static int ni6527_find_device(struct comedi_device *dev, int bus, int slot);
static int ni6527_di_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int ni6527_di_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int ni6527_do_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static irqreturn_t ni6527_interrupt(int irq, void *d)
static int ni6527_intr_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_cmd *cmd)
static int ni6527_intr_cmd(struct comedi_device *dev,
struct comedi_subdevice *s)
static int ni6527_intr_cancel(struct comedi_device *dev,
struct comedi_subdevice *s)
static int ni6527_intr_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int ni6527_intr_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int ni6527_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int ni6527_detach(struct comedi_device *dev)
static int ni6527_find_device(struct comedi_device *dev, int bus, int slot)
static int __devinit driver_ni6527_pci_probe(struct pci_dev *dev,
const struct pci_device_id *ent)
static void __devexit driver_ni6527_pci_remove(struct pci_dev *dev)
static struct pci_driver driver_ni6527_pci_driver = ;
static int __init driver_ni6527_init_module(void)
static void __exit driver_ni6527_cleanup_module(void)
module_init(driver_ni6527_init_module);
module_exit(driver_ni6527_cleanup_module);
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
