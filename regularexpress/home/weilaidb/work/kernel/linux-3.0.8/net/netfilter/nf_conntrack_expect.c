unsigned int nf_ct_expect_hsize __read_mostly;
EXPORT_SYMBOL_GPL(nf_ct_expect_hsize);
unsigned int nf_ct_expect_max __read_mostly;
static struct kmem_cache *nf_ct_expect_cachep __read_mostly;
static HLIST_HEAD(nf_ct_userspace_expect_list);
void nf_ct_unlink_expect_report(struct nf_conntrack_expect *exp,
u32 pid, int report)
EXPORT_SYMBOL_GPL(nf_ct_unlink_expect_report);
static void nf_ct_expectation_timed_out(unsigned long ul_expect)
static unsigned int nf_ct_expect_dst_hash(const struct nf_conntrack_tuple *tuple)
struct nf_conntrack_expect *
__nf_ct_expect_find(struct net *net, u16 zone,
const struct nf_conntrack_tuple *tuple)
EXPORT_SYMBOL_GPL(__nf_ct_expect_find);
struct nf_conntrack_expect *
nf_ct_expect_find_get(struct net *net, u16 zone,
const struct nf_conntrack_tuple *tuple)
EXPORT_SYMBOL_GPL(nf_ct_expect_find_get);
struct nf_conntrack_expect *
nf_ct_find_expectation(struct net *net, u16 zone,
const struct nf_conntrack_tuple *tuple)
void nf_ct_remove_expectations(struct nf_conn *ct)
EXPORT_SYMBOL_GPL(nf_ct_remove_expectations);
static inline int expect_clash(const struct nf_conntrack_expect *a,
const struct nf_conntrack_expect *b)
static inline int expect_matches(const struct nf_conntrack_expect *a,
const struct nf_conntrack_expect *b)
void nf_ct_unexpect_related(struct nf_conntrack_expect *exp)
EXPORT_SYMBOL_GPL(nf_ct_unexpect_related);
struct nf_conntrack_expect *nf_ct_expect_alloc(struct nf_conn *me)
EXPORT_SYMBOL_GPL(nf_ct_expect_alloc);
void nf_ct_expect_init(struct nf_conntrack_expect *exp, unsigned int class,
u_int8_t family,
const union nf_inet_addr *saddr,
const union nf_inet_addr *daddr,
u_int8_t proto, const __be16 *src, const __be16 *dst)
EXPORT_SYMBOL_GPL(nf_ct_expect_init);
static void nf_ct_expect_free_rcu(struct rcu_head *head)
void nf_ct_expect_put(struct nf_conntrack_expect *exp)
EXPORT_SYMBOL_GPL(nf_ct_expect_put);
static void nf_ct_expect_insert(struct nf_conntrack_expect *exp)
static void evict_oldest_expect(struct nf_conn *master,
struct nf_conntrack_expect *new)
static inline int refresh_timer(struct nf_conntrack_expect *i)
static inline int __nf_ct_expect_check(struct nf_conntrack_expect *expect)
int nf_ct_expect_related_report(struct nf_conntrack_expect *expect,
u32 pid, int report)
EXPORT_SYMBOL_GPL(nf_ct_expect_related_report);
void nf_ct_remove_userspace_expectations(void)
EXPORT_SYMBOL_GPL(nf_ct_remove_userspace_expectations);
struct ct_expect_iter_state ;
static struct hlist_node *ct_expect_get_first(struct seq_file *seq)
static struct hlist_node *ct_expect_get_next(struct seq_file *seq,
struct hlist_node *head)
static struct hlist_node *ct_expect_get_idx(struct seq_file *seq, loff_t pos)
static void *exp_seq_start(struct seq_file *seq, loff_t *pos)
__acquires(RCU)
static void *exp_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void exp_seq_stop(struct seq_file *seq, void *v)
__releases(RCU)
static int exp_seq_show(struct seq_file *s, void *v)
static const struct seq_operations exp_seq_ops = ;
static int exp_open(struct inode *inode, struct file *file)
static const struct file_operations exp_file_ops = ;
static int exp_proc_init(struct net *net)
static void exp_proc_remove(struct net *net)
module_param_named(expect_hashsize, nf_ct_expect_hsize, uint, 0400);
int nf_conntrack_expect_init(struct net *net)
void nf_conntrack_expect_fini(struct net *net)
