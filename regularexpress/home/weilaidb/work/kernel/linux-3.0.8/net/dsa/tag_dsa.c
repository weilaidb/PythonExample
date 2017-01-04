#define DSA_HLEN	4
netdev_tx_t dsa_xmit(struct sk_buff *skb, struct net_device *dev)
static int dsa_rcv(struct sk_buff *skb, struct net_device *dev,
struct packet_type *pt, struct net_device *orig_dev)
static struct packet_type dsa_packet_type __read_mostly = ;
static int __init dsa_init_module(void)
module_init(dsa_init_module);
static void __exit dsa_cleanup_module(void)
module_exit(dsa_cleanup_module);
