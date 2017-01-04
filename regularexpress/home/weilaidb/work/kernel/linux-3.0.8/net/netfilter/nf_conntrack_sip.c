MODULE_LICENSE("GPL");
MODULE_AUTHOR("Christian Hentschel <chentschel@arnet.com.ar>");
MODULE_DESCRIPTION("SIP connection tracking helper");
MODULE_ALIAS("ip_conntrack_sip");
MODULE_ALIAS_NFCT_HELPER("sip");
#define MAX_PORTS	8
static unsigned short ports[MAX_PORTS];
static unsigned int ports_c;
module_param_array(ports, ushort, &ports_c, 0400);
MODULE_PARM_DESC(ports, "port numbers of SIP servers");
static unsigned int sip_timeout __read_mostly = SIP_TIMEOUT;
module_param(sip_timeout, uint, 0600);
MODULE_PARM_DESC(sip_timeout, "timeout for the master SIP session");
static int sip_direct_signalling __read_mostly = 1;
module_param(sip_direct_signalling, int, 0600);
MODULE_PARM_DESC(sip_direct_signalling, "expect incoming calls from registrar "
"only (default 1)");
static int sip_direct_media __read_mostly = 1;
module_param(sip_direct_media, int, 0600);
MODULE_PARM_DESC(sip_direct_media, "Expect Media streams between signalling "
"endpoints only (default 1)");
unsigned int (*nf_nat_sip_hook)(struct sk_buff *skb, unsigned int dataoff,
const char **dptr,
unsigned int *datalen) __read_mostly;
EXPORT_SYMBOL_GPL(nf_nat_sip_hook);
void (*nf_nat_sip_seq_adjust_hook)(struct sk_buff *skb, s16 off) __read_mostly;
EXPORT_SYMBOL_GPL(nf_nat_sip_seq_adjust_hook);
unsigned int (*nf_nat_sip_expect_hook)(struct sk_buff *skb,
unsigned int dataoff,
const char **dptr,
unsigned int *datalen,
struct nf_conntrack_expect *exp,
unsigned int matchoff,
unsigned int matchlen) __read_mostly;
EXPORT_SYMBOL_GPL(nf_nat_sip_expect_hook);
unsigned int (*nf_nat_sdp_addr_hook)(struct sk_buff *skb, unsigned int dataoff,
const char **dptr,
unsigned int *datalen,
unsigned int sdpoff,
enum sdp_header_types type,
enum sdp_header_types term,
const union nf_inet_addr *addr)
__read_mostly;
EXPORT_SYMBOL_GPL(nf_nat_sdp_addr_hook);
unsigned int (*nf_nat_sdp_port_hook)(struct sk_buff *skb, unsigned int dataoff,
const char **dptr,
unsigned int *datalen,
unsigned int matchoff,
unsigned int matchlen,
u_int16_t port) __read_mostly;
EXPORT_SYMBOL_GPL(nf_nat_sdp_port_hook);
unsigned int (*nf_nat_sdp_session_hook)(struct sk_buff *skb,
unsigned int dataoff,
const char **dptr,
unsigned int *datalen,
unsigned int sdpoff,
const union nf_inet_addr *addr)
__read_mostly;
EXPORT_SYMBOL_GPL(nf_nat_sdp_session_hook);
unsigned int (*nf_nat_sdp_media_hook)(struct sk_buff *skb, unsigned int dataoff,
const char **dptr,
unsigned int *datalen,
struct nf_conntrack_expect *rtp_exp,
struct nf_conntrack_expect *rtcp_exp,
unsigned int mediaoff,
unsigned int medialen,
union nf_inet_addr *rtp_addr)
__read_mostly;
EXPORT_SYMBOL_GPL(nf_nat_sdp_media_hook);
static int string_len(const struct nf_conn *ct, const char *dptr,
const char *limit, int *shift)
static int digits_len(const struct nf_conn *ct, const char *dptr,
const char *limit, int *shift)
static int iswordc(const char c)
static int word_len(const char *dptr, const char *limit)
static int callid_len(const struct nf_conn *ct, const char *dptr,
const char *limit, int *shift)
static int media_len(const struct nf_conn *ct, const char *dptr,
const char *limit, int *shift)
static int parse_addr(const struct nf_conn *ct, const char *cp,
const char **endp, union nf_inet_addr *addr,
const char *limit)
static int epaddr_len(const struct nf_conn *ct, const char *dptr,
const char *limit, int *shift)
static int skp_epaddr_len(const struct nf_conn *ct, const char *dptr,
const char *limit, int *shift)
int ct_sip_parse_request(const struct nf_conn *ct,
const char *dptr, unsigned int datalen,
unsigned int *matchoff, unsigned int *matchlen,
union nf_inet_addr *addr, __be16 *port)
EXPORT_SYMBOL_GPL(ct_sip_parse_request);
static const struct sip_header ct_sip_hdrs[] = ;
static const char *sip_follow_continuation(const char *dptr, const char *limit)
static const char *sip_skip_whitespace(const char *dptr, const char *limit)
static const char *ct_sip_header_search(const char *dptr, const char *limit,
const char *needle, unsigned int len)
int ct_sip_get_header(const struct nf_conn *ct, const char *dptr,
unsigned int dataoff, unsigned int datalen,
enum sip_header_types type,
unsigned int *matchoff, unsigned int *matchlen)
EXPORT_SYMBOL_GPL(ct_sip_get_header);
static int ct_sip_next_header(const struct nf_conn *ct, const char *dptr,
unsigned int dataoff, unsigned int datalen,
enum sip_header_types type,
unsigned int *matchoff, unsigned int *matchlen)
static int ct_sip_walk_headers(const struct nf_conn *ct, const char *dptr,
unsigned int dataoff, unsigned int datalen,
enum sip_header_types type, int *in_header,
unsigned int *matchoff, unsigned int *matchlen)
int ct_sip_parse_header_uri(const struct nf_conn *ct, const char *dptr,
unsigned int *dataoff, unsigned int datalen,
enum sip_header_types type, int *in_header,
unsigned int *matchoff, unsigned int *matchlen,
union nf_inet_addr *addr, __be16 *port)
EXPORT_SYMBOL_GPL(ct_sip_parse_header_uri);
static int ct_sip_parse_param(const struct nf_conn *ct, const char *dptr,
unsigned int dataoff, unsigned int datalen,
const char *name,
unsigned int *matchoff, unsigned int *matchlen)
int ct_sip_parse_address_param(const struct nf_conn *ct, const char *dptr,
unsigned int dataoff, unsigned int datalen,
const char *name,
unsigned int *matchoff, unsigned int *matchlen,
union nf_inet_addr *addr)
EXPORT_SYMBOL_GPL(ct_sip_parse_address_param);
int ct_sip_parse_numerical_param(const struct nf_conn *ct, const char *dptr,
unsigned int dataoff, unsigned int datalen,
const char *name,
unsigned int *matchoff, unsigned int *matchlen,
unsigned int *val)
EXPORT_SYMBOL_GPL(ct_sip_parse_numerical_param);
static int ct_sip_parse_transport(struct nf_conn *ct, const char *dptr,
unsigned int dataoff, unsigned int datalen,
u8 *proto)
static const struct sip_header ct_sdp_hdrs[] = ;
static const char *ct_sdp_header_search(const char *dptr, const char *limit,
const char *needle, unsigned int len)
int ct_sip_get_sdp_header(const struct nf_conn *ct, const char *dptr,
unsigned int dataoff, unsigned int datalen,
enum sdp_header_types type,
enum sdp_header_types term,
unsigned int *matchoff, unsigned int *matchlen)
EXPORT_SYMBOL_GPL(ct_sip_get_sdp_header);
static int ct_sip_parse_sdp_addr(const struct nf_conn *ct, const char *dptr,
unsigned int dataoff, unsigned int datalen,
enum sdp_header_types type,
enum sdp_header_types term,
unsigned int *matchoff, unsigned int *matchlen,
union nf_inet_addr *addr)
static int refresh_signalling_expectation(struct nf_conn *ct,
union nf_inet_addr *addr,
u8 proto, __be16 port,
unsigned int expires)
static void flush_expectations(struct nf_conn *ct, bool media)
static int set_expected_rtp_rtcp(struct sk_buff *skb, unsigned int dataoff,
const char **dptr, unsigned int *datalen,
union nf_inet_addr *daddr, __be16 port,
enum sip_expectation_classes class,
unsigned int mediaoff, unsigned int medialen)
static const struct sdp_media_type sdp_media_types[] = ;
static const struct sdp_media_type *sdp_media_type(const char *dptr,
unsigned int matchoff,
unsigned int matchlen)
static int process_sdp(struct sk_buff *skb, unsigned int dataoff,
const char **dptr, unsigned int *datalen,
unsigned int cseq)
static int process_invite_response(struct sk_buff *skb, unsigned int dataoff,
const char **dptr, unsigned int *datalen,
unsigned int cseq, unsigned int code)
static int process_update_response(struct sk_buff *skb, unsigned int dataoff,
const char **dptr, unsigned int *datalen,
unsigned int cseq, unsigned int code)
static int process_prack_response(struct sk_buff *skb, unsigned int dataoff,
const char **dptr, unsigned int *datalen,
unsigned int cseq, unsigned int code)
static int process_invite_request(struct sk_buff *skb, unsigned int dataoff,
const char **dptr, unsigned int *datalen,
unsigned int cseq)
static int process_bye_request(struct sk_buff *skb, unsigned int dataoff,
const char **dptr, unsigned int *datalen,
unsigned int cseq)
static int process_register_request(struct sk_buff *skb, unsigned int dataoff,
const char **dptr, unsigned int *datalen,
unsigned int cseq)
static int process_register_response(struct sk_buff *skb, unsigned int dataoff,
const char **dptr, unsigned int *datalen,
unsigned int cseq, unsigned int code)
static const struct sip_handler sip_handlers[] = ;
static int process_sip_response(struct sk_buff *skb, unsigned int dataoff,
const char **dptr, unsigned int *datalen)
static int process_sip_request(struct sk_buff *skb, unsigned int dataoff,
const char **dptr, unsigned int *datalen)
static int process_sip_msg(struct sk_buff *skb, struct nf_conn *ct,
unsigned int dataoff, const char **dptr,
unsigned int *datalen)
static int sip_help_tcp(struct sk_buff *skb, unsigned int protoff,
struct nf_conn *ct, enum ip_conntrack_info ctinfo)
static int sip_help_udp(struct sk_buff *skb, unsigned int protoff,
struct nf_conn *ct, enum ip_conntrack_info ctinfo)
static struct nf_conntrack_helper sip[MAX_PORTS][4] __read_mostly;
static char sip_names[MAX_PORTS][4][sizeof("sip-65535")] __read_mostly;
static const struct nf_conntrack_expect_policy sip_exp_policy[SIP_EXPECT_MAX + 1] = ;
static void nf_conntrack_sip_fini(void)
static int __init nf_conntrack_sip_init(void)
module_init(nf_conntrack_sip_init);
module_exit(nf_conntrack_sip_fini);
