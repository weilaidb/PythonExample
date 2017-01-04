#define A2150_SIZE           28
#define A2150_DMA_BUFFER_SIZE	0xff00
#undef A2150_DEBUG
#define CONFIG_REG		0x0
#define   CHANNEL_BITS(x)		((x) & 0x7)
#define   CHANNEL_MASK		0x7
#define   CLOCK_SELECT_BITS(x)		(((x) & 0x3) << 3)
#define   CLOCK_DIVISOR_BITS(x)		(((x) & 0x3) << 5)
#define   CLOCK_MASK		(0xf << 3)
#define   ENABLE0_BIT		0x80
#define   ENABLE1_BIT		0x100
#define   AC0_BIT		0x200
#define   AC1_BIT		0x400
#define   APD_BIT		0x800
#define   DPD_BIT		0x1000
#define TRIGGER_REG		0x2
#define   POST_TRIGGER_BITS		0x2
#define   DELAY_TRIGGER_BITS		0x3
#define   HW_TRIG_EN		0x10
#define FIFO_START_REG		0x6
#define FIFO_RESET_REG		0x8
#define FIFO_DATA_REG		0xa
#define DMA_TC_CLEAR_REG		0xe
#define STATUS_REG		0x12
#define   FNE_BIT		0x1
#define   OVFL_BIT		0x8
#define   EDAQ_BIT		0x10
#define   DCAL_BIT		0x20
#define   INTR_BIT		0x40
#define   DMA_TC_BIT		0x80
#define   ID_BITS(x)	(((x) >> 8) & 0x3)
#define IRQ_DMA_CNTRL_REG		0x12
#define   DMA_CHAN_BITS(x)		((x) & 0x7)
#define   DMA_EN_BIT		0x8
#define   IRQ_LVL_BITS(x)		(((x) & 0xf) << 4)
#define   FIFO_INTR_EN_BIT		0x100
#define   FIFO_INTR_FHF_BIT		0x200
#define   DMA_INTR_EN_BIT 		0x800
#define   DMA_DEM_EN_BIT	0x1000
#define I8253_BASE_REG		0x14
#define I8253_MODE_REG		0x17
#define   HW_COUNT_DISABLE		0x30
struct a2150_board ;
static const struct comedi_lrange range_a2150 = ;
enum ;
static const struct a2150_board a2150_boards[] = ;
#define thisboard ((const struct a2150_board *)dev->board_ptr)
struct a2150_private ;
#define devpriv ((struct a2150_private *)dev->private)
static int a2150_attach(struct comedi_device *dev, struct comedi_devconfig *it);
static int a2150_detach(struct comedi_device *dev);
static int a2150_cancel(struct comedi_device *dev, struct comedi_subdevice *s);
static struct comedi_driver driver_a2150 = ;
static irqreturn_t a2150_interrupt(int irq, void *d);
static int a2150_ai_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_cmd *cmd);
static int a2150_ai_cmd(struct comedi_device *dev, struct comedi_subdevice *s);
static int a2150_ai_rinsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int a2150_get_timing(struct comedi_device *dev, unsigned int *period,
int flags);
static int a2150_probe(struct comedi_device *dev);
static int a2150_set_chanlist(struct comedi_device *dev,
unsigned int start_channel,
unsigned int num_channels);
static int __init driver_a2150_init_module(void)
static void __exit driver_a2150_cleanup_module(void)
module_init(driver_a2150_init_module);
module_exit(driver_a2150_cleanup_module);
static void ni_dump_regs(struct comedi_device *dev)
static irqreturn_t a2150_interrupt(int irq, void *d)
static int a2150_probe(struct comedi_device *dev)
static int a2150_attach(struct comedi_device *dev, struct comedi_devconfig *it)
;
static int a2150_detach(struct comedi_device *dev)
;
static int a2150_cancel(struct comedi_device *dev, struct comedi_subdevice *s)
static int a2150_ai_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_cmd *cmd)
static int a2150_ai_cmd(struct comedi_device *dev, struct comedi_subdevice *s)
static int a2150_ai_rinsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int a2150_get_timing(struct comedi_device *dev, unsigned int *period,
int flags)
static int a2150_set_chanlist(struct comedi_device *dev,
unsigned int start_channel,
unsigned int num_channels)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
