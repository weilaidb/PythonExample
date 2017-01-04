#define boardPCL818L 0
#define boardPCL818H 1
#define boardPCL818HD 2
#define boardPCL818HG 3
#define boardPCL818 4
#define boardPCL718 5
#define PCLx1x_RANGE 16
#define PCLx1xFIFO_RANGE 32
#define PCL818_CLRINT 8
#define PCL818_STATUS 8
#define PCL818_RANGE 1
#define PCL818_MUX 2
#define PCL818_CONTROL 9
#define PCL818_CNTENABLE 10
#define PCL818_AD_LO 0
#define PCL818_AD_HI 1
#define PCL818_DA_LO 4
#define PCL818_DA_HI 5
#define PCL818_DI_LO 3
#define PCL818_DI_HI 11
#define PCL818_DO_LO 3
#define PCL818_DO_HI 11
#define PCL718_DA2_LO 6
#define PCL718_DA2_HI 7
#define PCL818_CTR0 12
#define PCL818_CTR1 13
#define PCL818_CTR2 14
#define PCL818_CTRCTL 15
#define PCL818_FI_ENABLE 6
#define PCL818_FI_INTCLR 20
#define PCL818_FI_FLUSH 25
#define PCL818_FI_STATUS 25
#define PCL818_FI_DATALO 23
#define PCL818_FI_DATAHI 23
#define INT_TYPE_AI1_INT 1
#define INT_TYPE_AI1_DMA 2
#define INT_TYPE_AI1_FIFO 3
#define INT_TYPE_AI3_INT 4
#define INT_TYPE_AI3_DMA 5
#define INT_TYPE_AI3_FIFO 6
#define INT_TYPE_AO1_INT 7
#define INT_TYPE_AO3_INT 8
#define INT_TYPE_AI1_DMA_RTC 9
#define INT_TYPE_AI3_DMA_RTC 10
#define RTC_IRQ 	8
#define RTC_IO_EXTENT	0x10
#define MAGIC_DMA_WORD 0x5a5a
static const struct comedi_lrange range_pcl818h_ai = ;
static const struct comedi_lrange range_pcl818hg_ai = ;
static const struct comedi_lrange range_pcl818l_l_ai = ;
static const struct comedi_lrange range_pcl818l_h_ai = ;
static const struct comedi_lrange range718_bipolar1 = ;
static const struct comedi_lrange range718_bipolar0_5 =
;
static const struct comedi_lrange range718_unipolar2 = ;
static const struct comedi_lrange range718_unipolar1 = ;
static int pcl818_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int pcl818_detach(struct comedi_device *dev);
static int RTC_lock = 0;
static int RTC_timer_lock = 0;
struct pcl818_board ;
static const struct pcl818_board boardtypes[] = ;
#define n_boardtypes (sizeof(boardtypes)/sizeof(struct pcl818_board))
static struct comedi_driver driver_pcl818 = ;
static int __init driver_pcl818_init_module(void)
static void __exit driver_pcl818_cleanup_module(void)
module_init(driver_pcl818_init_module);
module_exit(driver_pcl818_cleanup_module);
struct pcl818_private ;
static const unsigned int muxonechan[] = ;
#define devpriv ((struct pcl818_private *)dev->private)
#define this_board ((const struct pcl818_board *)dev->board_ptr)
static void setup_channel_list(struct comedi_device *dev,
struct comedi_subdevice *s,
unsigned int *chanlist, unsigned int n_chan,
unsigned int seglen);
static int check_channel_list(struct comedi_device *dev,
struct comedi_subdevice *s,
unsigned int *chanlist, unsigned int n_chan);
static int pcl818_ai_cancel(struct comedi_device *dev,
struct comedi_subdevice *s);
static void start_pacer(struct comedi_device *dev, int mode,
unsigned int divisor1, unsigned int divisor2);
static int set_rtc_irq_bit(unsigned char bit);
static void rtc_dropped_irq(unsigned long data);
static int rtc_setfreq_irq(int freq);
static int pcl818_ai_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pcl818_ao_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pcl818_ao_insn_write(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pcl818_di_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pcl818_do_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static irqreturn_t interrupt_pcl818_ai_mode13_int(int irq, void *d)
static irqreturn_t interrupt_pcl818_ai_mode13_dma(int irq, void *d)
static irqreturn_t interrupt_pcl818_ai_mode13_dma_rtc(int irq, void *d)
static irqreturn_t interrupt_pcl818_ai_mode13_fifo(int irq, void *d)
static irqreturn_t interrupt_pcl818(int irq, void *d)
static void pcl818_ai_mode13dma_int(int mode, struct comedi_device *dev,
struct comedi_subdevice *s)
static void pcl818_ai_mode13dma_rtc(int mode, struct comedi_device *dev,
struct comedi_subdevice *s)
static int pcl818_ai_cmd_mode(int mode, struct comedi_device *dev,
struct comedi_subdevice *s)
static int pcl818_ao_mode13(int mode, struct comedi_device *dev,
struct comedi_subdevice *s, comedi_trig * it)
static int pcl818_ao_mode1(struct comedi_device *dev,
struct comedi_subdevice *s, comedi_trig * it)
static int pcl818_ao_mode3(struct comedi_device *dev,
struct comedi_subdevice *s, comedi_trig * it)
static void start_pacer(struct comedi_device *dev, int mode,
unsigned int divisor1, unsigned int divisor2)
static int check_channel_list(struct comedi_device *dev,
struct comedi_subdevice *s,
unsigned int *chanlist, unsigned int n_chan)
static void setup_channel_list(struct comedi_device *dev,
struct comedi_subdevice *s,
unsigned int *chanlist, unsigned int n_chan,
unsigned int seglen)
static int check_single_ended(unsigned int port)
static int ai_cmdtest(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_cmd *cmd)
static int ai_cmd(struct comedi_device *dev, struct comedi_subdevice *s)
static int pcl818_ai_cancel(struct comedi_device *dev,
struct comedi_subdevice *s)
static int pcl818_check(unsigned long iobase)
static void pcl818_reset(struct comedi_device *dev)
static int set_rtc_irq_bit(unsigned char bit)
static void rtc_dropped_irq(unsigned long data)
static int rtc_setfreq_irq(int freq)
static void free_resources(struct comedi_device *dev)
static int pcl818_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int pcl818_detach(struct comedi_device *dev)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
