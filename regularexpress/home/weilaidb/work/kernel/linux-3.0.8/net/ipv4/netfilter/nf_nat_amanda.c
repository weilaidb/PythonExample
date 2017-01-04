MODULE_AUTHOR("Brian J. Murrell <netfilter@interlinx.bc.ca>");
MODULE_DESCRIPTION("Amanda NAT helper");
MODULE_LICENSE("GPL");
MODULE_ALIAS("ip_nat_amanda");
static unsigned int help(struct sk_buff *skb,
enum ip_conntrack_info ctinfo,
unsigned int matchoff,
unsigned int matchlen,
struct nf_conntrack_expect *exp)
static void __exit nf_nat_amanda_fini(void)
static int __init nf_nat_amanda_init(void)
module_init(nf_nat_amanda_init);
module_exit(nf_nat_amanda_fini);
