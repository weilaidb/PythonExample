#define COM_REG_1	0x00
#define STAT_REG	0x00
#define COM_REG_2	0x02
#define START_CONVERT_REG	0x08
#define START_DAQ_REG		0x0A
#define AD_CLEAR_REG		0x0C
#define EXT_STROBE_REG		0x0E
#define DAC0_REG		0x10
#define DAC1_REG		0x12
#define INT2CLR_REG		0x14
#define MUX_CNTR_REG		0x04
#define MUX_GAIN_REG		0x06
#define AD_FIFO_REG		0x16
#define DMA_TC_INT_CLR_REG	0x16
#define AM9513A_DATA_REG	0x18
#define AM9513A_COM_REG		0x1A
#define AM9513A_STAT_REG	0x1A
#define MIO_16_DIG_IN_REG	0x1C
#define MIO_16_DIG_OUT_REG	0x1C
#define RTSI_SW_SHIFT_REG	0x1E
#define RTSI_SW_STROBE_REG	0x1F
#define DIO_24_PORTA_REG	0x00
#define DIO_24_PORTB_REG	0x01
#define DIO_24_PORTC_REG	0x02
#define DIO_24_CNFG_REG		0x03
#define COMREG1_2SCADC		0x0001
#define COMREG1_1632CNT		0x0002
#define COMREG1_SCANEN		0x0008
#define COMREG1_DAQEN		0x0010
#define COMREG1_DMAEN		0x0020
#define COMREG1_CONVINTEN	0x0080
#define COMREG2_SCN2		0x0010
#define COMREG2_INTEN		0x0080
#define COMREG2_DOUTEN0		0x0100
#define COMREG2_DOUTEN1		0x0200
#define STAT_AD_OVERRUN		0x0100
#define STAT_AD_OVERFLOW	0x0200
#define STAT_AD_DAQPROG		0x0800
#define STAT_AD_CONVAVAIL	0x2000
#define STAT_AD_DAQSTOPINT	0x4000
#define CLOCK_1_MHZ		0x8B25
#define CLOCK_100_KHZ	0x8C25
#define CLOCK_10_KHZ	0x8D25
#define CLOCK_1_KHZ		0x8E25
#define CLOCK_100_HZ	0x8F25
#define ATMIO16D_SIZE	32
#define devpriv ((struct atmio16d_private *)dev->private)
#define ATMIO16D_TIMEOUT 10
struct atmio16_board_t ;
static const struct atmio16_board_t atmio16_boards[] = ;
#define n_atmio16_boards ARRAY_SIZE(atmio16_boards)
#define boardtype ((const struct atmio16_board_t *)dev->board_ptr)
static int atmio16d_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int atmio16d_detach(struct comedi_device *dev);
static irqreturn_t atmio16d_interrupt(int irq, void *d);
static int atmio16d_ai_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_cmd *cmd);
static int atmio16d_ai_cmd(struct comedi_device *dev,
struct comedi_subdevice *s);
static int atmio16d_ai_cancel(struct comedi_device *dev,
struct comedi_subdevice *s);
static void reset_counters(struct comedi_device *dev);
static void reset_atmio16d(struct comedi_device *dev);
static struct comedi_driver driver_atmio16d = ;
static int __init driver_atmio16d_init_module(void)
static void __exit driver_atmio16d_cleanup_module(void)
module_init(driver_atmio16d_init_module);
module_exit(driver_atmio16d_cleanup_module);
static const struct comedi_lrange range_atmio16d_ai_10_bipolar = ;
static const struct comedi_lrange range_atmio16d_ai_5_bipolar = ;
static const struct comedi_lrange range_atmio16d_ai_unipolar = ;
struct atmio16d_private ;
static void reset_counters(struct comedi_device *dev)
static void reset_atmio16d(struct comedi_device *dev)
static irqreturn_t atmio16d_interrupt(int irq, void *d)
static int atmio16d_ai_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_cmd *cmd)
static int atmio16d_ai_cmd(struct comedi_device *dev,
struct comedi_subdevice *s)
static int atmio16d_ai_cancel(struct comedi_device *dev,
struct comedi_subdevice *s)
static int atmio16d_ai_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int atmio16d_ao_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int atmio16d_ao_insn_write(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int atmio16d_dio_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int atmio16d_dio_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int atmio16d_attach(struct comedi_device *dev,
struct comedi_devconfig *it)
static int atmio16d_detach(struct comedi_device *dev)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
