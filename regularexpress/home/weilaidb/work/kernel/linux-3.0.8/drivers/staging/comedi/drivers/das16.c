#undef DEBUG
#define DEBUG_PRINT(format, args...)	\
printk(KERN_DEBUG "das16: " format, ## args)
#define DEBUG_PRINT(format, args...)
#define DAS16_SIZE 20
#define DAS16_DMA_SIZE 0xff00
static const int sample_size = 2;
#define DAS16_TRIG		0
#define DAS16_AI_LSB		0
#define DAS16_AI_MSB		1
#define DAS16_MUX		2
#define DAS16_DIO		3
#define DAS16_AO_LSB(x)	((x) ? 6 : 4)
#define DAS16_AO_MSB(x)	((x) ? 7 : 5)
#define DAS16_STATUS		8
#define   BUSY			(1<<7)
#define   UNIPOLAR			(1<<6)
#define   DAS16_MUXBIT			(1<<5)
#define   DAS16_INT			(1<<4)
#define DAS16_CONTROL		9
#define   DAS16_INTE			(1<<7)
#define   DAS16_IRQ(x)			(((x) & 0x7) << 4)
#define   DMA_ENABLE			(1<<2)
#define   PACING_MASK	0x3
#define   INT_PACER		0x03
#define   EXT_PACER			0x02
#define   DAS16_SOFT		0x00
#define DAS16_PACER		0x0A
#define   DAS16_CTR0			(1<<1)
#define   DAS16_TRIG0			(1<<0)
#define   BURST_LEN_BITS(x)			(((x) & 0xf) << 4)
#define DAS16_GAIN		0x0B
#define DAS16_CNTR0_DATA		0x0C
#define DAS16_CNTR1_DATA		0x0D
#define DAS16_CNTR2_DATA		0x0E
#define DAS16_CNTR_CONTROL	0x0F
#define   DAS16_TERM_CNT	0x00
#define   DAS16_ONE_SHOT	0x02
#define   DAS16_RATE_GEN	0x04
#define   DAS16_CNTR_LSB_MSB	0x30
#define   DAS16_CNTR0		0x00
#define   DAS16_CNTR1		0x40
#define   DAS16_CNTR2		0x80
#define DAS1600_CONV		0x404
#define   DAS1600_CONV_DISABLE		0x40
#define DAS1600_BURST		0x405
#define   DAS1600_BURST_VAL		0x40
#define DAS1600_ENABLE		0x406
#define   DAS1600_ENABLE_VAL		0x40
#define DAS1600_STATUS_B	0x407
#define   DAS1600_BME		0x40
#define   DAS1600_ME		0x20
#define   DAS1600_CD			0x10
#define   DAS1600_WS			0x02
#define   DAS1600_CLK_10MHZ		0x01
static const struct comedi_lrange range_das1x01_bip = ;
static const struct comedi_lrange range_das1x01_unip = ;
static const struct comedi_lrange range_das1x02_bip = ;
static const struct comedi_lrange range_das1x02_unip = ;
static const struct comedi_lrange range_das16jr = ;
static const struct comedi_lrange range_das16jr_16 = ;
static const int das16jr_gainlist[] = ;
static const int das16jr_16_gainlist[] = ;
static const int das1600_gainlist[] = ;
enum ;
static const int *const das16_gainlists[] = ;
static const struct comedi_lrange *const das16_ai_uni_lranges[] = ;
static const struct comedi_lrange *const das16_ai_bip_lranges[] = ;
struct munge_info ;
static int das16_ao_winsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int das16_do_wbits(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int das16_di_rbits(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int das16_ai_rinsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int das16_cmd_test(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_cmd *cmd);
static int das16_cmd_exec(struct comedi_device *dev,
struct comedi_subdevice *s);
static int das16_cancel(struct comedi_device *dev, struct comedi_subdevice *s);
static void das16_ai_munge(struct comedi_device *dev,
struct comedi_subdevice *s, void *array,
unsigned int num_bytes,
unsigned int start_chan_index);
static void das16_reset(struct comedi_device *dev);
static irqreturn_t das16_dma_interrupt(int irq, void *d);
static void das16_timer_interrupt(unsigned long arg);
static void das16_interrupt(struct comedi_device *dev);
static unsigned int das16_set_pacer(struct comedi_device *dev, unsigned int ns,
int flags);
static int das1600_mode_detect(struct comedi_device *dev);
static unsigned int das16_suggest_transfer_size(struct comedi_device *dev,
struct comedi_cmd cmd);
static void reg_dump(struct comedi_device *dev);
struct das16_board ;
static const struct das16_board das16_boards[] = ;
static int das16_attach(struct comedi_device *dev, struct comedi_devconfig *it);
static int das16_detach(struct comedi_device *dev);
static struct comedi_driver driver_das16 = ;
#define DAS16_TIMEOUT 1000
static inline int timer_period(void)
struct das16_private_struct ;
#define devpriv ((struct das16_private_struct *)(dev->private))
#define thisboard ((struct das16_board *)(dev->board_ptr))
static int das16_cmd_test(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_cmd *cmd)
static int das16_cmd_exec(struct comedi_device *dev, struct comedi_subdevice *s)
static int das16_cancel(struct comedi_device *dev, struct comedi_subdevice *s)
static void das16_reset(struct comedi_device *dev)
static int das16_ai_rinsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int das16_di_rbits(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int das16_do_wbits(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int das16_ao_winsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static irqreturn_t das16_dma_interrupt(int irq, void *d)
static void das16_timer_interrupt(unsigned long arg)
static int disable_dma_on_even(struct comedi_device *dev)
static void das16_interrupt(struct comedi_device *dev)
static unsigned int das16_set_pacer(struct comedi_device *dev, unsigned int ns,
int rounding_flags)
static void reg_dump(struct comedi_device *dev)
static int das16_probe(struct comedi_device *dev, struct comedi_devconfig *it)
static int das1600_mode_detect(struct comedi_device *dev)
static int das16_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int das16_detach(struct comedi_device *dev)
static int __init driver_das16_init_module(void)
static void __exit driver_das16_cleanup_module(void)
module_init(driver_das16_init_module);
module_exit(driver_das16_cleanup_module);
static unsigned int das16_suggest_transfer_size(struct comedi_device *dev,
struct comedi_cmd cmd)
static void das16_ai_munge(struct comedi_device *dev,
struct comedi_subdevice *s, void *array,
unsigned int num_bytes,
unsigned int start_chan_index)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
