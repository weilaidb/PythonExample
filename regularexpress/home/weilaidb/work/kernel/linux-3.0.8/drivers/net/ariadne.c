int ariadne_debug = ARIADNE_DEBUG;
int ariadne_debug = 1;
#define swapw(x)	(((x>>8)&0x00ff)|((x<<8)&0xff00))
#define lowb(x)		(x&0xff)
#define swhighw(x)	((((x)>>8)&0xff00)|(((x)>>24)&0x00ff))
#define swloww(x)	((((x)<<8)&0xff00)|(((x)>>8)&0x00ff))
#define TX_RING_SIZE	5
#define RX_RING_SIZE	16
#define PKT_BUF_SIZE	1520
struct ariadne_private ;
struct lancedata ;
static int ariadne_open(struct net_device *dev);
static void ariadne_init_ring(struct net_device *dev);
static netdev_tx_t ariadne_start_xmit(struct sk_buff *skb,
struct net_device *dev);
static void ariadne_tx_timeout(struct net_device *dev);
static int ariadne_rx(struct net_device *dev);
static void ariadne_reset(struct net_device *dev);
static irqreturn_t ariadne_interrupt(int irq, void *data);
static int ariadne_close(struct net_device *dev);
static struct net_device_stats *ariadne_get_stats(struct net_device *dev);
static void set_multicast_list(struct net_device *dev);
static void memcpyw(volatile u_short *dest, u_short *src, int len)
static int __devinit ariadne_init_one(struct zorro_dev *z,
const struct zorro_device_id *ent);
static void __devexit ariadne_remove_one(struct zorro_dev *z);
static struct zorro_device_id ariadne_zorro_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(zorro, ariadne_zorro_tbl);
static struct zorro_driver ariadne_driver = ;
static const struct net_device_ops ariadne_netdev_ops = ;
static int __devinit ariadne_init_one(struct zorro_dev *z,
const struct zorro_device_id *ent)
static int ariadne_open(struct net_device *dev)
static void ariadne_init_ring(struct net_device *dev)
static int ariadne_close(struct net_device *dev)
static inline void ariadne_reset(struct net_device *dev)
static irqreturn_t ariadne_interrupt(int irq, void *data)
static void ariadne_tx_timeout(struct net_device *dev)
static netdev_tx_t ariadne_start_xmit(struct sk_buff *skb,
struct net_device *dev)
static int ariadne_rx(struct net_device *dev)
static struct net_device_stats *ariadne_get_stats(struct net_device *dev)
static void set_multicast_list(struct net_device *dev)
static void __devexit ariadne_remove_one(struct zorro_dev *z)
static int __init ariadne_init_module(void)
static void __exit ariadne_cleanup_module(void)
module_init(ariadne_init_module);
module_exit(ariadne_cleanup_module);
MODULE_LICENSE("GPL");
