#undef ACL6126_IRQ
#define PCL726_SIZE 16
#define PCL727_SIZE 32
#define PCL728_SIZE 8
#define PCL726_DAC0_HI 0
#define PCL726_DAC0_LO 1
#define PCL726_DO_HI 12
#define PCL726_DO_LO 13
#define PCL726_DI_HI 14
#define PCL726_DI_LO 15
#define PCL727_DO_HI 24
#define PCL727_DO_LO 25
#define PCL727_DI_HI  0
#define PCL727_DI_LO  1
static const struct comedi_lrange range_4_20mA = ;
static const struct comedi_lrange range_0_20mA = ;
static const struct comedi_lrange *const rangelist_726[] = ;
static const struct comedi_lrange *const rangelist_727[] = ;
static const struct comedi_lrange *const rangelist_728[] = ;
static int pcl726_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int pcl726_detach(struct comedi_device *dev);
struct pcl726_board ;
static const struct pcl726_board boardtypes[] = ;
#define n_boardtypes (sizeof(boardtypes)/sizeof(struct pcl726_board))
#define this_board ((const struct pcl726_board *)dev->board_ptr)
static struct comedi_driver driver_pcl726 = ;
static int __init driver_pcl726_init_module(void)
static void __exit driver_pcl726_cleanup_module(void)
module_init(driver_pcl726_init_module);
module_exit(driver_pcl726_cleanup_module);
struct pcl726_private ;
#define devpriv ((struct pcl726_private *)dev->private)
static int pcl726_ao_insn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pcl726_ao_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pcl726_di_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pcl726_do_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pcl726_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int pcl726_detach(struct comedi_device *dev)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
