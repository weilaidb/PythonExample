#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static void sctp_assoc_bh_rcv(struct work_struct *work);
static void sctp_assoc_free_asconf_acks(struct sctp_association *asoc);
static void sctp_assoc_free_asconf_queue(struct sctp_association *asoc);
static u32 idr_low = 1;
static struct sctp_association *sctp_association_init(struct sctp_association *asoc,
const struct sctp_endpoint *ep,
const struct sock *sk,
sctp_scope_t scope,
gfp_t gfp)
struct sctp_association *sctp_association_new(const struct sctp_endpoint *ep,
const struct sock *sk,
sctp_scope_t scope,
gfp_t gfp)
void sctp_association_free(struct sctp_association *asoc)
static void sctp_association_destroy(struct sctp_association *asoc)
void sctp_assoc_set_primary(struct sctp_association *asoc,
struct sctp_transport *transport)
void sctp_assoc_rm_peer(struct sctp_association *asoc,
struct sctp_transport *peer)
struct sctp_transport *sctp_assoc_add_peer(struct sctp_association *asoc,
const union sctp_addr *addr,
const gfp_t gfp,
const int peer_state)
void sctp_assoc_del_peer(struct sctp_association *asoc,
const union sctp_addr *addr)
struct sctp_transport *sctp_assoc_lookup_paddr(
const struct sctp_association *asoc,
const union sctp_addr *address)
void sctp_assoc_del_nonprimary_peers(struct sctp_association *asoc,
struct sctp_transport *primary)
void sctp_assoc_control_transport(struct sctp_association *asoc,
struct sctp_transport *transport,
sctp_transport_cmd_t command,
sctp_sn_error_t error)
void sctp_association_hold(struct sctp_association *asoc)
void sctp_association_put(struct sctp_association *asoc)
__u32 sctp_association_get_next_tsn(struct sctp_association *asoc)
int sctp_cmp_addr_exact(const union sctp_addr *ss1,
const union sctp_addr *ss2)
struct sctp_chunk *sctp_get_ecne_prepend(struct sctp_association *asoc)
struct sctp_transport *sctp_assoc_lookup_tsn(struct sctp_association *asoc,
__u32 tsn)
struct sctp_transport *sctp_assoc_is_match(struct sctp_association *asoc,
const union sctp_addr *laddr,
const union sctp_addr *paddr)
static void sctp_assoc_bh_rcv(struct work_struct *work)
void sctp_assoc_migrate(struct sctp_association *assoc, struct sock *newsk)
void sctp_assoc_update(struct sctp_association *asoc,
struct sctp_association *new)
void sctp_assoc_update_retran_path(struct sctp_association *asoc)
struct sctp_transport *sctp_assoc_choose_alter_transport(
struct sctp_association *asoc, struct sctp_transport *last_sent_to)
void sctp_assoc_sync_pmtu(struct sctp_association *asoc)
static inline int sctp_peer_needs_update(struct sctp_association *asoc)
void sctp_assoc_rwnd_increase(struct sctp_association *asoc, unsigned len)
void sctp_assoc_rwnd_decrease(struct sctp_association *asoc, unsigned len)
int sctp_assoc_set_bind_addr_from_ep(struct sctp_association *asoc,
sctp_scope_t scope, gfp_t gfp)
int sctp_assoc_set_bind_addr_from_cookie(struct sctp_association *asoc,
struct sctp_cookie *cookie,
gfp_t gfp)
int sctp_assoc_lookup_laddr(struct sctp_association *asoc,
const union sctp_addr *laddr)
int sctp_assoc_set_id(struct sctp_association *asoc, gfp_t gfp)
static void sctp_assoc_free_asconf_queue(struct sctp_association *asoc)
static void sctp_assoc_free_asconf_acks(struct sctp_association *asoc)
void sctp_assoc_clean_asconf_ack_cache(const struct sctp_association *asoc)
struct sctp_chunk *sctp_assoc_lookup_asconf_ack(
const struct sctp_association *asoc,
__be32 serial)
void sctp_asconf_queue_teardown(struct sctp_association *asoc)
