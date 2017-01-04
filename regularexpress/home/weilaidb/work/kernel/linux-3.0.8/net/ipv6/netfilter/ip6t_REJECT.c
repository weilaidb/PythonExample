#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_AUTHOR("Yasuyuki KOZAKAI <yasuyuki.kozakai@toshiba.co.jp>");
MODULE_DESCRIPTION("Xtables: packet \"rejection\" target for IPv6");
MODULE_LICENSE("GPL");
static void send_reset(struct net *net, struct sk_buff *oldskb)
static inline void
send_unreach(struct net *net, struct sk_buff *skb_in, unsigned char code,
unsigned int hooknum)
static unsigned int
reject_tg6(struct sk_buff *skb, const struct xt_action_param *par)
static int reject_tg6_check(const struct xt_tgchk_param *par)
static struct xt_target reject_tg6_reg __read_mostly = ;
static int __init reject_tg6_init(void)
static void __exit reject_tg6_exit(void)
module_init(reject_tg6_init);
module_exit(reject_tg6_exit);
