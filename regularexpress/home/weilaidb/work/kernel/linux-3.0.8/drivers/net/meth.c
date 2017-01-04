#define MFE_DEBUG 0
#if MFE_DEBUG>=1
#define DPRINTK(str,args...) printk(KERN_DEBUG "meth: %s: " str, __func__ , ## args)
#define MFE_RX_DEBUG 2
#define DPRINTK(str,args...)
#define MFE_RX_DEBUG 0
static const char *meth_str="SGI O2 Fast Ethernet";
#define TX_TIMEOUT (400*HZ/1000)
static int timeout = TX_TIMEOUT;
module_param(timeout, int, 0);
struct meth_private ;
static void meth_tx_timeout(struct net_device *dev);
static irqreturn_t meth_interrupt(int irq, void *dev_id);
char o2meth_eaddr[8]=;
static inline void load_eaddr(struct net_device *dev)
#define WAIT_FOR_PHY(___rval)					\
while ((___rval = mace->eth.phy_data) & MDIO_BUSY)
static unsigned long mdio_read(struct meth_private *priv, unsigned long phyreg)
static int mdio_probe(struct meth_private *priv)
static void meth_check_link(struct net_device *dev)
static int meth_init_tx_ring(struct meth_private *priv)
static int meth_init_rx_ring(struct meth_private *priv)
static void meth_free_tx_ring(struct meth_private *priv)
static void meth_free_rx_ring(struct meth_private *priv)
int meth_reset(struct net_device *dev)
static int meth_open(struct net_device *dev)
static int meth_release(struct net_device *dev)
static void meth_rx(struct net_device* dev, unsigned long int_status)
static int meth_tx_full(struct net_device *dev)
static void meth_tx_cleanup(struct net_device* dev, unsigned long int_status)
static void meth_error(struct net_device* dev, unsigned status)
static irqreturn_t meth_interrupt(int irq, void *dev_id)
static void meth_tx_short_prepare(struct meth_private *priv,
struct sk_buff *skb)
#define TX_CATBUF1 BIT(25)
static void meth_tx_1page_prepare(struct meth_private *priv,
struct sk_buff *skb)
#define TX_CATBUF2 BIT(26)
static void meth_tx_2page_prepare(struct meth_private *priv,
struct sk_buff *skb)
static void meth_add_to_tx_ring(struct meth_private *priv, struct sk_buff *skb)
static int meth_tx(struct sk_buff *skb, struct net_device *dev)
static void meth_tx_timeout(struct net_device *dev)
static int meth_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static const struct net_device_ops meth_netdev_ops = ;
static int __devinit meth_probe(struct platform_device *pdev)
static int __exit meth_remove(struct platform_device *pdev)
static struct platform_driver meth_driver = ;
static int __init meth_init_module(void)
static void __exit meth_exit_module(void)
module_init(meth_init_module);
module_exit(meth_exit_module);
MODULE_AUTHOR("Ilya Volynets <ilya@theIlya.com>");
MODULE_DESCRIPTION("SGI O2 Builtin Fast Ethernet driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:meth");
