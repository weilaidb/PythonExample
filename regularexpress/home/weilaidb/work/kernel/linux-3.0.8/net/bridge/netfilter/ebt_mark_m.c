static bool
ebt_mark_mt(const struct sk_buff *skb, struct xt_action_param *par)
static int ebt_mark_mt_check(const struct xt_mtchk_param *par)
struct compat_ebt_mark_m_info ;
static void mark_mt_compat_from_user(void *dst, const void *src)
static int mark_mt_compat_to_user(void __user *dst, const void *src)
static struct xt_match ebt_mark_mt_reg __read_mostly = ;
static int __init ebt_mark_m_init(void)
static void __exit ebt_mark_m_fini(void)
module_init(ebt_mark_m_init);
module_exit(ebt_mark_m_fini);
MODULE_DESCRIPTION("Ebtables: Packet mark match");
MODULE_LICENSE("GPL");
