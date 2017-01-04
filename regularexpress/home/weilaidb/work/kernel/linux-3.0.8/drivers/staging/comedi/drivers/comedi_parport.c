#define PARPORT_SIZE 3
#define PARPORT_A 0
#define PARPORT_B 1
#define PARPORT_C 2
static int parport_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int parport_detach(struct comedi_device *dev);
static struct comedi_driver driver_parport = ;
static int __init driver_parport_init_module(void)
static void __exit driver_parport_cleanup_module(void)
module_init(driver_parport_init_module);
module_exit(driver_parport_cleanup_module);
struct parport_private ;
#define devpriv ((struct parport_private *)(dev->private))
static int parport_insn_a(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int parport_insn_config_a(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int parport_insn_b(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int parport_insn_c(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int parport_intr_insn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int parport_intr_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_cmd *cmd)
static int parport_intr_cmd(struct comedi_device *dev,
struct comedi_subdevice *s)
static int parport_intr_cancel(struct comedi_device *dev,
struct comedi_subdevice *s)
static irqreturn_t parport_interrupt(int irq, void *d)
static int parport_attach(struct comedi_device *dev,
struct comedi_devconfig *it)
static int parport_detach(struct comedi_device *dev)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
