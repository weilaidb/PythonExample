MODULE_LICENSE("GPL");
MODULE_AUTHOR("Rusty Russell <rusty@rustcorp.com.au>");
MODULE_DESCRIPTION("ip[6]_tables connection tracking state match module");
MODULE_ALIAS("ipt_state");
MODULE_ALIAS("ip6t_state");
static bool
state_mt(const struct sk_buff *skb, struct xt_action_param *par)
static int state_mt_check(const struct xt_mtchk_param *par)
static void state_mt_destroy(const struct xt_mtdtor_param *par)
static struct xt_match state_mt_reg __read_mostly = ;
static int __init state_mt_init(void)
static void __exit state_mt_exit(void)
module_init(state_mt_init);
module_exit(state_mt_exit);
