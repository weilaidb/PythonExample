#define DRIVER_NAME "unioxx5"
#define UNIOXX5_SIZE 0x10
#define UNIOXX5_SUBDEV_BASE 0xA000
#define UNIOXX5_SUBDEV_ODDS 0x400
#define MODULE_DIGITAL 0
#define MODULE_OUTPUT_MASK 0x80
#define UNIOXX5_NUM_OF_CHANS 24
#define TxBE  0x10
#define RxCA  0x20
#define Rx2CA 0x40
#define Rx4CA 0x80
#define Rx2CA_ERR_MASK 0x04
#define Rx4CA_ERR_MASK 0x08
#define ALL_2_INPUT  0
#define ALL_2_OUTPUT 1
struct unioxx5_subd_priv ;
static int unioxx5_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int unioxx5_subdev_write(struct comedi_device *dev,
struct comedi_subdevice *subdev,
struct comedi_insn *insn, unsigned int *data);
static int unioxx5_subdev_read(struct comedi_device *dev,
struct comedi_subdevice *subdev,
struct comedi_insn *insn, unsigned int *data);
static int unioxx5_insn_config(struct comedi_device *dev,
struct comedi_subdevice *subdev,
struct comedi_insn *insn, unsigned int *data);
static int unioxx5_detach(struct comedi_device *dev);
static int __unioxx5_subdev_init(struct comedi_subdevice *subdev,
int subdev_iobase, int minor);
static int __unioxx5_digital_write(struct unioxx5_subd_priv *usp,
unsigned int *data, int channel, int minor);
static int __unioxx5_digital_read(struct unioxx5_subd_priv *usp,
unsigned int *data, int channel, int minor);
static int __unioxx5_analog_write(struct unioxx5_subd_priv *usp,
unsigned int *data, int channel, int minor);
static int __unioxx5_analog_read(struct unioxx5_subd_priv *usp,
unsigned int *data, int channel, int minor);
static int __unioxx5_define_chan_offset(int chan_num);
static void __unioxx5_analog_config(struct unioxx5_subd_priv *usp, int channel);
static struct comedi_driver unioxx5_driver = ;
static int __init unioxx5_driver_init_module(void)
static void __exit unioxx5_driver_cleanup_module(void)
module_init(unioxx5_driver_init_module);
module_exit(unioxx5_driver_cleanup_module);
static int unioxx5_attach(struct comedi_device *dev,
struct comedi_devconfig *it)
static int unioxx5_subdev_read(struct comedi_device *dev,
struct comedi_subdevice *subdev,
struct comedi_insn *insn, unsigned int *data)
static int unioxx5_subdev_write(struct comedi_device *dev,
struct comedi_subdevice *subdev,
struct comedi_insn *insn, unsigned int *data)
static int unioxx5_insn_config(struct comedi_device *dev,
struct comedi_subdevice *subdev,
struct comedi_insn *insn, unsigned int *data)
static int unioxx5_detach(struct comedi_device *dev)
static int __unioxx5_subdev_init(struct comedi_subdevice *subdev,
int subdev_iobase, int minor)
static int __unioxx5_digital_write(struct unioxx5_subd_priv *usp,
unsigned int *data, int channel, int minor)
static int __unioxx5_digital_read(struct unioxx5_subd_priv *usp,
unsigned int *data, int channel, int minor)
static int __unioxx5_analog_write(struct unioxx5_subd_priv *usp,
unsigned int *data, int channel, int minor)
static int __unioxx5_analog_read(struct unioxx5_subd_priv *usp,
unsigned int *data, int channel, int minor)
static void __unioxx5_analog_config(struct unioxx5_subd_priv *usp, int channel)
static int __unioxx5_define_chan_offset(int chan_num)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
