#define PCL711_SIZE 16
#define PCL711_CTR0 0
#define PCL711_CTR1 1
#define PCL711_CTR2 2
#define PCL711_CTRCTL 3
#define PCL711_AD_LO 4
#define PCL711_DA0_LO 4
#define PCL711_AD_HI 5
#define PCL711_DA0_HI 5
#define PCL711_DI_LO 6
#define PCL711_DA1_LO 6
#define PCL711_DI_HI 7
#define PCL711_DA1_HI 7
#define PCL711_CLRINTR 8
#define PCL711_GAIN 9
#define PCL711_MUX 10
#define PCL711_MODE 11
#define PCL711_SOFTTRIG 12
#define PCL711_DO_LO 13
#define PCL711_DO_HI 14
static const struct comedi_lrange range_pcl711b_ai = ;
static const struct comedi_lrange range_acl8112hg_ai = ;
static const struct comedi_lrange range_acl8112dg_ai = ;
#define PCL711_TIMEOUT 100
#define PCL711_DRDY 0x10
static const int i8253_osc_base = 500;
struct pcl711_board ;
static const struct pcl711_board boardtypes[] = ;
#define n_boardtypes (sizeof(boardtypes)/sizeof(struct pcl711_board))
#define this_board ((const struct pcl711_board *)dev->board_ptr)
static int pcl711_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int pcl711_detach(struct comedi_device *dev);
static struct comedi_driver driver_pcl711 = ;
static int __init driver_pcl711_init_module(void)
static void __exit driver_pcl711_cleanup_module(void)
module_init(driver_pcl711_init_module);
module_exit(driver_pcl711_cleanup_module);
struct pcl711_private ;
#define devpriv ((struct pcl711_private *)dev->private)
static irqreturn_t pcl711_interrupt(int irq, void *d)
static void pcl711_set_changain(struct comedi_device *dev, int chan)
static int pcl711_ai_insn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pcl711_ai_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_cmd *cmd)
static int pcl711_ai_cmd(struct comedi_device *dev, struct comedi_subdevice *s)
static int pcl711_ao_insn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pcl711_ao_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pcl711_di_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pcl711_do_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pcl711_detach(struct comedi_device *dev)
static int pcl711_attach(struct comedi_device *dev, struct comedi_devconfig *it)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
