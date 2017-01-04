#define DSA_HLEN	4
#define EDSA_HLEN	8
netdev_tx_t edsa_xmit(struct sk_buff *skb, struct net_device *dev)
static int edsa_rcv(struct sk_buff *skb, struct net_device *dev,
struct packet_type *pt, struct net_device *orig_dev)
static struct packet_type edsa_packet_type __read_mostly = ;
static int __init edsa_init_module(void)
module_init(edsa_init_module);
static void __exit edsa_cleanup_module(void)
module_exit(edsa_cleanup_module);
