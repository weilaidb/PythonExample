static int __net_init fib4_rules_init(struct net *net)
struct fib_table *fib_new_table(struct net *net, u32 id)
struct fib_table *fib_get_table(struct net *net, u32 id)
static void fib_flush(struct net *net)
static inline unsigned __inet_dev_addr_type(struct net *net,
const struct net_device *dev,
__be32 addr)
unsigned int inet_addr_type(struct net *net, __be32 addr)
EXPORT_SYMBOL(inet_addr_type);
unsigned int inet_dev_addr_type(struct net *net, const struct net_device *dev,
__be32 addr)
EXPORT_SYMBOL(inet_dev_addr_type);
int fib_validate_source(struct sk_buff *skb, __be32 src, __be32 dst, u8 tos,
int oif, struct net_device *dev, __be32 *spec_dst,
u32 *itag)
static inline __be32 sk_extract_addr(struct sockaddr *addr)
static int put_rtax(struct nlattr *mx, int len, int type, u32 value)
static int rtentry_to_fib_config(struct net *net, int cmd, struct rtentry *rt,
struct fib_config *cfg)
int ip_rt_ioctl(struct net *net, unsigned int cmd, void __user *arg)
const struct nla_policy rtm_ipv4_policy[RTA_MAX + 1] = ;
static int rtm_to_fib_config(struct net *net, struct sk_buff *skb,
struct nlmsghdr *nlh, struct fib_config *cfg)
static int inet_rtm_delroute(struct sk_buff *skb, struct nlmsghdr *nlh, void *arg)
static int inet_rtm_newroute(struct sk_buff *skb, struct nlmsghdr *nlh, void *arg)
static int inet_dump_fib(struct sk_buff *skb, struct netlink_callback *cb)
static void fib_magic(int cmd, int type, __be32 dst, int dst_len, struct in_ifaddr *ifa)
void fib_add_ifaddr(struct in_ifaddr *ifa)
void fib_del_ifaddr(struct in_ifaddr *ifa, struct in_ifaddr *iprim)
static void nl_fib_lookup(struct fib_result_nl *frn, struct fib_table *tb)
static void nl_fib_input(struct sk_buff *skb)
static int __net_init nl_fib_lookup_init(struct net *net)
static void nl_fib_lookup_exit(struct net *net)
static void fib_disable_ip(struct net_device *dev, int force, int delay)
static int fib_inetaddr_event(struct notifier_block *this, unsigned long event, void *ptr)
static int fib_netdev_event(struct notifier_block *this, unsigned long event, void *ptr)
static struct notifier_block fib_inetaddr_notifier = ;
static struct notifier_block fib_netdev_notifier = ;
static int __net_init ip_fib_net_init(struct net *net)
static void ip_fib_net_exit(struct net *net)
static int __net_init fib_net_init(struct net *net)
static void __net_exit fib_net_exit(struct net *net)
static struct pernet_operations fib_net_ops = ;
void __init ip_fib_init(void)
