static const char *version =
"cops.c:v0.04 6/7/98 Jay Schulist <jschlst@samba.org>\n";
static const char *cardname = "cops";
static int board_type = DAYNA;
static int board_type = TANGENT;
static int io = 0x240;
static int irq = 5;
static unsigned int ports[] = ;
static int cops_irqlist[] = ;
static struct timer_list cops_timer;
#define COPS_DEBUG 1
static unsigned int cops_debug = COPS_DEBUG;
#define COPS_IO_EXTENT       8
struct cops_local
;
static int  cops_probe1 (struct net_device *dev, int ioaddr);
static int  cops_irq (int ioaddr, int board);
static int  cops_open (struct net_device *dev);
static int  cops_jumpstart (struct net_device *dev);
static void cops_reset (struct net_device *dev, int sleep);
static void cops_load (struct net_device *dev);
static int  cops_nodeid (struct net_device *dev, int nodeid);
static irqreturn_t cops_interrupt (int irq, void *dev_id);
static void cops_poll (unsigned long ltdev);
static void cops_timeout(struct net_device *dev);
static void cops_rx (struct net_device *dev);
static netdev_tx_t  cops_send_packet (struct sk_buff *skb,
struct net_device *dev);
static void set_multicast_list (struct net_device *dev);
static int  cops_ioctl (struct net_device *dev, struct ifreq *rq, int cmd);
static int  cops_close (struct net_device *dev);
static void cleanup_card(struct net_device *dev)
struct net_device * __init cops_probe(int unit)
static const struct net_device_ops cops_netdev_ops = ;
static int __init cops_probe1(struct net_device *dev, int ioaddr)
static int __init cops_irq (int ioaddr, int board)
static int cops_open(struct net_device *dev)
static int cops_jumpstart(struct net_device *dev)
static void tangent_wait_reset(int ioaddr)
static void cops_reset(struct net_device *dev, int sleep)
static void cops_load (struct net_device *dev)
static int cops_nodeid (struct net_device *dev, int nodeid)
static void cops_poll(unsigned long ltdev)
static irqreturn_t cops_interrupt(int irq, void *dev_id)
static void cops_rx(struct net_device *dev)
static void cops_timeout(struct net_device *dev)
static netdev_tx_t cops_send_packet(struct sk_buff *skb,
struct net_device *dev)
static void set_multicast_list(struct net_device *dev)
static int cops_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static int cops_close(struct net_device *dev)
static struct net_device *cops_dev;
MODULE_LICENSE("GPL");
module_param(io, int, 0);
module_param(irq, int, 0);
module_param(board_type, int, 0);
static int __init cops_module_init(void)
static void __exit cops_module_exit(void)
module_init(cops_module_init);
module_exit(cops_module_exit);
