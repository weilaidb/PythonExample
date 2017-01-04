#define LANCE_LOG_TX_BUFFERS 1
#define LANCE_LOG_RX_BUFFERS 3
struct m147lance_private ;
static int m147lance_open(struct net_device *dev);
static int m147lance_close(struct net_device *dev);
static void m147lance_writerap(struct lance_private *lp, unsigned short value);
static void m147lance_writerdp(struct lance_private *lp, unsigned short value);
static unsigned short m147lance_readrdp(struct lance_private *lp);
typedef void (*writerap_t)(void *, unsigned short);
typedef void (*writerdp_t)(void *, unsigned short);
typedef unsigned short (*readrdp_t)(void *);
static const struct net_device_ops lance_netdev_ops = ;
struct net_device * __init mvme147lance_probe(int unit)
static void m147lance_writerap(struct lance_private *lp, unsigned short value)
static void m147lance_writerdp(struct lance_private *lp, unsigned short value)
static unsigned short m147lance_readrdp(struct lance_private *lp)
static int m147lance_open(struct net_device *dev)
static int m147lance_close(struct net_device *dev)
MODULE_LICENSE("GPL");
static struct net_device *dev_mvme147_lance;
int __init init_module(void)
void __exit cleanup_module(void)
