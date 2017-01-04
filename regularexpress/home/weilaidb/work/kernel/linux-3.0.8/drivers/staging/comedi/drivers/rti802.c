#define RTI802_SIZE 4
#define RTI802_SELECT 0
#define RTI802_DATALOW 1
#define RTI802_DATAHIGH 2
static int rti802_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int rti802_detach(struct comedi_device *dev);
static struct comedi_driver driver_rti802 = ;
static int __init driver_rti802_init_module(void)
static void __exit driver_rti802_cleanup_module(void)
module_init(driver_rti802_init_module);
module_exit(driver_rti802_cleanup_module);
struct rti802_private ;
#define devpriv ((struct rti802_private *)dev->private)
static int rti802_ao_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int rti802_ao_insn_write(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int rti802_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int rti802_detach(struct comedi_device *dev)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
