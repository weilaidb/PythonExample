#define _GNU_SOURCE
#define DEBUG 1
#define DEBUG_FLAGS
#define NI6514_DIO_SIZE 4096
#define NI6514_MITE_SIZE 4096
#define NI_65XX_MAX_NUM_PORTS 12
static const unsigned ni_65xx_channels_per_port = 8;
static const unsigned ni_65xx_port_offset = 0x10;
static inline unsigned Port_Data(unsigned port)
static inline unsigned Port_Select(unsigned port)
static inline unsigned Rising_Edge_Detection_Enable(unsigned port)
static inline unsigned Falling_Edge_Detection_Enable(unsigned port)
static inline unsigned Filter_Enable(unsigned port)
#define ID_Register				0x00
#define Clear_Register				0x01
#define ClrEdge				0x08
#define ClrOverflow			0x04
#define Filter_Interval			0x08
#define Change_Status				0x02
#define MasterInterruptStatus		0x04
#define Overflow			0x02
#define EdgeStatus			0x01
#define Master_Interrupt_Control		0x03
#define FallingEdgeIntEnable		0x10
#define RisingEdgeIntEnable		0x08
#define MasterInterruptEnable		0x04
#define OverflowIntEnable		0x02
#define EdgeIntEnable			0x01
static int ni_65xx_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int ni_65xx_detach(struct comedi_device *dev);
static struct comedi_driver driver_ni_65xx = ;
struct ni_65xx_board ;
static const struct ni_65xx_board ni_65xx_boards[] = ;
#define n_ni_65xx_boards ARRAY_SIZE(ni_65xx_boards)
static inline const struct ni_65xx_board *board(struct comedi_device *dev)
static inline unsigned ni_65xx_port_by_channel(unsigned channel)
static inline unsigned ni_65xx_total_num_ports(const struct ni_65xx_board
*board)
static DEFINE_PCI_DEVICE_TABLE(ni_65xx_pci_table) = ;
MODULE_DEVICE_TABLE(pci, ni_65xx_pci_table);
struct ni_65xx_private ;
static inline struct ni_65xx_private *private(struct comedi_device *dev)
struct ni_65xx_subdevice_private ;
static inline struct ni_65xx_subdevice_private *sprivate(struct comedi_subdevice
*subdev)
static struct ni_65xx_subdevice_private *ni_65xx_alloc_subdevice_private(void)
static int ni_65xx_find_device(struct comedi_device *dev, int bus, int slot);
static int ni_65xx_config_filter(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int ni_65xx_dio_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int ni_65xx_dio_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static irqreturn_t ni_65xx_interrupt(int irq, void *d)
static int ni_65xx_intr_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_cmd *cmd)
static int ni_65xx_intr_cmd(struct comedi_device *dev,
struct comedi_subdevice *s)
static int ni_65xx_intr_cancel(struct comedi_device *dev,
struct comedi_subdevice *s)
static int ni_65xx_intr_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int ni_65xx_intr_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int ni_65xx_attach(struct comedi_device *dev,
struct comedi_devconfig *it)
static int ni_65xx_detach(struct comedi_device *dev)
static int ni_65xx_find_device(struct comedi_device *dev, int bus, int slot)
static int __devinit driver_ni_65xx_pci_probe(struct pci_dev *dev,
const struct pci_device_id *ent)
static void __devexit driver_ni_65xx_pci_remove(struct pci_dev *dev)
static struct pci_driver driver_ni_65xx_pci_driver = ;
static int __init driver_ni_65xx_init_module(void)
static void __exit driver_ni_65xx_cleanup_module(void)
module_init(driver_ni_65xx_init_module);
module_exit(driver_ni_65xx_cleanup_module);
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
