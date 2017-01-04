#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_DESCRIPTION("Xtables: TCP, UDP and UDP-Lite match");
MODULE_LICENSE("GPL");
MODULE_ALIAS("xt_tcp");
MODULE_ALIAS("xt_udp");
MODULE_ALIAS("ipt_udp");
MODULE_ALIAS("ipt_tcp");
MODULE_ALIAS("ip6t_udp");
MODULE_ALIAS("ip6t_tcp");
static inline bool
port_match(u_int16_t min, u_int16_t max, u_int16_t port, bool invert)
static bool
tcp_find_option(u_int8_t option,
const struct sk_buff *skb,
unsigned int protoff,
unsigned int optlen,
bool invert,
bool *hotdrop)
static bool tcp_mt(const struct sk_buff *skb, struct xt_action_param *par)
static int tcp_mt_check(const struct xt_mtchk_param *par)
static bool udp_mt(const struct sk_buff *skb, struct xt_action_param *par)
static int udp_mt_check(const struct xt_mtchk_param *par)
static struct xt_match tcpudp_mt_reg[] __read_mostly = ;
static int __init tcpudp_mt_init(void)
static void __exit tcpudp_mt_exit(void)
module_init(tcpudp_mt_init);
module_exit(tcpudp_mt_exit);
