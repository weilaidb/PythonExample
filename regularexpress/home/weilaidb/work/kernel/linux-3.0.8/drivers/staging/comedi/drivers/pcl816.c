#define DEBUG(x) x
#define PCLx1x_RANGE 16
#define PCL816_CTR0 4
#define PCL816_CTR1 5
#define PCL816_CTR2 6
#define PCL816_CTRCTL 7
#define PCL816_RANGE 9
#define PCL816_CLRINT 10
#define PCL816_MUX 11
#define PCL816_CONTROL 12
#define PCL816_STATUS 13
#define PCL816_STATUS_DRDY_MASK 0x80
#define PCL816_AD_LO 8
#define PCL816_AD_HI 9
#define INT_TYPE_AI1_INT 1
#define INT_TYPE_AI1_DMA 2
#define INT_TYPE_AI3_INT 4
#define INT_TYPE_AI3_DMA 5
#define INT_TYPE_AI1_DMA_RTC 9
#define INT_TYPE_AI3_DMA_RTC 10
#define RTC_IRQ		8
#define RTC_IO_EXTENT	0x10
#define MAGIC_DMA_WORD 0x5a5a
static const struct comedi_lrange range_pcl816 = ;
struct pcl816_board ;
static const struct pcl816_board boardtypes[] = ;
#define n_boardtypes (sizeof(boardtypes)/sizeof(struct pcl816_board))
#define devpriv ((struct pcl816_private *)dev->private)
#define this_board ((const struct pcl816_board *)dev->board_ptr)
static int pcl816_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int pcl816_detach(struct comedi_device *dev);
static int RTC_lock = 0;
static int RTC_timer_lock = 0;
static struct comedi_driver driver_pcl816 = ;
static int __init driver_pcl816_init_module(void)
static void __exit driver_pcl816_cleanup_module(void)
module_init(driver_pcl816_init_module);
module_exit(driver_pcl816_cleanup_module);
struct pcl816_private ;
static int check_channel_list(struct comedi_device *dev,
struct comedi_subdevice *s,
unsigned int *chanlist, unsigned int chanlen);
static void setup_channel_list(struct comedi_device *dev,
struct comedi_subdevice *s,
unsigned int *chanlist, unsigned int seglen);
static int pcl816_ai_cancel(struct comedi_device *dev,
struct comedi_subdevice *s);
static void start_pacer(struct comedi_device *dev, int mode,
unsigned int divisor1, unsigned int divisor2);
static int set_rtc_irq_bit(unsigned char bit);
static int pcl816_ai_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_cmd *cmd);
static int pcl816_ai_cmd(struct comedi_device *dev, struct comedi_subdevice *s);
static int pcl816_ai_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static irqreturn_t interrupt_pcl816_ai_mode13_int(int irq, void *d)
static void transfer_from_dma_buf(struct comedi_device *dev,
struct comedi_subdevice *s, short *ptr,
unsigned int bufptr, unsigned int len)
static irqreturn_t interrupt_pcl816_ai_mode13_dma(int irq, void *d)
static irqreturn_t interrupt_pcl816(int irq, void *d)
static void pcl816_cmdtest_out(int e, struct comedi_cmd *cmd)
static int pcl816_ai_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_cmd *cmd)
static int pcl816_ai_cmd(struct comedi_device *dev, struct comedi_subdevice *s)
start_pacer(dev, 1, divisor1, divisor2);
dmairq = ((devpriv->dma & 0x3) << 4) | (dev->irq & 0x7);
switch (cmd->convert_src)
DPRINTK("pcl816 END: pcl812_ai_cmd()\n");
return 0;
}
static int pcl816_ai_poll(struct comedi_device *dev, struct comedi_subdevice *s)
static int pcl816_ai_cancel(struct comedi_device *dev,
struct comedi_subdevice *s)
static int pcl816_check(unsigned long iobase)
static void pcl816_reset(struct comedi_device *dev)
static void
start_pacer(struct comedi_device *dev, int mode, unsigned int divisor1,
unsigned int divisor2)
static int
check_channel_list(struct comedi_device *dev,
struct comedi_subdevice *s, unsigned int *chanlist,
unsigned int chanlen)
static void
setup_channel_list(struct comedi_device *dev,
struct comedi_subdevice *s, unsigned int *chanlist,
unsigned int seglen)
static int set_rtc_irq_bit(unsigned char bit)
static void free_resources(struct comedi_device *dev)
static int pcl816_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int pcl816_detach(struct comedi_device *dev)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
