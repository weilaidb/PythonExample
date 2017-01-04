#define DEBUG 0
#define FL512_SIZE 16
struct fl512_private ;
#define devpriv ((struct fl512_private *) dev->private)
static const struct comedi_lrange range_fl512 = ;
static int fl512_attach(struct comedi_device *dev, struct comedi_devconfig *it);
static int fl512_detach(struct comedi_device *dev);
static struct comedi_driver driver_fl512 = ;
static int __init driver_fl512_init_module(void)
static void __exit driver_fl512_cleanup_module(void)
module_init(driver_fl512_init_module);
module_exit(driver_fl512_cleanup_module);
static int fl512_ai_insn(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data);
static int fl512_ao_insn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int fl512_ao_insn_readback(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int fl512_ai_insn(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data)
static int fl512_ao_insn(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data)
static int fl512_ao_insn_readback(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int fl512_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int fl512_detach(struct comedi_device *dev)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
