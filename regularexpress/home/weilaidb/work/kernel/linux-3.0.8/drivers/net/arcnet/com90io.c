#define VERSION "arcnet: COM90xx IO-mapped mode support (by David Woodhouse et el.)\n"
static int com90io_found(struct net_device *dev);
static void com90io_command(struct net_device *dev, int command);
static int com90io_status(struct net_device *dev);
static void com90io_setmask(struct net_device *dev, int mask);
static int com90io_reset(struct net_device *dev, int really_reset);
static void com90io_copy_to_card(struct net_device *dev, int bufnum, int offset,
void *buf, int count);
static void com90io_copy_from_card(struct net_device *dev, int bufnum, int offset,
void *buf, int count);
#define ARCNET_TOTAL_SIZE 16
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
#define ASTATUS()	inb(_STATUS)
#define ACOMMAND(cmd) outb((cmd),_COMMAND)
#define AINTMASK(msk)	outb((msk),_INTMASK)
#define SETCONF() 	outb((lp->config),_CONFIG)
#undef ONE_AT_A_TIME_TX
#undef ONE_AT_A_TIME_RX
static u_char get_buffer_byte(struct net_device *dev, unsigned offset)
static void put_buffer_byte(struct net_device *dev, unsigned offset, u_char datum)
static void get_whole_buffer(struct net_device *dev, unsigned offset, unsigned length, char *dest)
static void put_whole_buffer(struct net_device *dev, unsigned offset, unsigned length, char *dest)
static int __init com90io_probe(struct net_device *dev)
static int __init com90io_found(struct net_device *dev)
static int com90io_reset(struct net_device *dev, int really_reset)
static void com90io_command(struct net_device *dev, int cmd)
static int com90io_status(struct net_device *dev)
static void com90io_setmask(struct net_device *dev, int mask)
static void com90io_copy_to_card(struct net_device *dev, int bufnum, int offset,
void *buf, int count)
static void com90io_copy_from_card(struct net_device *dev, int bufnum, int offset,
void *buf, int count)
static int io;
static int irq;
static char device[9];
module_param(io, int, 0);
module_param(irq, int, 0);
module_param_string(device, device, sizeof(device), 0);
MODULE_LICENSE("GPL");
static int __init com90io_setup(char *s)
__setup("com90io=", com90io_setup);
static struct net_device *my_dev;
static int __init com90io_init(void)
static void __exit com90io_exit(void)
module_init(com90io_init)
module_exit(com90io_exit)
