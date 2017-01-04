#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#if defined(CONFIG_IP6_NF_IPTABLES) || defined(CONFIG_IP6_NF_IPTABLES_MODULE)
#define XT_TPROXY_HAVE_IPV6 1
static bool tproxy_sk_is_transparent(struct sock *sk)
static inline __be32
tproxy_laddr4(struct sk_buff *skb, __be32 user_laddr, __be32 daddr)
static struct sock *
tproxy_handle_time_wait4(struct sk_buff *skb, __be32 laddr, __be16 lport,
struct sock *sk)
static unsigned int
tproxy_tg4(struct sk_buff *skb, __be32 laddr, __be16 lport,
u_int32_t mark_mask, u_int32_t mark_value)
static unsigned int
tproxy_tg4_v0(struct sk_buff *skb, const struct xt_action_param *par)
static unsigned int
tproxy_tg4_v1(struct sk_buff *skb, const struct xt_action_param *par)
static inline const struct in6_addr *
tproxy_laddr6(struct sk_buff *skb, const struct in6_addr *user_laddr,
const struct in6_addr *daddr)
static struct sock *
tproxy_handle_time_wait6(struct sk_buff *skb, int tproto, int thoff,
const struct xt_action_param *par,
struct sock *sk)
static unsigned int
tproxy_tg6_v1(struct sk_buff *skb, const struct xt_action_param *par)
static int tproxy_tg6_check(const struct xt_tgchk_param *par)
static int tproxy_tg4_check(const struct xt_tgchk_param *par)
static struct xt_target tproxy_tg_reg[] __read_mostly = ;
static int __init tproxy_tg_init(void)
static void __exit tproxy_tg_exit(void)
module_init(tproxy_tg_init);
module_exit(tproxy_tg_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Balazs Scheidler, Krisztian Kovacs");
MODULE_DESCRIPTION("Netfilter transparent proxy (TPROXY) target module.");
MODULE_ALIAS("ipt_TPROXY");
MODULE_ALIAS("ip6t_TPROXY");
