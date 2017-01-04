#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_AUTHOR("Jan Rekorajski <baggins@pld.org.pl>");
MODULE_DESCRIPTION("Xtables: IPv6 packet logging to syslog");
MODULE_LICENSE("GPL");
struct in_device;
static void dump_packet(struct sbuff *m,
const struct nf_loginfo *info,
const struct sk_buff *skb, unsigned int ip6hoff,
int recurse)
static void dump_mac_header(struct sbuff *m,
const struct nf_loginfo *info,
const struct sk_buff *skb)
static struct nf_loginfo default_loginfo = ;
static void
ip6t_log_packet(u_int8_t pf,
unsigned int hooknum,
const struct sk_buff *skb,
const struct net_device *in,
const struct net_device *out,
const struct nf_loginfo *loginfo,
const char *prefix)
static unsigned int
log_tg6(struct sk_buff *skb, const struct xt_action_param *par)
static int log_tg6_check(const struct xt_tgchk_param *par)
static struct xt_target log_tg6_reg __read_mostly = ;
static struct nf_logger ip6t_logger __read_mostly = ;
static int __init log_tg6_init(void)
static void __exit log_tg6_exit(void)
module_init(log_tg6_init);
module_exit(log_tg6_exit);
