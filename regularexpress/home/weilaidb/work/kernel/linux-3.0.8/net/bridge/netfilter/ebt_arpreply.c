static unsigned int
ebt_arpreply_tg(struct sk_buff *skb, const struct xt_action_param *par)
static int ebt_arpreply_tg_check(const struct xt_tgchk_param *par)
static struct xt_target ebt_arpreply_tg_reg __read_mostly = ;
static int __init ebt_arpreply_init(void)
static void __exit ebt_arpreply_fini(void)
module_init(ebt_arpreply_init);
module_exit(ebt_arpreply_fini);
MODULE_DESCRIPTION("Ebtables: ARP reply target");
MODULE_LICENSE("GPL");
