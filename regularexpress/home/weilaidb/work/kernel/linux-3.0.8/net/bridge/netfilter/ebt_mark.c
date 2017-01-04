static unsigned int
ebt_mark_tg(struct sk_buff *skb, const struct xt_action_param *par)
static int ebt_mark_tg_check(const struct xt_tgchk_param *par)
struct compat_ebt_mark_t_info ;
static void mark_tg_compat_from_user(void *dst, const void *src)
static int mark_tg_compat_to_user(void __user *dst, const void *src)
static struct xt_target ebt_mark_tg_reg __read_mostly = ;
static int __init ebt_mark_init(void)
static void __exit ebt_mark_fini(void)
module_init(ebt_mark_init);
module_exit(ebt_mark_fini);
MODULE_DESCRIPTION("Ebtables: Packet mark modification");
MODULE_LICENSE("GPL");
