MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Xtables: IPv6 header types match");
MODULE_AUTHOR("Andras Kis-Szabo <kisza@sch.bme.hu>");
static bool
ipv6header_mt6(const struct sk_buff *skb, struct xt_action_param *par)
static int ipv6header_mt6_check(const struct xt_mtchk_param *par)
static struct xt_match ipv6header_mt6_reg __read_mostly = ;
static int __init ipv6header_mt6_init(void)
static void __exit ipv6header_mt6_exit(void)
module_init(ipv6header_mt6_init);
module_exit(ipv6header_mt6_exit);
