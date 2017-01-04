MODULE_AUTHOR("Patrick McHardy <kaber@trash.net>");
MODULE_DESCRIPTION("Xtables: packet logging to netlink using NFLOG");
MODULE_LICENSE("GPL");
MODULE_ALIAS("ipt_NFLOG");
MODULE_ALIAS("ip6t_NFLOG");
static unsigned int
nflog_tg(struct sk_buff *skb, const struct xt_action_param *par)
static int nflog_tg_check(const struct xt_tgchk_param *par)
static struct xt_target nflog_tg_reg __read_mostly = ;
static int __init nflog_tg_init(void)
static void __exit nflog_tg_exit(void)
module_init(nflog_tg_init);
module_exit(nflog_tg_exit);
