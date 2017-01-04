#define DT2817_SIZE 5
#define DT2817_CR 0
#define DT2817_DATA 1
static int dt2817_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int dt2817_detach(struct comedi_device *dev);
static struct comedi_driver driver_dt2817 = ;
static int __init driver_dt2817_init_module(void)
static void __exit driver_dt2817_cleanup_module(void)
module_init(driver_dt2817_init_module);
module_exit(driver_dt2817_cleanup_module);
static int dt2817_dio_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int dt2817_dio_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int dt2817_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int dt2817_detach(struct comedi_device *dev)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
