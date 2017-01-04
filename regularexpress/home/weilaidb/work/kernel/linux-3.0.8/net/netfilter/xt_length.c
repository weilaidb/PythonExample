MODULE_AUTHOR("James Morris <jmorris@intercode.com.au>");
MODULE_DESCRIPTION("Xtables: Packet length (Layer3,4,5) match");
MODULE_LICENSE("GPL");
MODULE_ALIAS("ipt_length");
MODULE_ALIAS("ip6t_length");
static bool
length_mt(const struct sk_buff *skb, struct xt_action_param *par)
static bool
length_mt6(const struct sk_buff *skb, struct xt_action_param *par)
static struct xt_match length_mt_reg[] __read_mostly = ;
static int __init length_mt_init(void)
static void __exit length_mt_exit(void)
module_init(length_mt_init);
module_exit(length_mt_exit);
