#define AF802154_H
struct sk_buff;
struct net_devce;
extern struct proto ieee802154_raw_prot;
extern struct proto ieee802154_dgram_prot;
void ieee802154_raw_deliver(struct net_device *dev, struct sk_buff *skb);
int ieee802154_dgram_deliver(struct net_device *dev, struct sk_buff *skb);
struct net_device *ieee802154_get_dev(struct net *net,
struct ieee802154_addr *addr);
