struct xt_quota_priv ;
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Sam Johnston <samj@samj.net>");
MODULE_DESCRIPTION("Xtables: countdown quota match");
MODULE_ALIAS("ipt_quota");
MODULE_ALIAS("ip6t_quota");
static bool
quota_mt(const struct sk_buff *skb, struct xt_action_param *par)
static int quota_mt_check(const struct xt_mtchk_param *par)
static void quota_mt_destroy(const struct xt_mtdtor_param *par)
static struct xt_match quota_mt_reg __read_mostly = ;
static int __init quota_mt_init(void)
static void __exit quota_mt_exit(void)
module_init(quota_mt_init);
module_exit(quota_mt_exit);
