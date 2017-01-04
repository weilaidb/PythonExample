struct tcpudphdr ;
static bool
ebt_ip_mt(const struct sk_buff *skb, struct xt_action_param *par)
static int ebt_ip_mt_check(const struct xt_mtchk_param *par)
static struct xt_match ebt_ip_mt_reg __read_mostly = ;
static int __init ebt_ip_init(void)
static void __exit ebt_ip_fini(void)
module_init(ebt_ip_init);
module_exit(ebt_ip_fini);
MODULE_DESCRIPTION("Ebtables: IPv4 protocol packet match");
MODULE_LICENSE("GPL");
