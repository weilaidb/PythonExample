#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
struct xt_connlimit_conn ;
struct xt_connlimit_data ;
static u_int32_t connlimit_rnd __read_mostly;
static inline unsigned int connlimit_iphash(__be32 addr)
static inline unsigned int
connlimit_iphash6(const union nf_inet_addr *addr,
const union nf_inet_addr *mask)
static inline bool already_closed(const struct nf_conn *conn)
static inline unsigned int
same_source_net(const union nf_inet_addr *addr,
const union nf_inet_addr *mask,
const union nf_inet_addr *u3, u_int8_t family)
static int count_them(struct net *net,
struct xt_connlimit_data *data,
const struct nf_conntrack_tuple *tuple,
const union nf_inet_addr *addr,
const union nf_inet_addr *mask,
u_int8_t family)
static bool
connlimit_mt(const struct sk_buff *skb, struct xt_action_param *par)
static int connlimit_mt_check(const struct xt_mtchk_param *par)
static void connlimit_mt_destroy(const struct xt_mtdtor_param *par)
static struct xt_match connlimit_mt_reg[] __read_mostly = ;
static int __init connlimit_mt_init(void)
static void __exit connlimit_mt_exit(void)
module_init(connlimit_mt_init);
module_exit(connlimit_mt_exit);
MODULE_AUTHOR("Jan Engelhardt <jengelh@medozas.de>");
MODULE_DESCRIPTION("Xtables: Number of connections matching");
MODULE_LICENSE("GPL");
MODULE_ALIAS("ipt_connlimit");
MODULE_ALIAS("ip6t_connlimit");
