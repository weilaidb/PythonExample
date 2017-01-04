MODULE_DESCRIPTION("Xtables: packet flow tracing");
MODULE_LICENSE("GPL");
MODULE_ALIAS("ipt_TRACE");
MODULE_ALIAS("ip6t_TRACE");
static unsigned int
trace_tg(struct sk_buff *skb, const struct xt_action_param *par)
static struct xt_target trace_tg_reg __read_mostly = ;
static int __init trace_tg_init(void)
static void __exit trace_tg_exit(void)
module_init(trace_tg_init);
module_exit(trace_tg_exit);
