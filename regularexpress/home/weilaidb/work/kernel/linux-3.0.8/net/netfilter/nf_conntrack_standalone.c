MODULE_LICENSE("GPL");
int
print_tuple(struct seq_file *s, const struct nf_conntrack_tuple *tuple,
const struct nf_conntrack_l3proto *l3proto,
const struct nf_conntrack_l4proto *l4proto)
EXPORT_SYMBOL_GPL(print_tuple);
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
static int ct_show_delta_time(struct seq_file *s, const struct nf_conn *ct)
static inline int
ct_show_delta_time(struct seq_file *s, const struct nf_conn *ct)
static int ct_seq_show(struct seq_file *s, void *v)
static const struct seq_operations ct_seq_ops = ;
static int ct_open(struct inode *inode, struct file *file)
static const struct file_operations ct_file_ops = ;
static void *ct_cpu_seq_start(struct seq_file *seq, loff_t *pos)
static void *ct_cpu_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void ct_cpu_seq_stop(struct seq_file *seq, void *v)
static int ct_cpu_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations ct_cpu_seq_ops = ;
static int ct_cpu_seq_open(struct inode *inode, struct file *file)
static const struct file_operations ct_cpu_seq_fops = ;
static int nf_conntrack_standalone_init_proc(struct net *net)
static void nf_conntrack_standalone_fini_proc(struct net *net)
static int nf_conntrack_standalone_init_proc(struct net *net)
static void nf_conntrack_standalone_fini_proc(struct net *net)
static int log_invalid_proto_min = 0;
static int log_invalid_proto_max = 255;
static struct ctl_table_header *nf_ct_netfilter_header;
static ctl_table nf_ct_sysctl_table[] = ;
#define NET_NF_CONNTRACK_MAX 2089
static ctl_table nf_ct_netfilter_table[] = ;
static struct ctl_path nf_ct_path[] = ;
static int nf_conntrack_standalone_init_sysctl(struct net *net)
static void nf_conntrack_standalone_fini_sysctl(struct net *net)
static int nf_conntrack_standalone_init_sysctl(struct net *net)
static void nf_conntrack_standalone_fini_sysctl(struct net *net)
static int nf_conntrack_net_init(struct net *net)
static void nf_conntrack_net_exit(struct net *net)
static struct pernet_operations nf_conntrack_net_ops = ;
static int __init nf_conntrack_standalone_init(void)
static void __exit nf_conntrack_standalone_fini(void)
module_init(nf_conntrack_standalone_init);
module_exit(nf_conntrack_standalone_fini);
void need_conntrack(void)
EXPORT_SYMBOL_GPL(need_conntrack);
