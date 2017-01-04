static int sctp_rcv_ootb(struct sk_buff *);
static struct sctp_association *__sctp_rcv_lookup(struct sk_buff *skb,
const union sctp_addr *laddr,
const union sctp_addr *paddr,
struct sctp_transport **transportp);
static struct sctp_endpoint *__sctp_rcv_lookup_endpoint(const union sctp_addr *laddr);
static struct sctp_association *__sctp_lookup_association(
const union sctp_addr *local,
const union sctp_addr *peer,
struct sctp_transport **pt);
static int sctp_add_backlog(struct sock *sk, struct sk_buff *skb);
static inline int sctp_rcv_checksum(struct sk_buff *skb)
struct sctp_input_cb ;
#define SCTP_INPUT_CB(__skb)	((struct sctp_input_cb *)&((__skb)->cb[0]))
int sctp_rcv(struct sk_buff *skb)
int sctp_backlog_rcv(struct sock *sk, struct sk_buff *skb)
static int sctp_add_backlog(struct sock *sk, struct sk_buff *skb)
void sctp_icmp_frag_needed(struct sock *sk, struct sctp_association *asoc,
struct sctp_transport *t, __u32 pmtu)
void sctp_icmp_proto_unreachable(struct sock *sk,
struct sctp_association *asoc,
struct sctp_transport *t)
struct sock *sctp_err_lookup(int family, struct sk_buff *skb,
struct sctphdr *sctphdr,
struct sctp_association **app,
struct sctp_transport **tpp)
void sctp_err_finish(struct sock *sk, struct sctp_association *asoc)
void sctp_v4_err(struct sk_buff *skb, __u32 info)
static int sctp_rcv_ootb(struct sk_buff *skb)
static void __sctp_hash_endpoint(struct sctp_endpoint *ep)
void sctp_hash_endpoint(struct sctp_endpoint *ep)
static void __sctp_unhash_endpoint(struct sctp_endpoint *ep)
void sctp_unhash_endpoint(struct sctp_endpoint *ep)
static struct sctp_endpoint *__sctp_rcv_lookup_endpoint(const union sctp_addr *laddr)
static void __sctp_hash_established(struct sctp_association *asoc)
void sctp_hash_established(struct sctp_association *asoc)
static void __sctp_unhash_established(struct sctp_association *asoc)
void sctp_unhash_established(struct sctp_association *asoc)
static struct sctp_association *__sctp_lookup_association(
const union sctp_addr *local,
const union sctp_addr *peer,
struct sctp_transport **pt)
SCTP_STATIC
struct sctp_association *sctp_lookup_association(const union sctp_addr *laddr,
const union sctp_addr *paddr,
struct sctp_transport **transportp)
int sctp_has_association(const union sctp_addr *laddr,
const union sctp_addr *paddr)
static struct sctp_association *__sctp_rcv_init_lookup(struct sk_buff *skb,
const union sctp_addr *laddr, struct sctp_transport **transportp)
static struct sctp_association *__sctp_rcv_asconf_lookup(
sctp_chunkhdr_t *ch,
const union sctp_addr *laddr,
__be16 peer_port,
struct sctp_transport **transportp)
static struct sctp_association *__sctp_rcv_walk_lookup(struct sk_buff *skb,
const union sctp_addr *laddr,
struct sctp_transport **transportp)
static struct sctp_association *__sctp_rcv_lookup_harder(struct sk_buff *skb,
const union sctp_addr *laddr,
struct sctp_transport **transportp)
static struct sctp_association *__sctp_rcv_lookup(struct sk_buff *skb,
const union sctp_addr *paddr,
const union sctp_addr *laddr,
struct sctp_transport **transportp)
