MODULE_AUTHOR("Magnus Boden <mb@ozaba.mine.nu>");
MODULE_DESCRIPTION("TFTP NAT helper");
MODULE_LICENSE("GPL");
MODULE_ALIAS("ip_nat_tftp");
static unsigned int help(struct sk_buff *skb,
enum ip_conntrack_info ctinfo,
struct nf_conntrack_expect *exp)
static void __exit nf_nat_tftp_fini(void)
static int __init nf_nat_tftp_init(void)
module_init(nf_nat_tftp_init);
module_exit(nf_nat_tftp_fini);
