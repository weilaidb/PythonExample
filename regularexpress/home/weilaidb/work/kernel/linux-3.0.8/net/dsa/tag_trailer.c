netdev_tx_t trailer_xmit(struct sk_buff *skb, struct net_device *dev)
static int trailer_rcv(struct sk_buff *skb, struct net_device *dev,
struct packet_type *pt, struct net_device *orig_dev)
static struct packet_type trailer_packet_type __read_mostly = ;
static int __init trailer_init_module(void)
module_init(trailer_init_module);
static void __exit trailer_cleanup_module(void)
module_exit(trailer_cleanup_module);
