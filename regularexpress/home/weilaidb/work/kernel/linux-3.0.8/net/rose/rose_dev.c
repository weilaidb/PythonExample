static int rose_header(struct sk_buff *skb, struct net_device *dev,
unsigned short type,
const void *daddr, const void *saddr, unsigned len)
static int rose_rebuild_header(struct sk_buff *skb)
static int rose_set_mac_address(struct net_device *dev, void *addr)
static int rose_open(struct net_device *dev)
static int rose_close(struct net_device *dev)
static netdev_tx_t rose_xmit(struct sk_buff *skb, struct net_device *dev)
static const struct header_ops rose_header_ops = ;
static const struct net_device_ops rose_netdev_ops = ;
void rose_setup(struct net_device *dev)
