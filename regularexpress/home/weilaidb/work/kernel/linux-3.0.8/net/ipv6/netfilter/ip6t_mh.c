#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_DESCRIPTION("Xtables: IPv6 Mobility Header match");
MODULE_LICENSE("GPL");
static inline bool
type_match(u_int8_t min, u_int8_t max, u_int8_t type, bool invert)
static bool mh_mt6(const struct sk_buff *skb, struct xt_action_param *par)
static int mh_mt6_check(const struct xt_mtchk_param *par)
static struct xt_match mh_mt6_reg __read_mostly = ;
static int __init mh_mt6_init(void)
static void __exit mh_mt6_exit(void)
module_init(mh_mt6_init);
module_exit(mh_mt6_exit);
