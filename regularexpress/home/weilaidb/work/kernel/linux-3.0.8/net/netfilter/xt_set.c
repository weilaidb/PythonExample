MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jozsef Kadlecsik <kadlec@blackhole.kfki.hu>");
MODULE_DESCRIPTION("Xtables: IP set match and target module");
MODULE_ALIAS("xt_SET");
MODULE_ALIAS("ipt_set");
MODULE_ALIAS("ip6t_set");
MODULE_ALIAS("ipt_SET");
MODULE_ALIAS("ip6t_SET");
static inline int
match_set(ip_set_id_t index, const struct sk_buff *skb,
u8 pf, u8 dim, u8 flags, int inv)
static bool
set_match_v0(const struct sk_buff *skb, struct xt_action_param *par)
static void
compat_flags(struct xt_set_info_v0 *info)
static int
set_match_v0_checkentry(const struct xt_mtchk_param *par)
static void
set_match_v0_destroy(const struct xt_mtdtor_param *par)
static unsigned int
set_target_v0(struct sk_buff *skb, const struct xt_action_param *par)
static int
set_target_v0_checkentry(const struct xt_tgchk_param *par)
static void
set_target_v0_destroy(const struct xt_tgdtor_param *par)
static bool
set_match(const struct sk_buff *skb, struct xt_action_param *par)
static int
set_match_checkentry(const struct xt_mtchk_param *par)
static void
set_match_destroy(const struct xt_mtdtor_param *par)
static unsigned int
set_target(struct sk_buff *skb, const struct xt_action_param *par)
static int
set_target_checkentry(const struct xt_tgchk_param *par)
static void
set_target_destroy(const struct xt_tgdtor_param *par)
static struct xt_match set_matches[] __read_mostly = ;
static struct xt_target set_targets[] __read_mostly = ;
static int __init xt_set_init(void)
static void __exit xt_set_fini(void)
module_init(xt_set_init);
module_exit(xt_set_fini);
