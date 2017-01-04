static unsigned int ieee802154_seq_num;
static DEFINE_SPINLOCK(ieee802154_seq_lock);
struct genl_family nl802154_family = ;
struct sk_buff *ieee802154_nl_create(int flags, u8 req)
int ieee802154_nl_mcast(struct sk_buff *msg, unsigned int group)
struct sk_buff *ieee802154_nl_new_reply(struct genl_info *info,
int flags, u8 req)
int ieee802154_nl_reply(struct sk_buff *msg, struct genl_info *info)
int __init ieee802154_nl_init(void)
void __exit ieee802154_nl_exit(void)
