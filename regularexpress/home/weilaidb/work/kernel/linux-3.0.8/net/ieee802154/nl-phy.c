static int ieee802154_nl_fill_phy(struct sk_buff *msg, u32 pid,
u32 seq, int flags, struct wpan_phy *phy)
static int ieee802154_list_phy(struct sk_buff *skb,
struct genl_info *info)
struct dump_phy_data ;
static int ieee802154_dump_phy_iter(struct wpan_phy *phy, void *_data)
static int ieee802154_dump_phy(struct sk_buff *skb,
struct netlink_callback *cb)
static int ieee802154_add_iface(struct sk_buff *skb,
struct genl_info *info)
static int ieee802154_del_iface(struct sk_buff *skb,
struct genl_info *info)
static struct genl_ops ieee802154_phy_ops[] = ;
int nl802154_phy_register(void)
