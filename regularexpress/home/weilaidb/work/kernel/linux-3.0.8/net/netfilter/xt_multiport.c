#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Netfilter Core Team <coreteam@netfilter.org>");
MODULE_DESCRIPTION("Xtables: multiple port matching for TCP, UDP, UDP-Lite, SCTP and DCCP");
MODULE_ALIAS("ipt_multiport");
MODULE_ALIAS("ip6t_multiport");
static inline bool
ports_match_v1(const struct xt_multiport_v1 *minfo,
u_int16_t src, u_int16_t dst)
static bool
multiport_mt(const struct sk_buff *skb, struct xt_action_param *par)
static inline bool
check(u_int16_t proto,
u_int8_t ip_invflags,
u_int8_t match_flags,
u_int8_t count)
static int multiport_mt_check(const struct xt_mtchk_param *par)
static int multiport_mt6_check(const struct xt_mtchk_param *par)
static struct xt_match multiport_mt_reg[] __read_mostly = ;
static int __init multiport_mt_init(void)
static void __exit multiport_mt_exit(void)
module_init(multiport_mt_init);
module_exit(multiport_mt_exit);
