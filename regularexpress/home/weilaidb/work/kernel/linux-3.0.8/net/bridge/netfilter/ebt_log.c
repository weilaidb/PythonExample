static DEFINE_SPINLOCK(ebt_log_lock);
static int ebt_log_tg_check(const struct xt_tgchk_param *par)
struct tcpudphdr
;
struct arppayload
;
static void
print_ports(const struct sk_buff *skb, uint8_t protocol, int offset)
static void
ebt_log_packet(u_int8_t pf, unsigned int hooknum,
const struct sk_buff *skb, const struct net_device *in,
const struct net_device *out, const struct nf_loginfo *loginfo,
const char *prefix)
static unsigned int
ebt_log_tg(struct sk_buff *skb, const struct xt_action_param *par)
static struct xt_target ebt_log_tg_reg __read_mostly = ;
static struct nf_logger ebt_log_logger __read_mostly = ;
static int __init ebt_log_init(void)
static void __exit ebt_log_fini(void)
module_init(ebt_log_init);
module_exit(ebt_log_fini);
MODULE_DESCRIPTION("Ebtables: Packet logging to syslog");
MODULE_LICENSE("GPL");
