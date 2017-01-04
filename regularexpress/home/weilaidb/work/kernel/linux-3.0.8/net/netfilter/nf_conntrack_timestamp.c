static int nf_ct_tstamp __read_mostly;
module_param_named(tstamp, nf_ct_tstamp, bool, 0644);
MODULE_PARM_DESC(tstamp, "Enable connection tracking flow timestamping.");
static struct ctl_table tstamp_sysctl_table[] = ;
static struct nf_ct_ext_type tstamp_extend __read_mostly = ;
static int nf_conntrack_tstamp_init_sysctl(struct net *net)
static void nf_conntrack_tstamp_fini_sysctl(struct net *net)
static int nf_conntrack_tstamp_init_sysctl(struct net *net)
static void nf_conntrack_tstamp_fini_sysctl(struct net *net)
int nf_conntrack_tstamp_init(struct net *net)
void nf_conntrack_tstamp_fini(struct net *net)
