static const struct comedi_lrange
range_dt2815_ao_32_current = ;
static const struct comedi_lrange
range_dt2815_ao_20_current = ;
#define DT2815_SIZE 2
#define DT2815_DATA 0
#define DT2815_STATUS 1
static int dt2815_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int dt2815_detach(struct comedi_device *dev);
static struct comedi_driver driver_dt2815 = ;
static int __init driver_dt2815_init_module(void)
static void __exit driver_dt2815_cleanup_module(void)
module_init(driver_dt2815_init_module);
module_exit(driver_dt2815_cleanup_module);
static void dt2815_free_resources(struct comedi_device *dev);
struct dt2815_private ;
#define devpriv ((struct dt2815_private *)dev->private)
static int dt2815_wait_for_status(struct comedi_device *dev, int status)
static int dt2815_ao_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int dt2815_ao_insn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int dt2815_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static void dt2815_free_resources(struct comedi_device *dev)
static int dt2815_detach(struct comedi_device *dev)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
