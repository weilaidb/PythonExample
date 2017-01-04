MODULE_AUTHOR("Patrick McHardy <kaber@trash.net>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Xtables: Qdisc classification");
MODULE_ALIAS("ipt_CLASSIFY");
MODULE_ALIAS("ip6t_CLASSIFY");
MODULE_ALIAS("arpt_CLASSIFY");
static unsigned int
classify_tg(struct sk_buff *skb, const struct xt_action_param *par)
static struct xt_target classify_tg_reg[] __read_mostly = ;
static int __init classify_tg_init(void)
static void __exit classify_tg_exit(void)
module_init(classify_tg_init);
module_exit(classify_tg_exit);
