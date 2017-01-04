int nr_rx_ip(struct sk_buff *skb, struct net_device *dev)
static int nr_rebuild_header(struct sk_buff *skb)
static int nr_rebuild_header(struct sk_buff *skb)
static int nr_header(struct sk_buff *skb, struct net_device *dev,
unsigned short type,
const void *daddr, const void *saddr, unsigned len)
static int __must_check nr_set_mac_address(struct net_device *dev, void *addr)
static int nr_open(struct net_device *dev)
static int nr_close(struct net_device *dev)
static netdev_tx_t nr_xmit(struct sk_buff *skb, struct net_device *dev)
static const struct header_ops nr_header_ops = ;
static const struct net_device_ops nr_netdev_ops = ;
void nr_setup(struct net_device *dev)
