static void sctp_endpoint_bh_rcv(struct work_struct *work);
static struct sctp_endpoint *sctp_endpoint_init(struct sctp_endpoint *ep,
struct sock *sk,
gfp_t gfp)
struct sctp_endpoint *sctp_endpoint_new(struct sock *sk, gfp_t gfp)
void sctp_endpoint_add_asoc(struct sctp_endpoint *ep,
struct sctp_association *asoc)
void sctp_endpoint_free(struct sctp_endpoint *ep)
static void sctp_endpoint_destroy(struct sctp_endpoint *ep)
void sctp_endpoint_hold(struct sctp_endpoint *ep)
void sctp_endpoint_put(struct sctp_endpoint *ep)
struct sctp_endpoint *sctp_endpoint_is_match(struct sctp_endpoint *ep,
const union sctp_addr *laddr)
static struct sctp_association *__sctp_endpoint_lookup_assoc(
const struct sctp_endpoint *ep,
const union sctp_addr *paddr,
struct sctp_transport **transport)
struct sctp_association *sctp_endpoint_lookup_assoc(
const struct sctp_endpoint *ep,
const union sctp_addr *paddr,
struct sctp_transport **transport)
int sctp_endpoint_is_peeled_off(struct sctp_endpoint *ep,
const union sctp_addr *paddr)
static void sctp_endpoint_bh_rcv(struct work_struct *work)
