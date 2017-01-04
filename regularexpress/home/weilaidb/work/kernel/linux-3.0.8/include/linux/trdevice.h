#define _LINUX_TRDEVICE_H
extern __be16 tr_type_trans(struct sk_buff *skb, struct net_device *dev);
extern void tr_source_route(struct sk_buff *skb, struct trh_hdr *trh, struct net_device *dev);
extern struct net_device *alloc_trdev(int sizeof_priv);
