#define ACL7225_SIZE   8
#define P16R16DIO_SIZE 4
#define ACL7225_RIO_LO 0
#define ACL7225_RIO_HI 1
#define ACL7225_DI_LO  2
#define ACL7225_DI_HI  3
static int acl7225b_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int acl7225b_detach(struct comedi_device *dev);
struct boardtype ;
static const struct boardtype boardtypes[] = ;
#define n_boardtypes (sizeof(boardtypes)/sizeof(struct boardtype))
#define this_board ((const struct boardtype *)dev->board_ptr)
static struct comedi_driver driver_acl7225b = ;
static int __init driver_acl7225b_init_module(void)
static void __exit driver_acl7225b_cleanup_module(void)
module_init(driver_acl7225b_init_module);
module_exit(driver_acl7225b_cleanup_module);
static int acl7225b_do_insn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int acl7225b_di_insn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int acl7225b_attach(struct comedi_device *dev,
struct comedi_devconfig *it)
static int acl7225b_detach(struct comedi_device *dev)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
