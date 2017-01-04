MODULE_AUTHOR("Magnus Boden <mb@ozaba.mine.nu>");
MODULE_DESCRIPTION("TFTP connection tracking helper");
MODULE_LICENSE("GPL");
MODULE_ALIAS("ip_conntrack_tftp");
MODULE_ALIAS_NFCT_HELPER("tftp");
#define MAX_PORTS 8
static unsigned short ports[MAX_PORTS];
static unsigned int ports_c;
module_param_array(ports, ushort, &ports_c, 0400);
MODULE_PARM_DESC(ports, "Port numbers of TFTP servers");
unsigned int (*nf_nat_tftp_hook)(struct sk_buff *skb,
enum ip_conntrack_info ctinfo,
struct nf_conntrack_expect *exp) __read_mostly;
EXPORT_SYMBOL_GPL(nf_nat_tftp_hook);
static int tftp_help(struct sk_buff *skb,
unsigned int protoff,
struct nf_conn *ct,
enum ip_conntrack_info ctinfo)
static struct nf_conntrack_helper tftp[MAX_PORTS][2] __read_mostly;
static char tftp_names[MAX_PORTS][2][sizeof("tftp-65535")] __read_mostly;
static const struct nf_conntrack_expect_policy tftp_exp_policy = ;
static void nf_conntrack_tftp_fini(void)
static int __init nf_conntrack_tftp_init(void)
module_init(nf_conntrack_tftp_init);
module_exit(nf_conntrack_tftp_fini);
