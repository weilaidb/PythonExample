static int fddi_header(struct sk_buff *skb, struct net_device *dev,
unsigned short type,
const void *daddr, const void *saddr, unsigned len)
static int fddi_rebuild_header(struct sk_buff	*skb)
__be16 fddi_type_trans(struct sk_buff *skb, struct net_device *dev)
EXPORT_SYMBOL(fddi_type_trans);
int fddi_change_mtu(struct net_device *dev, int new_mtu)
EXPORT_SYMBOL(fddi_change_mtu);
static const struct header_ops fddi_header_ops = ;
static void fddi_setup(struct net_device *dev)
struct net_device *alloc_fddidev(int sizeof_priv)
EXPORT_SYMBOL(alloc_fddidev);
MODULE_LICENSE("GPL");
