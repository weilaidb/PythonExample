#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Marc Boucher <marc@mbsi.ca>");
MODULE_DESCRIPTION("Xtables: TCP Maximum Segment Size (MSS) adjustment");
MODULE_ALIAS("ipt_TCPMSS");
MODULE_ALIAS("ip6t_TCPMSS");
static inline unsigned int
optlen(const u_int8_t *opt, unsigned int offset)
static int
tcpmss_mangle_packet(struct sk_buff *skb,
const struct xt_tcpmss_info *info,
unsigned int in_mtu,
unsigned int tcphoff,
unsigned int minlen)
static u_int32_t tcpmss_reverse_mtu(const struct sk_buff *skb,
unsigned int family)
static unsigned int
tcpmss_tg4(struct sk_buff *skb, const struct xt_action_param *par)
#if defined(CONFIG_IP6_NF_IPTABLES) || defined(CONFIG_IP6_NF_IPTABLES_MODULE)
static unsigned int
tcpmss_tg6(struct sk_buff *skb, const struct xt_action_param *par)
static inline bool find_syn_match(const struct xt_entry_match *m)
static int tcpmss_tg4_check(const struct xt_tgchk_param *par)
#if defined(CONFIG_IP6_NF_IPTABLES) || defined(CONFIG_IP6_NF_IPTABLES_MODULE)
static int tcpmss_tg6_check(const struct xt_tgchk_param *par)
static struct xt_target tcpmss_tg_reg[] __read_mostly = ;
static int __init tcpmss_tg_init(void)
static void __exit tcpmss_tg_exit(void)
module_init(tcpmss_tg_init);
module_exit(tcpmss_tg_exit);
