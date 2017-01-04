#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
struct xt_osf_finger ;
enum osf_fmatch_states ;
static struct list_head xt_osf_fingers[2];
static const struct nla_policy xt_osf_policy[OSF_ATTR_MAX + 1] = ;
static int xt_osf_add_callback(struct sock *ctnl, struct sk_buff *skb,
const struct nlmsghdr *nlh,
const struct nlattr * const osf_attrs[])
static int xt_osf_remove_callback(struct sock *ctnl, struct sk_buff *skb,
const struct nlmsghdr *nlh,
const struct nlattr * const osf_attrs[])
static const struct nfnl_callback xt_osf_nfnetlink_callbacks[OSF_MSG_MAX] = ;
static const struct nfnetlink_subsystem xt_osf_nfnetlink = ;
static inline int xt_osf_ttl(const struct sk_buff *skb, const struct xt_osf_info *info,
unsigned char f_ttl)
static bool
xt_osf_match_packet(const struct sk_buff *skb, struct xt_action_param *p)
static struct xt_match xt_osf_match = ;
static int __init xt_osf_init(void)
static void __exit xt_osf_fini(void)
module_init(xt_osf_init);
module_exit(xt_osf_fini);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Evgeniy Polyakov <zbr@ioremap.net>");
MODULE_DESCRIPTION("Passive OS fingerprint matching.");
MODULE_ALIAS_NFNL_SUBSYS(NFNL_SUBSYS_OSF);
