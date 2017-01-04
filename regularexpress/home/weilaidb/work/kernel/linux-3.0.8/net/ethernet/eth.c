__setup("ether=", netdev_boot_setup);
int eth_header(struct sk_buff *skb, struct net_device *dev,
unsigned short type,
const void *daddr, const void *saddr, unsigned len)
EXPORT_SYMBOL(eth_header);
int eth_rebuild_header(struct sk_buff *skb)
EXPORT_SYMBOL(eth_rebuild_header);
__be16 eth_type_trans(struct sk_buff *skb, struct net_device *dev)
EXPORT_SYMBOL(eth_type_trans);
int eth_header_parse(const struct sk_buff *skb, unsigned char *haddr)
EXPORT_SYMBOL(eth_header_parse);
int eth_header_cache(const struct neighbour *neigh, struct hh_cache *hh)
EXPORT_SYMBOL(eth_header_cache);
void eth_header_cache_update(struct hh_cache *hh,
const struct net_device *dev,
const unsigned char *haddr)
EXPORT_SYMBOL(eth_header_cache_update);
int eth_mac_addr(struct net_device *dev, void *p)
EXPORT_SYMBOL(eth_mac_addr);
int eth_change_mtu(struct net_device *dev, int new_mtu)
EXPORT_SYMBOL(eth_change_mtu);
int eth_validate_addr(struct net_device *dev)
EXPORT_SYMBOL(eth_validate_addr);
const struct header_ops eth_header_ops ____cacheline_aligned = ;
void ether_setup(struct net_device *dev)
EXPORT_SYMBOL(ether_setup);
struct net_device *alloc_etherdev_mqs(int sizeof_priv, unsigned int txqs,
unsigned int rxqs)
EXPORT_SYMBOL(alloc_etherdev_mqs);
static size_t _format_mac_addr(char *buf, int buflen,
const unsigned char *addr, int len)
ssize_t sysfs_format_mac(char *buf, const unsigned char *addr, int len)
EXPORT_SYMBOL(sysfs_format_mac);
