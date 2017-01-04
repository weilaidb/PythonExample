static const char version[] =
"8390.c:v1.10cvs 9/23/94 Donald Becker (becker@cesdis.gsfc.nasa.gov)\n";
int ei_open(struct net_device *dev)
EXPORT_SYMBOL(ei_open);
int ei_close(struct net_device *dev)
EXPORT_SYMBOL(ei_close);
netdev_tx_t ei_start_xmit(struct sk_buff *skb, struct net_device *dev)
EXPORT_SYMBOL(ei_start_xmit);
struct net_device_stats *ei_get_stats(struct net_device *dev)
EXPORT_SYMBOL(ei_get_stats);
void ei_set_multicast_list(struct net_device *dev)
EXPORT_SYMBOL(ei_set_multicast_list);
void ei_tx_timeout(struct net_device *dev)
EXPORT_SYMBOL(ei_tx_timeout);
irqreturn_t ei_interrupt(int irq, void *dev_id)
EXPORT_SYMBOL(ei_interrupt);
void ei_poll(struct net_device *dev)
EXPORT_SYMBOL(ei_poll);
const struct net_device_ops ei_netdev_ops = ;
EXPORT_SYMBOL(ei_netdev_ops);
struct net_device *__alloc_ei_netdev(int size)
EXPORT_SYMBOL(__alloc_ei_netdev);
void NS8390_init(struct net_device *dev, int startp)
EXPORT_SYMBOL(NS8390_init);
#if defined(MODULE)
static int __init ns8390_module_init(void)
static void __exit ns8390_module_exit(void)
module_init(ns8390_module_init);
module_exit(ns8390_module_exit);
MODULE_LICENSE("GPL");
