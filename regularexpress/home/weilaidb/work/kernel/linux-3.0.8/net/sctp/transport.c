#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static struct sctp_transport *sctp_transport_init(struct sctp_transport *peer,
const union sctp_addr *addr,
gfp_t gfp)
struct sctp_transport *sctp_transport_new(const union sctp_addr *addr,
gfp_t gfp)
void sctp_transport_free(struct sctp_transport *transport)
static void sctp_transport_destroy(struct sctp_transport *transport)
void sctp_transport_reset_timers(struct sctp_transport *transport)
void sctp_transport_set_owner(struct sctp_transport *transport,
struct sctp_association *asoc)
void sctp_transport_pmtu(struct sctp_transport *transport, struct sock *sk)
static struct dst_entry *sctp_transport_dst_check(struct sctp_transport *t)
void sctp_transport_update_pmtu(struct sctp_transport *t, u32 pmtu)
void sctp_transport_route(struct sctp_transport *transport,
union sctp_addr *saddr, struct sctp_sock *opt)
void sctp_transport_hold(struct sctp_transport *transport)
void sctp_transport_put(struct sctp_transport *transport)
void sctp_transport_update_rto(struct sctp_transport *tp, __u32 rtt)
void sctp_transport_raise_cwnd(struct sctp_transport *transport,
__u32 sack_ctsn, __u32 bytes_acked)
void sctp_transport_lower_cwnd(struct sctp_transport *transport,
sctp_lower_cwnd_t reason)
void sctp_transport_burst_limited(struct sctp_transport *t)
void sctp_transport_burst_reset(struct sctp_transport *t)
unsigned long sctp_transport_timeout(struct sctp_transport *t)
void sctp_transport_reset(struct sctp_transport *t)
