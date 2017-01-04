static unsigned int
ebt_redirect_tg(struct sk_buff *skb, const struct xt_action_param *par)
static int ebt_redirect_tg_check(const struct xt_tgchk_param *par)
static struct xt_target ebt_redirect_tg_reg __read_mostly = ;
static int __init ebt_redirect_init(void)
static void __exit ebt_redirect_fini(void)
module_init(ebt_redirect_init);
module_exit(ebt_redirect_fini);
MODULE_DESCRIPTION("Ebtables: Packet redirection to localhost");
MODULE_LICENSE("GPL");
