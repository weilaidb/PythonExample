#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Xtables: IPv6 Hop-By-Hop and Destination Header match");
MODULE_AUTHOR("Andras Kis-Szabo <kisza@sch.bme.hu>");
MODULE_ALIAS("ip6t_dst");
static struct xt_match hbh_mt6_reg[] __read_mostly;
static bool
hbh_mt6(const struct sk_buff *skb, struct xt_action_param *par)
static int hbh_mt6_check(const struct xt_mtchk_param *par)
static struct xt_match hbh_mt6_reg[] __read_mostly = ;
static int __init hbh_mt6_init(void)
static void __exit hbh_mt6_exit(void)
module_init(hbh_mt6_init);
module_exit(hbh_mt6_exit);
