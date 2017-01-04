#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_AUTHOR("Harald Welte <laforge@netfilter.org>");
MODULE_AUTHOR("Maciej Soltysiak <solt@dns.toxicfilms.tv>");
MODULE_DESCRIPTION("Xtables: Hoplimit/TTL Limit field modification target");
MODULE_LICENSE("GPL");
static unsigned int
ttl_tg(struct sk_buff *skb, const struct xt_action_param *par)
static unsigned int
hl_tg6(struct sk_buff *skb, const struct xt_action_param *par)
static int ttl_tg_check(const struct xt_tgchk_param *par)
static int hl_tg6_check(const struct xt_tgchk_param *par)
static struct xt_target hl_tg_reg[] __read_mostly = ;
static int __init hl_tg_init(void)
static void __exit hl_tg_exit(void)
module_init(hl_tg_init);
module_exit(hl_tg_exit);
MODULE_ALIAS("ipt_TTL");
MODULE_ALIAS("ip6t_HL");
