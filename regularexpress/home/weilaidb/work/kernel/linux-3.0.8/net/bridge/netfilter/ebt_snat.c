static unsigned int
ebt_snat_tg(struct sk_buff *skb, const struct xt_action_param *par)
static int ebt_snat_tg_check(const struct xt_tgchk_param *par)
static struct xt_target ebt_snat_tg_reg __read_mostly = ;
static int __init ebt_snat_init(void)
static void __exit ebt_snat_fini(void)
module_init(ebt_snat_init);
module_exit(ebt_snat_fini);
MODULE_DESCRIPTION("Ebtables: Source MAC address translation");
MODULE_LICENSE("GPL");
