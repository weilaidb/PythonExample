int ax25_hard_header(struct sk_buff *skb, struct net_device *dev,
unsigned short type, const void *daddr,
const void *saddr, unsigned len)
int ax25_rebuild_header(struct sk_buff *skb)
int ax25_hard_header(struct sk_buff *skb, struct net_device *dev,
unsigned short type, const void *daddr,
const void *saddr, unsigned len)
int ax25_rebuild_header(struct sk_buff *skb)
const struct header_ops ax25_header_ops = ;
EXPORT_SYMBOL(ax25_hard_header);
EXPORT_SYMBOL(ax25_rebuild_header);
EXPORT_SYMBOL(ax25_header_ops);
