#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static unsigned int nlbufsiz = NLMSG_GOODSIZE;
module_param(nlbufsiz, uint, 0600);
MODULE_PARM_DESC(nlbufsiz, "netlink buffer size (number of bytes) "
"(defaults to 4096)");
static unsigned int flushtimeout = 10;
module_param(flushtimeout, uint, 0600);
MODULE_PARM_DESC(flushtimeout, "buffer flush timeout (hundredths ofa second) "
"(defaults to 10)");
typedef struct  ebt_ulog_buff_t;
static ebt_ulog_buff_t ulog_buffers[EBT_ULOG_MAXNLGROUPS];
static struct sock *ebtulognl;
static void ulog_send(unsigned int nlgroup)
static void ulog_timer(unsigned long data)
static struct sk_buff *ulog_alloc_skb(unsigned int size)
static void ebt_ulog_packet(unsigned int hooknr, const struct sk_buff *skb,
const struct net_device *in, const struct net_device *out,
const struct ebt_ulog_info *uloginfo, const char *prefix)
static void ebt_log_packet(u_int8_t pf, unsigned int hooknum,
const struct sk_buff *skb, const struct net_device *in,
const struct net_device *out, const struct nf_loginfo *li,
const char *prefix)
static unsigned int
ebt_ulog_tg(struct sk_buff *skb, const struct xt_action_param *par)
static int ebt_ulog_tg_check(const struct xt_tgchk_param *par)
static struct xt_target ebt_ulog_tg_reg __read_mostly = ;
static struct nf_logger ebt_ulog_logger __read_mostly = ;
static int __init ebt_ulog_init(void)
static void __exit ebt_ulog_fini(void)
module_init(ebt_ulog_init);
module_exit(ebt_ulog_fini);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Bart De Schuymer <bdschuym@pandora.be>");
MODULE_DESCRIPTION("Ebtables: Packet logging to netlink using ULOG");
