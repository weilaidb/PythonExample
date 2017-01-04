#define DEBUG 1
#define PCI_VENDOR_ID_DT	0x1116
static const struct comedi_lrange range_dt3000_ai = ;
static const struct comedi_lrange range_dt3000_ai_pgl = ;
struct dt3k_boardtype ;
static const struct dt3k_boardtype dt3k_boardtypes[] = ;
#define n_dt3k_boards sizeof(dt3k_boardtypes)/sizeof(struct dt3k_boardtype)
#define this_board ((const struct dt3k_boardtype *)dev->board_ptr)
static DEFINE_PCI_DEVICE_TABLE(dt3k_pci_table) = ;
MODULE_DEVICE_TABLE(pci, dt3k_pci_table);
#define DT3000_SIZE		(4*0x1000)
#define DPR_DAC_buffer		(4*0x000)
#define DPR_ADC_buffer		(4*0x800)
#define DPR_Command		(4*0xfd3)
#define DPR_SubSys		(4*0xfd3)
#define DPR_Encode		(4*0xfd4)
#define DPR_Params(a)		(4*(0xfd5+(a)))
#define DPR_Tick_Reg_Lo		(4*0xff5)
#define DPR_Tick_Reg_Hi		(4*0xff6)
#define DPR_DA_Buf_Front	(4*0xff7)
#define DPR_DA_Buf_Rear		(4*0xff8)
#define DPR_AD_Buf_Front	(4*0xff9)
#define DPR_AD_Buf_Rear		(4*0xffa)
#define DPR_Int_Mask		(4*0xffb)
#define DPR_Intr_Flag		(4*0xffc)
#define DPR_Response_Mbx	(4*0xffe)
#define DPR_Command_Mbx		(4*0xfff)
#define AI_FIFO_DEPTH	2003
#define AO_FIFO_DEPTH	2048
#define CMD_GETBRDINFO		0
#define CMD_CONFIG		1
#define CMD_GETCONFIG		2
#define CMD_START		3
#define CMD_STOP		4
#define CMD_READSINGLE		5
#define CMD_WRITESINGLE		6
#define CMD_CALCCLOCK		7
#define CMD_READEVENTS		8
#define CMD_WRITECTCTRL		16
#define CMD_READCTCTRL		17
#define CMD_WRITECT		18
#define CMD_READCT		19
#define CMD_WRITEDATA		32
#define CMD_READDATA		33
#define CMD_WRITEIO		34
#define CMD_READIO		35
#define CMD_WRITECODE		36
#define CMD_READCODE		37
#define CMD_EXECUTE		38
#define CMD_HALT		48
#define SUBS_AI		0
#define SUBS_AO		1
#define SUBS_DIN	2
#define SUBS_DOUT	3
#define SUBS_MEM	4
#define SUBS_CT		5
#define DT3000_CMDONE		0x80
#define DT3000_CTDONE		0x40
#define DT3000_DAHWERR		0x20
#define DT3000_DASWERR		0x10
#define DT3000_DAEMPTY		0x08
#define DT3000_ADHWERR		0x04
#define DT3000_ADSWERR		0x02
#define DT3000_ADFULL		0x01
#define DT3000_COMPLETION_MASK	0xff00
#define DT3000_COMMAND_MASK	0x00ff
#define DT3000_NOTPROCESSED	0x0000
#define DT3000_NOERROR		0x5500
#define DT3000_ERROR		0xaa00
#define DT3000_NOTSUPPORTED	0xff00
#define DT3000_EXTERNAL_CLOCK	1
#define DT3000_RISING_EDGE	2
#define TMODE_MASK		0x1c
#define DT3000_AD_TRIG_INTERNAL		(0<<2)
#define DT3000_AD_TRIG_EXTERNAL		(1<<2)
#define DT3000_AD_RETRIG_INTERNAL	(2<<2)
#define DT3000_AD_RETRIG_EXTERNAL	(3<<2)
#define DT3000_AD_EXTRETRIG		(4<<2)
#define DT3000_CHANNEL_MODE_SE		0
#define DT3000_CHANNEL_MODE_DI		1
struct dt3k_private ;
#define devpriv ((struct dt3k_private *)dev->private)
static int dt3000_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int dt3000_detach(struct comedi_device *dev);
static struct comedi_driver driver_dt3000 = ;
static int __devinit driver_dt3000_pci_probe(struct pci_dev *dev,
const struct pci_device_id *ent)
static void __devexit driver_dt3000_pci_remove(struct pci_dev *dev)
static struct pci_driver driver_dt3000_pci_driver = ;
static int __init driver_dt3000_init_module(void)
static void __exit driver_dt3000_cleanup_module(void)
module_init(driver_dt3000_init_module);
module_exit(driver_dt3000_cleanup_module);
static void dt3k_ai_empty_fifo(struct comedi_device *dev,
struct comedi_subdevice *s);
static int dt3k_ns_to_timer(unsigned int timer_base, unsigned int *arg,
unsigned int round_mode);
static int dt3k_ai_cancel(struct comedi_device *dev,
struct comedi_subdevice *s);
static void debug_intr_flags(unsigned int flags);
#define TIMEOUT 100
static int dt3k_send_cmd(struct comedi_device *dev, unsigned int cmd)
static unsigned int dt3k_readsingle(struct comedi_device *dev,
unsigned int subsys, unsigned int chan,
unsigned int gain)
static void dt3k_writesingle(struct comedi_device *dev, unsigned int subsys,
unsigned int chan, unsigned int data)
static int debug_n_ints = 0;
static irqreturn_t dt3k_interrupt(int irq, void *d)
static char *intr_flags[] = ;
static void debug_intr_flags(unsigned int flags)
static void dt3k_ai_empty_fifo(struct comedi_device *dev,
struct comedi_subdevice *s)
static int dt3k_ai_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_cmd *cmd)
static int dt3k_ns_to_timer(unsigned int timer_base, unsigned int *nanosec,
unsigned int round_mode)
static int dt3k_ai_cmd(struct comedi_device *dev, struct comedi_subdevice *s)
static int dt3k_ai_cancel(struct comedi_device *dev, struct comedi_subdevice *s)
static int dt3k_ai_insn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int dt3k_ao_insn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int dt3k_ao_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static void dt3k_dio_config(struct comedi_device *dev, int bits)
static int dt3k_dio_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int dt3k_dio_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int dt3k_mem_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int dt_pci_probe(struct comedi_device *dev, int bus, int slot);
static int dt3000_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int dt3000_detach(struct comedi_device *dev)
static struct pci_dev *dt_pci_find_device(struct pci_dev *from, int *board);
static int setup_pci(struct comedi_device *dev);
static int dt_pci_probe(struct comedi_device *dev, int bus, int slot)
static int setup_pci(struct comedi_device *dev)
static struct pci_dev *dt_pci_find_device(struct pci_dev *from, int *board)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
