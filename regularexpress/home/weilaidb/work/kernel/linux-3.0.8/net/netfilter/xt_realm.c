MODULE_AUTHOR("Sampsa Ranta <sampsa@netsonic.fi>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Xtables: Routing realm match");
MODULE_ALIAS("ipt_realm");
static bool
realm_mt(const struct sk_buff *skb, struct xt_action_param *par)
static struct xt_match realm_mt_reg __read_mostly = ;
static int __init realm_mt_init(void)
static void __exit realm_mt_exit(void)
module_init(realm_mt_init);
module_exit(realm_mt_exit);
