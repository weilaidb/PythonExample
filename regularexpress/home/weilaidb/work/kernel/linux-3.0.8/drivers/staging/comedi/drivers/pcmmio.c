#define CHANS_PER_PORT   8
#define PORTS_PER_ASIC   6
#define INTR_PORTS_PER_ASIC   3
#define MAX_CHANS_PER_SUBDEV 24
#define PORTS_PER_SUBDEV (MAX_CHANS_PER_SUBDEV/CHANS_PER_PORT)
#define CHANS_PER_ASIC (CHANS_PER_PORT*PORTS_PER_ASIC)
#define INTR_CHANS_PER_ASIC 24
#define INTR_PORTS_PER_SUBDEV (INTR_CHANS_PER_ASIC/CHANS_PER_PORT)
#define MAX_DIO_CHANS   (PORTS_PER_ASIC*1*CHANS_PER_PORT)
#define MAX_ASICS       (MAX_DIO_CHANS/CHANS_PER_ASIC)
#define SDEV_NO ((int)(s - dev->subdevices))
#define CALC_N_DIO_SUBDEVS(nchans) ((nchans)/MAX_CHANS_PER_SUBDEV + (!!((nchans)%MAX_CHANS_PER_SUBDEV)))
#define ASIC_IOSIZE (0x0B)
#define PCMMIO48_IOSIZE ASIC_IOSIZE
#define REG_PORT0 0x0
#define REG_PORT1 0x1
#define REG_PORT2 0x2
#define REG_PORT3 0x3
#define REG_PORT4 0x4
#define REG_PORT5 0x5
#define REG_INT_PENDING 0x6
#define REG_PAGELOCK 0x7
#define REG_POL0 0x8
#define REG_POL1 0x9
#define REG_POL2 0xA
#define REG_ENAB0 0x8
#define REG_ENAB1 0x9
#define REG_ENAB2 0xA
#define REG_INT_ID0 0x8
#define REG_INT_ID1 0x9
#define REG_INT_ID2 0xA
#define NUM_PAGED_REGS 3
#define NUM_PAGES 4
#define FIRST_PAGED_REG 0x8
#define REG_PAGE_BITOFFSET 6
#define REG_LOCK_BITOFFSET 0
#define REG_PAGE_MASK (~((0x1<<REG_PAGE_BITOFFSET)-1))
#define REG_LOCK_MASK (~(REG_PAGE_MASK))
#define PAGE_POL 1
#define PAGE_ENAB 2
#define PAGE_INT_ID 3
static int ai_rinsn(struct comedi_device *, struct comedi_subdevice *,
struct comedi_insn *, unsigned int *);
static int ao_rinsn(struct comedi_device *, struct comedi_subdevice *,
struct comedi_insn *, unsigned int *);
static int ao_winsn(struct comedi_device *, struct comedi_subdevice *,
struct comedi_insn *, unsigned int *);
struct pcmmio_board ;
static const struct comedi_lrange ranges_ai = ;
static const struct comedi_lrange ranges_ao = ;
static const struct pcmmio_board pcmmio_boards[] = ;
#define thisboard ((const struct pcmmio_board *)dev->board_ptr)
struct pcmmio_subdev_private ;
struct pcmmio_private ;
#define devpriv ((struct pcmmio_private *)dev->private)
#define subpriv ((struct pcmmio_subdev_private *)s->private)
static int pcmmio_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int pcmmio_detach(struct comedi_device *dev);
static struct comedi_driver driver = ;
static int pcmmio_dio_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int pcmmio_dio_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static irqreturn_t interrupt_pcmmio(int irq, void *d);
static void pcmmio_stop_intr(struct comedi_device *, struct comedi_subdevice *);
static int pcmmio_cancel(struct comedi_device *dev, struct comedi_subdevice *s);
static int pcmmio_cmd(struct comedi_device *dev, struct comedi_subdevice *s);
static int pcmmio_cmdtest(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_cmd *cmd);
static void init_asics(struct comedi_device *dev);
static void switch_page(struct comedi_device *dev, int asic, int page);
static void lock_port(struct comedi_device *dev, int asic, int port);
static void unlock_port(struct comedi_device *dev, int asic, int port);
static int pcmmio_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int pcmmio_detach(struct comedi_device *dev)
static int pcmmio_dio_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pcmmio_dio_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static void init_asics(struct comedi_device *dev)
static void switch_page(struct comedi_device *dev, int asic, int page)
static void lock_port(struct comedi_device *dev, int asic, int port)
static void unlock_port(struct comedi_device *dev, int asic, int port)
static irqreturn_t interrupt_pcmmio(int irq, void *d)
static void pcmmio_stop_intr(struct comedi_device *dev,
struct comedi_subdevice *s)
static int pcmmio_start_intr(struct comedi_device *dev,
struct comedi_subdevice *s)
static int pcmmio_cancel(struct comedi_device *dev, struct comedi_subdevice *s)
static int
pcmmio_inttrig_start_intr(struct comedi_device *dev, struct comedi_subdevice *s,
unsigned int trignum)
static int pcmmio_cmd(struct comedi_device *dev, struct comedi_subdevice *s)
static int
pcmmio_cmdtest(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_cmd *cmd)
static int adc_wait_ready(unsigned long iobase)
static int ai_rinsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int ao_rinsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int wait_dac_ready(unsigned long iobase)
static int ao_winsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int __init driver_init_module(void)
static void __exit driver_cleanup_module(void)
module_init(driver_init_module);
module_exit(driver_cleanup_module);
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
