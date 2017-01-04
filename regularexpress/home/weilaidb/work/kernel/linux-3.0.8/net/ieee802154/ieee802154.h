#define IEEE_802154_LOCAL_H
int __init ieee802154_nl_init(void);
void __exit ieee802154_nl_exit(void);
#define IEEE802154_OP(_cmd, _func)			\
#define IEEE802154_DUMP(_cmd, _func, _dump)		\
struct genl_info;
struct sk_buff *ieee802154_nl_create(int flags, u8 req);
int ieee802154_nl_mcast(struct sk_buff *msg, unsigned int group);
struct sk_buff *ieee802154_nl_new_reply(struct genl_info *info,
int flags, u8 req);
int ieee802154_nl_reply(struct sk_buff *msg, struct genl_info *info);
extern struct genl_family nl802154_family;
int nl802154_mac_register(void);
int nl802154_phy_register(void);
