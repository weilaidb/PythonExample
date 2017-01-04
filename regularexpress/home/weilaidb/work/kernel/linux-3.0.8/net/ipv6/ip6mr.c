struct mr6_table ;
struct ip6mr_rule ;
struct ip6mr_result ;
static DEFINE_RWLOCK(mrt_lock);
#define MIF_EXISTS(_mrt, _idx) ((_mrt)->vif6_table[_idx].dev != NULL)
static DEFINE_SPINLOCK(mfc_unres_lock);
static struct kmem_cache *mrt_cachep __read_mostly;
static struct mr6_table *ip6mr_new_table(struct net *net, u32 id);
static void ip6mr_free_table(struct mr6_table *mrt);
static int ip6_mr_forward(struct net *net, struct mr6_table *mrt,
struct sk_buff *skb, struct mfc6_cache *cache);
static int ip6mr_cache_report(struct mr6_table *mrt, struct sk_buff *pkt,
mifi_t mifi, int assert);
static int __ip6mr_fill_mroute(struct mr6_table *mrt, struct sk_buff *skb,
struct mfc6_cache *c, struct rtmsg *rtm);
static int ip6mr_rtm_dumproute(struct sk_buff *skb,
struct netlink_callback *cb);
static void mroute_clean_tables(struct mr6_table *mrt);
static void ipmr_expire_process(unsigned long arg);
#define ip6mr_for_each_table(mrt, net) \
list_for_each_entry_rcu(mrt, &net->ipv6.mr6_tables, list)
static struct mr6_table *ip6mr_get_table(struct net *net, u32 id)
static int ip6mr_fib_lookup(struct net *net, struct flowi6 *flp6,
struct mr6_table **mrt)
static int ip6mr_rule_action(struct fib_rule *rule, struct flowi *flp,
int flags, struct fib_lookup_arg *arg)
static int ip6mr_rule_match(struct fib_rule *rule, struct flowi *flp, int flags)
static const struct nla_policy ip6mr_rule_policy[FRA_MAX + 1] = ;
static int ip6mr_rule_configure(struct fib_rule *rule, struct sk_buff *skb,
struct fib_rule_hdr *frh, struct nlattr **tb)
static int ip6mr_rule_compare(struct fib_rule *rule, struct fib_rule_hdr *frh,
struct nlattr **tb)
static int ip6mr_rule_fill(struct fib_rule *rule, struct sk_buff *skb,
struct fib_rule_hdr *frh)
static const struct fib_rules_ops __net_initdata ip6mr_rules_ops_template = ;
static int __net_init ip6mr_rules_init(struct net *net)
static void __net_exit ip6mr_rules_exit(struct net *net)
#define ip6mr_for_each_table(mrt, net) \
for (mrt = net->ipv6.mrt6; mrt; mrt = NULL)
static struct mr6_table *ip6mr_get_table(struct net *net, u32 id)
static int ip6mr_fib_lookup(struct net *net, struct flowi6 *flp6,
struct mr6_table **mrt)
static int __net_init ip6mr_rules_init(struct net *net)
static void __net_exit ip6mr_rules_exit(struct net *net)
static struct mr6_table *ip6mr_new_table(struct net *net, u32 id)
static void ip6mr_free_table(struct mr6_table *mrt)
struct ipmr_mfc_iter ;
static struct mfc6_cache *ipmr_mfc_seq_idx(struct net *net,
struct ipmr_mfc_iter *it, loff_t pos)
struct ipmr_vif_iter ;
static struct mif_device *ip6mr_vif_seq_idx(struct net *net,
struct ipmr_vif_iter *iter,
loff_t pos)
static void *ip6mr_vif_seq_start(struct seq_file *seq, loff_t *pos)
__acquires(mrt_lock)
static void *ip6mr_vif_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void ip6mr_vif_seq_stop(struct seq_file *seq, void *v)
__releases(mrt_lock)
static int ip6mr_vif_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations ip6mr_vif_seq_ops = ;
static int ip6mr_vif_open(struct inode *inode, struct file *file)
static const struct file_operations ip6mr_vif_fops = ;
static void *ipmr_mfc_seq_start(struct seq_file *seq, loff_t *pos)
static void *ipmr_mfc_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void ipmr_mfc_seq_stop(struct seq_file *seq, void *v)
static int ipmr_mfc_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations ipmr_mfc_seq_ops = ;
static int ipmr_mfc_open(struct inode *inode, struct file *file)
static const struct file_operations ip6mr_mfc_fops = ;
static int pim6_rcv(struct sk_buff *skb)
static const struct inet6_protocol pim6_protocol = ;
static netdev_tx_t reg_vif_xmit(struct sk_buff *skb,
struct net_device *dev)
static const struct net_device_ops reg_vif_netdev_ops = ;
static void reg_vif_setup(struct net_device *dev)
static struct net_device *ip6mr_reg_vif(struct net *net, struct mr6_table *mrt)
static int mif6_delete(struct mr6_table *mrt, int vifi, struct list_head *head)
static inline void ip6mr_cache_free(struct mfc6_cache *c)
static void ip6mr_destroy_unres(struct mr6_table *mrt, struct mfc6_cache *c)
static void ipmr_do_expire_process(struct mr6_table *mrt)
static void ipmr_expire_process(unsigned long arg)
static void ip6mr_update_thresholds(struct mr6_table *mrt, struct mfc6_cache *cache,
unsigned char *ttls)
static int mif6_add(struct net *net, struct mr6_table *mrt,
struct mif6ctl *vifc, int mrtsock)
static struct mfc6_cache *ip6mr_cache_find(struct mr6_table *mrt,
const struct in6_addr *origin,
const struct in6_addr *mcastgrp)
static struct mfc6_cache *ip6mr_cache_alloc(void)
static struct mfc6_cache *ip6mr_cache_alloc_unres(void)
static void ip6mr_cache_resolve(struct net *net, struct mr6_table *mrt,
struct mfc6_cache *uc, struct mfc6_cache *c)
static int ip6mr_cache_report(struct mr6_table *mrt, struct sk_buff *pkt,
mifi_t mifi, int assert)
static int
ip6mr_cache_unresolved(struct mr6_table *mrt, mifi_t mifi, struct sk_buff *skb)
static int ip6mr_mfc_delete(struct mr6_table *mrt, struct mf6cctl *mfc)
static int ip6mr_device_event(struct notifier_block *this,
unsigned long event, void *ptr)
static struct notifier_block ip6_mr_notifier = ;
static int __net_init ip6mr_net_init(struct net *net)
static void __net_exit ip6mr_net_exit(struct net *net)
static struct pernet_operations ip6mr_net_ops = ;
int __init ip6_mr_init(void)
void ip6_mr_cleanup(void)
static int ip6mr_mfc_add(struct net *net, struct mr6_table *mrt,
struct mf6cctl *mfc, int mrtsock)
static void mroute_clean_tables(struct mr6_table *mrt)
static int ip6mr_sk_init(struct mr6_table *mrt, struct sock *sk)
int ip6mr_sk_done(struct sock *sk)
struct sock *mroute6_socket(struct net *net, struct sk_buff *skb)
int ip6_mroute_setsockopt(struct sock *sk, int optname, char __user *optval, unsigned int optlen)
int ip6_mroute_getsockopt(struct sock *sk, int optname, char __user *optval,
int __user *optlen)
int ip6mr_ioctl(struct sock *sk, int cmd, void __user *arg)
struct compat_sioc_sg_req6 ;
struct compat_sioc_mif_req6 ;
int ip6mr_compat_ioctl(struct sock *sk, unsigned int cmd, void __user *arg)
static inline int ip6mr_forward2_finish(struct sk_buff *skb)
static int ip6mr_forward2(struct net *net, struct mr6_table *mrt,
struct sk_buff *skb, struct mfc6_cache *c, int vifi)
static int ip6mr_find_vif(struct mr6_table *mrt, struct net_device *dev)
static int ip6_mr_forward(struct net *net, struct mr6_table *mrt,
struct sk_buff *skb, struct mfc6_cache *cache)
int ip6_mr_input(struct sk_buff *skb)
static int __ip6mr_fill_mroute(struct mr6_table *mrt, struct sk_buff *skb,
struct mfc6_cache *c, struct rtmsg *rtm)
int ip6mr_get_route(struct net *net,
struct sk_buff *skb, struct rtmsg *rtm, int nowait)
static int ip6mr_fill_mroute(struct mr6_table *mrt, struct sk_buff *skb,
u32 pid, u32 seq, struct mfc6_cache *c)
static int ip6mr_rtm_dumproute(struct sk_buff *skb, struct netlink_callback *cb)
