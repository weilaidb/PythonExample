#define PCL725_SIZE 2
#define PCL725_DO 0
#define PCL725_DI 1
static int pcl725_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int pcl725_detach(struct comedi_device *dev);
static struct comedi_driver driver_pcl725 = ;
static int __init driver_pcl725_init_module(void)
static void __exit driver_pcl725_cleanup_module(void)
module_init(driver_pcl725_init_module);
module_exit(driver_pcl725_cleanup_module);
static int pcl725_do_insn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pcl725_di_insn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pcl725_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int pcl725_detach(struct comedi_device *dev)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
