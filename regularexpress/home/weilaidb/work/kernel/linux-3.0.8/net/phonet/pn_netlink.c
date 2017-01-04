static int fill_addr(struct sk_buff *skb, struct net_device *dev, u8 addr,
u32 pid, u32 seq, int event);
void phonet_address_notify(int event, struct net_device *dev, u8 addr)
static const struct nla_policy ifa_phonet_policy[IFA_MAX+1] = ;
static int addr_doit(struct sk_buff *skb, struct nlmsghdr *nlh, void *attr)
static int fill_addr(struct sk_buff *skb, struct net_device *dev, u8 addr,
u32 pid, u32 seq, int event)
static int getaddr_dumpit(struct sk_buff *skb, struct netlink_callback *cb)
static int fill_route(struct sk_buff *skb, struct net_device *dev, u8 dst,
u32 pid, u32 seq, int event)
void rtm_phonet_notify(int event, struct net_device *dev, u8 dst)
static const struct nla_policy rtm_phonet_policy[RTA_MAX+1] = ;
static int route_doit(struct sk_buff *skb, struct nlmsghdr *nlh, void *attr)
static int route_dumpit(struct sk_buff *skb, struct netlink_callback *cb)
int __init phonet_netlink_register(void)
