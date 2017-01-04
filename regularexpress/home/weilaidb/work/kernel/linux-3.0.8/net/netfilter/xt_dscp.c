#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_AUTHOR("Harald Welte <laforge@netfilter.org>");
MODULE_DESCRIPTION("Xtables: DSCP/TOS field match");
MODULE_LICENSE("GPL");
MODULE_ALIAS("ipt_dscp");
MODULE_ALIAS("ip6t_dscp");
MODULE_ALIAS("ipt_tos");
MODULE_ALIAS("ip6t_tos");
static bool
dscp_mt(const struct sk_buff *skb, struct xt_action_param *par)
static bool
dscp_mt6(const struct sk_buff *skb, struct xt_action_param *par)
static int dscp_mt_check(const struct xt_mtchk_param *par)
static bool tos_mt(const struct sk_buff *skb, struct xt_action_param *par)
static struct xt_match dscp_mt_reg[] __read_mostly = ;
static int __init dscp_mt_init(void)
static void __exit dscp_mt_exit(void)
module_init(dscp_mt_init);
module_exit(dscp_mt_exit);
