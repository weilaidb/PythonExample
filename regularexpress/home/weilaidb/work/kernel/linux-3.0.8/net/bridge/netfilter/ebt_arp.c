static bool
ebt_arp_mt(const struct sk_buff *skb, struct xt_action_param *par)
static int ebt_arp_mt_check(const struct xt_mtchk_param *par)
static struct xt_match ebt_arp_mt_reg __read_mostly = ;
static int __init ebt_arp_init(void)
static void __exit ebt_arp_fini(void)
module_init(ebt_arp_init);
module_exit(ebt_arp_fini);
MODULE_DESCRIPTION("Ebtables: ARP protocol packet match");
MODULE_LICENSE("GPL");
