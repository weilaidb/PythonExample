#define DEBUG
#define DT2821_TIMEOUT		100
#define DT2821_SIZE 0x10
#define DT2821_ADCSR	0x00
#define DT2821_CHANCSR	0x02
#define DT2821_ADDAT	0x04
#define DT2821_DACSR	0x06
#define DT2821_DADAT	0x08
#define DT2821_DIODAT	0x0a
#define DT2821_SUPCSR	0x0c
#define DT2821_TMRCTR	0x0e
#define DT2821_ADCSR_MASK 0xfff0
#define DT2821_ADCSR_VAL 0x7c00
#define DT2821_CHANCSR_MASK 0xf0f0
#define DT2821_CHANCSR_VAL 0x70f0
#define DT2821_DACSR_MASK 0x7c93
#define DT2821_DACSR_VAL 0x7c90
#define DT2821_SUPCSR_MASK 0xf8ff
#define DT2821_SUPCSR_VAL 0x0000
#define DT2821_TMRCTR_MASK 0xff00
#define DT2821_TMRCTR_VAL 0xf000
#define DT2821_ADERR	0x8000
#define DT2821_ADCLK	0x0200
#define DT2821_MUXBUSY	0x0100
#define DT2821_ADDONE	0x0080
#define DT2821_IADDONE	0x0040
#define DT2821_LLE	0x8000
#define DT2821_DAERR	0x8000
#define DT2821_YSEL	0x0200
#define DT2821_SSEL	0x0100
#define DT2821_DACRDY	0x0080
#define DT2821_IDARDY	0x0040
#define DT2821_DACLK	0x0020
#define DT2821_HBOE	0x0002
#define DT2821_LBOE	0x0001
#define DT2821_DMAD	0x8000
#define DT2821_ERRINTEN	0x4000
#define DT2821_CLRDMADNE 0x2000
#define DT2821_DDMA	0x1000
#define DT2821_DS1	0x0800
#define DT2821_DS0	0x0400
#define DT2821_BUFFB	0x0200
#define DT2821_SCDN	0x0100
#define DT2821_DACON	0x0080
#define DT2821_ADCINIT	0x0040
#define DT2821_DACINIT	0x0020
#define DT2821_PRLD	0x0010
#define DT2821_STRIG	0x0008
#define DT2821_XTRIG	0x0004
#define DT2821_XCLK	0x0002
#define DT2821_BDINIT	0x0001
static const struct comedi_lrange range_dt282x_ai_lo_bipolar = ;
static const struct comedi_lrange range_dt282x_ai_lo_unipolar = ;
static const struct comedi_lrange range_dt282x_ai_5_bipolar = ;
static const struct comedi_lrange range_dt282x_ai_5_unipolar = ;
static const struct comedi_lrange range_dt282x_ai_hi_bipolar = ;
static const struct comedi_lrange range_dt282x_ai_hi_unipolar = ;
struct dt282x_board ;
static const struct dt282x_board boardtypes[] = ;
#define n_boardtypes (sizeof(boardtypes)/sizeof(struct dt282x_board))
#define this_board ((const struct dt282x_board *)dev->board_ptr)
struct dt282x_private ;
#define devpriv ((struct dt282x_private *)dev->private)
#define boardtype (*(const struct dt282x_board *)dev->board_ptr)
#define chan_to_DAC(a)	((a)&1)
#define update_dacsr(a)	outw(devpriv->dacsr|(a), dev->iobase+DT2821_DACSR)
#define update_adcsr(a)	outw(devpriv->adcsr|(a), dev->iobase+DT2821_ADCSR)
#define mux_busy() (inw(dev->iobase+DT2821_ADCSR)&DT2821_MUXBUSY)
#define ad_done() (inw(dev->iobase+DT2821_ADCSR)&DT2821_ADDONE)
#define update_supcsr(a) outw(devpriv->supcsr|(a), dev->iobase+DT2821_SUPCSR)
#define wait_for(a, b)						\
do  while (0)
static int dt282x_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int dt282x_detach(struct comedi_device *dev);
static struct comedi_driver driver_dt282x = ;
static int __init driver_dt282x_init_module(void)
static void __exit driver_dt282x_cleanup_module(void)
module_init(driver_dt282x_init_module);
module_exit(driver_dt282x_cleanup_module);
static void free_resources(struct comedi_device *dev);
static int prep_ai_dma(struct comedi_device *dev, int chan, int size);
static int prep_ao_dma(struct comedi_device *dev, int chan, int size);
static int dt282x_ai_cancel(struct comedi_device *dev,
struct comedi_subdevice *s);
static int dt282x_ao_cancel(struct comedi_device *dev,
struct comedi_subdevice *s);
static int dt282x_ns_to_timer(int *nanosec, int round_mode);
static void dt282x_disable_dma(struct comedi_device *dev);
static int dt282x_grab_dma(struct comedi_device *dev, int dma1, int dma2);
static void dt282x_munge(struct comedi_device *dev, short *buf,
unsigned int nbytes)
static void dt282x_ao_dma_interrupt(struct comedi_device *dev)
static void dt282x_ai_dma_interrupt(struct comedi_device *dev)
static int prep_ai_dma(struct comedi_device *dev, int dma_index, int n)
static int prep_ao_dma(struct comedi_device *dev, int dma_index, int n)
static irqreturn_t dt282x_interrupt(int irq, void *d)
static void dt282x_load_changain(struct comedi_device *dev, int n,
unsigned int *chanlist)
static int dt282x_ai_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int dt282x_ai_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_cmd *cmd)
static int dt282x_ai_cmd(struct comedi_device *dev, struct comedi_subdevice *s)
static void dt282x_disable_dma(struct comedi_device *dev)
static int dt282x_ai_cancel(struct comedi_device *dev,
struct comedi_subdevice *s)
static int dt282x_ns_to_timer(int *nanosec, int round_mode)
static int dt282x_ao_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int dt282x_ao_insn_write(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int dt282x_ao_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_cmd *cmd)
static int dt282x_ao_inttrig(struct comedi_device *dev,
struct comedi_subdevice *s, unsigned int x)
static int dt282x_ao_cmd(struct comedi_device *dev, struct comedi_subdevice *s)
static int dt282x_ao_cancel(struct comedi_device *dev,
struct comedi_subdevice *s)
static int dt282x_dio_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int dt282x_dio_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static const struct comedi_lrange *const ai_range_table[] = ;
static const struct comedi_lrange *const ai_range_pgl_table[] = ;
static const struct comedi_lrange *opt_ai_range_lkup(int ispgl, int x)
static const struct comedi_lrange *const ao_range_table[] = ;
static const struct comedi_lrange *opt_ao_range_lkup(int x)
enum ;
static int dt282x_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static void free_resources(struct comedi_device *dev)
static int dt282x_detach(struct comedi_device *dev)
static int dt282x_grab_dma(struct comedi_device *dev, int dma1, int dma2)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
