#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static inline u32 nf_ct_orig_ipv4_src(const struct nf_conn *ct)
static inline const u32 *nf_ct_orig_ipv6_src(const struct nf_conn *ct)
static inline u_int32_t
xt_cluster_hash_ipv4(u_int32_t ip, const struct xt_cluster_match_info *info)
static inline u_int32_t
xt_cluster_hash_ipv6(const void *ip, const struct xt_cluster_match_info *info)
static inline u_int32_t
xt_cluster_hash(const struct nf_conn *ct,
const struct xt_cluster_match_info *info)
static inline bool
xt_cluster_ipv6_is_multicast(const struct in6_addr *addr)
static inline bool
xt_cluster_is_multicast_addr(const struct sk_buff *skb, u_int8_t family)
static bool
xt_cluster_mt(const struct sk_buff *skb, struct xt_action_param *par)
static int xt_cluster_mt_checkentry(const struct xt_mtchk_param *par)
static struct xt_match xt_cluster_match __read_mostly = ;
static int __init xt_cluster_mt_init(void)
static void __exit xt_cluster_mt_fini(void)
MODULE_AUTHOR("Pablo Neira Ayuso <pablo@netfilter.org>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Xtables: hash-based cluster match");
MODULE_ALIAS("ipt_cluster");
MODULE_ALIAS("ip6t_cluster");
module_init(xt_cluster_mt_init);
module_exit(xt_cluster_mt_fini);
