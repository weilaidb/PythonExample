#define PCI171x_PARANOIDCHECK
#undef PCI171X_EXTDEBUG
#define DRV_NAME "adv_pci1710"
#undef DPRINTK
#define DPRINTK(fmt, args...) printk(fmt, ## args)
#define DPRINTK(fmt, args...)
#define PCI_VENDOR_ID_ADVANTECH		0x13fe
#define TYPE_PCI171X	0
#define TYPE_PCI1713	2
#define TYPE_PCI1720	3
#define IORANGE_171x	32
#define IORANGE_1720	16
#define PCI171x_AD_DATA	 0
#define PCI171x_SOFTTRG	 0
#define PCI171x_RANGE	 2
#define PCI171x_MUX	 4
#define PCI171x_STATUS	 6
#define PCI171x_CONTROL	 6
#define PCI171x_CLRINT	 8
#define PCI171x_CLRFIFO	 9
#define PCI171x_DA1	10
#define PCI171x_DA2	12
#define PCI171x_DAREF	14
#define PCI171x_DI	16
#define PCI171x_DO	16
#define PCI171x_CNT0	24
#define PCI171x_CNT1	26
#define PCI171x_CNT2	28
#define PCI171x_CNTCTRL	30
#define	Status_FE	0x0100
#define Status_FH	0x0200
#define Status_FF	0x0400
#define Status_IRQ	0x0800
#define Control_CNT0	0x0040
#define Control_ONEFH	0x0020
#define Control_IRQEN	0x0010
#define Control_GATE	0x0008
#define Control_EXT	0x0004
#define Control_PACER	0x0002
#define Control_SW	0x0001
#define Counter_BCD     0x0001
#define Counter_M0      0x0002
#define Counter_M1      0x0004
#define Counter_M2      0x0008
#define Counter_RW0     0x0010
#define Counter_RW1     0x0020
#define Counter_SC0     0x0040
#define Counter_SC1     0x0080
#define PCI1720_DA0	 0
#define PCI1720_DA1	 2
#define PCI1720_DA2	 4
#define PCI1720_DA3	 6
#define PCI1720_RANGE	 8
#define PCI1720_SYNCOUT	 9
#define PCI1720_SYNCONT	15
#define Syncont_SC0	 1
static const struct comedi_lrange range_pci1710_3 = ;
static const char range_codes_pci1710_3[] = ;
static const struct comedi_lrange range_pci1710hg = ;
static const char range_codes_pci1710hg[] = ;
static const struct comedi_lrange range_pci17x1 = ;
static const char range_codes_pci17x1[] = ;
static const struct comedi_lrange range_pci1720 = ;
static const struct comedi_lrange range_pci171x_da = ;
static int pci1710_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int pci1710_detach(struct comedi_device *dev);
struct boardtype ;
static DEFINE_PCI_DEVICE_TABLE(pci1710_pci_table) = ;
MODULE_DEVICE_TABLE(pci, pci1710_pci_table);
static const struct boardtype boardtypes[] = ;
#define n_boardtypes (sizeof(boardtypes)/sizeof(struct boardtype))
static struct comedi_driver driver_pci1710 = ;
struct pci1710_private ;
#define devpriv ((struct pci1710_private *)dev->private)
#define this_board ((const struct boardtype *)dev->board_ptr)
static int check_channel_list(struct comedi_device *dev,
struct comedi_subdevice *s,
unsigned int *chanlist, unsigned int n_chan);
static void setup_channel_list(struct comedi_device *dev,
struct comedi_subdevice *s,
unsigned int *chanlist, unsigned int n_chan,
unsigned int seglen);
static void start_pacer(struct comedi_device *dev, int mode,
unsigned int divisor1, unsigned int divisor2);
static int pci1710_reset(struct comedi_device *dev);
static int pci171x_ai_cancel(struct comedi_device *dev,
struct comedi_subdevice *s);
static const unsigned int muxonechan[] = ;
static int pci171x_insn_read_ai(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pci171x_insn_write_ao(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pci171x_insn_read_ao(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pci171x_insn_bits_di(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pci171x_insn_bits_do(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pci171x_insn_counter_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int pci171x_insn_counter_write(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int pci171x_insn_counter_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int pci1720_insn_write_ao(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static void interrupt_pci1710_every_sample(void *d)
static int move_block_from_fifo(struct comedi_device *dev,
struct comedi_subdevice *s, int n, int turn)
static void interrupt_pci1710_half_fifo(void *d)
static irqreturn_t interrupt_service_pci1710(int irq, void *d)
static int pci171x_ai_docmd_and_mode(int mode, struct comedi_device *dev,
struct comedi_subdevice *s)
static void pci171x_cmdtest_out(int e, struct comedi_cmd *cmd)
static int pci171x_ai_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_cmd *cmd)
static int pci171x_ai_cmd(struct comedi_device *dev, struct comedi_subdevice *s)
static int check_channel_list(struct comedi_device *dev,
struct comedi_subdevice *s,
unsigned int *chanlist, unsigned int n_chan)
static void setup_channel_list(struct comedi_device *dev,
struct comedi_subdevice *s,
unsigned int *chanlist, unsigned int n_chan,
unsigned int seglen)
static void start_pacer(struct comedi_device *dev, int mode,
unsigned int divisor1, unsigned int divisor2)
static int pci171x_ai_cancel(struct comedi_device *dev,
struct comedi_subdevice *s)
static int pci171x_reset(struct comedi_device *dev)
static int pci1720_reset(struct comedi_device *dev)
static int pci1710_reset(struct comedi_device *dev)
static int pci1710_attach(struct comedi_device *dev,
struct comedi_devconfig *it)
static int pci1710_detach(struct comedi_device *dev)
static int __devinit driver_pci1710_pci_probe(struct pci_dev *dev,
const struct pci_device_id *ent)
static void __devexit driver_pci1710_pci_remove(struct pci_dev *dev)
static struct pci_driver driver_pci1710_pci_driver = ;
static int __init driver_pci1710_init_module(void)
static void __exit driver_pci1710_cleanup_module(void)
module_init(driver_pci1710_init_module);
module_exit(driver_pci1710_cleanup_module);
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
