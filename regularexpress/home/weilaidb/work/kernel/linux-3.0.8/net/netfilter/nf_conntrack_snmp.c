#define SNMP_PORT	161
MODULE_AUTHOR("Jiri Olsa <jolsa@redhat.com>");
MODULE_DESCRIPTION("SNMP service broadcast connection tracking helper");
MODULE_LICENSE("GPL");
MODULE_ALIAS_NFCT_HELPER("snmp");
static unsigned int timeout __read_mostly = 30;
module_param(timeout, uint, S_IRUSR);
MODULE_PARM_DESC(timeout, "timeout for master connection/replies in seconds");
int (*nf_nat_snmp_hook)(struct sk_buff *skb,
unsigned int protoff,
struct nf_conn *ct,
enum ip_conntrack_info ctinfo);
EXPORT_SYMBOL_GPL(nf_nat_snmp_hook);
static int snmp_conntrack_help(struct sk_buff *skb, unsigned int protoff,
struct nf_conn *ct, enum ip_conntrack_info ctinfo)
static struct nf_conntrack_expect_policy exp_policy = ;
static struct nf_conntrack_helper helper __read_mostly = ;
static int __init nf_conntrack_snmp_init(void)
static void __exit nf_conntrack_snmp_fini(void)
module_init(nf_conntrack_snmp_init);
module_exit(nf_conntrack_snmp_fini);
