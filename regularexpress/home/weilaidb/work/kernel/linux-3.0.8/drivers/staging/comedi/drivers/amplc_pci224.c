#define DRIVER_NAME	"amplc_pci224"
#define PCI_VENDOR_ID_AMPLICON 0x14dc
#define PCI_DEVICE_ID_AMPLICON_PCI224 0x0007
#define PCI_DEVICE_ID_AMPLICON_PCI234 0x0008
#define PCI_DEVICE_ID_INVALID 0xffff
#define PCI224_IO1_SIZE	0x20
#define PCI224_Z2_CT0	0x14
#define PCI224_Z2_CT1	0x15
#define PCI224_Z2_CT2	0x16
#define PCI224_Z2_CTC	0x17
#define PCI224_ZCLK_SCE	0x1A
#define PCI224_ZGAT_SCE	0x1D
#define PCI224_INT_SCE	0x1E
#define PCI224_IO2_SIZE	0x10
#define PCI224_DACDATA	0x00
#define PCI224_SOFTTRIG	0x00
#define PCI224_DACCON	0x02
#define PCI224_FIFOSIZ	0x04
#define PCI224_DACCEN	0x06
#define PCI224_DACCON_TRIG_MASK		(7 << 0)
#define PCI224_DACCON_TRIG_NONE		(0 << 0)
#define PCI224_DACCON_TRIG_SW		(1 << 0)
#define PCI224_DACCON_TRIG_EXTP		(2 << 0)
#define PCI224_DACCON_TRIG_EXTN		(3 << 0)
#define PCI224_DACCON_TRIG_Z2CT0	(4 << 0)
#define PCI224_DACCON_TRIG_Z2CT1	(5 << 0)
#define PCI224_DACCON_TRIG_Z2CT2	(6 << 0)
#define PCI224_DACCON_POLAR_MASK	(1 << 3)
#define PCI224_DACCON_POLAR_UNI		(0 << 3)
#define PCI224_DACCON_POLAR_BI		(1 << 3)
#define PCI224_DACCON_VREF_MASK		(3 << 4)
#define PCI224_DACCON_VREF_1_25		(0 << 4)
#define PCI224_DACCON_VREF_2_5		(1 << 4)
#define PCI224_DACCON_VREF_5		(2 << 4)
#define PCI224_DACCON_VREF_10		(3 << 4)
#define PCI224_DACCON_FIFOWRAP		(1 << 7)
#define PCI224_DACCON_FIFOENAB		(1 << 8)
#define PCI224_DACCON_FIFOINTR_MASK	(7 << 9)
#define PCI224_DACCON_FIFOINTR_EMPTY	(0 << 9)
#define PCI224_DACCON_FIFOINTR_NEMPTY	(1 << 9)
#define PCI224_DACCON_FIFOINTR_NHALF	(2 << 9)
#define PCI224_DACCON_FIFOINTR_HALF	(3 << 9)
#define PCI224_DACCON_FIFOINTR_NFULL	(4 << 9)
#define PCI224_DACCON_FIFOINTR_FULL	(5 << 9)
#define PCI224_DACCON_FIFOFL_MASK	(7 << 12)
#define PCI224_DACCON_FIFOFL_EMPTY	(1 << 12)
#define PCI224_DACCON_FIFOFL_ONETOHALF	(0 << 12)
#define PCI224_DACCON_FIFOFL_HALFTOFULL	(4 << 12)
#define PCI224_DACCON_FIFOFL_FULL	(6 << 12)
#define PCI224_DACCON_BUSY		(1 << 15)
#define PCI224_DACCON_FIFORESET		(1 << 12)
#define PCI224_DACCON_GLOBALRESET	(1 << 13)
#define PCI224_FIFO_SIZE	4096
#define PCI224_FIFO_ROOM_EMPTY		PCI224_FIFO_SIZE
#define PCI224_FIFO_ROOM_ONETOHALF	(PCI224_FIFO_SIZE / 2)
#define PCI224_FIFO_ROOM_HALFTOFULL	1
#define PCI224_FIFO_ROOM_FULL		0
#define CLK_CLK		0
#define CLK_10MHZ	1
#define CLK_1MHZ	2
#define CLK_100KHZ	3
#define CLK_10KHZ	4
#define CLK_1KHZ	5
#define CLK_OUTNM1	6
#define CLK_EXT		7
#define CLK_CONFIG(chan, src)	((((chan) & 3) << 3) | ((src) & 7))
#define TIMEBASE_10MHZ		100
#define TIMEBASE_1MHZ		1000
#define TIMEBASE_100KHZ		10000
#define TIMEBASE_10KHZ		100000
#define TIMEBASE_1KHZ		1000000
#define GAT_VCC		0
#define GAT_GND		1
#define GAT_EXT		2
#define GAT_NOUTNM2	3
#define GAT_CONFIG(chan, src)	((((chan) & 3) << 3) | ((src) & 7))
#define PCI224_INTR_EXT		0x01
#define PCI224_INTR_DAC		0x04
#define PCI224_INTR_Z2CT1	0x20
#define PCI224_INTR_EDGE_BITS	(PCI224_INTR_EXT | PCI224_INTR_Z2CT1)
#define PCI224_INTR_LEVEL_BITS	PCI224_INTR_DACFIFO
#define COMBINE(old, new, mask)	(((old) & ~(mask)) | ((new) & (mask)))
#define NULLFUNC	0
#define THISCPU		smp_processor_id()
#define AO_CMD_STARTED	0
static const struct comedi_lrange range_pci224_internal = ;
static const unsigned short hwrange_pci224_internal[8] = ;
static const struct comedi_lrange range_pci224_external = ;
static const unsigned short hwrange_pci224_external[2] = ;
static const struct comedi_lrange range_pci234_ext2 = ;
static const struct comedi_lrange range_pci234_ext = ;
static const unsigned short hwrange_pci234[1] = ;
enum pci224_model ;
struct pci224_board ;
static const struct pci224_board pci224_boards[] = ;
static DEFINE_PCI_DEVICE_TABLE(pci224_pci_table) = ;
MODULE_DEVICE_TABLE(pci, pci224_pci_table);
#define thisboard ((struct pci224_board *)dev->board_ptr)
struct pci224_private ;
#define devpriv ((struct pci224_private *)dev->private)
static int pci224_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int pci224_detach(struct comedi_device *dev);
static struct comedi_driver driver_amplc_pci224 = ;
static int __devinit driver_amplc_pci224_pci_probe(struct pci_dev *dev,
const struct pci_device_id
*ent)
static void __devexit driver_amplc_pci224_pci_remove(struct pci_dev *dev)
static struct pci_driver driver_amplc_pci224_pci_driver = ;
static int __init driver_amplc_pci224_init_module(void)
static void __exit driver_amplc_pci224_cleanup_module(void)
module_init(driver_amplc_pci224_init_module);
module_exit(driver_amplc_pci224_cleanup_module);
static void
pci224_ao_set_data(struct comedi_device *dev, int chan, int range,
unsigned int data)
static int
pci224_ao_insn_write(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int
pci224_ao_insn_read(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static void
pci224_cascade_ns_to_timer(int osc_base, unsigned int *d1, unsigned int *d2,
unsigned int *nanosec, int round_mode)
static void pci224_ao_stop(struct comedi_device *dev,
struct comedi_subdevice *s)
static void pci224_ao_start(struct comedi_device *dev,
struct comedi_subdevice *s)
static void pci224_ao_handle_fifo(struct comedi_device *dev,
struct comedi_subdevice *s)
static int
pci224_ao_inttrig_start(struct comedi_device *dev, struct comedi_subdevice *s,
unsigned int trignum)
#define MAX_SCAN_PERIOD		0xFFFFFFFFU
#define MIN_SCAN_PERIOD		2500
#define CONVERT_PERIOD		625
static int
pci224_ao_cmdtest(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_cmd *cmd)
static int pci224_ao_cmd(struct comedi_device *dev, struct comedi_subdevice *s)
static int pci224_ao_cancel(struct comedi_device *dev,
struct comedi_subdevice *s)
static void
pci224_ao_munge(struct comedi_device *dev, struct comedi_subdevice *s,
void *data, unsigned int num_bytes, unsigned int chan_index)
static irqreturn_t pci224_interrupt(int irq, void *d)
static int
pci224_find_pci(struct comedi_device *dev, int bus, int slot,
struct pci_dev **pci_dev_p)
static int pci224_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int pci224_detach(struct comedi_device *dev)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
