#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Marc Boucher <marc@mbsi.ca>");
MODULE_AUTHOR("Jan Engelhardt <jengelh@medozas.de>");
MODULE_DESCRIPTION("Xtables: connection tracking state match");
MODULE_ALIAS("ipt_conntrack");
MODULE_ALIAS("ip6t_conntrack");
static bool
conntrack_addrcmp(const union nf_inet_addr *kaddr,
const union nf_inet_addr *uaddr,
const union nf_inet_addr *umask, unsigned int l3proto)
static inline bool
conntrack_mt_origsrc(const struct nf_conn *ct,
const struct xt_conntrack_mtinfo2 *info,
u_int8_t family)
static inline bool
conntrack_mt_origdst(const struct nf_conn *ct,
const struct xt_conntrack_mtinfo2 *info,
u_int8_t family)
static inline bool
conntrack_mt_replsrc(const struct nf_conn *ct,
const struct xt_conntrack_mtinfo2 *info,
u_int8_t family)
static inline bool
conntrack_mt_repldst(const struct nf_conn *ct,
const struct xt_conntrack_mtinfo2 *info,
u_int8_t family)
static inline bool
ct_proto_port_check(const struct xt_conntrack_mtinfo2 *info,
const struct nf_conn *ct)
static inline bool
port_match(u16 min, u16 max, u16 port, bool invert)
static inline bool
ct_proto_port_check_v3(const struct xt_conntrack_mtinfo3 *info,
const struct nf_conn *ct)
static bool
conntrack_mt(const struct sk_buff *skb, struct xt_action_param *par,
u16 state_mask, u16 status_mask)
static bool
conntrack_mt_v1(const struct sk_buff *skb, struct xt_action_param *par)
static bool
conntrack_mt_v2(const struct sk_buff *skb, struct xt_action_param *par)
static bool
conntrack_mt_v3(const struct sk_buff *skb, struct xt_action_param *par)
static int conntrack_mt_check(const struct xt_mtchk_param *par)
static void conntrack_mt_destroy(const struct xt_mtdtor_param *par)
static struct xt_match conntrack_mt_reg[] __read_mostly = ;
static int __init conntrack_mt_init(void)
static void __exit conntrack_mt_exit(void)
module_init(conntrack_mt_init);
module_exit(conntrack_mt_exit);
