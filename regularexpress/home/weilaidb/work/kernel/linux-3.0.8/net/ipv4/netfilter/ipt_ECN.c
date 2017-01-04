#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Harald Welte <laforge@netfilter.org>");
MODULE_DESCRIPTION("Xtables: Explicit Congestion Notification (ECN) flag modification");
static inline bool
set_ect_ip(struct sk_buff *skb, const struct ipt_ECN_info *einfo)
static inline bool
set_ect_tcp(struct sk_buff *skb, const struct ipt_ECN_info *einfo)
static unsigned int
ecn_tg(struct sk_buff *skb, const struct xt_action_param *par)
static int ecn_tg_check(const struct xt_tgchk_param *par)
static struct xt_target ecn_tg_reg __read_mostly = ;
static int __init ecn_tg_init(void)
static void __exit ecn_tg_exit(void)
module_init(ecn_tg_init);
module_exit(ecn_tg_exit);
