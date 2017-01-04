static unsigned int master_timeout __read_mostly = 300;
static char *ts_algo = "kmp";
MODULE_AUTHOR("Brian J. Murrell <netfilter@interlinx.bc.ca>");
MODULE_DESCRIPTION("Amanda connection tracking module");
MODULE_LICENSE("GPL");
MODULE_ALIAS("ip_conntrack_amanda");
MODULE_ALIAS_NFCT_HELPER("amanda");
module_param(master_timeout, uint, 0600);
MODULE_PARM_DESC(master_timeout, "timeout for the master connection");
module_param(ts_algo, charp, 0400);
MODULE_PARM_DESC(ts_algo, "textsearch algorithm to use (default kmp)");
unsigned int (*nf_nat_amanda_hook)(struct sk_buff *skb,
enum ip_conntrack_info ctinfo,
unsigned int matchoff,
unsigned int matchlen,
struct nf_conntrack_expect *exp)
__read_mostly;
EXPORT_SYMBOL_GPL(nf_nat_amanda_hook);
enum amanda_strings ;
static struct  search[] __read_mostly = ;
static int amanda_help(struct sk_buff *skb,
unsigned int protoff,
struct nf_conn *ct,
enum ip_conntrack_info ctinfo)
static const struct nf_conntrack_expect_policy amanda_exp_policy = ;
static struct nf_conntrack_helper amanda_helper[2] __read_mostly = ;
static void __exit nf_conntrack_amanda_fini(void)
static int __init nf_conntrack_amanda_init(void)
module_init(nf_conntrack_amanda_init);
module_exit(nf_conntrack_amanda_fini);
