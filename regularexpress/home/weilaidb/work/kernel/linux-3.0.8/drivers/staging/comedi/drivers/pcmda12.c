#define SDEV_NO ((int)(s - dev->subdevices))
#define CHANS 8
#define IOSIZE 16
#define LSB(x) ((unsigned char)((x) & 0xff))
#define MSB(x) ((unsigned char)((((unsigned short)(x))>>8) & 0xff))
#define LSB_PORT(chan) (dev->iobase + (chan)*2)
#define MSB_PORT(chan) (LSB_PORT(chan)+1)
#define BITS 12
struct pcmda12_board ;
static const struct comedi_lrange pcmda12_ranges = ;
static const struct pcmda12_board pcmda12_boards[] = ;
#define thisboard ((const struct pcmda12_board *)dev->board_ptr)
struct pcmda12_private ;
#define devpriv ((struct pcmda12_private *)(dev->private))
static int pcmda12_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int pcmda12_detach(struct comedi_device *dev);
static void zero_chans(struct comedi_device *dev);
static struct comedi_driver driver = ;
static int ao_winsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int ao_rinsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int pcmda12_attach(struct comedi_device *dev,
struct comedi_devconfig *it)
static int pcmda12_detach(struct comedi_device *dev)
static void zero_chans(struct comedi_device *dev)
static int ao_winsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int ao_rinsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int __init driver_init_module(void)
static void __exit driver_cleanup_module(void)
module_init(driver_init_module);
module_exit(driver_cleanup_module);
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
