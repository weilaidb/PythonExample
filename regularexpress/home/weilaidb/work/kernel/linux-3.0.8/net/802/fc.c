static int fc_header(struct sk_buff *skb, struct net_device *dev,
unsigned short type,
const void *daddr, const void *saddr, unsigned len)
static int fc_rebuild_header(struct sk_buff *skb)
static const struct header_ops fc_header_ops = ;
static void fc_setup(struct net_device *dev)
struct net_device *alloc_fcdev(int sizeof_priv)
EXPORT_SYMBOL(alloc_fcdev);
