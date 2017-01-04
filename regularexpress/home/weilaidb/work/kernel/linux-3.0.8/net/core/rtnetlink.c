struct rtnl_link ;
static DEFINE_MUTEX(rtnl_mutex);
void rtnl_lock(void)
EXPORT_SYMBOL(rtnl_lock);
void __rtnl_unlock(void)
void rtnl_unlock(void)
EXPORT_SYMBOL(rtnl_unlock);
int rtnl_trylock(void)
EXPORT_SYMBOL(rtnl_trylock);
int rtnl_is_locked(void)
EXPORT_SYMBOL(rtnl_is_locked);
int lockdep_rtnl_is_held(void)
EXPORT_SYMBOL(lockdep_rtnl_is_held);
static struct rtnl_link *rtnl_msg_handlers[RTNL_FAMILY_MAX + 1];
static inline int rtm_msgindex(int msgtype)
static rtnl_doit_func rtnl_get_doit(int protocol, int msgindex)
static rtnl_dumpit_func rtnl_get_dumpit(int protocol, int msgindex)
int __rtnl_register(int protocol, int msgtype,
rtnl_doit_func doit, rtnl_dumpit_func dumpit)
EXPORT_SYMBOL_GPL(__rtnl_register);
void rtnl_register(int protocol, int msgtype,
rtnl_doit_func doit, rtnl_dumpit_func dumpit)
EXPORT_SYMBOL_GPL(rtnl_register);
int rtnl_unregister(int protocol, int msgtype)
EXPORT_SYMBOL_GPL(rtnl_unregister);
void rtnl_unregister_all(int protocol)
EXPORT_SYMBOL_GPL(rtnl_unregister_all);
static LIST_HEAD(link_ops);
int __rtnl_link_register(struct rtnl_link_ops *ops)
EXPORT_SYMBOL_GPL(__rtnl_link_register);
int rtnl_link_register(struct rtnl_link_ops *ops)
EXPORT_SYMBOL_GPL(rtnl_link_register);
static void __rtnl_kill_links(struct net *net, struct rtnl_link_ops *ops)
void __rtnl_link_unregister(struct rtnl_link_ops *ops)
EXPORT_SYMBOL_GPL(__rtnl_link_unregister);
void rtnl_link_unregister(struct rtnl_link_ops *ops)
EXPORT_SYMBOL_GPL(rtnl_link_unregister);
static const struct rtnl_link_ops *rtnl_link_ops_get(const char *kind)
static size_t rtnl_link_get_size(const struct net_device *dev)
static LIST_HEAD(rtnl_af_ops);
static const struct rtnl_af_ops *rtnl_af_lookup(const int family)
int __rtnl_af_register(struct rtnl_af_ops *ops)
EXPORT_SYMBOL_GPL(__rtnl_af_register);
int rtnl_af_register(struct rtnl_af_ops *ops)
EXPORT_SYMBOL_GPL(rtnl_af_register);
void __rtnl_af_unregister(struct rtnl_af_ops *ops)
EXPORT_SYMBOL_GPL(__rtnl_af_unregister);
void rtnl_af_unregister(struct rtnl_af_ops *ops)
EXPORT_SYMBOL_GPL(rtnl_af_unregister);
static size_t rtnl_link_get_af_size(const struct net_device *dev)
static int rtnl_link_fill(struct sk_buff *skb, const struct net_device *dev)
static const int rtm_min[RTM_NR_FAMILIES] =
;
static const int rta_max[RTM_NR_FAMILIES] =
;
void __rta_fill(struct sk_buff *skb, int attrtype, int attrlen, const void *data)
EXPORT_SYMBOL(__rta_fill);
int rtnetlink_send(struct sk_buff *skb, struct net *net, u32 pid, unsigned group, int echo)
int rtnl_unicast(struct sk_buff *skb, struct net *net, u32 pid)
EXPORT_SYMBOL(rtnl_unicast);
void rtnl_notify(struct sk_buff *skb, struct net *net, u32 pid, u32 group,
struct nlmsghdr *nlh, gfp_t flags)
EXPORT_SYMBOL(rtnl_notify);
void rtnl_set_sk_err(struct net *net, u32 group, int error)
EXPORT_SYMBOL(rtnl_set_sk_err);
int rtnetlink_put_metrics(struct sk_buff *skb, u32 *metrics)
EXPORT_SYMBOL(rtnetlink_put_metrics);
int rtnl_put_cacheinfo(struct sk_buff *skb, struct dst_entry *dst, u32 id,
u32 ts, u32 tsage, long expires, u32 error)
EXPORT_SYMBOL_GPL(rtnl_put_cacheinfo);
static void set_operstate(struct net_device *dev, unsigned char transition)
static unsigned int rtnl_dev_combine_flags(const struct net_device *dev,
const struct ifinfomsg *ifm)
static void copy_rtnl_link_stats(struct rtnl_link_stats *a,
const struct rtnl_link_stats64 *b)
static void copy_rtnl_link_stats64(void *v, const struct rtnl_link_stats64 *b)
static inline int rtnl_vfinfo_size(const struct net_device *dev)
static size_t rtnl_port_size(const struct net_device *dev)
static noinline size_t if_nlmsg_size(const struct net_device *dev)
static int rtnl_vf_ports_fill(struct sk_buff *skb, struct net_device *dev)
static int rtnl_port_self_fill(struct sk_buff *skb, struct net_device *dev)
static int rtnl_port_fill(struct sk_buff *skb, struct net_device *dev)
static int rtnl_fill_ifinfo(struct sk_buff *skb, struct net_device *dev,
int type, u32 pid, u32 seq, u32 change,
unsigned int flags)
static int rtnl_dump_ifinfo(struct sk_buff *skb, struct netlink_callback *cb)
const struct nla_policy ifla_policy[IFLA_MAX+1] = ;
EXPORT_SYMBOL(ifla_policy);
static const struct nla_policy ifla_info_policy[IFLA_INFO_MAX+1] = ;
static const struct nla_policy ifla_vfinfo_policy[IFLA_VF_INFO_MAX+1] = ;
static const struct nla_policy ifla_vf_policy[IFLA_VF_MAX+1] = ;
static const struct nla_policy ifla_port_policy[IFLA_PORT_MAX+1] = ;
struct net *rtnl_link_get_net(struct net *src_net, struct nlattr *tb[])
EXPORT_SYMBOL(rtnl_link_get_net);
static int validate_linkmsg(struct net_device *dev, struct nlattr *tb[])
static int do_setvfinfo(struct net_device *dev, struct nlattr *attr)
static int do_set_master(struct net_device *dev, int ifindex)
static int do_setlink(struct net_device *dev, struct ifinfomsg *ifm,
struct nlattr **tb, char *ifname, int modified)
static int rtnl_setlink(struct sk_buff *skb, struct nlmsghdr *nlh, void *arg)
static int rtnl_dellink(struct sk_buff *skb, struct nlmsghdr *nlh, void *arg)
int rtnl_configure_link(struct net_device *dev, const struct ifinfomsg *ifm)
EXPORT_SYMBOL(rtnl_configure_link);
struct net_device *rtnl_create_link(struct net *src_net, struct net *net,
char *ifname, const struct rtnl_link_ops *ops, struct nlattr *tb[])
EXPORT_SYMBOL(rtnl_create_link);
static int rtnl_group_changelink(struct net *net, int group,
struct ifinfomsg *ifm,
struct nlattr **tb)
static int rtnl_newlink(struct sk_buff *skb, struct nlmsghdr *nlh, void *arg)
static int rtnl_getlink(struct sk_buff *skb, struct nlmsghdr* nlh, void *arg)
static int rtnl_dump_all(struct sk_buff *skb, struct netlink_callback *cb)
void rtmsg_ifinfo(int type, struct net_device *dev, unsigned change)
static struct rtattr **rta_buf;
static int rtattr_max;
static int rtnetlink_rcv_msg(struct sk_buff *skb, struct nlmsghdr *nlh)
static void rtnetlink_rcv(struct sk_buff *skb)
static int rtnetlink_event(struct notifier_block *this, unsigned long event, void *ptr)
static struct notifier_block rtnetlink_dev_notifier = ;
static int __net_init rtnetlink_net_init(struct net *net)
static void __net_exit rtnetlink_net_exit(struct net *net)
static struct pernet_operations rtnetlink_net_ops = ;
void __init rtnetlink_init(void)
