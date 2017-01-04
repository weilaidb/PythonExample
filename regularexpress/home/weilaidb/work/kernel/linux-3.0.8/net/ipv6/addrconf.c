#define ACONF_DEBUG 2
#if ACONF_DEBUG >= 3
#define ADBG(x) printk x
#define ADBG(x)
#define	INFINITY_LIFE_TIME	0xFFFFFFFF
static inline u32 cstamp_delta(unsigned long cstamp)
#define ADDRCONF_TIMER_FUZZ_MINUS	(HZ > 50 ? HZ/50 : 1)
#define ADDRCONF_TIMER_FUZZ		(HZ / 4)
#define ADDRCONF_TIMER_FUZZ_MAX		(HZ)
static void addrconf_sysctl_register(struct inet6_dev *idev);
static void addrconf_sysctl_unregister(struct inet6_dev *idev);
static inline void addrconf_sysctl_register(struct inet6_dev *idev)
static inline void addrconf_sysctl_unregister(struct inet6_dev *idev)
static int __ipv6_regen_rndid(struct inet6_dev *idev);
static int __ipv6_try_regen_rndid(struct inet6_dev *idev, struct in6_addr *tmpaddr);
static void ipv6_regen_rndid(unsigned long data);
static int ipv6_generate_eui64(u8 *eui, struct net_device *dev);
static int ipv6_count_addresses(struct inet6_dev *idev);
static struct hlist_head inet6_addr_lst[IN6_ADDR_HSIZE];
static DEFINE_SPINLOCK(addrconf_hash_lock);
static void addrconf_verify(unsigned long);
static DEFINE_TIMER(addr_chk_timer, addrconf_verify, 0, 0);
static DEFINE_SPINLOCK(addrconf_verify_lock);
static void addrconf_join_anycast(struct inet6_ifaddr *ifp);
static void addrconf_leave_anycast(struct inet6_ifaddr *ifp);
static void addrconf_type_change(struct net_device *dev,
unsigned long event);
static int addrconf_ifdown(struct net_device *dev, int how);
static void addrconf_dad_start(struct inet6_ifaddr *ifp, u32 flags);
static void addrconf_dad_timer(unsigned long data);
static void addrconf_dad_completed(struct inet6_ifaddr *ifp);
static void addrconf_dad_run(struct inet6_dev *idev);
static void addrconf_rs_timer(unsigned long data);
static void __ipv6_ifa_notify(int event, struct inet6_ifaddr *ifa);
static void ipv6_ifa_notify(int event, struct inet6_ifaddr *ifa);
static void inet6_prefix_notify(int event, struct inet6_dev *idev,
struct prefix_info *pinfo);
static bool ipv6_chk_same_addr(struct net *net, const struct in6_addr *addr,
struct net_device *dev);
static ATOMIC_NOTIFIER_HEAD(inet6addr_chain);
static struct ipv6_devconf ipv6_devconf __read_mostly = ;
static struct ipv6_devconf ipv6_devconf_dflt __read_mostly = ;
const struct in6_addr in6addr_any = IN6ADDR_ANY_INIT;
const struct in6_addr in6addr_loopback = IN6ADDR_LOOPBACK_INIT;
const struct in6_addr in6addr_linklocal_allnodes = IN6ADDR_LINKLOCAL_ALLNODES_INIT;
const struct in6_addr in6addr_linklocal_allrouters = IN6ADDR_LINKLOCAL_ALLROUTERS_INIT;
static inline bool addrconf_qdisc_ok(const struct net_device *dev)
static inline int addrconf_is_prefix_route(const struct rt6_info *rt)
static void addrconf_del_timer(struct inet6_ifaddr *ifp)
enum addrconf_timer_t ;
static void addrconf_mod_timer(struct inet6_ifaddr *ifp,
enum addrconf_timer_t what,
unsigned long when)
static int snmp6_alloc_dev(struct inet6_dev *idev)
static void snmp6_free_dev(struct inet6_dev *idev)
void in6_dev_finish_destroy(struct inet6_dev *idev)
EXPORT_SYMBOL(in6_dev_finish_destroy);
static struct inet6_dev * ipv6_add_dev(struct net_device *dev)
static struct inet6_dev * ipv6_find_idev(struct net_device *dev)
static void dev_forward_change(struct inet6_dev *idev)
static void addrconf_forward_change(struct net *net, __s32 newf)
static int addrconf_fixup_forwarding(struct ctl_table *table, int *p, int old)
void inet6_ifa_finish_destroy(struct inet6_ifaddr *ifp)
static void
ipv6_link_dev_addr(struct inet6_dev *idev, struct inet6_ifaddr *ifp)
static u32 ipv6_addr_hash(const struct in6_addr *addr)
static struct inet6_ifaddr *
ipv6_add_addr(struct inet6_dev *idev, const struct in6_addr *addr, int pfxlen,
int scope, u32 flags)
static void ipv6_del_addr(struct inet6_ifaddr *ifp)
static int ipv6_create_tempaddr(struct inet6_ifaddr *ifp, struct inet6_ifaddr *ift)
enum ;
struct ipv6_saddr_score ;
struct ipv6_saddr_dst ;
static inline int ipv6_saddr_preferred(int type)
static int ipv6_get_saddr_eval(struct net *net,
struct ipv6_saddr_score *score,
struct ipv6_saddr_dst *dst,
int i)
int ipv6_dev_get_saddr(struct net *net, struct net_device *dst_dev,
const struct in6_addr *daddr, unsigned int prefs,
struct in6_addr *saddr)
EXPORT_SYMBOL(ipv6_dev_get_saddr);
int ipv6_get_lladdr(struct net_device *dev, struct in6_addr *addr,
unsigned char banned_flags)
static int ipv6_count_addresses(struct inet6_dev *idev)
int ipv6_chk_addr(struct net *net, const struct in6_addr *addr,
struct net_device *dev, int strict)
EXPORT_SYMBOL(ipv6_chk_addr);
static bool ipv6_chk_same_addr(struct net *net, const struct in6_addr *addr,
struct net_device *dev)
int ipv6_chk_prefix(const struct in6_addr *addr, struct net_device *dev)
EXPORT_SYMBOL(ipv6_chk_prefix);
struct inet6_ifaddr *ipv6_get_ifaddr(struct net *net, const struct in6_addr *addr,
struct net_device *dev, int strict)
static void addrconf_dad_stop(struct inet6_ifaddr *ifp, int dad_failed)
static int addrconf_dad_end(struct inet6_ifaddr *ifp)
void addrconf_dad_failure(struct inet6_ifaddr *ifp)
void addrconf_join_solict(struct net_device *dev, const struct in6_addr *addr)
void addrconf_leave_solict(struct inet6_dev *idev, const struct in6_addr *addr)
static void addrconf_join_anycast(struct inet6_ifaddr *ifp)
static void addrconf_leave_anycast(struct inet6_ifaddr *ifp)
static int addrconf_ifid_eui48(u8 *eui, struct net_device *dev)
static int addrconf_ifid_arcnet(u8 *eui, struct net_device *dev)
static int addrconf_ifid_infiniband(u8 *eui, struct net_device *dev)
static int __ipv6_isatap_ifid(u8 *eui, __be32 addr)
static int addrconf_ifid_sit(u8 *eui, struct net_device *dev)
static int ipv6_generate_eui64(u8 *eui, struct net_device *dev)
static int ipv6_inherit_eui64(u8 *eui, struct inet6_dev *idev)
static int __ipv6_regen_rndid(struct inet6_dev *idev)
static void ipv6_regen_rndid(unsigned long data)
static int __ipv6_try_regen_rndid(struct inet6_dev *idev, struct in6_addr *tmpaddr)
static void
addrconf_prefix_route(struct in6_addr *pfx, int plen, struct net_device *dev,
unsigned long expires, u32 flags)
static void addrconf_add_mroute(struct net_device *dev)
#if defined(CONFIG_IPV6_SIT) || defined(CONFIG_IPV6_SIT_MODULE)
static void sit_route_add(struct net_device *dev)
static void addrconf_add_lroute(struct net_device *dev)
static struct inet6_dev *addrconf_add_dev(struct net_device *dev)
void addrconf_prefix_rcv(struct net_device *dev, u8 *opt, int len)
int addrconf_set_dstaddr(struct net *net, void __user *arg)
static int inet6_addr_add(struct net *net, int ifindex, const struct in6_addr *pfx,
unsigned int plen, __u8 ifa_flags, __u32 prefered_lft,
__u32 valid_lft)
static int inet6_addr_del(struct net *net, int ifindex, const struct in6_addr *pfx,
unsigned int plen)
int addrconf_add_ifaddr(struct net *net, void __user *arg)
int addrconf_del_ifaddr(struct net *net, void __user *arg)
static void add_addr(struct inet6_dev *idev, const struct in6_addr *addr,
int plen, int scope)
#if defined(CONFIG_IPV6_SIT) || defined(CONFIG_IPV6_SIT_MODULE)
static void sit_add_v4_addrs(struct inet6_dev *idev)
static void init_loopback(struct net_device *dev)
static void addrconf_add_linklocal(struct inet6_dev *idev, const struct in6_addr *addr)
static void addrconf_dev_config(struct net_device *dev)
#if defined(CONFIG_IPV6_SIT) || defined(CONFIG_IPV6_SIT_MODULE)
static void addrconf_sit_config(struct net_device *dev)
static inline int
ipv6_inherit_linklocal(struct inet6_dev *idev, struct net_device *link_dev)
static void ip6_tnl_add_linklocal(struct inet6_dev *idev)
static void addrconf_ip6_tnl_config(struct net_device *dev)
static int addrconf_notify(struct notifier_block *this, unsigned long event,
void * data)
static struct notifier_block ipv6_dev_notf = ;
static void addrconf_type_change(struct net_device *dev, unsigned long event)
static int addrconf_ifdown(struct net_device *dev, int how)
static void addrconf_rs_timer(unsigned long data)
static void addrconf_dad_kick(struct inet6_ifaddr *ifp)
static void addrconf_dad_start(struct inet6_ifaddr *ifp, u32 flags)
static void addrconf_dad_timer(unsigned long data)
static void addrconf_dad_completed(struct inet6_ifaddr *ifp)
static void addrconf_dad_run(struct inet6_dev *idev)
struct if6_iter_state ;
static struct inet6_ifaddr *if6_get_first(struct seq_file *seq)
static struct inet6_ifaddr *if6_get_next(struct seq_file *seq,
struct inet6_ifaddr *ifa)
static struct inet6_ifaddr *if6_get_idx(struct seq_file *seq, loff_t pos)
static void *if6_seq_start(struct seq_file *seq, loff_t *pos)
__acquires(rcu_bh)
static void *if6_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void if6_seq_stop(struct seq_file *seq, void *v)
__releases(rcu_bh)
static int if6_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations if6_seq_ops = ;
static int if6_seq_open(struct inode *inode, struct file *file)
static const struct file_operations if6_fops = ;
static int __net_init if6_proc_net_init(struct net *net)
static void __net_exit if6_proc_net_exit(struct net *net)
static struct pernet_operations if6_proc_net_ops = ;
int __init if6_proc_init(void)
void if6_proc_exit(void)
#if defined(CONFIG_IPV6_MIP6) || defined(CONFIG_IPV6_MIP6_MODULE)
int ipv6_chk_home_addr(struct net *net, const struct in6_addr *addr)
static void addrconf_verify(unsigned long foo)
static struct in6_addr *extract_addr(struct nlattr *addr, struct nlattr *local)
static const struct nla_policy ifa_ipv6_policy[IFA_MAX+1] = ;
static int
inet6_rtm_deladdr(struct sk_buff *skb, struct nlmsghdr *nlh, void *arg)
static int inet6_addr_modify(struct inet6_ifaddr *ifp, u8 ifa_flags,
u32 prefered_lft, u32 valid_lft)
static int
inet6_rtm_newaddr(struct sk_buff *skb, struct nlmsghdr *nlh, void *arg)
static void put_ifaddrmsg(struct nlmsghdr *nlh, u8 prefixlen, u8 flags,
u8 scope, int ifindex)
static int put_cacheinfo(struct sk_buff *skb, unsigned long cstamp,
unsigned long tstamp, u32 preferred, u32 valid)
static inline int rt_scope(int ifa_scope)
static inline int inet6_ifaddr_msgsize(void)
static int inet6_fill_ifaddr(struct sk_buff *skb, struct inet6_ifaddr *ifa,
u32 pid, u32 seq, int event, unsigned int flags)
static int inet6_fill_ifmcaddr(struct sk_buff *skb, struct ifmcaddr6 *ifmca,
u32 pid, u32 seq, int event, u16 flags)
static int inet6_fill_ifacaddr(struct sk_buff *skb, struct ifacaddr6 *ifaca,
u32 pid, u32 seq, int event, unsigned int flags)
enum addr_type_t ;
static int in6_dump_addrs(struct inet6_dev *idev, struct sk_buff *skb,
struct netlink_callback *cb, enum addr_type_t type,
int s_ip_idx, int *p_ip_idx)
static int inet6_dump_addr(struct sk_buff *skb, struct netlink_callback *cb,
enum addr_type_t type)
static int inet6_dump_ifaddr(struct sk_buff *skb, struct netlink_callback *cb)
static int inet6_dump_ifmcaddr(struct sk_buff *skb, struct netlink_callback *cb)
static int inet6_dump_ifacaddr(struct sk_buff *skb, struct netlink_callback *cb)
static int inet6_rtm_getaddr(struct sk_buff *in_skb, struct nlmsghdr* nlh,
void *arg)
static void inet6_ifa_notify(int event, struct inet6_ifaddr *ifa)
static inline void ipv6_store_devconf(struct ipv6_devconf *cnf,
__s32 *array, int bytes)
static inline size_t inet6_ifla6_size(void)
static inline size_t inet6_if_nlmsg_size(void)
static inline void __snmp6_fill_statsdev(u64 *stats, atomic_long_t *mib,
int items, int bytes)
static inline void __snmp6_fill_stats64(u64 *stats, void __percpu **mib,
int items, int bytes, size_t syncpoff)
static void snmp6_fill_stats(u64 *stats, struct inet6_dev *idev, int attrtype,
int bytes)
static int inet6_fill_ifla6_attrs(struct sk_buff *skb, struct inet6_dev *idev)
static size_t inet6_get_link_af_size(const struct net_device *dev)
static int inet6_fill_link_af(struct sk_buff *skb, const struct net_device *dev)
static int inet6_fill_ifinfo(struct sk_buff *skb, struct inet6_dev *idev,
u32 pid, u32 seq, int event, unsigned int flags)
static int inet6_dump_ifinfo(struct sk_buff *skb, struct netlink_callback *cb)
void inet6_ifinfo_notify(int event, struct inet6_dev *idev)
static inline size_t inet6_prefix_nlmsg_size(void)
static int inet6_fill_prefix(struct sk_buff *skb, struct inet6_dev *idev,
struct prefix_info *pinfo, u32 pid, u32 seq,
int event, unsigned int flags)
static void inet6_prefix_notify(int event, struct inet6_dev *idev,
struct prefix_info *pinfo)
static void __ipv6_ifa_notify(int event, struct inet6_ifaddr *ifp)
static void ipv6_ifa_notify(int event, struct inet6_ifaddr *ifp)
static
int addrconf_sysctl_forward(ctl_table *ctl, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
static void dev_disable_change(struct inet6_dev *idev)
static void addrconf_disable_change(struct net *net, __s32 newf)
static int addrconf_disable_ipv6(struct ctl_table *table, int *p, int old)
static
int addrconf_sysctl_disable(ctl_table *ctl, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
static struct addrconf_sysctl_table
addrconf_sysctl __read_mostly = ;
static int __addrconf_sysctl_register(struct net *net, char *dev_name,
struct inet6_dev *idev, struct ipv6_devconf *p)
static void __addrconf_sysctl_unregister(struct ipv6_devconf *p)
static void addrconf_sysctl_register(struct inet6_dev *idev)
static void addrconf_sysctl_unregister(struct inet6_dev *idev)
static int __net_init addrconf_init_net(struct net *net)
static void __net_exit addrconf_exit_net(struct net *net)
static struct pernet_operations addrconf_ops = ;
int register_inet6addr_notifier(struct notifier_block *nb)
EXPORT_SYMBOL(register_inet6addr_notifier);
int unregister_inet6addr_notifier(struct notifier_block *nb)
EXPORT_SYMBOL(unregister_inet6addr_notifier);
static struct rtnl_af_ops inet6_ops = ;
int __init addrconf_init(void)
void addrconf_cleanup(void)
