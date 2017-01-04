#define LANCE_LOG_TX_BUFFERS	(2)
#define LANCE_LOG_RX_BUFFERS	(4)
#define TX_RING_SIZE		(1<<LANCE_LOG_TX_BUFFERS)
#define RX_RING_SIZE		(1<<LANCE_LOG_RX_BUFFERS)
#define TX_RING_MOD_MASK	(TX_RING_SIZE-1)
#define RX_RING_MOD_MASK	(RX_RING_SIZE-1)
#define PKT_BUF_SIZE		(1544)
#define RX_BUFF_SIZE            PKT_BUF_SIZE
#define TX_BUFF_SIZE            PKT_BUF_SIZE
struct lance_init_block ;
struct lance_private ;
#define TX_BUFFS_AVAIL ((lp->tx_old<=lp->tx_new)?\
lp->tx_old+lp->tx_ring_mod_mask-lp->tx_new:\
lp->tx_old - lp->tx_new-1)
#define LANCE_ADDR(x) ((int)(x) & ~0xff000000)
static void load_csrs (struct lance_private *lp)
#define ZERO 0
static void lance_init_ring (struct net_device *dev)
static int init_restart_lance (struct lance_private *lp)
static int lance_rx (struct net_device *dev)
static int lance_tx (struct net_device *dev)
static irqreturn_t lance_interrupt (int irq, void *dev_id)
static int lance_open (struct net_device *dev)
static int lance_close (struct net_device *dev)
static inline int lance_reset (struct net_device *dev)
static void lance_tx_timeout(struct net_device *dev)
static netdev_tx_t lance_start_xmit (struct sk_buff *skb,
struct net_device *dev)
static void lance_load_multicast (struct net_device *dev)
static void lance_set_multicast (struct net_device *dev)
static int __devinit a2065_init_one(struct zorro_dev *z,
const struct zorro_device_id *ent);
static void __devexit a2065_remove_one(struct zorro_dev *z);
static struct zorro_device_id a2065_zorro_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(zorro, a2065_zorro_tbl);
static struct zorro_driver a2065_driver = ;
static const struct net_device_ops lance_netdev_ops = ;
static int __devinit a2065_init_one(struct zorro_dev *z,
const struct zorro_device_id *ent)
static void __devexit a2065_remove_one(struct zorro_dev *z)
static int __init a2065_init_module(void)
static void __exit a2065_cleanup_module(void)
module_init(a2065_init_module);
module_exit(a2065_cleanup_module);
MODULE_LICENSE("GPL");
