#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_LICENSE("GPL");
MODULE_AUTHOR("James Morris <jmorris@redhat.com>");
MODULE_DESCRIPTION("Xtables: target for copying between connection and security mark");
MODULE_ALIAS("ipt_CONNSECMARK");
MODULE_ALIAS("ip6t_CONNSECMARK");
static void secmark_save(const struct sk_buff *skb)
static void secmark_restore(struct sk_buff *skb)
static unsigned int
connsecmark_tg(struct sk_buff *skb, const struct xt_action_param *par)
static int connsecmark_tg_check(const struct xt_tgchk_param *par)
static void connsecmark_tg_destroy(const struct xt_tgdtor_param *par)
static struct xt_target connsecmark_tg_reg __read_mostly = ;
static int __init connsecmark_tg_init(void)
static void __exit connsecmark_tg_exit(void)
module_init(connsecmark_tg_init);
module_exit(connsecmark_tg_exit);
