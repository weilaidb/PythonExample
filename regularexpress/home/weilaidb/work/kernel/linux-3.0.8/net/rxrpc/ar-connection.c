static void rxrpc_connection_reaper(struct work_struct *work);
LIST_HEAD(rxrpc_connections);
DEFINE_RWLOCK(rxrpc_connection_lock);
static unsigned long rxrpc_connection_timeout = 10 * 60;
static DECLARE_DELAYED_WORK(rxrpc_connection_reap, rxrpc_connection_reaper);
static struct rxrpc_conn_bundle *rxrpc_alloc_bundle(gfp_t gfp)
static inline
int rxrpc_cmp_bundle(const struct rxrpc_conn_bundle *bundle,
struct key *key, __be16 service_id)
struct rxrpc_conn_bundle *rxrpc_get_bundle(struct rxrpc_sock *rx,
struct rxrpc_transport *trans,
struct key *key,
__be16 service_id,
gfp_t gfp)
void rxrpc_put_bundle(struct rxrpc_transport *trans,
struct rxrpc_conn_bundle *bundle)
static struct rxrpc_connection *rxrpc_alloc_connection(gfp_t gfp)
static void rxrpc_assign_connection_id(struct rxrpc_connection *conn)
static void rxrpc_add_call_ID_to_conn(struct rxrpc_connection *conn,
struct rxrpc_call *call)
static int rxrpc_connect_exclusive(struct rxrpc_sock *rx,
struct rxrpc_transport *trans,
__be16 service_id,
struct rxrpc_call *call,
gfp_t gfp)
int rxrpc_connect_call(struct rxrpc_sock *rx,
struct rxrpc_transport *trans,
struct rxrpc_conn_bundle *bundle,
struct rxrpc_call *call,
gfp_t gfp)
struct rxrpc_connection *
rxrpc_incoming_connection(struct rxrpc_transport *trans,
struct rxrpc_header *hdr,
gfp_t gfp)
struct rxrpc_connection *rxrpc_find_connection(struct rxrpc_transport *trans,
struct rxrpc_header *hdr)
void rxrpc_put_connection(struct rxrpc_connection *conn)
static void rxrpc_destroy_connection(struct rxrpc_connection *conn)
static void rxrpc_connection_reaper(struct work_struct *work)
void __exit rxrpc_destroy_all_connections(void)
