static unsigned int default_rrq_ttl __read_mostly = 300;
module_param(default_rrq_ttl, uint, 0600);
MODULE_PARM_DESC(default_rrq_ttl, "use this TTL if it's missing in RRQ");
static int gkrouted_only __read_mostly = 1;
module_param(gkrouted_only, int, 0600);
MODULE_PARM_DESC(gkrouted_only, "only accept calls from gatekeeper");
static int callforward_filter __read_mostly = 1;
module_param(callforward_filter, bool, 0600);
MODULE_PARM_DESC(callforward_filter, "only create call forwarding expectations "
"if both endpoints are on different sides "
"(determined by routing information)");
int (*set_h245_addr_hook) (struct sk_buff *skb,
unsigned char **data, int dataoff,
H245_TransportAddress *taddr,
union nf_inet_addr *addr, __be16 port)
__read_mostly;
int (*set_h225_addr_hook) (struct sk_buff *skb,
unsigned char **data, int dataoff,
TransportAddress *taddr,
union nf_inet_addr *addr, __be16 port)
__read_mostly;
int (*set_sig_addr_hook) (struct sk_buff *skb,
struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned char **data,
TransportAddress *taddr, int count) __read_mostly;
int (*set_ras_addr_hook) (struct sk_buff *skb,
struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned char **data,
TransportAddress *taddr, int count) __read_mostly;
int (*nat_rtp_rtcp_hook) (struct sk_buff *skb,
struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned char **data, int dataoff,
H245_TransportAddress *taddr,
__be16 port, __be16 rtp_port,
struct nf_conntrack_expect *rtp_exp,
struct nf_conntrack_expect *rtcp_exp) __read_mostly;
int (*nat_t120_hook) (struct sk_buff *skb,
struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned char **data, int dataoff,
H245_TransportAddress *taddr, __be16 port,
struct nf_conntrack_expect *exp) __read_mostly;
int (*nat_h245_hook) (struct sk_buff *skb,
struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned char **data, int dataoff,
TransportAddress *taddr, __be16 port,
struct nf_conntrack_expect *exp) __read_mostly;
int (*nat_callforwarding_hook) (struct sk_buff *skb,
struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned char **data, int dataoff,
TransportAddress *taddr, __be16 port,
struct nf_conntrack_expect *exp) __read_mostly;
int (*nat_q931_hook) (struct sk_buff *skb,
struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned char **data, TransportAddress *taddr, int idx,
__be16 port, struct nf_conntrack_expect *exp)
__read_mostly;
static DEFINE_SPINLOCK(nf_h323_lock);
static char *h323_buffer;
static struct nf_conntrack_helper nf_conntrack_helper_h245;
static struct nf_conntrack_helper nf_conntrack_helper_q931[];
static struct nf_conntrack_helper nf_conntrack_helper_ras[];
static int get_tpkt_data(struct sk_buff *skb, unsigned int protoff,
struct nf_conn *ct, enum ip_conntrack_info ctinfo,
unsigned char **data, int *datalen, int *dataoff)
static int get_h245_addr(struct nf_conn *ct, const unsigned char *data,
H245_TransportAddress *taddr,
union nf_inet_addr *addr, __be16 *port)
static int expect_rtp_rtcp(struct sk_buff *skb, struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned char **data, int dataoff,
H245_TransportAddress *taddr)
static int expect_t120(struct sk_buff *skb,
struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned char **data, int dataoff,
H245_TransportAddress *taddr)
static int process_h245_channel(struct sk_buff *skb,
struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned char **data, int dataoff,
H2250LogicalChannelParameters *channel)
static int process_olc(struct sk_buff *skb, struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned char **data, int dataoff,
OpenLogicalChannel *olc)
static int process_olca(struct sk_buff *skb, struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned char **data, int dataoff,
OpenLogicalChannelAck *olca)
static int process_h245(struct sk_buff *skb, struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned char **data, int dataoff,
MultimediaSystemControlMessage *mscm)
static int h245_help(struct sk_buff *skb, unsigned int protoff,
struct nf_conn *ct, enum ip_conntrack_info ctinfo)
static const struct nf_conntrack_expect_policy h245_exp_policy = ;
static struct nf_conntrack_helper nf_conntrack_helper_h245 __read_mostly = ;
int get_h225_addr(struct nf_conn *ct, unsigned char *data,
TransportAddress *taddr,
union nf_inet_addr *addr, __be16 *port)
static int expect_h245(struct sk_buff *skb, struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned char **data, int dataoff,
TransportAddress *taddr)
static int callforward_do_filter(const union nf_inet_addr *src,
const union nf_inet_addr *dst,
u_int8_t family)
static int expect_callforwarding(struct sk_buff *skb,
struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned char **data, int dataoff,
TransportAddress *taddr)
static int process_setup(struct sk_buff *skb, struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned char **data, int dataoff,
Setup_UUIE *setup)
static int process_callproceeding(struct sk_buff *skb,
struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned char **data, int dataoff,
CallProceeding_UUIE *callproc)
static int process_connect(struct sk_buff *skb, struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned char **data, int dataoff,
Connect_UUIE *connect)
static int process_alerting(struct sk_buff *skb, struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned char **data, int dataoff,
Alerting_UUIE *alert)
static int process_facility(struct sk_buff *skb, struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned char **data, int dataoff,
Facility_UUIE *facility)
static int process_progress(struct sk_buff *skb, struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned char **data, int dataoff,
Progress_UUIE *progress)
static int process_q931(struct sk_buff *skb, struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned char **data, int dataoff, Q931 *q931)
static int q931_help(struct sk_buff *skb, unsigned int protoff,
struct nf_conn *ct, enum ip_conntrack_info ctinfo)
static const struct nf_conntrack_expect_policy q931_exp_policy = ;
static struct nf_conntrack_helper nf_conntrack_helper_q931[] __read_mostly = ;
static unsigned char *get_udp_data(struct sk_buff *skb, unsigned int protoff,
int *datalen)
static struct nf_conntrack_expect *find_expect(struct nf_conn *ct,
union nf_inet_addr *addr,
__be16 port)
static int set_expect_timeout(struct nf_conntrack_expect *exp,
unsigned timeout)
static int expect_q931(struct sk_buff *skb, struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned char **data,
TransportAddress *taddr, int count)
static int process_grq(struct sk_buff *skb, struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned char **data, GatekeeperRequest *grq)
static int process_gcf(struct sk_buff *skb, struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned char **data, GatekeeperConfirm *gcf)
static int process_rrq(struct sk_buff *skb, struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned char **data, RegistrationRequest *rrq)
static int process_rcf(struct sk_buff *skb, struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned char **data, RegistrationConfirm *rcf)
static int process_urq(struct sk_buff *skb, struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned char **data, UnregistrationRequest *urq)
static int process_arq(struct sk_buff *skb, struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned char **data, AdmissionRequest *arq)
static int process_acf(struct sk_buff *skb, struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned char **data, AdmissionConfirm *acf)
static int process_lrq(struct sk_buff *skb, struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned char **data, LocationRequest *lrq)
static int process_lcf(struct sk_buff *skb, struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned char **data, LocationConfirm *lcf)
static int process_irr(struct sk_buff *skb, struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned char **data, InfoRequestResponse *irr)
static int process_ras(struct sk_buff *skb, struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned char **data, RasMessage *ras)
static int ras_help(struct sk_buff *skb, unsigned int protoff,
struct nf_conn *ct, enum ip_conntrack_info ctinfo)
static const struct nf_conntrack_expect_policy ras_exp_policy = ;
static struct nf_conntrack_helper nf_conntrack_helper_ras[] __read_mostly = ;
static void __exit nf_conntrack_h323_fini(void)
static int __init nf_conntrack_h323_init(void)
module_init(nf_conntrack_h323_init);
module_exit(nf_conntrack_h323_fini);
EXPORT_SYMBOL_GPL(get_h225_addr);
EXPORT_SYMBOL_GPL(set_h245_addr_hook);
EXPORT_SYMBOL_GPL(set_h225_addr_hook);
EXPORT_SYMBOL_GPL(set_sig_addr_hook);
EXPORT_SYMBOL_GPL(set_ras_addr_hook);
EXPORT_SYMBOL_GPL(nat_rtp_rtcp_hook);
EXPORT_SYMBOL_GPL(nat_t120_hook);
EXPORT_SYMBOL_GPL(nat_h245_hook);
EXPORT_SYMBOL_GPL(nat_callforwarding_hook);
EXPORT_SYMBOL_GPL(nat_q931_hook);
MODULE_AUTHOR("Jing Min Zhao <zhaojingmin@users.sourceforge.net>");
MODULE_DESCRIPTION("H.323 connection tracking helper");
MODULE_LICENSE("GPL");
MODULE_ALIAS("ip_conntrack_h323");
MODULE_ALIAS_NFCT_HELPER("h323");
