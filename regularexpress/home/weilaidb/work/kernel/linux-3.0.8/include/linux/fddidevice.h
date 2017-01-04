#define _LINUX_FDDIDEVICE_H
extern __be16	fddi_type_trans(struct sk_buff *skb,
struct net_device *dev);
extern int fddi_change_mtu(struct net_device *dev, int new_mtu);
extern struct net_device *alloc_fddidev(int sizeof_priv);
