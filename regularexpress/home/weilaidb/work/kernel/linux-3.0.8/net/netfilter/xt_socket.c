#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#if defined(CONFIG_IP6_NF_IPTABLES) || defined(CONFIG_IP6_NF_IPTABLES_MODULE)
#define XT_SOCKET_HAVE_IPV6 1
#if defined(CONFIG_NF_CONNTRACK) || defined(CONFIG_NF_CONNTRACK_MODULE)
#define XT_SOCKET_HAVE_CONNTRACK 1
static void
xt_socket_put_sk(struct sock *sk)
static int
extract_icmp4_fields(const struct sk_buff *skb,
u8 *protocol,
__be32 *raddr,
__be32 *laddr,
__be16 *rport,
__be16 *lport)
static bool
socket_match(const struct sk_buff *skb, struct xt_action_param *par,
const struct xt_socket_mtinfo1 *info)
static bool
socket_mt4_v0(const struct sk_buff *skb, struct xt_action_param *par)
static bool
socket_mt4_v1(const struct sk_buff *skb, struct xt_action_param *par)
static int
extract_icmp6_fields(const struct sk_buff *skb,
unsigned int outside_hdrlen,
int *protocol,
struct in6_addr **raddr,
struct in6_addr **laddr,
__be16 *rport,
__be16 *lport)
static bool
socket_mt6_v1(const struct sk_buff *skb, struct xt_action_param *par)
static struct xt_match socket_mt_reg[] __read_mostly = ;
static int __init socket_mt_init(void)
static void __exit socket_mt_exit(void)
module_init(socket_mt_init);
module_exit(socket_mt_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Krisztian Kovacs, Balazs Scheidler");
MODULE_DESCRIPTION("x_tables socket match module");
MODULE_ALIAS("ipt_socket");
MODULE_ALIAS("ip6t_socket");
