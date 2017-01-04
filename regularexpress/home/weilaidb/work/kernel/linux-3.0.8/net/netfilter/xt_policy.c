#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_AUTHOR("Patrick McHardy <kaber@trash.net>");
MODULE_DESCRIPTION("Xtables: IPsec policy match");
MODULE_LICENSE("GPL");
static inline bool
xt_addr_cmp(const union nf_inet_addr *a1, const union nf_inet_addr *m,
const union nf_inet_addr *a2, unsigned short family)
static bool
match_xfrm_state(const struct xfrm_state *x, const struct xt_policy_elem *e,
unsigned short family)
static int
match_policy_in(const struct sk_buff *skb, const struct xt_policy_info *info,
unsigned short family)
static int
match_policy_out(const struct sk_buff *skb, const struct xt_policy_info *info,
unsigned short family)
static bool
policy_mt(const struct sk_buff *skb, struct xt_action_param *par)
static int policy_mt_check(const struct xt_mtchk_param *par)
static struct xt_match policy_mt_reg[] __read_mostly = ;
static int __init policy_mt_init(void)
static void __exit policy_mt_exit(void)
module_init(policy_mt_init);
module_exit(policy_mt_exit);
MODULE_ALIAS("ipt_policy");
MODULE_ALIAS("ip6t_policy");
