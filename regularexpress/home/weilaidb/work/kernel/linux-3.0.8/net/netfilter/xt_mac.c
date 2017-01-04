MODULE_LICENSE("GPL");
MODULE_AUTHOR("Netfilter Core Team <coreteam@netfilter.org>");
MODULE_DESCRIPTION("Xtables: MAC address match");
MODULE_ALIAS("ipt_mac");
MODULE_ALIAS("ip6t_mac");
static bool mac_mt(const struct sk_buff *skb, struct xt_action_param *par)
static struct xt_match mac_mt_reg __read_mostly = ;
static int __init mac_mt_init(void)
static void __exit mac_mt_exit(void)
module_init(mac_mt_init);
module_exit(mac_mt_exit);
