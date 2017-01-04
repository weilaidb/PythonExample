MODULE_DESCRIPTION("Xtables: IPv6 EUI64 address match");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Andras Kis-Szabo <kisza@sch.bme.hu>");
static bool
eui64_mt6(const struct sk_buff *skb, struct xt_action_param *par)
static struct xt_match eui64_mt6_reg __read_mostly = ;
static int __init eui64_mt6_init(void)
static void __exit eui64_mt6_exit(void)
module_init(eui64_mt6_init);
module_exit(eui64_mt6_exit);
