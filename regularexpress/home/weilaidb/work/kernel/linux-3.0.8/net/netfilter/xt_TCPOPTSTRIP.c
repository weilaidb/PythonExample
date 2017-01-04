static inline unsigned int optlen(const u_int8_t *opt, unsigned int offset)
static unsigned int
tcpoptstrip_mangle_packet(struct sk_buff *skb,
const struct xt_tcpoptstrip_target_info *info,
unsigned int tcphoff, unsigned int minlen)
static unsigned int
tcpoptstrip_tg4(struct sk_buff *skb, const struct xt_action_param *par)
#if defined(CONFIG_IP6_NF_MANGLE) || defined(CONFIG_IP6_NF_MANGLE_MODULE)
static unsigned int
tcpoptstrip_tg6(struct sk_buff *skb, const struct xt_action_param *par)
static struct xt_target tcpoptstrip_tg_reg[] __read_mostly = ;
static int __init tcpoptstrip_tg_init(void)
static void __exit tcpoptstrip_tg_exit(void)
module_init(tcpoptstrip_tg_init);
module_exit(tcpoptstrip_tg_exit);
MODULE_AUTHOR("Sven Schnelle <svens@bitebene.org>, Jan Engelhardt <jengelh@medozas.de>");
MODULE_DESCRIPTION("Xtables: TCP option stripping");
MODULE_LICENSE("GPL");
MODULE_ALIAS("ipt_TCPOPTSTRIP");
MODULE_ALIAS("ip6t_TCPOPTSTRIP");
