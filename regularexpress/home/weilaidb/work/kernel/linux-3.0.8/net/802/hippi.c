static int hippi_header(struct sk_buff *skb, struct net_device *dev,
unsigned short type,
const void *daddr, const void *saddr, unsigned len)
static int hippi_rebuild_header(struct sk_buff *skb)
__be16 hippi_type_trans(struct sk_buff *skb, struct net_device *dev)
EXPORT_SYMBOL(hippi_type_trans);
int hippi_change_mtu(struct net_device *dev, int new_mtu)
EXPORT_SYMBOL(hippi_change_mtu);
int hippi_mac_addr(struct net_device *dev, void *p)
EXPORT_SYMBOL(hippi_mac_addr);
int hippi_neigh_setup_dev(struct net_device *dev, struct neigh_parms *p)
EXPORT_SYMBOL(hippi_neigh_setup_dev);
static const struct header_ops hippi_header_ops = ;
static void hippi_setup(struct net_device *dev)
struct net_device *alloc_hippi_dev(int sizeof_priv)
EXPORT_SYMBOL(alloc_hippi_dev);
