#define AIO12_8_STATUS			0x00
#define AIO12_8_INTERRUPT		0x01
#define AIO12_8_ADC			0x02
#define AIO12_8_DAC_0			0x04
#define AIO12_8_DAC_1			0x06
#define AIO12_8_DAC_2			0x08
#define AIO12_8_DAC_3			0x0A
#define AIO12_8_COUNTER_0		0x0C
#define AIO12_8_COUNTER_1		0x0D
#define AIO12_8_COUNTER_2		0x0E
#define AIO12_8_COUNTER_CONTROL		0x0F
#define AIO12_8_DIO_0			0x10
#define AIO12_8_DIO_1			0x11
#define AIO12_8_DIO_2			0x12
#define AIO12_8_DIO_STATUS		0x13
#define AIO12_8_DIO_CONTROL		0x14
#define AIO12_8_ADC_TRIGGER_CONTROL	0x15
#define AIO12_8_TRIGGER			0x16
#define AIO12_8_POWER			0x17
#define STATUS_ADC_EOC			0x80
#define ADC_MODE_NORMAL			0x00
#define ADC_MODE_INTERNAL_CLOCK		0x40
#define ADC_MODE_STANDBY		0x80
#define ADC_MODE_POWERDOWN		0xC0
#define DAC_ENABLE			0x18
struct aio12_8_boardtype ;
static const struct aio12_8_boardtype board_types[] = ;
#define	thisboard	((const struct aio12_8_boardtype  *) dev->board_ptr)
struct aio12_8_private ;
#define devpriv	((struct aio12_8_private *) dev->private)
static int aio_aio12_8_ai_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int aio_aio12_8_ao_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int aio_aio12_8_ao_write(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static const struct comedi_lrange range_aio_aio12_8 = ;
static int aio_aio12_8_attach(struct comedi_device *dev,
struct comedi_devconfig *it)
static int aio_aio12_8_detach(struct comedi_device *dev)
static struct comedi_driver driver_aio_aio12_8 = ;
static int __init driver_aio_aio12_8_init_module(void)
static void __exit driver_aio_aio12_8_cleanup_module(void)
module_init(driver_aio_aio12_8_init_module);
module_exit(driver_aio_aio12_8_cleanup_module);
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
