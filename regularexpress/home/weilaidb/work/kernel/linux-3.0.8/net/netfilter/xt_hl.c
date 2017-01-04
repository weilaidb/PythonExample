MODULE_AUTHOR("Maciej Soltysiak <solt@dns.toxicfilms.tv>");
MODULE_DESCRIPTION("Xtables: Hoplimit/TTL field match");
MODULE_LICENSE("GPL");
MODULE_ALIAS("ipt_ttl");
MODULE_ALIAS("ip6t_hl");
static bool ttl_mt(const struct sk_buff *skb, struct xt_action_param *par)
static bool hl_mt6(const struct sk_buff *skb, struct xt_action_param *par)
static struct xt_match hl_mt_reg[] __read_mostly = ;
static int __init hl_mt_init(void)
static void __exit hl_mt_exit(void)
module_init(hl_mt_init);
module_exit(hl_mt_exit);
