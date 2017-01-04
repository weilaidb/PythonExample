MODULE_DESCRIPTION("Xtables: Disabling connection tracking for packets");
MODULE_LICENSE("GPL");
MODULE_ALIAS("ipt_NOTRACK");
MODULE_ALIAS("ip6t_NOTRACK");
static unsigned int
notrack_tg(struct sk_buff *skb, const struct xt_action_param *par)
static struct xt_target notrack_tg_reg __read_mostly = ;
static int __init notrack_tg_init(void)
static void __exit notrack_tg_exit(void)
module_init(notrack_tg_init);
module_exit(notrack_tg_exit);
