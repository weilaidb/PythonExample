static bool
xt_rateest_mt(const struct sk_buff *skb, struct xt_action_param *par)
static int xt_rateest_mt_checkentry(const struct xt_mtchk_param *par)
static void xt_rateest_mt_destroy(const struct xt_mtdtor_param *par)
static struct xt_match xt_rateest_mt_reg __read_mostly = ;
static int __init xt_rateest_mt_init(void)
static void __exit xt_rateest_mt_fini(void)
MODULE_AUTHOR("Patrick McHardy <kaber@trash.net>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("xtables rate estimator match");
MODULE_ALIAS("ipt_rateest");
MODULE_ALIAS("ip6t_rateest");
module_init(xt_rateest_mt_init);
module_exit(xt_rateest_mt_fini);
