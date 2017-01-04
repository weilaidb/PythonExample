#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Svenning Soerensen <svenning@post5.tele.dk>");
MODULE_DESCRIPTION("Xtables: 1:1 NAT mapping of IPv4 subnets");
static int netmap_tg_check(const struct xt_tgchk_param *par)
static unsigned int
netmap_tg(struct sk_buff *skb, const struct xt_action_param *par)
static struct xt_target netmap_tg_reg __read_mostly = ;
static int __init netmap_tg_init(void)
static void __exit netmap_tg_exit(void)
module_init(netmap_tg_init);
module_exit(netmap_tg_exit);
