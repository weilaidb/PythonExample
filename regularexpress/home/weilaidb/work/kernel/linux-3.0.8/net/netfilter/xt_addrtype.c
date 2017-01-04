#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#if defined(CONFIG_IP6_NF_IPTABLES) || defined(CONFIG_IP6_NF_IPTABLES_MODULE)
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Patrick McHardy <kaber@trash.net>");
MODULE_DESCRIPTION("Xtables: address type match");
MODULE_ALIAS("ipt_addrtype");
MODULE_ALIAS("ip6t_addrtype");
#if defined(CONFIG_IP6_NF_IPTABLES) || defined(CONFIG_IP6_NF_IPTABLES_MODULE)
static u32 match_lookup_rt6(struct net *net, const struct net_device *dev,
const struct in6_addr *addr)
static bool match_type6(struct net *net, const struct net_device *dev,
const struct in6_addr *addr, u16 mask)
static bool
addrtype_mt6(struct net *net, const struct net_device *dev,
const struct sk_buff *skb, const struct xt_addrtype_info_v1 *info)
static inline bool match_type(struct net *net, const struct net_device *dev,
__be32 addr, u_int16_t mask)
static bool
addrtype_mt_v0(const struct sk_buff *skb, struct xt_action_param *par)
static bool
addrtype_mt_v1(const struct sk_buff *skb, struct xt_action_param *par)
static int addrtype_mt_checkentry_v1(const struct xt_mtchk_param *par)
static struct xt_match addrtype_mt_reg[] __read_mostly = ;
static int __init addrtype_mt_init(void)
static void __exit addrtype_mt_exit(void)
module_init(addrtype_mt_init);
module_exit(addrtype_mt_exit);
