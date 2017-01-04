MODULE_AUTHOR("Harald Welte <laforge@gnumonks.org>");
MODULE_DESCRIPTION("IRC (DCC) NAT helper");
MODULE_LICENSE("GPL");
MODULE_ALIAS("ip_nat_irc");
static unsigned int help(struct sk_buff *skb,
enum ip_conntrack_info ctinfo,
unsigned int matchoff,
unsigned int matchlen,
struct nf_conntrack_expect *exp)
static void __exit nf_nat_irc_fini(void)
static int __init nf_nat_irc_init(void)
static int warn_set(const char *val, struct kernel_param *kp)
module_param_call(ports, warn_set, NULL, NULL, 0);
module_init(nf_nat_irc_init);
module_exit(nf_nat_irc_fini);
