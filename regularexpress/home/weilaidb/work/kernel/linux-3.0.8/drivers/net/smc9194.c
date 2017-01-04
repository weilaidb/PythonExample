static const char version[] =
"smc9194.c:v0.14 12/15/00 by Erik Stahlman (erik@vt.edu)\n";
#define DRV_NAME "smc9194"
#undef USE_32_BIT
#define USE_32_BIT 1
#if defined(__H8300H__) || defined(__H8300S__)
#define NO_AUTOPROBE
#undef insl
#undef outsl
#define insl(a,b,l)  io_insl_noswap(a,b,l)
#define outsl(a,b,l) io_outsl_noswap(a,b,l)
struct devlist ;
#if defined(CONFIG_H8S_EDOSK2674)
static struct devlist smc_devlist[] __initdata = ;
static struct devlist smc_devlist[] __initdata = ;
#define MEMORY_WAIT_TIME 16
#define SMC_DEBUG 0
#if (SMC_DEBUG > 2 )
#define PRINTK3(x) printk x
#define PRINTK3(x)
#if SMC_DEBUG > 1
#define PRINTK2(x) printk x
#define PRINTK2(x)
#define PRINTK(x) printk x
#define PRINTK(x)
#define CARDNAME "SMC9194"
struct smc_local ;
struct net_device *smc_init(int unit);
static int smc_open(struct net_device *dev);
static void smc_timeout(struct net_device *dev);
static int smc_close(struct net_device *dev);
static void smc_set_multicast_list(struct net_device *dev);
static irqreturn_t smc_interrupt(int irq, void *);
static inline void smc_rcv( struct net_device *dev );
static inline void smc_tx( struct net_device * dev );
static int smc_probe(struct net_device *dev, int ioaddr);
#if SMC_DEBUG > 2
static void print_packet( byte *, int );
#define tx_done(dev) 1
static void smc_hardware_send_packet( struct net_device * dev );
static netdev_tx_t  smc_wait_to_send_packet( struct sk_buff * skb,
struct net_device *dev );
static void smc_reset( int ioaddr );
static void smc_enable( int ioaddr );
static void smc_shutdown( int ioaddr );
static int smc_findirq( int ioaddr );
static void smc_reset( int ioaddr )
static void smc_enable( int ioaddr )
static void smc_shutdown( int ioaddr )
static void smc_setmulticast(int ioaddr, struct net_device *dev)
static netdev_tx_t smc_wait_to_send_packet(struct sk_buff *skb,
struct net_device *dev)
static void smc_hardware_send_packet( struct net_device * dev )
static int io;
static int irq;
static int ifport;
struct net_device * __init smc_init(int unit)
static int __init smc_findirq(int ioaddr)
static const struct net_device_ops smc_netdev_ops = ;
static int __init smc_probe(struct net_device *dev, int ioaddr)
#if SMC_DEBUG > 2
static void print_packet( byte * buf, int length )
static int smc_open(struct net_device *dev)
static void smc_timeout(struct net_device *dev)
static void smc_rcv(struct net_device *dev)
static void smc_tx( struct net_device * dev )
static irqreturn_t smc_interrupt(int irq, void * dev_id)
static int smc_close(struct net_device *dev)
static void smc_set_multicast_list(struct net_device *dev)
static struct net_device *devSMC9194;
MODULE_LICENSE("GPL");
module_param(io, int, 0);
module_param(irq, int, 0);
module_param(ifport, int, 0);
MODULE_PARM_DESC(io, "SMC 99194 I/O base address");
MODULE_PARM_DESC(irq, "SMC 99194 IRQ number");
MODULE_PARM_DESC(ifport, "SMC 99194 interface port (0-default, 1-TP, 2-AUI)");
int __init init_module(void)
void __exit cleanup_module(void)
