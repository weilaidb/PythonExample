#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Harald Welte <laforge@gnumonks.org>");
MODULE_DESCRIPTION("Xtables: packet logging to netlink using ULOG");
MODULE_ALIAS_NET_PF_PROTO(PF_NETLINK, NETLINK_NFLOG);
#define ULOG_NL_EVENT		111
#define ULOG_MAXNLGROUPS	32
static unsigned int nlbufsiz = NLMSG_GOODSIZE;
module_param(nlbufsiz, uint, 0400);
MODULE_PARM_DESC(nlbufsiz, "netlink buffer size");
static unsigned int flushtimeout = 10;
module_param(flushtimeout, uint, 0600);
MODULE_PARM_DESC(flushtimeout, "buffer flush timeout (hundredths of a second)");
static int nflog = 1;
module_param(nflog, bool, 0400);
MODULE_PARM_DESC(nflog, "register as internal netfilter logging module");
typedef struct  ulog_buff_t;
static ulog_buff_t ulog_buffers[ULOG_MAXNLGROUPS];
static struct sock *nflognl;
static DEFINE_SPINLOCK(ulog_lock);
static void ulog_send(unsigned int nlgroupnum)
static void ulog_timer(unsigned long data)
static struct sk_buff *ulog_alloc_skb(unsigned int size)
static void ipt_ulog_packet(unsigned int hooknum,
const struct sk_buff *skb,
const struct net_device *in,
const struct net_device *out,
const struct ipt_ulog_info *loginfo,
const char *prefix)
static unsigned int
ulog_tg(struct sk_buff *skb, const struct xt_action_param *par)
static void ipt_logfn(u_int8_t pf,
unsigned int hooknum,
const struct sk_buff *skb,
const struct net_device *in,
const struct net_device *out,
const struct nf_loginfo *li,
const char *prefix)
static int ulog_tg_check(const struct xt_tgchk_param *par)
struct compat_ipt_ulog_info ;
static void ulog_tg_compat_from_user(void *dst, const void *src)
static int ulog_tg_compat_to_user(void __user *dst, const void *src)
static struct xt_target ulog_tg_reg __read_mostly = ;
static struct nf_logger ipt_ulog_logger __read_mostly = ;
static int __init ulog_tg_init(void)
static void __exit ulog_tg_exit(void)
module_init(ulog_tg_init);
module_exit(ulog_tg_exit);
