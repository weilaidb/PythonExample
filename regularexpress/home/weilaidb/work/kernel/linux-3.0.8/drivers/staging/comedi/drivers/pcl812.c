#undef PCL812_EXTDEBUG
#define boardPCL812PG	      0
#define boardPCL813B	      1
#define boardPCL812	      2
#define boardPCL813	      3
#define boardISO813	      5
#define boardACL8113	      6
#define boardACL8112	      7
#define boardACL8216	      8
#define boardA821	      9
#define PCLx1x_IORANGE	     16
#define PCL812_CTR0	      0
#define PCL812_CTR1	      1
#define PCL812_CTR2	      2
#define PCL812_CTRCTL	      3
#define PCL812_AD_LO	      4
#define PCL812_DA1_LO	      4
#define PCL812_AD_HI	      5
#define PCL812_DA1_HI	      5
#define PCL812_DA2_LO	      6
#define PCL812_DI_LO	      6
#define PCL812_DA2_HI	      7
#define PCL812_DI_HI	      7
#define PCL812_CLRINT	      8
#define PCL812_GAIN	      9
#define PCL812_MUX	     10
#define PCL812_MODE	     11
#define PCL812_CNTENABLE     10
#define PCL812_SOFTTRIG	     12
#define PCL812_DO_LO	     13
#define PCL812_DO_HI	     14
#define PCL812_DRDY	   0x10
#define ACL8216_STATUS	      8
#define ACL8216_DRDY	   0x20
#define MAX_CHANLIST_LEN    256
static const struct comedi_lrange range_pcl812pg_ai = ;
static const struct comedi_lrange range_pcl812pg2_ai = ;
static const struct comedi_lrange range812_bipolar1_25 = ;
static const struct comedi_lrange range812_bipolar0_625 = ;
static const struct comedi_lrange range812_bipolar0_3125 = ;
static const struct comedi_lrange range_pcl813b_ai = ;
static const struct comedi_lrange range_pcl813b2_ai = ;
static const struct comedi_lrange range_iso813_1_ai = ;
static const struct comedi_lrange range_iso813_1_2_ai = ;
static const struct comedi_lrange range_iso813_2_ai = ;
static const struct comedi_lrange range_iso813_2_2_ai = ;
static const struct comedi_lrange range_acl8113_1_ai = ;
static const struct comedi_lrange range_acl8113_1_2_ai = ;
static const struct comedi_lrange range_acl8113_2_ai = ;
static const struct comedi_lrange range_acl8113_2_2_ai = ;
static const struct comedi_lrange range_acl8112dg_ai = ;
static const struct comedi_lrange range_acl8112hg_ai = ;
static const struct comedi_lrange range_a821pgh_ai = ;
static int pcl812_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int pcl812_detach(struct comedi_device *dev);
struct pcl812_board ;
static const struct pcl812_board boardtypes[] = ;
#define n_boardtypes (sizeof(boardtypes)/sizeof(struct pcl812_board))
#define this_board ((const struct pcl812_board *)dev->board_ptr)
static struct comedi_driver driver_pcl812 = ;
static int __init driver_pcl812_init_module(void)
static void __exit driver_pcl812_cleanup_module(void)
module_init(driver_pcl812_init_module);
module_exit(driver_pcl812_cleanup_module);
struct pcl812_private ;
#define devpriv ((struct pcl812_private *)dev->private)
static void start_pacer(struct comedi_device *dev, int mode,
unsigned int divisor1, unsigned int divisor2);
static void setup_range_channel(struct comedi_device *dev,
struct comedi_subdevice *s,
unsigned int rangechan, char wait);
static int pcl812_ai_cancel(struct comedi_device *dev,
struct comedi_subdevice *s);
static int pcl812_ai_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int acl8216_ai_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pcl812_ao_insn_write(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pcl812_ao_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pcl812_di_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pcl812_do_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static void pcl812_cmdtest_out(int e, struct comedi_cmd *cmd)
static int pcl812_ai_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_cmd *cmd)
static int pcl812_ai_cmd(struct comedi_device *dev, struct comedi_subdevice *s)
static irqreturn_t interrupt_pcl812_ai_int(int irq, void *d)
static void transfer_from_dma_buf(struct comedi_device *dev,
struct comedi_subdevice *s, short *ptr,
unsigned int bufptr, unsigned int len)
static irqreturn_t interrupt_pcl812_ai_dma(int irq, void *d)
static irqreturn_t interrupt_pcl812(int irq, void *d)
static int pcl812_ai_poll(struct comedi_device *dev, struct comedi_subdevice *s)
static void setup_range_channel(struct comedi_device *dev,
struct comedi_subdevice *s,
unsigned int rangechan, char wait)
static void start_pacer(struct comedi_device *dev, int mode,
unsigned int divisor1, unsigned int divisor2)
static void free_resources(struct comedi_device *dev)
static int pcl812_ai_cancel(struct comedi_device *dev,
struct comedi_subdevice *s)
static void pcl812_reset(struct comedi_device *dev)
static int pcl812_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int pcl812_detach(struct comedi_device *dev)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
