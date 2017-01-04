#define RT6_DEBUG 2
#if RT6_DEBUG >= 3
#define RDBG(x) printk x
#define RT6_TRACE(x...) printk(KERN_DEBUG x)
#define RDBG(x)
#define RT6_TRACE(x...) do  while (0)
static struct rt6_info * ip6_rt_copy(struct rt6_info *ort);
static struct dst_entry	*ip6_dst_check(struct dst_entry *dst, u32 cookie);
static unsigned int	 ip6_default_advmss(const struct dst_entry *dst);
static unsigned int	 ip6_default_mtu(const struct dst_entry *dst);
static struct dst_entry *ip6_negative_advice(struct dst_entry *);
static void		ip6_dst_destroy(struct dst_entry *);
static void		ip6_dst_ifdown(struct dst_entry *,
struct net_device *dev, int how);
static int		 ip6_dst_gc(struct dst_ops *ops);
static int		ip6_pkt_discard(struct sk_buff *skb);
static int		ip6_pkt_discard_out(struct sk_buff *skb);
static void		ip6_link_failure(struct sk_buff *skb);
static void		ip6_rt_update_pmtu(struct dst_entry *dst, u32 mtu);
static struct rt6_info *rt6_add_route_info(struct net *net,
const struct in6_addr *prefix, int prefixlen,
const struct in6_addr *gwaddr, int ifindex,
unsigned pref);
static struct rt6_info *rt6_get_route_info(struct net *net,
const struct in6_addr *prefix, int prefixlen,
const struct in6_addr *gwaddr, int ifindex);
static u32 *ipv6_cow_metrics(struct dst_entry *dst, unsigned long old)
static struct dst_ops ip6_dst_ops_template = ;
static unsigned int ip6_blackhole_default_mtu(const struct dst_entry *dst)
static void ip6_rt_blackhole_update_pmtu(struct dst_entry *dst, u32 mtu)
static u32 *ip6_rt_blackhole_cow_metrics(struct dst_entry *dst,
unsigned long old)
static struct dst_ops ip6_dst_blackhole_ops = ;
static const u32 ip6_template_metrics[RTAX_MAX] = ;
static struct rt6_info ip6_null_entry_template = ;
static int ip6_pkt_prohibit(struct sk_buff *skb);
static int ip6_pkt_prohibit_out(struct sk_buff *skb);
static struct rt6_info ip6_prohibit_entry_template = ;
static struct rt6_info ip6_blk_hole_entry_template = ;
static inline struct rt6_info *ip6_dst_alloc(struct dst_ops *ops,
struct net_device *dev,
int flags)
static void ip6_dst_destroy(struct dst_entry *dst)
static atomic_t __rt6_peer_genid = ATOMIC_INIT(0);
static u32 rt6_peer_genid(void)
void rt6_bind_peer(struct rt6_info *rt, int create)
static void ip6_dst_ifdown(struct dst_entry *dst, struct net_device *dev,
int how)
static __inline__ int rt6_check_expired(const struct rt6_info *rt)
static inline int rt6_need_strict(const struct in6_addr *daddr)
static inline struct rt6_info *rt6_device_match(struct net *net,
struct rt6_info *rt,
const struct in6_addr *saddr,
int oif,
int flags)
static void rt6_probe(struct rt6_info *rt)
static inline void rt6_probe(struct rt6_info *rt)
static inline int rt6_check_dev(struct rt6_info *rt, int oif)
static inline int rt6_check_neigh(struct rt6_info *rt)
static int rt6_score_route(struct rt6_info *rt, int oif,
int strict)
static struct rt6_info *find_match(struct rt6_info *rt, int oif, int strict,
int *mpri, struct rt6_info *match)
static struct rt6_info *find_rr_leaf(struct fib6_node *fn,
struct rt6_info *rr_head,
u32 metric, int oif, int strict)
static struct rt6_info *rt6_select(struct fib6_node *fn, int oif, int strict)
int rt6_route_rcv(struct net_device *dev, u8 *opt, int len,
const struct in6_addr *gwaddr)
#define BACKTRACK(__net, saddr)			\
do  while(0)
static struct rt6_info *ip6_pol_route_lookup(struct net *net,
struct fib6_table *table,
struct flowi6 *fl6, int flags)
struct rt6_info *rt6_lookup(struct net *net, const struct in6_addr *daddr,
const struct in6_addr *saddr, int oif, int strict)
EXPORT_SYMBOL(rt6_lookup);
static int __ip6_ins_rt(struct rt6_info *rt, struct nl_info *info)
int ip6_ins_rt(struct rt6_info *rt)
static struct rt6_info *rt6_alloc_cow(struct rt6_info *ort, const struct in6_addr *daddr,
const struct in6_addr *saddr)
static struct rt6_info *rt6_alloc_clone(struct rt6_info *ort, const struct in6_addr *daddr)
static struct rt6_info *ip6_pol_route(struct net *net, struct fib6_table *table, int oif,
struct flowi6 *fl6, int flags)
static struct rt6_info *ip6_pol_route_input(struct net *net, struct fib6_table *table,
struct flowi6 *fl6, int flags)
void ip6_route_input(struct sk_buff *skb)
static struct rt6_info *ip6_pol_route_output(struct net *net, struct fib6_table *table,
struct flowi6 *fl6, int flags)
struct dst_entry * ip6_route_output(struct net *net, const struct sock *sk,
struct flowi6 *fl6)
EXPORT_SYMBOL(ip6_route_output);
struct dst_entry *ip6_blackhole_route(struct net *net, struct dst_entry *dst_orig)
static struct dst_entry *ip6_dst_check(struct dst_entry *dst, u32 cookie)
static struct dst_entry *ip6_negative_advice(struct dst_entry *dst)
static void ip6_link_failure(struct sk_buff *skb)
static void ip6_rt_update_pmtu(struct dst_entry *dst, u32 mtu)
static unsigned int ip6_default_advmss(const struct dst_entry *dst)
static unsigned int ip6_default_mtu(const struct dst_entry *dst)
static struct dst_entry *icmp6_dst_gc_list;
static DEFINE_SPINLOCK(icmp6_dst_lock);
struct dst_entry *icmp6_dst_alloc(struct net_device *dev,
struct neighbour *neigh,
const struct in6_addr *addr)
int icmp6_dst_gc(void)
static void icmp6_clean_all(int (*func)(struct rt6_info *rt, void *arg),
void *arg)
static int ip6_dst_gc(struct dst_ops *ops)
int ip6_dst_hoplimit(struct dst_entry *dst)
EXPORT_SYMBOL(ip6_dst_hoplimit);
int ip6_route_add(struct fib6_config *cfg)
static int __ip6_del_rt(struct rt6_info *rt, struct nl_info *info)
int ip6_del_rt(struct rt6_info *rt)
static int ip6_route_del(struct fib6_config *cfg)
struct ip6rd_flowi ;
static struct rt6_info *__ip6_route_redirect(struct net *net,
struct fib6_table *table,
struct flowi6 *fl6,
int flags)
;
static struct rt6_info *ip6_route_redirect(const struct in6_addr *dest,
const struct in6_addr *src,
const struct in6_addr *gateway,
struct net_device *dev)
void rt6_redirect(const struct in6_addr *dest, const struct in6_addr *src,
const struct in6_addr *saddr,
struct neighbour *neigh, u8 *lladdr, int on_link)
static void rt6_do_pmtu_disc(const struct in6_addr *daddr, const struct in6_addr *saddr,
struct net *net, u32 pmtu, int ifindex)
void rt6_pmtu_discovery(const struct in6_addr *daddr, const struct in6_addr *saddr,
struct net_device *dev, u32 pmtu)
static struct rt6_info * ip6_rt_copy(struct rt6_info *ort)
static struct rt6_info *rt6_get_route_info(struct net *net,
const struct in6_addr *prefix, int prefixlen,
const struct in6_addr *gwaddr, int ifindex)
static struct rt6_info *rt6_add_route_info(struct net *net,
const struct in6_addr *prefix, int prefixlen,
const struct in6_addr *gwaddr, int ifindex,
unsigned pref)
struct rt6_info *rt6_get_dflt_router(const struct in6_addr *addr, struct net_device *dev)
struct rt6_info *rt6_add_dflt_router(const struct in6_addr *gwaddr,
struct net_device *dev,
unsigned int pref)
void rt6_purge_dflt_routers(struct net *net)
static void rtmsg_to_fib6_config(struct net *net,
struct in6_rtmsg *rtmsg,
struct fib6_config *cfg)
int ipv6_route_ioctl(struct net *net, unsigned int cmd, void __user *arg)
static int ip6_pkt_drop(struct sk_buff *skb, u8 code, int ipstats_mib_noroutes)
static int ip6_pkt_discard(struct sk_buff *skb)
static int ip6_pkt_discard_out(struct sk_buff *skb)
static int ip6_pkt_prohibit(struct sk_buff *skb)
static int ip6_pkt_prohibit_out(struct sk_buff *skb)
struct rt6_info *addrconf_dst_alloc(struct inet6_dev *idev,
const struct in6_addr *addr,
int anycast)
int ip6_route_get_saddr(struct net *net,
struct rt6_info *rt,
const struct in6_addr *daddr,
unsigned int prefs,
struct in6_addr *saddr)
struct arg_dev_net_ip ;
static int fib6_remove_prefsrc(struct rt6_info *rt, void *arg)
void rt6_remove_prefsrc(struct inet6_ifaddr *ifp)
struct arg_dev_net ;
static int fib6_ifdown(struct rt6_info *rt, void *arg)
void rt6_ifdown(struct net *net, struct net_device *dev)
struct rt6_mtu_change_arg
;
static int rt6_mtu_change_route(struct rt6_info *rt, void *p_arg)
void rt6_mtu_change(struct net_device *dev, unsigned mtu)
static const struct nla_policy rtm_ipv6_policy[RTA_MAX+1] = ;
static int rtm_to_fib6_config(struct sk_buff *skb, struct nlmsghdr *nlh,
struct fib6_config *cfg)
static int inet6_rtm_delroute(struct sk_buff *skb, struct nlmsghdr* nlh, void *arg)
static int inet6_rtm_newroute(struct sk_buff *skb, struct nlmsghdr* nlh, void *arg)
static inline size_t rt6_nlmsg_size(void)
static int rt6_fill_node(struct net *net,
struct sk_buff *skb, struct rt6_info *rt,
struct in6_addr *dst, struct in6_addr *src,
int iif, int type, u32 pid, u32 seq,
int prefix, int nowait, unsigned int flags)
int rt6_dump_route(struct rt6_info *rt, void *p_arg)
static int inet6_rtm_getroute(struct sk_buff *in_skb, struct nlmsghdr* nlh, void *arg)
void inet6_rt_notify(int event, struct rt6_info *rt, struct nl_info *info)
static int ip6_route_dev_notify(struct notifier_block *this,
unsigned long event, void *data)
struct rt6_proc_arg
;
static int rt6_info_route(struct rt6_info *rt, void *p_arg)
static int ipv6_route_show(struct seq_file *m, void *v)
static int ipv6_route_open(struct inode *inode, struct file *file)
static const struct file_operations ipv6_route_proc_fops = ;
static int rt6_stats_seq_show(struct seq_file *seq, void *v)
static int rt6_stats_seq_open(struct inode *inode, struct file *file)
static const struct file_operations rt6_stats_seq_fops = ;
static
int ipv6_sysctl_rtcache_flush(ctl_table *ctl, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
ctl_table ipv6_route_table_template[] = ;
struct ctl_table * __net_init ipv6_route_sysctl_init(struct net *net)
static int __net_init ip6_route_net_init(struct net *net)
static void __net_exit ip6_route_net_exit(struct net *net)
static struct pernet_operations ip6_route_net_ops = ;
static struct notifier_block ip6_route_dev_notifier = ;
int __init ip6_route_init(void)
void ip6_route_cleanup(void)
