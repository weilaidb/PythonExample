#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Bart De Schuymer <bdschuym@pandora.be>");
MODULE_DESCRIPTION("Xtables: Bridge physical device match");
MODULE_ALIAS("ipt_physdev");
MODULE_ALIAS("ip6t_physdev");
static bool
physdev_mt(const struct sk_buff *skb, struct xt_action_param *par)
static int physdev_mt_check(const struct xt_mtchk_param *par)
static struct xt_match physdev_mt_reg __read_mostly = ;
static int __init physdev_mt_init(void)
static void __exit physdev_mt_exit(void)
module_init(physdev_mt_init);
module_exit(physdev_mt_exit);
