const char *const rxrpc_call_states[] = ;
struct kmem_cache *rxrpc_call_jar;
LIST_HEAD(rxrpc_calls);
DEFINE_RWLOCK(rxrpc_call_lock);
static unsigned rxrpc_call_max_lifetime = 60;
static unsigned rxrpc_dead_call_timeout = 2;
static void rxrpc_destroy_call(struct work_struct *work);
static void rxrpc_call_life_expired(unsigned long _call);
static void rxrpc_dead_call_expired(unsigned long _call);
static void rxrpc_ack_time_expired(unsigned long _call);
static void rxrpc_resend_time_expired(unsigned long _call);
static struct rxrpc_call *rxrpc_alloc_call(gfp_t gfp)
static struct rxrpc_call *rxrpc_alloc_client_call(
struct rxrpc_sock *rx,
struct rxrpc_transport *trans,
struct rxrpc_conn_bundle *bundle,
gfp_t gfp)
struct rxrpc_call *rxrpc_get_client_call(struct rxrpc_sock *rx,
struct rxrpc_transport *trans,
struct rxrpc_conn_bundle *bundle,
unsigned long user_call_ID,
int create,
gfp_t gfp)
struct rxrpc_call *rxrpc_incoming_call(struct rxrpc_sock *rx,
struct rxrpc_connection *conn,
struct rxrpc_header *hdr,
gfp_t gfp)
struct rxrpc_call *rxrpc_find_server_call(struct rxrpc_sock *rx,
unsigned long user_call_ID)
void rxrpc_release_call(struct rxrpc_call *call)
static void rxrpc_dead_call_expired(unsigned long _call)
static void rxrpc_mark_call_released(struct rxrpc_call *call)
void rxrpc_release_calls_on_socket(struct rxrpc_sock *rx)
void __rxrpc_put_call(struct rxrpc_call *call)
static void rxrpc_cleanup_call(struct rxrpc_call *call)
static void rxrpc_destroy_call(struct work_struct *work)
void __exit rxrpc_destroy_all_calls(void)
static void rxrpc_call_life_expired(unsigned long _call)
static void rxrpc_resend_time_expired(unsigned long _call)
static void rxrpc_ack_time_expired(unsigned long _call)
