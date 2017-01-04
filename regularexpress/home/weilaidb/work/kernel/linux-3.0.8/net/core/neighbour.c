#define NEIGH_DEBUG 1
#define NEIGH_PRINTK(x...) printk(x)
#define NEIGH_NOPRINTK(x...) do  while(0)
#define NEIGH_PRINTK1 NEIGH_NOPRINTK
#define NEIGH_PRINTK2 NEIGH_NOPRINTK
#if NEIGH_DEBUG >= 1
#undef NEIGH_PRINTK1
#define NEIGH_PRINTK1 NEIGH_PRINTK
#if NEIGH_DEBUG >= 2
#undef NEIGH_PRINTK2
#define NEIGH_PRINTK2 NEIGH_PRINTK
#define PNEIGH_HASHMASK		0xF
static void neigh_timer_handler(unsigned long arg);
static void __neigh_notify(struct neighbour *n, int type, int flags);
static void neigh_update_notify(struct neighbour *neigh);
static int pneigh_ifdown(struct neigh_table *tbl, struct net_device *dev);
static struct neigh_table *neigh_tables;
static const struct file_operations neigh_stat_seq_fops;
static DEFINE_RWLOCK(neigh_tbl_lock);
static int neigh_blackhole(struct sk_buff *skb)
static void neigh_cleanup_and_release(struct neighbour *neigh)
unsigned long neigh_rand_reach_time(unsigned long base)
EXPORT_SYMBOL(neigh_rand_reach_time);
static int neigh_forced_gc(struct neigh_table *tbl)
static void neigh_add_timer(struct neighbour *n, unsigned long when)
static int neigh_del_timer(struct neighbour *n)
static void pneigh_queue_purge(struct sk_buff_head *list)
static void neigh_flush_dev(struct neigh_table *tbl, struct net_device *dev)
void neigh_changeaddr(struct neigh_table *tbl, struct net_device *dev)
EXPORT_SYMBOL(neigh_changeaddr);
int neigh_ifdown(struct neigh_table *tbl, struct net_device *dev)
EXPORT_SYMBOL(neigh_ifdown);
static struct neighbour *neigh_alloc(struct neigh_table *tbl)
static struct neigh_hash_table *neigh_hash_alloc(unsigned int entries)
static void neigh_hash_free_rcu(struct rcu_head *head)
static struct neigh_hash_table *neigh_hash_grow(struct neigh_table *tbl,
unsigned long new_entries)
struct neighbour *neigh_lookup(struct neigh_table *tbl, const void *pkey,
struct net_device *dev)
EXPORT_SYMBOL(neigh_lookup);
struct neighbour *neigh_lookup_nodev(struct neigh_table *tbl, struct net *net,
const void *pkey)
EXPORT_SYMBOL(neigh_lookup_nodev);
struct neighbour *neigh_create(struct neigh_table *tbl, const void *pkey,
struct net_device *dev)
EXPORT_SYMBOL(neigh_create);
static u32 pneigh_hash(const void *pkey, int key_len)
static struct pneigh_entry *__pneigh_lookup_1(struct pneigh_entry *n,
struct net *net,
const void *pkey,
int key_len,
struct net_device *dev)
struct pneigh_entry *__pneigh_lookup(struct neigh_table *tbl,
struct net *net, const void *pkey, struct net_device *dev)
EXPORT_SYMBOL_GPL(__pneigh_lookup);
struct pneigh_entry * pneigh_lookup(struct neigh_table *tbl,
struct net *net, const void *pkey,
struct net_device *dev, int creat)
EXPORT_SYMBOL(pneigh_lookup);
int pneigh_delete(struct neigh_table *tbl, struct net *net, const void *pkey,
struct net_device *dev)
static int pneigh_ifdown(struct neigh_table *tbl, struct net_device *dev)
static void neigh_parms_destroy(struct neigh_parms *parms);
static inline void neigh_parms_put(struct neigh_parms *parms)
static void neigh_destroy_rcu(struct rcu_head *head)
void neigh_destroy(struct neighbour *neigh)
EXPORT_SYMBOL(neigh_destroy);
static void neigh_suspect(struct neighbour *neigh)
static void neigh_connect(struct neighbour *neigh)
static void neigh_periodic_work(struct work_struct *work)
static __inline__ int neigh_max_probes(struct neighbour *n)
static void neigh_invalidate(struct neighbour *neigh)
__releases(neigh->lock)
__acquires(neigh->lock)
static void neigh_timer_handler(unsigned long arg)
int __neigh_event_send(struct neighbour *neigh, struct sk_buff *skb)
EXPORT_SYMBOL(__neigh_event_send);
static void neigh_update_hhs(const struct neighbour *neigh)
int neigh_update(struct neighbour *neigh, const u8 *lladdr, u8 new,
u32 flags)
EXPORT_SYMBOL(neigh_update);
struct neighbour *neigh_event_ns(struct neigh_table *tbl,
u8 *lladdr, void *saddr,
struct net_device *dev)
EXPORT_SYMBOL(neigh_event_ns);
static inline bool neigh_hh_lookup(struct neighbour *n, struct dst_entry *dst,
__be16 protocol)
static void neigh_hh_init(struct neighbour *n, struct dst_entry *dst,
__be16 protocol)
int neigh_compat_output(struct sk_buff *skb)
EXPORT_SYMBOL(neigh_compat_output);
int neigh_resolve_output(struct sk_buff *skb)
EXPORT_SYMBOL(neigh_resolve_output);
int neigh_connected_output(struct sk_buff *skb)
EXPORT_SYMBOL(neigh_connected_output);
static void neigh_proxy_process(unsigned long arg)
void pneigh_enqueue(struct neigh_table *tbl, struct neigh_parms *p,
struct sk_buff *skb)
EXPORT_SYMBOL(pneigh_enqueue);
static inline struct neigh_parms *lookup_neigh_parms(struct neigh_table *tbl,
struct net *net, int ifindex)
struct neigh_parms *neigh_parms_alloc(struct net_device *dev,
struct neigh_table *tbl)
EXPORT_SYMBOL(neigh_parms_alloc);
static void neigh_rcu_free_parms(struct rcu_head *head)
void neigh_parms_release(struct neigh_table *tbl, struct neigh_parms *parms)
EXPORT_SYMBOL(neigh_parms_release);
static void neigh_parms_destroy(struct neigh_parms *parms)
static struct lock_class_key neigh_table_proxy_queue_class;
void neigh_table_init_no_netlink(struct neigh_table *tbl)
EXPORT_SYMBOL(neigh_table_init_no_netlink);
void neigh_table_init(struct neigh_table *tbl)
EXPORT_SYMBOL(neigh_table_init);
int neigh_table_clear(struct neigh_table *tbl)
EXPORT_SYMBOL(neigh_table_clear);
static int neigh_delete(struct sk_buff *skb, struct nlmsghdr *nlh, void *arg)
static int neigh_add(struct sk_buff *skb, struct nlmsghdr *nlh, void *arg)
static int neightbl_fill_parms(struct sk_buff *skb, struct neigh_parms *parms)
static int neightbl_fill_info(struct sk_buff *skb, struct neigh_table *tbl,
u32 pid, u32 seq, int type, int flags)
static int neightbl_fill_param_info(struct sk_buff *skb,
struct neigh_table *tbl,
struct neigh_parms *parms,
u32 pid, u32 seq, int type,
unsigned int flags)
static const struct nla_policy nl_neightbl_policy[NDTA_MAX+1] = ;
static const struct nla_policy nl_ntbl_parm_policy[NDTPA_MAX+1] = ;
static int neightbl_set(struct sk_buff *skb, struct nlmsghdr *nlh, void *arg)
static int neightbl_dump_info(struct sk_buff *skb, struct netlink_callback *cb)
static int neigh_fill_info(struct sk_buff *skb, struct neighbour *neigh,
u32 pid, u32 seq, int type, unsigned int flags)
static void neigh_update_notify(struct neighbour *neigh)
static int neigh_dump_table(struct neigh_table *tbl, struct sk_buff *skb,
struct netlink_callback *cb)
static int neigh_dump_info(struct sk_buff *skb, struct netlink_callback *cb)
void neigh_for_each(struct neigh_table *tbl, void (*cb)(struct neighbour *, void *), void *cookie)
EXPORT_SYMBOL(neigh_for_each);
void __neigh_for_each_release(struct neigh_table *tbl,
int (*cb)(struct neighbour *))
EXPORT_SYMBOL(__neigh_for_each_release);
static struct neighbour *neigh_get_first(struct seq_file *seq)
static struct neighbour *neigh_get_next(struct seq_file *seq,
struct neighbour *n,
loff_t *pos)
static struct neighbour *neigh_get_idx(struct seq_file *seq, loff_t *pos)
static struct pneigh_entry *pneigh_get_first(struct seq_file *seq)
static struct pneigh_entry *pneigh_get_next(struct seq_file *seq,
struct pneigh_entry *pn,
loff_t *pos)
static struct pneigh_entry *pneigh_get_idx(struct seq_file *seq, loff_t *pos)
static void *neigh_get_idx_any(struct seq_file *seq, loff_t *pos)
void *neigh_seq_start(struct seq_file *seq, loff_t *pos, struct neigh_table *tbl, unsigned int neigh_seq_flags)
__acquires(rcu_bh)
EXPORT_SYMBOL(neigh_seq_start);
void *neigh_seq_next(struct seq_file *seq, void *v, loff_t *pos)
EXPORT_SYMBOL(neigh_seq_next);
void neigh_seq_stop(struct seq_file *seq, void *v)
__releases(rcu_bh)
EXPORT_SYMBOL(neigh_seq_stop);
static void *neigh_stat_seq_start(struct seq_file *seq, loff_t *pos)
static void *neigh_stat_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void neigh_stat_seq_stop(struct seq_file *seq, void *v)
static int neigh_stat_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations neigh_stat_seq_ops = ;
static int neigh_stat_seq_open(struct inode *inode, struct file *file)
;
static const struct file_operations neigh_stat_seq_fops = ;
static inline size_t neigh_nlmsg_size(void)
static void __neigh_notify(struct neighbour *n, int type, int flags)
void neigh_app_ns(struct neighbour *n)
EXPORT_SYMBOL(neigh_app_ns);
#define NEIGH_VARS_MAX 19
static struct neigh_sysctl_table  neigh_sysctl_template __read_mostly = ;
int neigh_sysctl_register(struct net_device *dev, struct neigh_parms *p,
char *p_name, proc_handler *handler)
EXPORT_SYMBOL(neigh_sysctl_register);
void neigh_sysctl_unregister(struct neigh_parms *p)
EXPORT_SYMBOL(neigh_sysctl_unregister);
static int __init neigh_init(void)
subsys_initcall(neigh_init);
