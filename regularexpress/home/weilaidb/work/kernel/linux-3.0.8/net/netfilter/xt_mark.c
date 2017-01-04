MODULE_LICENSE("GPL");
MODULE_AUTHOR("Marc Boucher <marc@mbsi.ca>");
MODULE_DESCRIPTION("Xtables: packet mark operations");
MODULE_ALIAS("ipt_mark");
MODULE_ALIAS("ip6t_mark");
MODULE_ALIAS("ipt_MARK");
MODULE_ALIAS("ip6t_MARK");
static unsigned int
mark_tg(struct sk_buff *skb, const struct xt_action_param *par)
static bool
mark_mt(const struct sk_buff *skb, struct xt_action_param *par)
static struct xt_target mark_tg_reg __read_mostly = ;
static struct xt_match mark_mt_reg __read_mostly = ;
static int __init mark_mt_init(void)
static void __exit mark_mt_exit(void)
module_init(mark_mt_init);
module_exit(mark_mt_exit);
