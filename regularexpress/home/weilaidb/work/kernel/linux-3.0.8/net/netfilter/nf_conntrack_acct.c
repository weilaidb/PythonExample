static int nf_ct_acct __read_mostly;
module_param_named(acct, nf_ct_acct, bool, 0644);
MODULE_PARM_DESC(acct, "Enable connection tracking flow accounting.");
static struct ctl_table acct_sysctl_table[] = ;
unsigned int
seq_print_acct(struct seq_file *s, const struct nf_conn *ct, int dir)
;
EXPORT_SYMBOL_GPL(seq_print_acct);
static struct nf_ct_ext_type acct_extend __read_mostly = ;
static int nf_conntrack_acct_init_sysctl(struct net *net)
static void nf_conntrack_acct_fini_sysctl(struct net *net)
static int nf_conntrack_acct_init_sysctl(struct net *net)
static void nf_conntrack_acct_fini_sysctl(struct net *net)
int nf_conntrack_acct_init(struct net *net)
void nf_conntrack_acct_fini(struct net *net)
