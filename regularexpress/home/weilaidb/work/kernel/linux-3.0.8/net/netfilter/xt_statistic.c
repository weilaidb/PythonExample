struct xt_statistic_priv  ____cacheline_aligned_in_smp;
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Patrick McHardy <kaber@trash.net>");
MODULE_DESCRIPTION("Xtables: statistics-based matching (\"Nth\", random)");
MODULE_ALIAS("ipt_statistic");
MODULE_ALIAS("ip6t_statistic");
static bool
statistic_mt(const struct sk_buff *skb, struct xt_action_param *par)
static int statistic_mt_check(const struct xt_mtchk_param *par)
static void statistic_mt_destroy(const struct xt_mtdtor_param *par)
static struct xt_match xt_statistic_mt_reg __read_mostly = ;
static int __init statistic_mt_init(void)
static void __exit statistic_mt_exit(void)
module_init(statistic_mt_init);
module_exit(statistic_mt_exit);
