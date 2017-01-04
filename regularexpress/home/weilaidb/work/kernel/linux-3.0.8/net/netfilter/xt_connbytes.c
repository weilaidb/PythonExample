#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Harald Welte <laforge@netfilter.org>");
MODULE_DESCRIPTION("Xtables: Number of packets/bytes per connection matching");
MODULE_ALIAS("ipt_connbytes");
MODULE_ALIAS("ip6t_connbytes");
static bool
connbytes_mt(const struct sk_buff *skb, struct xt_action_param *par)
static int connbytes_mt_check(const struct xt_mtchk_param *par)
static void connbytes_mt_destroy(const struct xt_mtdtor_param *par)
static struct xt_match connbytes_mt_reg __read_mostly = ;
static int __init connbytes_mt_init(void)
static void __exit connbytes_mt_exit(void)
module_init(connbytes_mt_init);
module_exit(connbytes_mt_exit);
