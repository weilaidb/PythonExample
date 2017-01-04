#define MAX_PORTS 8
static unsigned short ports[MAX_PORTS];
static unsigned int ports_c;
static unsigned int max_dcc_channels = 8;
static unsigned int dcc_timeout __read_mostly = 300;
static char *irc_buffer;
static DEFINE_SPINLOCK(irc_buffer_lock);
unsigned int (*nf_nat_irc_hook)(struct sk_buff *skb,
enum ip_conntrack_info ctinfo,
unsigned int matchoff,
unsigned int matchlen,
struct nf_conntrack_expect *exp) __read_mostly;
EXPORT_SYMBOL_GPL(nf_nat_irc_hook);
MODULE_AUTHOR("Harald Welte <laforge@netfilter.org>");
MODULE_DESCRIPTION("IRC (DCC) connection tracking helper");
MODULE_LICENSE("GPL");
MODULE_ALIAS("ip_conntrack_irc");
MODULE_ALIAS_NFCT_HELPER("irc");
module_param_array(ports, ushort, &ports_c, 0400);
MODULE_PARM_DESC(ports, "port numbers of IRC servers");
module_param(max_dcc_channels, uint, 0400);
MODULE_PARM_DESC(max_dcc_channels, "max number of expected DCC channels per "
"IRC session");
module_param(dcc_timeout, uint, 0400);
MODULE_PARM_DESC(dcc_timeout, "timeout on for unestablished DCC channels");
static const char *const dccprotos[] = ;
#define MINMATCHLEN	5
static int parse_dcc(char *data, const char *data_end, __be32 *ip,
u_int16_t *port, char **ad_beg_p, char **ad_end_p)
static int help(struct sk_buff *skb, unsigned int protoff,
struct nf_conn *ct, enum ip_conntrack_info ctinfo)
static struct nf_conntrack_helper irc[MAX_PORTS] __read_mostly;
static char irc_names[MAX_PORTS][sizeof("irc-65535")] __read_mostly;
static struct nf_conntrack_expect_policy irc_exp_policy;
static void nf_conntrack_irc_fini(void);
static int __init nf_conntrack_irc_init(void)
static void nf_conntrack_irc_fini(void)
module_init(nf_conntrack_irc_init);
module_exit(nf_conntrack_irc_fini);
