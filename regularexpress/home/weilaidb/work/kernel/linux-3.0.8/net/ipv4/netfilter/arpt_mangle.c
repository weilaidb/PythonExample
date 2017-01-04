MODULE_LICENSE("GPL");
MODULE_AUTHOR("Bart De Schuymer <bdschuym@pandora.be>");
MODULE_DESCRIPTION("arptables arp payload mangle target");
static unsigned int
target(struct sk_buff *skb, const struct xt_action_param *par)
static int checkentry(const struct xt_tgchk_param *par)
static struct xt_target arpt_mangle_reg __read_mostly = ;
static int __init arpt_mangle_init(void)
static void __exit arpt_mangle_fini(void)
module_init(arpt_mangle_init);
module_exit(arpt_mangle_fini);
