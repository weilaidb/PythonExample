#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Martin Josefsson <gandalf@netfilter.org>");
MODULE_DESCRIPTION("Xtables: Related connection matching");
MODULE_ALIAS("ipt_helper");
MODULE_ALIAS("ip6t_helper");
static bool
helper_mt(const struct sk_buff *skb, struct xt_action_param *par)
static int helper_mt_check(const struct xt_mtchk_param *par)
static void helper_mt_destroy(const struct xt_mtdtor_param *par)
static struct xt_match helper_mt_reg __read_mostly = ;
static int __init helper_mt_init(void)
static void __exit helper_mt_exit(void)
module_init(helper_mt_init);
module_exit(helper_mt_exit);
