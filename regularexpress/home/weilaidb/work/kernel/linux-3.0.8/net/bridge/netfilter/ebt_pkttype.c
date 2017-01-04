static bool
ebt_pkttype_mt(const struct sk_buff *skb, struct xt_action_param *par)
static int ebt_pkttype_mt_check(const struct xt_mtchk_param *par)
static struct xt_match ebt_pkttype_mt_reg __read_mostly = ;
static int __init ebt_pkttype_init(void)
static void __exit ebt_pkttype_fini(void)
module_init(ebt_pkttype_init);
module_exit(ebt_pkttype_fini);
MODULE_DESCRIPTION("Ebtables: Link layer packet type match");
MODULE_LICENSE("GPL");
