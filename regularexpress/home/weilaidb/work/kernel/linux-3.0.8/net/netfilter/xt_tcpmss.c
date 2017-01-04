MODULE_LICENSE("GPL");
MODULE_AUTHOR("Marc Boucher <marc@mbsi.ca>");
MODULE_DESCRIPTION("Xtables: TCP MSS match");
MODULE_ALIAS("ipt_tcpmss");
MODULE_ALIAS("ip6t_tcpmss");
static bool
tcpmss_mt(const struct sk_buff *skb, struct xt_action_param *par)
static struct xt_match tcpmss_mt_reg[] __read_mostly = ;
static int __init tcpmss_mt_init(void)
static void __exit tcpmss_mt_exit(void)
module_init(tcpmss_mt_init);
module_exit(tcpmss_mt_exit);
