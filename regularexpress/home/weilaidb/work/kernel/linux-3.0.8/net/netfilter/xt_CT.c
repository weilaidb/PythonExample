static unsigned int xt_ct_target(struct sk_buff *skb,
const struct xt_action_param *par)
static u8 xt_ct_find_proto(const struct xt_tgchk_param *par)
static int xt_ct_tg_check(const struct xt_tgchk_param *par)
static void xt_ct_tg_destroy(const struct xt_tgdtor_param *par)
static struct xt_target xt_ct_tg __read_mostly = ;
static int __init xt_ct_tg_init(void)
static void __exit xt_ct_tg_exit(void)
module_init(xt_ct_tg_init);
module_exit(xt_ct_tg_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Xtables: connection tracking target");
MODULE_ALIAS("ipt_CT");
MODULE_ALIAS("ip6t_CT");
