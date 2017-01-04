static struct genl_multicast_group ieee802154_coord_mcgrp = ;
static struct genl_multicast_group ieee802154_beacon_mcgrp = ;
int ieee802154_nl_assoc_indic(struct net_device *dev,
struct ieee802154_addr *addr, u8 cap)
EXPORT_SYMBOL(ieee802154_nl_assoc_indic);
int ieee802154_nl_assoc_confirm(struct net_device *dev, u16 short_addr,
u8 status)
EXPORT_SYMBOL(ieee802154_nl_assoc_confirm);
int ieee802154_nl_disassoc_indic(struct net_device *dev,
struct ieee802154_addr *addr, u8 reason)
EXPORT_SYMBOL(ieee802154_nl_disassoc_indic);
int ieee802154_nl_disassoc_confirm(struct net_device *dev, u8 status)
EXPORT_SYMBOL(ieee802154_nl_disassoc_confirm);
int ieee802154_nl_beacon_indic(struct net_device *dev,
u16 panid, u16 coord_addr)
EXPORT_SYMBOL(ieee802154_nl_beacon_indic);
int ieee802154_nl_scan_confirm(struct net_device *dev,
u8 status, u8 scan_type, u32 unscanned, u8 page,
u8 *edl)
EXPORT_SYMBOL(ieee802154_nl_scan_confirm);
int ieee802154_nl_start_confirm(struct net_device *dev, u8 status)
EXPORT_SYMBOL(ieee802154_nl_start_confirm);
static int ieee802154_nl_fill_iface(struct sk_buff *msg, u32 pid,
u32 seq, int flags, struct net_device *dev)
static struct net_device *ieee802154_nl_get_dev(struct genl_info *info)
static int ieee802154_associate_req(struct sk_buff *skb,
struct genl_info *info)
static int ieee802154_associate_resp(struct sk_buff *skb,
struct genl_info *info)
static int ieee802154_disassociate_req(struct sk_buff *skb,
struct genl_info *info)
static int ieee802154_start_req(struct sk_buff *skb, struct genl_info *info)
static int ieee802154_scan_req(struct sk_buff *skb, struct genl_info *info)
static int ieee802154_list_iface(struct sk_buff *skb,
struct genl_info *info)
static int ieee802154_dump_iface(struct sk_buff *skb,
struct netlink_callback *cb)
static struct genl_ops ieee802154_coordinator_ops[] = ;
int nl802154_mac_register(void)
