MODULE_LICENSE("GPL");
MODULE_AUTHOR("Michal Ludvig <michal@logix.cz>");
MODULE_DESCRIPTION("Xtables: link layer packet type match");
MODULE_ALIAS("ipt_pkttype");
MODULE_ALIAS("ip6t_pkttype");
static bool
pkttype_mt(const struct sk_buff *skb, struct xt_action_param *par)
static struct xt_match pkttype_mt_reg __read_mostly = ;
static int __init pkttype_mt_init(void)
static void __exit pkttype_mt_exit(void)
module_init(pkttype_mt_init);
module_exit(pkttype_mt_exit);
