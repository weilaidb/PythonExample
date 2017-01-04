static int set_addr(struct sk_buff *skb,
unsigned char **data, int dataoff,
unsigned int addroff, __be32 ip, __be16 port)
static int set_h225_addr(struct sk_buff *skb,
unsigned char **data, int dataoff,
TransportAddress *taddr,
union nf_inet_addr *addr, __be16 port)
static int set_h245_addr(struct sk_buff *skb,
unsigned char **data, int dataoff,
H245_TransportAddress *taddr,
union nf_inet_addr *addr, __be16 port)
static int set_sig_addr(struct sk_buff *skb, struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned char **data,
TransportAddress *taddr, int count)
static int set_ras_addr(struct sk_buff *skb, struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned char **data,
TransportAddress *taddr, int count)
static int nat_rtp_rtcp(struct sk_buff *skb, struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned char **data, int dataoff,
H245_TransportAddress *taddr,
__be16 port, __be16 rtp_port,
struct nf_conntrack_expect *rtp_exp,
struct nf_conntrack_expect *rtcp_exp)
static int nat_t120(struct sk_buff *skb, struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned char **data, int dataoff,
H245_TransportAddress *taddr, __be16 port,
struct nf_conntrack_expect *exp)
static int nat_h245(struct sk_buff *skb, struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned char **data, int dataoff,
TransportAddress *taddr, __be16 port,
struct nf_conntrack_expect *exp)
static void ip_nat_q931_expect(struct nf_conn *new,
struct nf_conntrack_expect *this)
static int nat_q931(struct sk_buff *skb, struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned char **data, TransportAddress *taddr, int idx,
__be16 port, struct nf_conntrack_expect *exp)
static void ip_nat_callforwarding_expect(struct nf_conn *new,
struct nf_conntrack_expect *this)
static int nat_callforwarding(struct sk_buff *skb, struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned char **data, int dataoff,
TransportAddress *taddr, __be16 port,
struct nf_conntrack_expect *exp)
static int __init init(void)
static void __exit fini(void)
module_init(init);
module_exit(fini);
MODULE_AUTHOR("Jing Min Zhao <zhaojingmin@users.sourceforge.net>");
MODULE_DESCRIPTION("H.323 NAT helper");
MODULE_LICENSE("GPL");
MODULE_ALIAS("ip_nat_h323");
