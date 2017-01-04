static void rxrpc_transport_reaper(struct work_struct *work);
static LIST_HEAD(rxrpc_transports);
static DEFINE_RWLOCK(rxrpc_transport_lock);
static unsigned long rxrpc_transport_timeout = 3600 * 24;
static DECLARE_DELAYED_WORK(rxrpc_transport_reap, rxrpc_transport_reaper);
static struct rxrpc_transport *rxrpc_alloc_transport(struct rxrpc_local *local,
struct rxrpc_peer *peer,
gfp_t gfp)
struct rxrpc_transport *rxrpc_get_transport(struct rxrpc_local *local,
struct rxrpc_peer *peer,
gfp_t gfp)
struct rxrpc_transport *rxrpc_find_transport(struct rxrpc_local *local,
struct rxrpc_peer *peer)
void rxrpc_put_transport(struct rxrpc_transport *trans)
static void rxrpc_cleanup_transport(struct rxrpc_transport *trans)
static void rxrpc_transport_reaper(struct work_struct *work)
void __exit rxrpc_destroy_all_transports(void)
