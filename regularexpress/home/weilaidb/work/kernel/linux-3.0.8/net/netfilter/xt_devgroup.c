MODULE_AUTHOR("Patrick McHardy <kaber@trash.net>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Xtables: Device group match");
MODULE_ALIAS("ipt_devgroup");
MODULE_ALIAS("ip6t_devgroup");
static bool devgroup_mt(const struct sk_buff *skb, struct xt_action_param *par)
static int devgroup_mt_checkentry(const struct xt_mtchk_param *par)
static struct xt_match devgroup_mt_reg __read_mostly = ;
static int __init devgroup_mt_init(void)
static void __exit devgroup_mt_exit(void)
module_init(devgroup_mt_init);
module_exit(devgroup_mt_exit);
