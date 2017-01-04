MODULE_LICENSE("GPL");
MODULE_AUTHOR("Christian Hentschel <chentschel@arnet.com.ar>");
MODULE_DESCRIPTION("SIP NAT helper");
MODULE_ALIAS("ip_nat_sip");
static unsigned int mangle_packet(struct sk_buff *skb, unsigned int dataoff,
const char **dptr, unsigned int *datalen,
unsigned int matchoff, unsigned int matchlen,
const char *buffer, unsigned int buflen)
static int map_addr(struct sk_buff *skb, unsigned int dataoff,
const char **dptr, unsigned int *datalen,
unsigned int matchoff, unsigned int matchlen,
union nf_inet_addr *addr, __be16 port)
static int map_sip_addr(struct sk_buff *skb, unsigned int dataoff,
const char **dptr, unsigned int *datalen,
enum sip_header_types type)
static unsigned int ip_nat_sip(struct sk_buff *skb, unsigned int dataoff,
const char **dptr, unsigned int *datalen)
static void ip_nat_sip_seq_adjust(struct sk_buff *skb, s16 off)
static void ip_nat_sip_expected(struct nf_conn *ct,
struct nf_conntrack_expect *exp)
static unsigned int ip_nat_sip_expect(struct sk_buff *skb, unsigned int dataoff,
const char **dptr, unsigned int *datalen,
struct nf_conntrack_expect *exp,
unsigned int matchoff,
unsigned int matchlen)
static int mangle_content_len(struct sk_buff *skb, unsigned int dataoff,
const char **dptr, unsigned int *datalen)
static int mangle_sdp_packet(struct sk_buff *skb, unsigned int dataoff,
const char **dptr, unsigned int *datalen,
unsigned int sdpoff,
enum sdp_header_types type,
enum sdp_header_types term,
char *buffer, int buflen)
static unsigned int ip_nat_sdp_addr(struct sk_buff *skb, unsigned int dataoff,
const char **dptr, unsigned int *datalen,
unsigned int sdpoff,
enum sdp_header_types type,
enum sdp_header_types term,
const union nf_inet_addr *addr)
static unsigned int ip_nat_sdp_port(struct sk_buff *skb, unsigned int dataoff,
const char **dptr, unsigned int *datalen,
unsigned int matchoff,
unsigned int matchlen,
u_int16_t port)
static unsigned int ip_nat_sdp_session(struct sk_buff *skb, unsigned int dataoff,
const char **dptr, unsigned int *datalen,
unsigned int sdpoff,
const union nf_inet_addr *addr)
static unsigned int ip_nat_sdp_media(struct sk_buff *skb, unsigned int dataoff,
const char **dptr, unsigned int *datalen,
struct nf_conntrack_expect *rtp_exp,
struct nf_conntrack_expect *rtcp_exp,
unsigned int mediaoff,
unsigned int medialen,
union nf_inet_addr *rtp_addr)
static void __exit nf_nat_sip_fini(void)
static int __init nf_nat_sip_init(void)
module_init(nf_nat_sip_init);
module_exit(nf_nat_sip_fini);
