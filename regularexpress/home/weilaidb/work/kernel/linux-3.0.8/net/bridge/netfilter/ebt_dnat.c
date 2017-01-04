static unsigned int
ebt_dnat_tg(struct sk_buff *skb, const struct xt_action_param *par)
static int ebt_dnat_tg_check(const struct xt_tgchk_param *par)
static struct xt_target ebt_dnat_tg_reg __read_mostly = ;
static int __init ebt_dnat_init(void)
static void __exit ebt_dnat_fini(void)
module_init(ebt_dnat_init);
module_exit(ebt_dnat_fini);
MODULE_DESCRIPTION("Ebtables: Destination MAC address translation");
MODULE_LICENSE("GPL");
