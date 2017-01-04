#define DRV_NAME	"3c501"
#define DRV_VERSION	"2002/10/09"
static const char version[] =
DRV_NAME ".c: " DRV_VERSION " Alan Cox (alan@lxorguk.ukuu.org.uk).\n";
static int io = 0x280;
static int irq = 5;
static int mem_start;
struct net_device * __init el1_probe(int unit)
static const struct net_device_ops el_netdev_ops = ;
static int __init el1_probe1(struct net_device *dev, int ioaddr)
static int el_open(struct net_device *dev)
static void el_timeout(struct net_device *dev)
static netdev_tx_t el_start_xmit(struct sk_buff *skb, struct net_device *dev)
static irqreturn_t el_interrupt(int irq, void *dev_id)
static void el_receive(struct net_device *dev)
static void  el_reset(struct net_device *dev)
static int el1_close(struct net_device *dev)
static void set_multicast_list(struct net_device *dev)
static void netdev_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static u32 netdev_get_msglevel(struct net_device *dev)
static void netdev_set_msglevel(struct net_device *dev, u32 level)
static const struct ethtool_ops netdev_ethtool_ops = ;
static struct net_device *dev_3c501;
module_param(io, int, 0);
module_param(irq, int, 0);
MODULE_PARM_DESC(io, "EtherLink I/O base address");
MODULE_PARM_DESC(irq, "EtherLink IRQ number");
int __init init_module(void)
void __exit cleanup_module(void)
MODULE_AUTHOR("Donald Becker, Alan Cox");
MODULE_DESCRIPTION("Support for the ancient 3Com 3c501 ethernet card");
MODULE_LICENSE("GPL");
