#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_AUTHOR("Harald Welte <laforge@netfilter.org>");
MODULE_DESCRIPTION("Xtables: DSCP/TOS field modification");
MODULE_LICENSE("GPL");
MODULE_ALIAS("ipt_DSCP");
MODULE_ALIAS("ip6t_DSCP");
MODULE_ALIAS("ipt_TOS");
MODULE_ALIAS("ip6t_TOS");
static unsigned int
dscp_tg(struct sk_buff *skb, const struct xt_action_param *par)
static unsigned int
dscp_tg6(struct sk_buff *skb, const struct xt_action_param *par)
static int dscp_tg_check(const struct xt_tgchk_param *par)
static unsigned int
tos_tg(struct sk_buff *skb, const struct xt_action_param *par)
static unsigned int
tos_tg6(struct sk_buff *skb, const struct xt_action_param *par)
static struct xt_target dscp_tg_reg[] __read_mostly = ;
static int __init dscp_tg_init(void)
static void __exit dscp_tg_exit(void)
module_init(dscp_tg_init);
module_exit(dscp_tg_exit);
