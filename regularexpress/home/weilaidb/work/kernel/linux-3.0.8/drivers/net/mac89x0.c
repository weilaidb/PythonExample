static char *version =
"cs89x0.c:v1.02 11/26/96 Russell Nelson <nelson@crynwr.com>\n";
#define NET_DEBUG 0
static unsigned int net_debug = NET_DEBUG;
struct net_local ;
static int net_open(struct net_device *dev);
static int net_send_packet(struct sk_buff *skb, struct net_device *dev);
static irqreturn_t net_interrupt(int irq, void *dev_id);
static void set_multicast_list(struct net_device *dev);
static void net_rx(struct net_device *dev);
static int net_close(struct net_device *dev);
static struct net_device_stats *net_get_stats(struct net_device *dev);
static int set_mac_address(struct net_device *dev, void *addr);
#define tx_done(dev) 1
static inline int
readreg_io(struct net_device *dev, int portno)
static inline void
writereg_io(struct net_device *dev, int portno, int value)
static inline int
readreg(struct net_device *dev, int portno)
static inline void
writereg(struct net_device *dev, int portno, int value)
static const struct net_device_ops mac89x0_netdev_ops = ;
struct net_device * __init mac89x0_probe(int unit)
static int
net_open(struct net_device *dev)
static int
net_send_packet(struct sk_buff *skb, struct net_device *dev)
static irqreturn_t net_interrupt(int irq, void *dev_id)
static void
net_rx(struct net_device *dev)
static int
net_close(struct net_device *dev)
static struct net_device_stats *
net_get_stats(struct net_device *dev)
static void set_multicast_list(struct net_device *dev)
static int set_mac_address(struct net_device *dev, void *addr)
static struct net_device *dev_cs89x0;
static int debug;
module_param(debug, int, 0);
MODULE_PARM_DESC(debug, "CS89[02]0 debug level (0-5)");
MODULE_LICENSE("GPL");
int __init
init_module(void)
void
cleanup_module(void)
