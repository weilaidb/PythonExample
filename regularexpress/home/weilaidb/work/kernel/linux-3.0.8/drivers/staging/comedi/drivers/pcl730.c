#define PCL730_SIZE		4
#define ACL7130_SIZE	8
#define PCL730_IDIO_LO	0
#define PCL730_IDIO_HI	1
#define PCL730_DIO_LO	2
#define PCL730_DIO_HI	3
static int pcl730_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int pcl730_detach(struct comedi_device *dev);
struct pcl730_board ;
static const struct pcl730_board boardtypes[] = ;
#define n_boardtypes (sizeof(boardtypes)/sizeof(struct pcl730_board))
#define this_board ((const struct pcl730_board *)dev->board_ptr)
static struct comedi_driver driver_pcl730 = ;
static int __init driver_pcl730_init_module(void)
static void __exit driver_pcl730_cleanup_module(void)
module_init(driver_pcl730_init_module);
module_exit(driver_pcl730_cleanup_module);
static int pcl730_do_insn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pcl730_di_insn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pcl730_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int pcl730_detach(struct comedi_device *dev)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
