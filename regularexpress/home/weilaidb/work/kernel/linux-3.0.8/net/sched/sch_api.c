static int qdisc_notify(struct net *net, struct sk_buff *oskb,
struct nlmsghdr *n, u32 clid,
struct Qdisc *old, struct Qdisc *new);
static int tclass_notify(struct net *net, struct sk_buff *oskb,
struct nlmsghdr *n, struct Qdisc *q,
unsigned long cl, int event);
static DEFINE_RWLOCK(qdisc_mod_lock);
static struct Qdisc_ops *qdisc_base;
int register_qdisc(struct Qdisc_ops *qops)
EXPORT_SYMBOL(register_qdisc);
int unregister_qdisc(struct Qdisc_ops *qops)
EXPORT_SYMBOL(unregister_qdisc);
static struct Qdisc *qdisc_match_from_root(struct Qdisc *root, u32 handle)
static void qdisc_list_add(struct Qdisc *q)
void qdisc_list_del(struct Qdisc *q)
EXPORT_SYMBOL(qdisc_list_del);
struct Qdisc *qdisc_lookup(struct net_device *dev, u32 handle)
static struct Qdisc *qdisc_leaf(struct Qdisc *p, u32 classid)
static struct Qdisc_ops *qdisc_lookup_ops(struct nlattr *kind)
static struct qdisc_rate_table *qdisc_rtab_list;
struct qdisc_rate_table *qdisc_get_rtab(struct tc_ratespec *r, struct nlattr *tab)
EXPORT_SYMBOL(qdisc_get_rtab);
void qdisc_put_rtab(struct qdisc_rate_table *tab)
EXPORT_SYMBOL(qdisc_put_rtab);
static LIST_HEAD(qdisc_stab_list);
static DEFINE_SPINLOCK(qdisc_stab_lock);
static const struct nla_policy stab_policy[TCA_STAB_MAX + 1] = ;
static struct qdisc_size_table *qdisc_get_stab(struct nlattr *opt)
static void stab_kfree_rcu(struct rcu_head *head)
void qdisc_put_stab(struct qdisc_size_table *tab)
EXPORT_SYMBOL(qdisc_put_stab);
static int qdisc_dump_stab(struct sk_buff *skb, struct qdisc_size_table *stab)
void __qdisc_calculate_pkt_len(struct sk_buff *skb, const struct qdisc_size_table *stab)
EXPORT_SYMBOL(__qdisc_calculate_pkt_len);
void qdisc_warn_nonwc(char *txt, struct Qdisc *qdisc)
EXPORT_SYMBOL(qdisc_warn_nonwc);
static enum hrtimer_restart qdisc_watchdog(struct hrtimer *timer)
void qdisc_watchdog_init(struct qdisc_watchdog *wd, struct Qdisc *qdisc)
EXPORT_SYMBOL(qdisc_watchdog_init);
void qdisc_watchdog_schedule(struct qdisc_watchdog *wd, psched_time_t expires)
EXPORT_SYMBOL(qdisc_watchdog_schedule);
void qdisc_watchdog_cancel(struct qdisc_watchdog *wd)
EXPORT_SYMBOL(qdisc_watchdog_cancel);
static struct hlist_head *qdisc_class_hash_alloc(unsigned int n)
static void qdisc_class_hash_free(struct hlist_head *h, unsigned int n)
void qdisc_class_hash_grow(struct Qdisc *sch, struct Qdisc_class_hash *clhash)
EXPORT_SYMBOL(qdisc_class_hash_grow);
int qdisc_class_hash_init(struct Qdisc_class_hash *clhash)
EXPORT_SYMBOL(qdisc_class_hash_init);
void qdisc_class_hash_destroy(struct Qdisc_class_hash *clhash)
EXPORT_SYMBOL(qdisc_class_hash_destroy);
void qdisc_class_hash_insert(struct Qdisc_class_hash *clhash,
struct Qdisc_class_common *cl)
EXPORT_SYMBOL(qdisc_class_hash_insert);
void qdisc_class_hash_remove(struct Qdisc_class_hash *clhash,
struct Qdisc_class_common *cl)
EXPORT_SYMBOL(qdisc_class_hash_remove);
static u32 qdisc_alloc_handle(struct net_device *dev)
void qdisc_tree_decrease_qlen(struct Qdisc *sch, unsigned int n)
EXPORT_SYMBOL(qdisc_tree_decrease_qlen);
static void notify_and_destroy(struct net *net, struct sk_buff *skb,
struct nlmsghdr *n, u32 clid,
struct Qdisc *old, struct Qdisc *new)
static int qdisc_graft(struct net_device *dev, struct Qdisc *parent,
struct sk_buff *skb, struct nlmsghdr *n, u32 classid,
struct Qdisc *new, struct Qdisc *old)
static struct lock_class_key qdisc_tx_lock;
static struct lock_class_key qdisc_rx_lock;
static struct Qdisc *
qdisc_create(struct net_device *dev, struct netdev_queue *dev_queue,
struct Qdisc *p, u32 parent, u32 handle,
struct nlattr **tca, int *errp)
static int qdisc_change(struct Qdisc *sch, struct nlattr **tca)
struct check_loop_arg ;
static int check_loop_fn(struct Qdisc *q, unsigned long cl, struct qdisc_walker *w);
static int check_loop(struct Qdisc *q, struct Qdisc *p, int depth)
static int
check_loop_fn(struct Qdisc *q, unsigned long cl, struct qdisc_walker *w)
static int tc_get_qdisc(struct sk_buff *skb, struct nlmsghdr *n, void *arg)
static int tc_modify_qdisc(struct sk_buff *skb, struct nlmsghdr *n, void *arg)
static int tc_fill_qdisc(struct sk_buff *skb, struct Qdisc *q, u32 clid,
u32 pid, u32 seq, u16 flags, int event)
static bool tc_qdisc_dump_ignore(struct Qdisc *q)
static int qdisc_notify(struct net *net, struct sk_buff *oskb,
struct nlmsghdr *n, u32 clid,
struct Qdisc *old, struct Qdisc *new)
static int tc_dump_qdisc_root(struct Qdisc *root, struct sk_buff *skb,
struct netlink_callback *cb,
int *q_idx_p, int s_q_idx)
static int tc_dump_qdisc(struct sk_buff *skb, struct netlink_callback *cb)
static int tc_ctl_tclass(struct sk_buff *skb, struct nlmsghdr *n, void *arg)
static int tc_fill_tclass(struct sk_buff *skb, struct Qdisc *q,
unsigned long cl,
u32 pid, u32 seq, u16 flags, int event)
static int tclass_notify(struct net *net, struct sk_buff *oskb,
struct nlmsghdr *n, struct Qdisc *q,
unsigned long cl, int event)
struct qdisc_dump_args ;
static int qdisc_class_dump(struct Qdisc *q, unsigned long cl, struct qdisc_walker *arg)
static int tc_dump_tclass_qdisc(struct Qdisc *q, struct sk_buff *skb,
struct tcmsg *tcm, struct netlink_callback *cb,
int *t_p, int s_t)
static int tc_dump_tclass_root(struct Qdisc *root, struct sk_buff *skb,
struct tcmsg *tcm, struct netlink_callback *cb,
int *t_p, int s_t)
static int tc_dump_tclass(struct sk_buff *skb, struct netlink_callback *cb)
int tc_classify_compat(struct sk_buff *skb, struct tcf_proto *tp,
struct tcf_result *res)
EXPORT_SYMBOL(tc_classify_compat);
int tc_classify(struct sk_buff *skb, struct tcf_proto *tp,
struct tcf_result *res)
EXPORT_SYMBOL(tc_classify);
void tcf_destroy(struct tcf_proto *tp)
void tcf_destroy_chain(struct tcf_proto **fl)
EXPORT_SYMBOL(tcf_destroy_chain);
static int psched_show(struct seq_file *seq, void *v)
static int psched_open(struct inode *inode, struct file *file)
static const struct file_operations psched_fops = ;
static int __net_init psched_net_init(struct net *net)
static void __net_exit psched_net_exit(struct net *net)
static int __net_init psched_net_init(struct net *net)
static void __net_exit psched_net_exit(struct net *net)
static struct pernet_operations psched_net_ops = ;
static int __init pktsched_init(void)
subsys_initcall(pktsched_init);
