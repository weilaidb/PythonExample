#define VERSION "arcnet: RIM I (entirely mem-mapped) support\n"
static int arcrimi_probe(struct net_device *dev);
static int arcrimi_found(struct net_device *dev);
static void arcrimi_command(struct net_device *dev, int command);
static int arcrimi_status(struct net_device *dev);
static void arcrimi_setmask(struct net_device *dev, int mask);
static int arcrimi_reset(struct net_device *dev, int really_reset);
static void arcrimi_copy_to_card(struct net_device *dev, int bufnum, int offset,
void *buf, int count);
static void arcrimi_copy_from_card(struct net_device *dev, int bufnum, int offset,
void *buf, int count);
#define BUFFER_SIZE (512)
#define MIRROR_SIZE (BUFFER_SIZE*4)
#define _INTMASK (ioaddr+0)
#define _STATUS  (ioaddr+0)
#define _COMMAND (ioaddr+1)
#define _RESET  (ioaddr+8)
#define _MEMDATA  (ioaddr+12)
#define _ADDR_HI  (ioaddr+15)
#define _ADDR_LO  (ioaddr+14)
#define _CONFIG  (ioaddr+2)
#undef ASTATUS
#undef ACOMMAND
#undef AINTMASK
#define ASTATUS()	readb(_STATUS)
#define ACOMMAND(cmd)	writeb((cmd),_COMMAND)
#define AINTMASK(msk)	writeb((msk),_INTMASK)
#define SETCONF()	writeb(lp->config,_CONFIG)
static int __init arcrimi_probe(struct net_device *dev)
static int check_mirror(unsigned long addr, size_t size)
static int __init arcrimi_found(struct net_device *dev)
static int arcrimi_reset(struct net_device *dev, int really_reset)
static void arcrimi_setmask(struct net_device *dev, int mask)
static int arcrimi_status(struct net_device *dev)
static void arcrimi_command(struct net_device *dev, int cmd)
static void arcrimi_copy_to_card(struct net_device *dev, int bufnum, int offset,
void *buf, int count)
static void arcrimi_copy_from_card(struct net_device *dev, int bufnum, int offset,
void *buf, int count)
static int node;
static int io;
static int irq;
static char device[9];
module_param(node, int, 0);
module_param(io, int, 0);
module_param(irq, int, 0);
module_param_string(device, device, sizeof(device), 0);
MODULE_LICENSE("GPL");
static struct net_device *my_dev;
static int __init arc_rimi_init(void)
static void __exit arc_rimi_exit(void)
static int __init arcrimi_setup(char *s)
__setup("arcrimi=", arcrimi_setup);
module_init(arc_rimi_init)
module_exit(arc_rimi_exit)
