static unsigned int
ebt_nflog_tg(struct sk_buff *skb, const struct xt_action_param *par)
static int ebt_nflog_tg_check(const struct xt_tgchk_param *par)
static struct xt_target ebt_nflog_tg_reg __read_mostly = ;
static int __init ebt_nflog_init(void)
static void __exit ebt_nflog_fini(void)
module_init(ebt_nflog_init);
module_exit(ebt_nflog_fini);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Peter Warasin <peter@endian.com>");
MODULE_DESCRIPTION("ebtables NFLOG netfilter logging module");
