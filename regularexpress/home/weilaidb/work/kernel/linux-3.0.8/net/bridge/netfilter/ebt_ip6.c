union pkthdr ;
static bool
ebt_ip6_mt(const struct sk_buff *skb, struct xt_action_param *par)
static int ebt_ip6_mt_check(const struct xt_mtchk_param *par)
static struct xt_match ebt_ip6_mt_reg __read_mostly = ;
static int __init ebt_ip6_init(void)
static void __exit ebt_ip6_fini(void)
module_init(ebt_ip6_init);
module_exit(ebt_ip6_fini);
MODULE_DESCRIPTION("Ebtables: IPv6 protocol packet match");
MODULE_AUTHOR("Kuo-Lang Tseng <kuo-lang.tseng@intel.com>");
MODULE_LICENSE("GPL");
