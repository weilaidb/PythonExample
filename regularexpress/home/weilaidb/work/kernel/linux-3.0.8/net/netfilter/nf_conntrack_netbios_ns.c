#define NMBD_PORT	137
MODULE_AUTHOR("Patrick McHardy <kaber@trash.net>");
MODULE_DESCRIPTION("NetBIOS name service broadcast connection tracking helper");
MODULE_LICENSE("GPL");
MODULE_ALIAS("ip_conntrack_netbios_ns");
MODULE_ALIAS_NFCT_HELPER("netbios_ns");
static unsigned int timeout __read_mostly = 3;
module_param(timeout, uint, S_IRUSR);
MODULE_PARM_DESC(timeout, "timeout for master connection/replies in seconds");
static struct nf_conntrack_expect_policy exp_policy = ;
static int netbios_ns_help(struct sk_buff *skb, unsigned int protoff,
struct nf_conn *ct, enum ip_conntrack_info ctinfo)
static struct nf_conntrack_helper helper __read_mostly = ;
static int __init nf_conntrack_netbios_ns_init(void)
static void __exit nf_conntrack_netbios_ns_fini(void)
module_init(nf_conntrack_netbios_ns_init);
module_exit(nf_conntrack_netbios_ns_fini);
