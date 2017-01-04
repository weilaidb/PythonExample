static inline size_t br_nlmsg_size(void)
static int br_fill_ifinfo(struct sk_buff *skb, const struct net_bridge_port *port,
u32 pid, u32 seq, int event, unsigned int flags)
void br_ifinfo_notify(int event, struct net_bridge_port *port)
static int br_dump_ifinfo(struct sk_buff *skb, struct netlink_callback *cb)
static int br_rtm_setlink(struct sk_buff *skb,  struct nlmsghdr *nlh, void *arg)
static int br_validate(struct nlattr *tb[], struct nlattr *data[])
static struct rtnl_link_ops br_link_ops __read_mostly = ;
int __init br_netlink_init(void)
void __exit br_netlink_fini(void)
