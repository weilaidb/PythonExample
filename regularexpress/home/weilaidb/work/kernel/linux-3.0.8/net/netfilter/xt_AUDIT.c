#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Thomas Graf <tgraf@redhat.com>");
MODULE_DESCRIPTION("Xtables: creates audit records for dropped/accepted packets");
MODULE_ALIAS("ipt_AUDIT");
MODULE_ALIAS("ip6t_AUDIT");
MODULE_ALIAS("ebt_AUDIT");
MODULE_ALIAS("arpt_AUDIT");
static void audit_proto(struct audit_buffer *ab, struct sk_buff *skb,
unsigned int proto, unsigned int offset)
static void audit_ip4(struct audit_buffer *ab, struct sk_buff *skb)
static void audit_ip6(struct audit_buffer *ab, struct sk_buff *skb)
static unsigned int
audit_tg(struct sk_buff *skb, const struct xt_action_param *par)
static unsigned int
audit_tg_ebt(struct sk_buff *skb, const struct xt_action_param *par)
static int audit_tg_check(const struct xt_tgchk_param *par)
static struct xt_target audit_tg_reg[] __read_mostly = ;
static int __init audit_tg_init(void)
static void __exit audit_tg_exit(void)
module_init(audit_tg_init);
module_exit(audit_tg_exit);
