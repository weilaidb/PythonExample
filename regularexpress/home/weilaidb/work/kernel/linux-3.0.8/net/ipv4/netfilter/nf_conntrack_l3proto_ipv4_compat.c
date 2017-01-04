struct ct_iter_state ;
static struct hlist_nulls_node *ct_get_first(struct seq_file *seq)
static struct hlist_nulls_node *ct_get_next(struct seq_file *seq,
struct hlist_nulls_node *head)
static struct hlist_nulls_node *ct_get_idx(struct seq_file *seq, loff_t pos)
static void *ct_seq_start(struct seq_file *seq, loff_t *pos)
__acquires(RCU)
static void *ct_seq_next(struct seq_file *s, void *v, loff_t *pos)
static void ct_seq_stop(struct seq_file *s, void *v)
__releases(RCU)
static int ct_show_secctx(struct seq_file *s, const struct nf_conn *ct)
static inline int ct_show_secctx(struct seq_file *s, const struct nf_conn *ct)
static int ct_seq_show(struct seq_file *s, void *v)
static const struct seq_operations ct_seq_ops = ;
static int ct_open(struct inode *inode, struct file *file)
static const struct file_operations ct_file_ops = ;
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
static const struct file_operations ip_exp_file_ops = ;
static void *ct_cpu_seq_start(struct seq_file *seq, loff_t *pos)
static void *ct_cpu_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void ct_cpu_seq_stop(struct seq_file *seq, void *v)
static int ct_cpu_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations ct_cpu_seq_ops = ;
static int ct_cpu_seq_open(struct inode *inode, struct file *file)
static const struct file_operations ct_cpu_seq_fops = ;
static int __net_init ip_conntrack_net_init(struct net *net)
static void __net_exit ip_conntrack_net_exit(struct net *net)
static struct pernet_operations ip_conntrack_net_ops = ;
int __init nf_conntrack_ipv4_compat_init(void)
void __exit nf_conntrack_ipv4_compat_fini(void)
