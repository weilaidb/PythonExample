MODULE_AUTHOR("Harald Welte <laforge@netfilter.org>");
MODULE_DESCRIPTION("Xtables: packet forwarding to netlink");
MODULE_LICENSE("GPL");
MODULE_ALIAS("ipt_NFQUEUE");
MODULE_ALIAS("ip6t_NFQUEUE");
MODULE_ALIAS("arpt_NFQUEUE");
static u32 jhash_initval __read_mostly;
static bool rnd_inited __read_mostly;
static unsigned int
nfqueue_tg(struct sk_buff *skb, const struct xt_action_param *par)
static u32 hash_v4(const struct sk_buff *skb)
#if defined(CONFIG_IP6_NF_IPTABLES) || defined(CONFIG_IP6_NF_IPTABLES_MODULE)
static u32 hash_v6(const struct sk_buff *skb)
static unsigned int
nfqueue_tg_v1(struct sk_buff *skb, const struct xt_action_param *par)
static unsigned int
nfqueue_tg_v2(struct sk_buff *skb, const struct xt_action_param *par)
static int nfqueue_tg_check(const struct xt_tgchk_param *par)
static struct xt_target nfqueue_tg_reg[] __read_mostly = ;
static int __init nfqueue_tg_init(void)
static void __exit nfqueue_tg_exit(void)
module_init(nfqueue_tg_init);
module_exit(nfqueue_tg_exit);
