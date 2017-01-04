#define PCL722_SIZE    32
#define PCL722_96_SIZE 16
#define PCL724_SIZE     4
#define PCL731_SIZE     8
#define PET48_SIZE      2
#define SIZE_8255	4
static int pcl724_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int pcl724_detach(struct comedi_device *dev);
struct pcl724_board ;
static const struct pcl724_board boardtypes[] = ;
#define n_boardtypes (sizeof(boardtypes)/sizeof(struct pcl724_board))
#define this_board ((const struct pcl724_board *)dev->board_ptr)
static struct comedi_driver driver_pcl724 = ;
static int __init driver_pcl724_init_module(void)
static void __exit driver_pcl724_cleanup_module(void)
module_init(driver_pcl724_init_module);
module_exit(driver_pcl724_cleanup_module);
static int subdev_8255_cb(int dir, int port, int data, unsigned long arg)
static int subdev_8255mapped_cb(int dir, int port, int data,
unsigned long iobase)
static int pcl724_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int pcl724_detach(struct comedi_device *dev)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
