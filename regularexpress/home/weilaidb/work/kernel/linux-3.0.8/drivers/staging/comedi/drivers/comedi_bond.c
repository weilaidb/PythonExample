#define MAX_CHANS 256
#define MODULE_NAME "comedi_bond"
MODULE_LICENSE("GPL");
#  define STR1(x) #x
#  define STR(x) STR1(x)
static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "If true, print extra cryptic debugging output useful"
"only to developers.");
#define LOG_MSG(x...) printk(KERN_INFO MODULE_NAME": "x)
#define DEBUG(x...)							\
do  while (0)
#define WARNING(x...)  printk(KERN_WARNING MODULE_NAME ": WARNING: "x)
#define ERROR(x...)  printk(KERN_ERR MODULE_NAME ": INTERNAL ERROR: "x)
MODULE_AUTHOR("Calin A. Culianu");
MODULE_DESCRIPTION(MODULE_NAME "A driver for COMEDI to bond multiple COMEDI "
"devices together as one.  In the words of John Lennon: "
"'And the world will live as one...'");
struct BondingBoard ;
static const struct BondingBoard bondingBoards[] = ;
#define thisboard ((const struct BondingBoard *)dev->board_ptr)
struct BondedDevice ;
struct Private ;
#define devpriv ((struct Private *)dev->private)
static int bonding_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int bonding_detach(struct comedi_device *dev);
static int doDevConfig(struct comedi_device *dev, struct comedi_devconfig *it);
static void doDevUnconfig(struct comedi_device *dev);
static void *Realloc(const void *ptr, size_t len, size_t old_len);
static struct comedi_driver driver_bonding = ;
static int bonding_dio_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int bonding_dio_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data);
static int bonding_attach(struct comedi_device *dev,
struct comedi_devconfig *it)
static int bonding_detach(struct comedi_device *dev)
static int bonding_dio_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int bonding_dio_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static void *Realloc(const void *oldmem, size_t newlen, size_t oldlen)
static int doDevConfig(struct comedi_device *dev, struct comedi_devconfig *it)
static void doDevUnconfig(struct comedi_device *dev)
static int __init init(void)
static void __exit cleanup(void)
module_init(init);
module_exit(cleanup);
