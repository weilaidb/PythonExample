#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Netfilter Core Team <coreteam@netfilter.org>");
MODULE_DESCRIPTION("Xtables: Connection redirection to localhost");
static int redirect_tg_check(const struct xt_tgchk_param *par)
static unsigned int
redirect_tg(struct sk_buff *skb, const struct xt_action_param *par)
static struct xt_target redirect_tg_reg __read_mostly = ;
static int __init redirect_tg_init(void)
static void __exit redirect_tg_exit(void)
module_init(redirect_tg_init);
module_exit(redirect_tg_exit);
