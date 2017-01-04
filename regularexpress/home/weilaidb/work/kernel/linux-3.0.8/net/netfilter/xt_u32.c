static bool u32_match_it(const struct xt_u32 *data,
const struct sk_buff *skb)
static bool u32_mt(const struct sk_buff *skb, struct xt_action_param *par)
static struct xt_match xt_u32_mt_reg __read_mostly = ;
static int __init u32_mt_init(void)
static void __exit u32_mt_exit(void)
module_init(u32_mt_init);
module_exit(u32_mt_exit);
MODULE_AUTHOR("Jan Engelhardt <jengelh@medozas.de>");
MODULE_DESCRIPTION("Xtables: arbitrary byte matching");
MODULE_LICENSE("GPL");
MODULE_ALIAS("ipt_u32");
MODULE_ALIAS("ip6t_u32");
