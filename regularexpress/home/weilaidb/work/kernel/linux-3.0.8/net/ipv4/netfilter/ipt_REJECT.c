#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Netfilter Core Team <coreteam@netfilter.org>");
MODULE_DESCRIPTION("Xtables: packet \"rejection\" target for IPv4");
static void send_reset(struct sk_buff *oldskb, int hook)
static inline void send_unreach(struct sk_buff *skb_in, int code)
static unsigned int
reject_tg(struct sk_buff *skb, const struct xt_action_param *par)
static int reject_tg_check(const struct xt_tgchk_param *par)
static struct xt_target reject_tg_reg __read_mostly = ;
static int __init reject_tg_init(void)
static void __exit reject_tg_exit(void)
module_init(reject_tg_init);
module_exit(reject_tg_exit);
