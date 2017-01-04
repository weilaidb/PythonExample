#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static bool
iprange_mt4(const struct sk_buff *skb, struct xt_action_param *par)
static inline int
iprange_ipv6_lt(const struct in6_addr *a, const struct in6_addr *b)
static bool
iprange_mt6(const struct sk_buff *skb, struct xt_action_param *par)
static struct xt_match iprange_mt_reg[] __read_mostly = ;
static int __init iprange_mt_init(void)
static void __exit iprange_mt_exit(void)
module_init(iprange_mt_init);
module_exit(iprange_mt_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jozsef Kadlecsik <kadlec@blackhole.kfki.hu>");
MODULE_AUTHOR("Jan Engelhardt <jengelh@medozas.de>");
MODULE_DESCRIPTION("Xtables: arbitrary IPv4 range matching");
MODULE_ALIAS("ipt_iprange");
MODULE_ALIAS("ip6t_iprange");
