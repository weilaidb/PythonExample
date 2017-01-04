MODULE_AUTHOR("Brad Fisher <brad@info-link.net>");
MODULE_DESCRIPTION("Xtables: No-op match which can be tagged with a comment");
MODULE_LICENSE("GPL");
MODULE_ALIAS("ipt_comment");
MODULE_ALIAS("ip6t_comment");
static bool
comment_mt(const struct sk_buff *skb, struct xt_action_param *par)
static struct xt_match comment_mt_reg __read_mostly = ;
static int __init comment_mt_init(void)
static void __exit comment_mt_exit(void)
module_init(comment_mt_init);
module_exit(comment_mt_exit);
