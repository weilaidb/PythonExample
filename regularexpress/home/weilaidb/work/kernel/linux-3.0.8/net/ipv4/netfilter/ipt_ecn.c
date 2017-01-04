#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_AUTHOR("Harald Welte <laforge@netfilter.org>");
MODULE_DESCRIPTION("Xtables: Explicit Congestion Notification (ECN) flag match for IPv4");
MODULE_LICENSE("GPL");
static inline bool match_ip(const struct sk_buff *skb,
const struct ipt_ecn_info *einfo)
static inline bool match_tcp(const struct sk_buff *skb,
const struct ipt_ecn_info *einfo,
bool *hotdrop)
static bool ecn_mt(const struct sk_buff *skb, struct xt_action_param *par)
static int ecn_mt_check(const struct xt_mtchk_param *par)
static struct xt_match ecn_mt_reg __read_mostly = ;
static int __init ecn_mt_init(void)
static void __exit ecn_mt_exit(void)
module_init(ecn_mt_init);
module_exit(ecn_mt_exit);
