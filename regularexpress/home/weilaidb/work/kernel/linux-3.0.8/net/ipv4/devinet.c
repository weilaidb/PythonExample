static struct ipv4_devconf ipv4_devconf = ;
static struct ipv4_devconf ipv4_devconf_dflt = ;
#define IPV4_DEVCONF_DFLT(net, attr) \
IPV4_DEVCONF((*net->ipv4.devconf_dflt), attr)
static const struct nla_policy ifa_ipv4_policy[IFA_MAX+1] = ;
#define IN4_ADDR_HSIZE	256
static struct hlist_head inet_addr_lst[IN4_ADDR_HSIZE];
static DEFINE_SPINLOCK(inet_addr_hash_lock);
static inline unsigned int inet_addr_hash(struct net *net, __be32 addr)
static void inet_hash_insert(struct net *net, struct in_ifaddr *ifa)
static void inet_hash_remove(struct in_ifaddr *ifa)
struct net_device *__ip_dev_find(struct net *net, __be32 addr, bool devref)
EXPORT_SYMBOL(__ip_dev_find);
static void rtmsg_ifa(int event, struct in_ifaddr *, struct nlmsghdr *, u32);
static BLOCKING_NOTIFIER_HEAD(inetaddr_chain);
static void inet_del_ifa(struct in_device *in_dev, struct in_ifaddr **ifap,
int destroy);
static void devinet_sysctl_register(struct in_device *idev);
static void devinet_sysctl_unregister(struct in_device *idev);
static inline void devinet_sysctl_register(struct in_device *idev)
static inline void devinet_sysctl_unregister(struct in_device *idev)
static struct in_ifaddr *inet_alloc_ifa(void)
static void inet_rcu_free_ifa(struct rcu_head *head)
static inline void inet_free_ifa(struct in_ifaddr *ifa)
void in_dev_finish_destroy(struct in_device *idev)
EXPORT_SYMBOL(in_dev_finish_destroy);
static struct in_device *inetdev_init(struct net_device *dev)
static void in_dev_rcu_put(struct rcu_head *head)
static void inetdev_destroy(struct in_device *in_dev)
int inet_addr_onlink(struct in_device *in_dev, __be32 a, __be32 b)
static void __inet_del_ifa(struct in_device *in_dev, struct in_ifaddr **ifap,
int destroy, struct nlmsghdr *nlh, u32 pid)
static void inet_del_ifa(struct in_device *in_dev, struct in_ifaddr **ifap,
int destroy)
static int __inet_insert_ifa(struct in_ifaddr *ifa, struct nlmsghdr *nlh,
u32 pid)
static int inet_insert_ifa(struct in_ifaddr *ifa)
static int inet_set_ifa(struct net_device *dev, struct in_ifaddr *ifa)
struct in_device *inetdev_by_index(struct net *net, int ifindex)
EXPORT_SYMBOL(inetdev_by_index);
struct in_ifaddr *inet_ifa_byprefix(struct in_device *in_dev, __be32 prefix,
__be32 mask)
static int inet_rtm_deladdr(struct sk_buff *skb, struct nlmsghdr *nlh, void *arg)
static struct in_ifaddr *rtm_to_ifaddr(struct net *net, struct nlmsghdr *nlh)
static int inet_rtm_newaddr(struct sk_buff *skb, struct nlmsghdr *nlh, void *arg)
static inline int inet_abc_len(__be32 addr)
int devinet_ioctl(struct net *net, unsigned int cmd, void __user *arg)
static int inet_gifconf(struct net_device *dev, char __user *buf, int len)
__be32 inet_select_addr(const struct net_device *dev, __be32 dst, int scope)
EXPORT_SYMBOL(inet_select_addr);
static __be32 confirm_addr_indev(struct in_device *in_dev, __be32 dst,
__be32 local, int scope)
__be32 inet_confirm_addr(struct in_device *in_dev,
__be32 dst, __be32 local, int scope)
int register_inetaddr_notifier(struct notifier_block *nb)
EXPORT_SYMBOL(register_inetaddr_notifier);
int unregister_inetaddr_notifier(struct notifier_block *nb)
EXPORT_SYMBOL(unregister_inetaddr_notifier);
static void inetdev_changename(struct net_device *dev, struct in_device *in_dev)
static inline bool inetdev_valid_mtu(unsigned mtu)
static void inetdev_send_gratuitous_arp(struct net_device *dev,
struct in_device *in_dev)
static int inetdev_event(struct notifier_block *this, unsigned long event,
void *ptr)
static struct notifier_block ip_netdev_notifier = ;
static inline size_t inet_nlmsg_size(void)
static int inet_fill_ifaddr(struct sk_buff *skb, struct in_ifaddr *ifa,
u32 pid, u32 seq, int event, unsigned int flags)
static int inet_dump_ifaddr(struct sk_buff *skb, struct netlink_callback *cb)
static void rtmsg_ifa(int event, struct in_ifaddr *ifa, struct nlmsghdr *nlh,
u32 pid)
static size_t inet_get_link_af_size(const struct net_device *dev)
static int inet_fill_link_af(struct sk_buff *skb, const struct net_device *dev)
static const struct nla_policy inet_af_policy[IFLA_INET_MAX+1] = ;
static int inet_validate_link_af(const struct net_device *dev,
const struct nlattr *nla)
static int inet_set_link_af(struct net_device *dev, const struct nlattr *nla)
static void devinet_copy_dflt_conf(struct net *net, int i)
static void inet_forward_change(struct net *net)
static int devinet_conf_proc(ctl_table *ctl, int write,
void __user *buffer,
size_t *lenp, loff_t *ppos)
static int devinet_sysctl_forward(ctl_table *ctl, int write,
void __user *buffer,
size_t *lenp, loff_t *ppos)
static int ipv4_doint_and_flush(ctl_table *ctl, int write,
void __user *buffer,
size_t *lenp, loff_t *ppos)
#define DEVINET_SYSCTL_ENTRY(attr, name, mval, proc) \
#define DEVINET_SYSCTL_RW_ENTRY(attr, name) \
DEVINET_SYSCTL_ENTRY(attr, name, 0644, devinet_conf_proc)
#define DEVINET_SYSCTL_RO_ENTRY(attr, name) \
DEVINET_SYSCTL_ENTRY(attr, name, 0444, devinet_conf_proc)
#define DEVINET_SYSCTL_COMPLEX_ENTRY(attr, name, proc) \
DEVINET_SYSCTL_ENTRY(attr, name, 0644, proc)
#define DEVINET_SYSCTL_FLUSHING_ENTRY(attr, name) \
DEVINET_SYSCTL_COMPLEX_ENTRY(attr, name, ipv4_doint_and_flush)
static struct devinet_sysctl_table  devinet_sysctl = ;
static int __devinet_sysctl_register(struct net *net, char *dev_name,
struct ipv4_devconf *p)
static void __devinet_sysctl_unregister(struct ipv4_devconf *cnf)
static void devinet_sysctl_register(struct in_device *idev)
static void devinet_sysctl_unregister(struct in_device *idev)
static struct ctl_table ctl_forward_entry[] = ;
static __net_initdata struct ctl_path net_ipv4_path[] = ;
static __net_init int devinet_init_net(struct net *net)
static __net_exit void devinet_exit_net(struct net *net)
static __net_initdata struct pernet_operations devinet_ops = ;
static struct rtnl_af_ops inet_af_ops = ;
void __init devinet_init(void)
