#define _LINUX_HIPPIDEVICE_H
struct hippi_cb ;
extern __be16 hippi_type_trans(struct sk_buff *skb, struct net_device *dev);
extern int hippi_change_mtu(struct net_device *dev, int new_mtu);
extern int hippi_mac_addr(struct net_device *dev, void *p);
extern int hippi_neigh_setup_dev(struct net_device *dev, struct neigh_parms *p);
extern struct net_device *alloc_hippi_dev(int sizeof_priv);
