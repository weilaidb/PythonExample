#if defined(CONFIG_IP_PIMSM_V1) || defined(CONFIG_IP_PIMSM_V2)
#define CONFIG_IP_PIMSM	1
struct mr_table ;
struct ipmr_rule ;
struct ipmr_result ;
static DEFINE_RWLOCK(mrt_lock);
#define VIF_EXISTS(_mrt, _idx) ((_mrt)->vif_table[_idx].dev != NULL)
static DEFINE_SPINLOCK(mfc_unres_lock);
static struct kmem_cache *mrt_cachep __read_mostly;
static struct mr_table *ipmr_new_table(struct net *net, u32 id);
static int ip_mr_forward(struct net *net, struct mr_table *mrt,
struct sk_buff *skb, struct mfc_cache *cache,
int local);
static int ipmr_cache_report(struct mr_table *mrt,
struct sk_buff *pkt, vifi_t vifi, int assert);
static int __ipmr_fill_mroute(struct mr_table *mrt, struct sk_buff *skb,
struct mfc_cache *c, struct rtmsg *rtm);
static void ipmr_expire_process(unsigned long arg);
#define ipmr_for_each_table(mrt, net) \
list_for_each_entry_rcu(mrt, &net->ipv4.mr_tables, list)
static struct mr_table *ipmr_get_table(struct net *net, u32 id)
static int ipmr_fib_lookup(struct net *net, struct flowi4 *flp4,
struct mr_table **mrt)
static int ipmr_rule_action(struct fib_rule *rule, struct flowi *flp,
int flags, struct fib_lookup_arg *arg)
static int ipmr_rule_match(struct fib_rule *rule, struct flowi *fl, int flags)
static const struct nla_policy ipmr_rule_policy[FRA_MAX + 1] = ;
static int ipmr_rule_configure(struct fib_rule *rule, struct sk_buff *skb,
struct fib_rule_hdr *frh, struct nlattr **tb)
static int ipmr_rule_compare(struct fib_rule *rule, struct fib_rule_hdr *frh,
struct nlattr **tb)
static int ipmr_rule_fill(struct fib_rule *rule, struct sk_buff *skb,
struct fib_rule_hdr *frh)
static const struct fib_rules_ops __net_initdata ipmr_rules_ops_template = ;
static int __net_init ipmr_rules_init(struct net *net)
static void __net_exit ipmr_rules_exit(struct net *net)
#define ipmr_for_each_table(mrt, net) \
for (mrt = net->ipv4.mrt; mrt; mrt = NULL)
static struct mr_table *ipmr_get_table(struct net *net, u32 id)
static int ipmr_fib_lookup(struct net *net, struct flowi4 *flp4,
struct mr_table **mrt)
static int __net_init ipmr_rules_init(struct net *net)
static void __net_exit ipmr_rules_exit(struct net *net)
static struct mr_table *ipmr_new_table(struct net *net, u32 id)
static void ipmr_del_tunnel(struct net_device *dev, struct vifctl *v)
static
struct net_device *ipmr_new_tunnel(struct net *net, struct vifctl *v)
static netdev_tx_t reg_vif_xmit(struct sk_buff *skb, struct net_device *dev)
static const struct net_device_ops reg_vif_netdev_ops = ;
static void reg_vif_setup(struct net_device *dev)
static struct net_device *ipmr_reg_vif(struct net *net, struct mr_table *mrt)
static int vif_delete(struct mr_table *mrt, int vifi, int notify,
struct list_head *head)
static void ipmr_cache_free_rcu(struct rcu_head *head)
static inline void ipmr_cache_free(struct mfc_cache *c)
static void ipmr_destroy_unres(struct mr_table *mrt, struct mfc_cache *c)
static void ipmr_expire_process(unsigned long arg)
static void ipmr_update_thresholds(struct mr_table *mrt, struct mfc_cache *cache,
unsigned char *ttls)
static int vif_add(struct net *net, struct mr_table *mrt,
struct vifctl *vifc, int mrtsock)
static struct mfc_cache *ipmr_cache_find(struct mr_table *mrt,
__be32 origin,
__be32 mcastgrp)
static struct mfc_cache *ipmr_cache_alloc(void)
static struct mfc_cache *ipmr_cache_alloc_unres(void)
static void ipmr_cache_resolve(struct net *net, struct mr_table *mrt,
struct mfc_cache *uc, struct mfc_cache *c)
static int ipmr_cache_report(struct mr_table *mrt,
struct sk_buff *pkt, vifi_t vifi, int assert)
static int
ipmr_cache_unresolved(struct mr_table *mrt, vifi_t vifi, struct sk_buff *skb)
static int ipmr_mfc_delete(struct mr_table *mrt, struct mfcctl *mfc)
static int ipmr_mfc_add(struct net *net, struct mr_table *mrt,
struct mfcctl *mfc, int mrtsock)
static void mroute_clean_tables(struct mr_table *mrt)
static void mrtsock_destruct(struct sock *sk)
int ip_mroute_setsockopt(struct sock *sk, int optname, char __user *optval, unsigned int optlen)
int ip_mroute_getsockopt(struct sock *sk, int optname, char __user *optval, int __user *optlen)
int ipmr_ioctl(struct sock *sk, int cmd, void __user *arg)
struct compat_sioc_sg_req ;
struct compat_sioc_vif_req ;
int ipmr_compat_ioctl(struct sock *sk, unsigned int cmd, void __user *arg)
static int ipmr_device_event(struct notifier_block *this, unsigned long event, void *ptr)
static struct notifier_block ip_mr_notifier = ;
static void ip_encap(struct sk_buff *skb, __be32 saddr, __be32 daddr)
static inline int ipmr_forward_finish(struct sk_buff *skb)
static void ipmr_queue_xmit(struct net *net, struct mr_table *mrt,
struct sk_buff *skb, struct mfc_cache *c, int vifi)
static int ipmr_find_vif(struct mr_table *mrt, struct net_device *dev)
static int ip_mr_forward(struct net *net, struct mr_table *mrt,
struct sk_buff *skb, struct mfc_cache *cache,
int local)
static struct mr_table *ipmr_rt_fib_lookup(struct net *net, struct sk_buff *skb)
int ip_mr_input(struct sk_buff *skb)
static int __pim_rcv(struct mr_table *mrt, struct sk_buff *skb,
unsigned int pimlen)
int pim_rcv_v1(struct sk_buff *skb)
static int pim_rcv(struct sk_buff *skb)
static int __ipmr_fill_mroute(struct mr_table *mrt, struct sk_buff *skb,
struct mfc_cache *c, struct rtmsg *rtm)
int ipmr_get_route(struct net *net, struct sk_buff *skb,
__be32 saddr, __be32 daddr,
struct rtmsg *rtm, int nowait)
static int ipmr_fill_mroute(struct mr_table *mrt, struct sk_buff *skb,
u32 pid, u32 seq, struct mfc_cache *c)
static int ipmr_rtm_dumproute(struct sk_buff *skb, struct netlink_callback *cb)
struct ipmr_vif_iter ;
static struct vif_device *ipmr_vif_seq_idx(struct net *net,
struct ipmr_vif_iter *iter,
loff_t pos)
static void *ipmr_vif_seq_start(struct seq_file *seq, loff_t *pos)
__acquires(mrt_lock)
static void *ipmr_vif_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void ipmr_vif_seq_stop(struct seq_file *seq, void *v)
__releases(mrt_lock)
static int ipmr_vif_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations ipmr_vif_seq_ops = ;
static int ipmr_vif_open(struct inode *inode, struct file *file)
static const struct file_operations ipmr_vif_fops = ;
struct ipmr_mfc_iter ;
static struct mfc_cache *ipmr_mfc_seq_idx(struct net *net,
struct ipmr_mfc_iter *it, loff_t pos)
static void *ipmr_mfc_seq_start(struct seq_file *seq, loff_t *pos)
static void *ipmr_mfc_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void ipmr_mfc_seq_stop(struct seq_file *seq, void *v)
static int ipmr_mfc_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations ipmr_mfc_seq_ops = ;
static int ipmr_mfc_open(struct inode *inode, struct file *file)
static const struct file_operations ipmr_mfc_fops = ;
static const struct net_protocol pim_protocol = ;
static int __net_init ipmr_net_init(struct net *net)
static void __net_exit ipmr_net_exit(struct net *net)
static struct pernet_operations ipmr_net_ops = ;
int __init ip_mr_init(void)
