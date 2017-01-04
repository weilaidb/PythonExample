#define RT_FL_TOS(oldflp4) \
((u32)(oldflp4->flowi4_tos & (IPTOS_RT_MASK | RTO_ONLINK)))
#define IP_MAX_MTU	0xFFF0
#define RT_GC_TIMEOUT (300*HZ)
static int ip_rt_max_size;
static int ip_rt_gc_timeout __read_mostly	= RT_GC_TIMEOUT;
static int ip_rt_gc_interval __read_mostly	= 60 * HZ;
static int ip_rt_gc_min_interval __read_mostly	= HZ / 2;
static int ip_rt_redirect_number __read_mostly	= 9;
static int ip_rt_redirect_load __read_mostly	= HZ / 50;
static int ip_rt_redirect_silence __read_mostly	= ((HZ / 50) << (9 + 1));
static int ip_rt_error_cost __read_mostly	= HZ;
static int ip_rt_error_burst __read_mostly	= 5 * HZ;
static int ip_rt_gc_elasticity __read_mostly	= 8;
static int ip_rt_mtu_expires __read_mostly	= 10 * 60 * HZ;
static int ip_rt_min_pmtu __read_mostly		= 512 + 20 + 20;
static int ip_rt_min_advmss __read_mostly	= 256;
static int rt_chain_length_max __read_mostly	= 20;
static struct dst_entry *ipv4_dst_check(struct dst_entry *dst, u32 cookie);
static unsigned int	 ipv4_default_advmss(const struct dst_entry *dst);
static unsigned int	 ipv4_default_mtu(const struct dst_entry *dst);
static void		 ipv4_dst_destroy(struct dst_entry *dst);
static struct dst_entry *ipv4_negative_advice(struct dst_entry *dst);
static void		 ipv4_link_failure(struct sk_buff *skb);
static void		 ip_rt_update_pmtu(struct dst_entry *dst, u32 mtu);
static int rt_garbage_collect(struct dst_ops *ops);
static void ipv4_dst_ifdown(struct dst_entry *dst, struct net_device *dev,
int how)
static u32 *ipv4_cow_metrics(struct dst_entry *dst, unsigned long old)
static struct dst_ops ipv4_dst_ops = ;
#define ECN_OR_COST(class)	TC_PRIO_##class
const __u8 ip_tos2prio[16] = ;
struct rt_hash_bucket ;
#if defined(CONFIG_SMP) || defined(CONFIG_DEBUG_SPINLOCK) || \
defined(CONFIG_PROVE_LOCKING)
# define RT_HASH_LOCK_SZ	256
# if NR_CPUS >= 32
#  define RT_HASH_LOCK_SZ	4096
# elif NR_CPUS >= 16
#  define RT_HASH_LOCK_SZ	2048
# elif NR_CPUS >= 8
#  define RT_HASH_LOCK_SZ	1024
# elif NR_CPUS >= 4
#  define RT_HASH_LOCK_SZ	512
# else
#  define RT_HASH_LOCK_SZ	256
# endif
static spinlock_t	*rt_hash_locks;
# define rt_hash_lock_addr(slot) &rt_hash_locks[(slot) & (RT_HASH_LOCK_SZ - 1)]
static __init void rt_hash_lock_init(void)
# define rt_hash_lock_addr(slot) NULL
static inline void rt_hash_lock_init(void)
static struct rt_hash_bucket 	*rt_hash_table __read_mostly;
static unsigned			rt_hash_mask __read_mostly;
static unsigned int		rt_hash_log  __read_mostly;
static DEFINE_PER_CPU(struct rt_cache_stat, rt_cache_stat);
#define RT_CACHE_STAT_INC(field) __this_cpu_inc(rt_cache_stat.field)
static inline unsigned int rt_hash(__be32 daddr, __be32 saddr, int idx,
int genid)
static inline int rt_genid(struct net *net)
struct rt_cache_iter_state ;
static struct rtable *rt_cache_get_first(struct seq_file *seq)
static struct rtable *__rt_cache_get_next(struct seq_file *seq,
struct rtable *r)
static struct rtable *rt_cache_get_next(struct seq_file *seq,
struct rtable *r)
static struct rtable *rt_cache_get_idx(struct seq_file *seq, loff_t pos)
static void *rt_cache_seq_start(struct seq_file *seq, loff_t *pos)
static void *rt_cache_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void rt_cache_seq_stop(struct seq_file *seq, void *v)
static int rt_cache_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations rt_cache_seq_ops = ;
static int rt_cache_seq_open(struct inode *inode, struct file *file)
static const struct file_operations rt_cache_seq_fops = ;
static void *rt_cpu_seq_start(struct seq_file *seq, loff_t *pos)
static void *rt_cpu_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void rt_cpu_seq_stop(struct seq_file *seq, void *v)
static int rt_cpu_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations rt_cpu_seq_ops = ;
static int rt_cpu_seq_open(struct inode *inode, struct file *file)
static const struct file_operations rt_cpu_seq_fops = ;
static int rt_acct_proc_show(struct seq_file *m, void *v)
static int rt_acct_proc_open(struct inode *inode, struct file *file)
static const struct file_operations rt_acct_proc_fops = ;
static int __net_init ip_rt_do_proc_init(struct net *net)
static void __net_exit ip_rt_do_proc_exit(struct net *net)
static struct pernet_operations ip_rt_proc_ops __net_initdata =  ;
static int __init ip_rt_proc_init(void)
static inline int ip_rt_proc_init(void)
static inline void rt_free(struct rtable *rt)
static inline void rt_drop(struct rtable *rt)
static inline int rt_fast_clean(struct rtable *rth)
static inline int rt_valuable(struct rtable *rth)
static int rt_may_expire(struct rtable *rth, unsigned long tmo1, unsigned long tmo2)
static inline u32 rt_score(struct rtable *rt)
static inline bool rt_caching(const struct net *net)
static inline bool compare_hash_inputs(const struct rtable *rt1,
const struct rtable *rt2)
static inline int compare_keys(struct rtable *rt1, struct rtable *rt2)
static inline int compare_netns(struct rtable *rt1, struct rtable *rt2)
static inline int rt_is_expired(struct rtable *rth)
static void rt_do_flush(struct net *net, int process_context)
#define FRACT_BITS 3
#define ONE (1UL << FRACT_BITS)
static int has_noalias(const struct rtable *head, const struct rtable *rth)
static void rt_cache_invalidate(struct net *net)
void rt_cache_flush(struct net *net, int delay)
void rt_cache_flush_batch(struct net *net)
static void rt_emergency_hash_rebuild(struct net *net)
static int rt_garbage_collect(struct dst_ops *ops)
static int slow_chain_length(const struct rtable *head)
static struct rtable *rt_intern_hash(unsigned hash, struct rtable *rt,
struct sk_buff *skb, int ifindex)
static atomic_t __rt_peer_genid = ATOMIC_INIT(0);
static u32 rt_peer_genid(void)
void rt_bind_peer(struct rtable *rt, __be32 daddr, int create)
static void ip_select_fb_ident(struct iphdr *iph)
void __ip_select_ident(struct iphdr *iph, struct dst_entry *dst, int more)
EXPORT_SYMBOL(__ip_select_ident);
static void rt_del(unsigned hash, struct rtable *rt)
void ip_rt_redirect(__be32 old_gw, __be32 daddr, __be32 new_gw,
__be32 saddr, struct net_device *dev)
static bool peer_pmtu_expired(struct inet_peer *peer)
static bool peer_pmtu_cleaned(struct inet_peer *peer)
static struct dst_entry *ipv4_negative_advice(struct dst_entry *dst)
void ip_rt_send_redirect(struct sk_buff *skb)
static int ip_error(struct sk_buff *skb)
static const unsigned short mtu_plateau[] =
;
static inline unsigned short guess_mtu(unsigned short old_mtu)
unsigned short ip_rt_frag_needed(struct net *net, const struct iphdr *iph,
unsigned short new_mtu,
struct net_device *dev)
static void check_peer_pmtu(struct dst_entry *dst, struct inet_peer *peer)
static void ip_rt_update_pmtu(struct dst_entry *dst, u32 mtu)
static int check_peer_redir(struct dst_entry *dst, struct inet_peer *peer)
static struct dst_entry *ipv4_dst_check(struct dst_entry *dst, u32 cookie)
static void ipv4_dst_destroy(struct dst_entry *dst)
static void ipv4_link_failure(struct sk_buff *skb)
static int ip_rt_bug(struct sk_buff *skb)
void ip_rt_get_source(u8 *addr, struct sk_buff *skb, struct rtable *rt)
static void set_class_tag(struct rtable *rt, u32 tag)
static unsigned int ipv4_default_advmss(const struct dst_entry *dst)
static unsigned int ipv4_default_mtu(const struct dst_entry *dst)
static void rt_init_metrics(struct rtable *rt, const struct flowi4 *fl4,
struct fib_info *fi)
static void rt_set_nexthop(struct rtable *rt, const struct flowi4 *fl4,
const struct fib_result *res,
struct fib_info *fi, u16 type, u32 itag)
static struct rtable *rt_dst_alloc(struct net_device *dev,
bool nopolicy, bool noxfrm)
static int ip_route_input_mc(struct sk_buff *skb, __be32 daddr, __be32 saddr,
u8 tos, struct net_device *dev, int our)
static void ip_handle_martian_source(struct net_device *dev,
struct in_device *in_dev,
struct sk_buff *skb,
__be32 daddr,
__be32 saddr)
static int __mkroute_input(struct sk_buff *skb,
const struct fib_result *res,
struct in_device *in_dev,
__be32 daddr, __be32 saddr, u32 tos,
struct rtable **result)
static int ip_mkroute_input(struct sk_buff *skb,
struct fib_result *res,
const struct flowi4 *fl4,
struct in_device *in_dev,
__be32 daddr, __be32 saddr, u32 tos)
static int ip_route_input_slow(struct sk_buff *skb, __be32 daddr, __be32 saddr,
u8 tos, struct net_device *dev)
int ip_route_input_common(struct sk_buff *skb, __be32 daddr, __be32 saddr,
u8 tos, struct net_device *dev, bool noref)
EXPORT_SYMBOL(ip_route_input_common);
static struct rtable *__mkroute_output(const struct fib_result *res,
const struct flowi4 *fl4,
__be32 orig_daddr, __be32 orig_saddr,
int orig_oif, struct net_device *dev_out,
unsigned int flags)
static struct rtable *ip_route_output_slow(struct net *net, struct flowi4 *fl4)
struct rtable *__ip_route_output_key(struct net *net, struct flowi4 *flp4)
EXPORT_SYMBOL_GPL(__ip_route_output_key);
static struct dst_entry *ipv4_blackhole_dst_check(struct dst_entry *dst, u32 cookie)
static unsigned int ipv4_blackhole_default_mtu(const struct dst_entry *dst)
static void ipv4_rt_blackhole_update_pmtu(struct dst_entry *dst, u32 mtu)
static u32 *ipv4_rt_blackhole_cow_metrics(struct dst_entry *dst,
unsigned long old)
static struct dst_ops ipv4_dst_blackhole_ops = ;
struct dst_entry *ipv4_blackhole_route(struct net *net, struct dst_entry *dst_orig)
struct rtable *ip_route_output_flow(struct net *net, struct flowi4 *flp4,
struct sock *sk)
EXPORT_SYMBOL_GPL(ip_route_output_flow);
static int rt_fill_info(struct net *net,
struct sk_buff *skb, u32 pid, u32 seq, int event,
int nowait, unsigned int flags)
static int inet_rtm_getroute(struct sk_buff *in_skb, struct nlmsghdr* nlh, void *arg)
int ip_rt_dump(struct sk_buff *skb,  struct netlink_callback *cb)
void ip_rt_multicast_event(struct in_device *in_dev)
static int ipv4_sysctl_rtcache_flush(ctl_table *__ctl, int write,
void __user *buffer,
size_t *lenp, loff_t *ppos)
static ctl_table ipv4_route_table[] = ;
static struct ctl_table empty[1];
static struct ctl_table ipv4_skeleton[] =
;
static __net_initdata struct ctl_path ipv4_path[] = ;
static struct ctl_table ipv4_route_flush_table[] = ;
static __net_initdata struct ctl_path ipv4_route_path[] = ;
static __net_init int sysctl_route_net_init(struct net *net)
static __net_exit void sysctl_route_net_exit(struct net *net)
static __net_initdata struct pernet_operations sysctl_route_ops = ;
static __net_init int rt_genid_init(struct net *net)
static __net_initdata struct pernet_operations rt_genid_ops = ;
struct ip_rt_acct __percpu *ip_rt_acct __read_mostly;
static __initdata unsigned long rhash_entries;
static int __init set_rhash_entries(char *str)
__setup("rhash_entries=", set_rhash_entries);
int __init ip_rt_init(void)
void __init ip_static_sysctl_init(void)
