static LIST_HEAD(rxrpc_peers);
static DEFINE_RWLOCK(rxrpc_peer_lock);
static DECLARE_WAIT_QUEUE_HEAD(rxrpc_peer_wq);
static void rxrpc_destroy_peer(struct work_struct *work);
static void rxrpc_assess_MTU_size(struct rxrpc_peer *peer)
static struct rxrpc_peer *rxrpc_alloc_peer(struct sockaddr_rxrpc *srx,
gfp_t gfp)
struct rxrpc_peer *rxrpc_get_peer(struct sockaddr_rxrpc *srx, gfp_t gfp)
struct rxrpc_peer *rxrpc_find_peer(struct rxrpc_local *local,
__be32 addr, __be16 port)
void rxrpc_put_peer(struct rxrpc_peer *peer)
static void rxrpc_destroy_peer(struct work_struct *work)
void __exit rxrpc_destroy_all_peers(void)
