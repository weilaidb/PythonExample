static bool
owner_mt(const struct sk_buff *skb, struct xt_action_param *par)
static struct xt_match owner_mt_reg __read_mostly = ;
static int __init owner_mt_init(void)
static void __exit owner_mt_exit(void)
module_init(owner_mt_init);
module_exit(owner_mt_exit);
MODULE_AUTHOR("Jan Engelhardt <jengelh@medozas.de>");
MODULE_DESCRIPTION("Xtables: socket owner matching");
MODULE_LICENSE("GPL");
MODULE_ALIAS("ipt_owner");
MODULE_ALIAS("ip6t_owner");
