static LIST_HEAD(rxrpc_locals);
DEFINE_RWLOCK(rxrpc_local_lock);
static DECLARE_RWSEM(rxrpc_local_sem);
static DECLARE_WAIT_QUEUE_HEAD(rxrpc_local_wq);
static void rxrpc_destroy_local(struct work_struct *work);
static
struct rxrpc_local *rxrpc_alloc_local(struct sockaddr_rxrpc *srx)
static int rxrpc_create_local(struct rxrpc_local *local)
struct rxrpc_local *rxrpc_lookup_local(struct sockaddr_rxrpc *srx)
void rxrpc_put_local(struct rxrpc_local *local)
static void rxrpc_destroy_local(struct work_struct *work)
void __exit rxrpc_destroy_all_locals(void)
