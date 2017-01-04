extern unsigned long mpc8260_dio_reserved[4];
struct mpc8260cpm_private ;
#define devpriv ((struct mpc8260cpm_private *)dev->private)
static int mpc8260cpm_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int mpc8260cpm_detach(struct comedi_device *dev);
static struct comedi_driver driver_mpc8260cpm = ;
static int __init driver_mpc8260cpm_init_module(void)
static void __exit driver_mpc8260cpm_cleanup_module(void)
module_init(driver_mpc8260cpm_init_module);
module_exit(driver_mpc8260cpm_cleanup_module);
static int mpc8260cpm_dio_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int mpc8260cpm_dio_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int mpc8260cpm_attach(struct comedi_device *dev,
struct comedi_devconfig *it)
static int mpc8260cpm_detach(struct comedi_device *dev)
static unsigned long *cpm_pdat(int port)
static int mpc8260cpm_dio_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int mpc8260cpm_dio_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
