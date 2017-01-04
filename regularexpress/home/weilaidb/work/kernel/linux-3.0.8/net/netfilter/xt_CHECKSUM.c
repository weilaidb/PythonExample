#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Michael S. Tsirkin <mst@redhat.com>");
MODULE_DESCRIPTION("Xtables: checksum modification");
MODULE_ALIAS("ipt_CHECKSUM");
MODULE_ALIAS("ip6t_CHECKSUM");
static unsigned int
checksum_tg(struct sk_buff *skb, const struct xt_action_param *par)
static int checksum_tg_check(const struct xt_tgchk_param *par)
static struct xt_target checksum_tg_reg __read_mostly = ;
static int __init checksum_tg_init(void)
static void __exit checksum_tg_exit(void)
module_init(checksum_tg_init);
module_exit(checksum_tg_exit);
