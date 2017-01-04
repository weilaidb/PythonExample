#define AIO_IIRO_16_SIZE	0x08
#define AIO_IIRO_16_RELAY_0_7	0x00
#define AIO_IIRO_16_INPUT_0_7	0x01
#define AIO_IIRO_16_IRQ		0x02
#define AIO_IIRO_16_RELAY_8_15	0x04
#define AIO_IIRO_16_INPUT_8_15	0x05
struct aio_iiro_16_board ;
static const struct aio_iiro_16_board aio_iiro_16_boards[] = ;
#define	thisboard	((const struct aio_iiro_16_board *) dev->board_ptr)
struct aio_iiro_16_private ;
#define	devpriv	((struct aio_iiro_16_private *) dev->private)
static int aio_iiro_16_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int aio_iiro_16_detach(struct comedi_device *dev);
static struct comedi_driver driver_aio_iiro_16 = ;
static int aio_iiro_16_dio_insn_bits_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data);
static int aio_iiro_16_dio_insn_bits_write(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data);
static int aio_iiro_16_attach(struct comedi_device *dev,
struct comedi_devconfig *it)
static int aio_iiro_16_detach(struct comedi_device *dev)
static int aio_iiro_16_dio_insn_bits_write(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int aio_iiro_16_dio_insn_bits_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int __init driver_aio_iiro_16_init_module(void)
static void __exit driver_aio_iiro_16_cleanup_module(void)
module_init(driver_aio_iiro_16_init_module);
module_exit(driver_aio_iiro_16_cleanup_module);
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
