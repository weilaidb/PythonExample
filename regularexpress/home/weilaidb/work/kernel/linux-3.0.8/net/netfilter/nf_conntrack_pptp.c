#define NF_CT_PPTP_VERSION "3.1"
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Harald Welte <laforge@gnumonks.org>");
MODULE_DESCRIPTION("Netfilter connection tracking helper module for PPTP");
MODULE_ALIAS("ip_conntrack_pptp");
MODULE_ALIAS_NFCT_HELPER("pptp");
static DEFINE_SPINLOCK(nf_pptp_lock);
int
(*nf_nat_pptp_hook_outbound)(struct sk_buff *skb,
struct nf_conn *ct, enum ip_conntrack_info ctinfo,
struct PptpControlHeader *ctlh,
union pptp_ctrl_union *pptpReq) __read_mostly;
EXPORT_SYMBOL_GPL(nf_nat_pptp_hook_outbound);
int
(*nf_nat_pptp_hook_inbound)(struct sk_buff *skb,
struct nf_conn *ct, enum ip_conntrack_info ctinfo,
struct PptpControlHeader *ctlh,
union pptp_ctrl_union *pptpReq) __read_mostly;
EXPORT_SYMBOL_GPL(nf_nat_pptp_hook_inbound);
void
(*nf_nat_pptp_hook_exp_gre)(struct nf_conntrack_expect *expect_orig,
struct nf_conntrack_expect *expect_reply)
__read_mostly;
EXPORT_SYMBOL_GPL(nf_nat_pptp_hook_exp_gre);
void
(*nf_nat_pptp_hook_expectfn)(struct nf_conn *ct,
struct nf_conntrack_expect *exp) __read_mostly;
EXPORT_SYMBOL_GPL(nf_nat_pptp_hook_expectfn);
#if defined(DEBUG) || defined(CONFIG_DYNAMIC_DEBUG)
const char *const pptp_msg_name[] = ;
EXPORT_SYMBOL(pptp_msg_name);
#define SECS *HZ
#define MINS * 60 SECS
#define HOURS * 60 MINS
#define PPTP_GRE_TIMEOUT 		(10 MINS)
#define PPTP_GRE_STREAM_TIMEOUT 	(5 HOURS)
static void pptp_expectfn(struct nf_conn *ct,
struct nf_conntrack_expect *exp)
static int destroy_sibling_or_exp(struct net *net, struct nf_conn *ct,
const struct nf_conntrack_tuple *t)
static void pptp_destroy_siblings(struct nf_conn *ct)
static int exp_gre(struct nf_conn *ct, __be16 callid, __be16 peer_callid)
static inline int
pptp_inbound_pkt(struct sk_buff *skb,
struct PptpControlHeader *ctlh,
union pptp_ctrl_union *pptpReq,
unsigned int reqlen,
struct nf_conn *ct,
enum ip_conntrack_info ctinfo)
static inline int
pptp_outbound_pkt(struct sk_buff *skb,
struct PptpControlHeader *ctlh,
union pptp_ctrl_union *pptpReq,
unsigned int reqlen,
struct nf_conn *ct,
enum ip_conntrack_info ctinfo)
static const unsigned int pptp_msg_size[] = ;
static int
conntrack_pptp_help(struct sk_buff *skb, unsigned int protoff,
struct nf_conn *ct, enum ip_conntrack_info ctinfo)
static const struct nf_conntrack_expect_policy pptp_exp_policy = ;
static struct nf_conntrack_helper pptp __read_mostly = ;
static void nf_conntrack_pptp_net_exit(struct net *net)
static struct pernet_operations nf_conntrack_pptp_net_ops = ;
static int __init nf_conntrack_pptp_init(void)
static void __exit nf_conntrack_pptp_fini(void)
module_init(nf_conntrack_pptp_init);
module_exit(nf_conntrack_pptp_fini);
