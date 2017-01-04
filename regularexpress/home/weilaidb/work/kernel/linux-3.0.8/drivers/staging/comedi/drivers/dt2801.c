#define DT2801_TIMEOUT 1000
#define DT2801_MAX_DMA_SIZE (64 * 1024)
#define DT2801_IOSIZE 2
#define DT_C_RESET       0x0
#define DT_C_CLEAR_ERR   0x1
#define DT_C_READ_ERRREG 0x2
#define DT_C_SET_CLOCK   0x3
#define DT_C_TEST        0xb
#define DT_C_STOP        0xf
#define DT_C_SET_DIGIN   0x4
#define DT_C_SET_DIGOUT  0x5
#define DT_C_READ_DIG    0x6
#define DT_C_WRITE_DIG   0x7
#define DT_C_WRITE_DAIM  0x8
#define DT_C_SET_DA      0x9
#define DT_C_WRITE_DA    0xa
#define DT_C_READ_ADIM   0xc
#define DT_C_SET_AD      0xd
#define DT_C_READ_AD     0xe
#define DT_MOD_DMA     (1<<4)
#define DT_MOD_CONT    (1<<5)
#define DT_MOD_EXTCLK  (1<<6)
#define DT_MOD_EXTTRIG (1<<7)
#define DT_S_DATA_OUT_READY   (1<<0)
#define DT_S_DATA_IN_FULL     (1<<1)
#define DT_S_READY            (1<<2)
#define DT_S_COMMAND          (1<<3)
#define DT_S_COMPOSITE_ERROR  (1<<7)
#define DT2801_DATA		0
#define DT2801_STATUS		1
#define DT2801_CMD		1
static int dt2801_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int dt2801_detach(struct comedi_device *dev);
static struct comedi_driver driver_dt2801 = ;
static int __init driver_dt2801_init_module(void)
static void __exit driver_dt2801_cleanup_module(void)
module_init(driver_dt2801_init_module);
module_exit(driver_dt2801_cleanup_module);
static const struct comedi_lrange range_dt2801_ai_pgl_bipolar = ;
static const struct comedi_lrange range_dt2801_ai_pgl_unipolar = ;
struct dt2801_board ;
static const struct dt2801_board boardtypes[] = ;
#define boardtype (*(const struct dt2801_board *)dev->board_ptr)
struct dt2801_private ;
#define devpriv ((struct dt2801_private *)dev->private)
static int dt2801_ai_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int dt2801_ao_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int dt2801_ao_insn_write(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int dt2801_dio_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int dt2801_dio_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int dt2801_readdata(struct comedi_device *dev, int *data)
static int dt2801_readdata2(struct comedi_device *dev, int *data)
static int dt2801_writedata(struct comedi_device *dev, unsigned int data)
static int dt2801_writedata2(struct comedi_device *dev, unsigned int data)
static int dt2801_wait_for_ready(struct comedi_device *dev)
static int dt2801_writecmd(struct comedi_device *dev, int command)
static int dt2801_reset(struct comedi_device *dev)
static int probe_number_of_ai_chans(struct comedi_device *dev)
static const struct comedi_lrange *dac_range_table[] = ;
static const struct comedi_lrange *dac_range_lkup(int opt)
static const struct comedi_lrange *ai_range_lkup(int type, int opt)
static int dt2801_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int dt2801_detach(struct comedi_device *dev)
static int dt2801_error(struct comedi_device *dev, int stat)
static int dt2801_ai_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int dt2801_ao_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int dt2801_ao_insn_write(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int dt2801_dio_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int dt2801_dio_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
