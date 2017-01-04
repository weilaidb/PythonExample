MODULE_AUTHOR("Henrik Nordstrom <hno@marasystems.com>");
MODULE_DESCRIPTION("Xtables: connection mark operations");
MODULE_LICENSE("GPL");
MODULE_ALIAS("ipt_CONNMARK");
MODULE_ALIAS("ip6t_CONNMARK");
MODULE_ALIAS("ipt_connmark");
MODULE_ALIAS("ip6t_connmark");
static unsigned int
connmark_tg(struct sk_buff *skb, const struct xt_action_param *par)
static int connmark_tg_check(const struct xt_tgchk_param *par)
static void connmark_tg_destroy(const struct xt_tgdtor_param *par)
static bool
connmark_mt(const struct sk_buff *skb, struct xt_action_param *par)
static int connmark_mt_check(const struct xt_mtchk_param *par)
static void connmark_mt_destroy(const struct xt_mtdtor_param *par)
static struct xt_target connmark_tg_reg __read_mostly = ;
static struct xt_match connmark_mt_reg __read_mostly = ;
static int __init connmark_mt_init(void)
static void __exit connmark_mt_exit(void)
module_init(connmark_mt_init);
module_exit(connmark_mt_exit);
