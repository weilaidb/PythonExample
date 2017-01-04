static const char version[] =
"8390p.c:v1.10cvs 9/23/94 Donald Becker (becker@cesdis.gsfc.nasa.gov)\n";
#define ei_inb(_p)	inb(_p)
#define ei_outb(_v, _p)	outb(_v, _p)
#define ei_inb_p(_p)	inb_p(_p)
#define ei_outb_p(_v, _p) outb_p(_v, _p)
int eip_open(struct net_device *dev)
EXPORT_SYMBOL(eip_open);
int eip_close(struct net_device *dev)
EXPORT_SYMBOL(eip_close);
netdev_tx_t eip_start_xmit(struct sk_buff *skb, struct net_device *dev)
EXPORT_SYMBOL(eip_start_xmit);
struct net_device_stats *eip_get_stats(struct net_device *dev)
EXPORT_SYMBOL(eip_get_stats);
void eip_set_multicast_list(struct net_device *dev)
EXPORT_SYMBOL(eip_set_multicast_list);
void eip_tx_timeout(struct net_device *dev)
EXPORT_SYMBOL(eip_tx_timeout);
irqreturn_t eip_interrupt(int irq, void *dev_id)
EXPORT_SYMBOL(eip_interrupt);
void eip_poll(struct net_device *dev)
EXPORT_SYMBOL(eip_poll);
const struct net_device_ops eip_netdev_ops = ;
EXPORT_SYMBOL(eip_netdev_ops);
struct net_device *__alloc_eip_netdev(int size)
EXPORT_SYMBOL(__alloc_eip_netdev);
void NS8390p_init(struct net_device *dev, int startp)
EXPORT_SYMBOL(NS8390p_init);
static int __init NS8390p_init_module(void)
static void __exit NS8390p_cleanup_module(void)
module_init(NS8390p_init_module);
module_exit(NS8390p_cleanup_module);
MODULE_LICENSE("GPL");
