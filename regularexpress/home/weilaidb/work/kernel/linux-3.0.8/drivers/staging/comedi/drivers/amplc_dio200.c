#define DIO200_DRIVER_NAME	"amplc_dio200"
#define PCI_VENDOR_ID_AMPLICON 0x14dc
#define PCI_DEVICE_ID_AMPLICON_PCI272 0x000a
#define PCI_DEVICE_ID_AMPLICON_PCI215 0x000b
#define PCI_DEVICE_ID_INVALID 0xffff
#define DIO200_IO_SIZE		0x20
#define DIO200_XCLK_SCE		0x18
#define DIO200_YCLK_SCE		0x19
#define DIO200_ZCLK_SCE		0x1a
#define DIO200_XGAT_SCE		0x1b
#define DIO200_YGAT_SCE		0x1c
#define DIO200_ZGAT_SCE		0x1d
#define DIO200_INT_SCE		0x1e
#define CLK_SCE(which, chan, source) (((which) << 5) | ((chan) << 3) | (source))
#define GAT_SCE(which, chan, source) (((which) << 5) | ((chan) << 3) | (source))
static const unsigned clock_period[8] = ;
enum dio200_bustype ;
enum dio200_model ;
enum dio200_layout ;
struct dio200_board ;
static const struct dio200_board dio200_boards[] = ;
enum dio200_sdtype ;
#define DIO200_MAX_SUBDEVS	7
#define DIO200_MAX_ISNS		6
struct dio200_layout_struct ;
static const struct dio200_layout_struct dio200_layouts[] = ;
static DEFINE_PCI_DEVICE_TABLE(dio200_pci_table) = ;
MODULE_DEVICE_TABLE(pci, dio200_pci_table);
#define thisboard ((const struct dio200_board *)dev->board_ptr)
#define thislayout (&dio200_layouts[((struct dio200_board *) \
dev->board_ptr)->layout])
struct dio200_private ;
#define devpriv ((struct dio200_private *)dev->private)
struct dio200_subdev_8254 ;
struct dio200_subdev_intr ;
static int dio200_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int dio200_detach(struct comedi_device *dev);
static struct comedi_driver driver_amplc_dio200 = ;
static int __devinit driver_amplc_dio200_pci_probe(struct pci_dev *dev,
const struct pci_device_id
*ent)
static void __devexit driver_amplc_dio200_pci_remove(struct pci_dev *dev)
static struct pci_driver driver_amplc_dio200_pci_driver = ;
static int __init driver_amplc_dio200_init_module(void)
static void __exit driver_amplc_dio200_cleanup_module(void)
module_init(driver_amplc_dio200_init_module);
module_exit(driver_amplc_dio200_cleanup_module);
static int __init driver_amplc_dio200_init_module(void)
static void __exit driver_amplc_dio200_cleanup_module(void)
module_init(driver_amplc_dio200_init_module);
module_exit(driver_amplc_dio200_cleanup_module);
static int
dio200_find_pci(struct comedi_device *dev, int bus, int slot,
struct pci_dev **pci_dev_p)
static int
dio200_request_region(unsigned minor, unsigned long from, unsigned long extent)
static int
dio200_subdev_intr_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static void dio200_stop_intr(struct comedi_device *dev,
struct comedi_subdevice *s)
static int dio200_start_intr(struct comedi_device *dev,
struct comedi_subdevice *s)
static int
dio200_inttrig_start_intr(struct comedi_device *dev, struct comedi_subdevice *s,
unsigned int trignum)
static int dio200_handle_read_intr(struct comedi_device *dev,
struct comedi_subdevice *s)
static int dio200_subdev_intr_cancel(struct comedi_device *dev,
struct comedi_subdevice *s)
static int
dio200_subdev_intr_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_cmd *cmd)
static int dio200_subdev_intr_cmd(struct comedi_device *dev,
struct comedi_subdevice *s)
static int
dio200_subdev_intr_init(struct comedi_device *dev, struct comedi_subdevice *s,
unsigned long iobase, unsigned valid_isns,
int has_int_sce)
static void
dio200_subdev_intr_cleanup(struct comedi_device *dev,
struct comedi_subdevice *s)
static irqreturn_t dio200_interrupt(int irq, void *d)
static int
dio200_subdev_8254_read(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int
dio200_subdev_8254_write(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int
dio200_set_gate_src(struct dio200_subdev_8254 *subpriv,
unsigned int counter_number, unsigned int gate_src)
static int
dio200_get_gate_src(struct dio200_subdev_8254 *subpriv,
unsigned int counter_number)
static int
dio200_set_clock_src(struct dio200_subdev_8254 *subpriv,
unsigned int counter_number, unsigned int clock_src)
static int
dio200_get_clock_src(struct dio200_subdev_8254 *subpriv,
unsigned int counter_number, unsigned int *period_ns)
static int
dio200_subdev_8254_config(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int
dio200_subdev_8254_init(struct comedi_device *dev, struct comedi_subdevice *s,
unsigned long iobase, unsigned offset,
int has_clk_gat_sce)
static void
dio200_subdev_8254_cleanup(struct comedi_device *dev,
struct comedi_subdevice *s)
static int dio200_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int dio200_detach(struct comedi_device *dev)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
