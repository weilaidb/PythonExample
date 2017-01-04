MODULE_LICENSE("GPL");
MODULE_AUTHOR("Eric Dumazet <eric.dumazet@gmail.com>");
MODULE_DESCRIPTION("Xtables: CPU match");
MODULE_ALIAS("ipt_cpu");
MODULE_ALIAS("ip6t_cpu");
static int cpu_mt_check(const struct xt_mtchk_param *par)
static bool cpu_mt(const struct sk_buff *skb, struct xt_action_param *par)
static struct xt_match cpu_mt_reg __read_mostly = ;
static int __init cpu_mt_init(void)
static void __exit cpu_mt_exit(void)
module_init(cpu_mt_init);
module_exit(cpu_mt_exit);
