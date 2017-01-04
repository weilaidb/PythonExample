#if defined(CONFIG_NF_CONNTRACK) || defined(CONFIG_NF_CONNTRACK_MODULE)
#	define WITH_CONNTRACK 1
#	include <net/netfilter/nf_conntrack.h>
#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
#	define WITH_IPV6 1
struct xt_tee_priv ;
static const union nf_inet_addr tee_zero_address;
static DEFINE_PER_CPU(bool, tee_active);
static struct net *pick_net(struct sk_buff *skb)
static bool
tee_tg_route4(struct sk_buff *skb, const struct xt_tee_tginfo *info)
static unsigned int
tee_tg4(struct sk_buff *skb, const struct xt_action_param *par)
static bool
tee_tg_route6(struct sk_buff *skb, const struct xt_tee_tginfo *info)
static unsigned int
tee_tg6(struct sk_buff *skb, const struct xt_action_param *par)
static int tee_netdev_event(struct notifier_block *this, unsigned long event,
void *ptr)
static int tee_tg_check(const struct xt_tgchk_param *par)
static void tee_tg_destroy(const struct xt_tgdtor_param *par)
static struct xt_target tee_tg_reg[] __read_mostly = ;
static int __init tee_tg_init(void)
static void __exit tee_tg_exit(void)
module_init(tee_tg_init);
module_exit(tee_tg_exit);
MODULE_AUTHOR("Sebastian Claßen <sebastian.classen@freenet.ag>");
MODULE_AUTHOR("Jan Engelhardt <jengelh@medozas.de>");
MODULE_DESCRIPTION("Xtables: Reroute packet copy");
MODULE_LICENSE("GPL");
MODULE_ALIAS("ipt_TEE");
MODULE_ALIAS("ip6t_TEE");
