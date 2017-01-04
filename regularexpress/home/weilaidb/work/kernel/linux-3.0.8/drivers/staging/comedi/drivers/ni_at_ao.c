#define ATAO_SIZE 0x20
#define ATAO_2_DMATCCLR		0x00
#define ATAO_DIN		0x00
#define ATAO_DOUT		0x00
#define ATAO_CFG2		0x02
#define CALLD1	0x8000
#define CALLD0	0x4000
#define FFRTEN	0x2000
#define DAC2S8	0x1000
#define DAC2S6	0x0800
#define DAC2S4	0x0400
#define DAC2S2	0x0200
#define DAC2S0	0x0100
#define LDAC8		0x0080
#define LDAC6		0x0040
#define LDAC4		0x0020
#define LDAC2		0x0010
#define LDAC0		0x0008
#define PROMEN	0x0004
#define SCLK		0x0002
#define SDATA		0x0001
#define ATAO_2_INT1CLR		0x02
#define ATAO_CFG3		0x04
#define DMAMODE	0x0040
#define CLKOUT	0x0020
#define RCLKEN	0x0010
#define DOUTEN2	0x0008
#define DOUTEN1	0x0004
#define EN2_5V	0x0002
#define SCANEN	0x0001
#define ATAO_2_INT2CLR		0x04
#define ATAO_82C53_BASE		0x06
#define ATAO_82C53_CNTR1	0x06
#define ATAO_82C53_CNTR2	0x07
#define ATAO_82C53_CNTR3	0x08
#define ATAO_82C53_CNTRCMD	0x09
#define CNTRSEL1	0x80
#define CNTRSEL0	0x40
#define RWSEL1	0x20
#define RWSEL0	0x10
#define MODESEL2	0x08
#define MODESEL1	0x04
#define MODESEL0	0x02
#define BCDSEL	0x01
#define COUNT		0x20
#define STATUS	0x10
#define CNTR3		0x08
#define CNTR2		0x04
#define CNTR1		0x02
#define OUT		0x80
#define _NULL		0x40
#define RW1		0x20
#define RW0		0x10
#define MODE2		0x08
#define MODE1		0x04
#define MODE0		0x02
#define BCD		0x01
#define ATAO_2_RTSISHFT		0x06
#define RSI		0x01
#define ATAO_2_RTSISTRB		0x07
#define ATAO_CFG1		0x0a
#define EXTINT2EN	0x8000
#define EXTINT1EN	0x4000
#define CNTINT2EN	0x2000
#define CNTINT1EN	0x1000
#define TCINTEN	0x0800
#define CNT1SRC	0x0400
#define CNT2SRC	0x0200
#define FIFOEN	0x0100
#define GRP2WR	0x0080
#define EXTUPDEN	0x0040
#define DMARQ		0x0020
#define DMAEN		0x0010
#define CH_mask	0x000f
#define ATAO_STATUS		0x0a
#define FH		0x0040
#define FE		0x0020
#define FF		0x0010
#define INT2		0x0008
#define INT1		0x0004
#define TCINT		0x0002
#define PROMOUT	0x0001
#define ATAO_FIFO_WRITE		0x0c
#define ATAO_FIFO_CLEAR		0x0c
#define ATAO_DACn(x)		(0x0c + 2*(x))
struct atao_board ;
static const struct atao_board atao_boards[] = ;
#define thisboard ((struct atao_board *)dev->board_ptr)
struct atao_private ;
#define devpriv ((struct atao_private *)dev->private)
static int atao_attach(struct comedi_device *dev, struct comedi_devconfig *it);
static int atao_detach(struct comedi_device *dev);
static struct comedi_driver driver_atao = ;
static int __init driver_atao_init_module(void)
static void __exit driver_atao_cleanup_module(void)
module_init(driver_atao_init_module);
module_exit(driver_atao_cleanup_module);
static void atao_reset(struct comedi_device *dev);
static int atao_ao_winsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int atao_ao_rinsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int atao_dio_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int atao_dio_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int atao_calib_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int atao_calib_insn_write(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int atao_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int atao_detach(struct comedi_device *dev)
static void atao_reset(struct comedi_device *dev)
static int atao_ao_winsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int atao_ao_rinsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int atao_dio_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int atao_dio_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int atao_calib_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int atao_calib_insn_write(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
