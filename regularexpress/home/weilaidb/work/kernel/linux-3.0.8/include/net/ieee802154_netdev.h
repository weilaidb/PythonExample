#define IEEE802154_NETDEVICE_H
struct ieee802154_mac_cb ;
static inline struct ieee802154_mac_cb *mac_cb(struct sk_buff *skb)
#define MAC_CB_FLAG_TYPEMASK		((1 << 3) - 1)
#define MAC_CB_FLAG_ACKREQ		(1 << 3)
#define MAC_CB_FLAG_SECEN		(1 << 4)
#define MAC_CB_FLAG_INTRAPAN		(1 << 5)
static inline int mac_cb_is_ackreq(struct sk_buff *skb)
static inline int mac_cb_is_secen(struct sk_buff *skb)
static inline int mac_cb_is_intrapan(struct sk_buff *skb)
static inline int mac_cb_type(struct sk_buff *skb)
#define IEEE802154_MAC_SCAN_ED		0
#define IEEE802154_MAC_SCAN_ACTIVE	1
#define IEEE802154_MAC_SCAN_PASSIVE	2
#define IEEE802154_MAC_SCAN_ORPHAN	3
struct wpan_phy;
struct ieee802154_mlme_ops ;
static inline struct ieee802154_mlme_ops *ieee802154_mlme_ops(
const struct net_device *dev)
