#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_LICENSE("GPL");
MODULE_AUTHOR("James Morris <jmorris@redhat.com>");
MODULE_DESCRIPTION("Xtables: packet security mark modification");
MODULE_ALIAS("ipt_SECMARK");
MODULE_ALIAS("ip6t_SECMARK");
#define PFX "SECMARK: "
static u8 mode;
static unsigned int
secmark_tg(struct sk_buff *skb, const struct xt_action_param *par)
static int checkentry_lsm(struct xt_secmark_target_info *info)
static int secmark_tg_check(const struct xt_tgchk_param *par)
static void secmark_tg_destroy(const struct xt_tgdtor_param *par)
static struct xt_target secmark_tg_reg __read_mostly = ;
static int __init secmark_tg_init(void)
static void __exit secmark_tg_exit(void)
module_init(secmark_tg_init);
module_exit(secmark_tg_exit);
