static void rxrpc_abort_calls(struct rxrpc_connection *conn, int state,
u32 abort_code)
static int rxrpc_abort_connection(struct rxrpc_connection *conn,
u32 error, u32 abort_code)
static void rxrpc_call_is_secure(struct rxrpc_call *call)
static int rxrpc_process_event(struct rxrpc_connection *conn,
struct sk_buff *skb,
u32 *_abort_code)
static void rxrpc_secure_connection(struct rxrpc_connection *conn)
void rxrpc_process_connection(struct work_struct *work)
void rxrpc_reject_packet(struct rxrpc_local *local, struct sk_buff *skb)
void rxrpc_reject_packets(struct work_struct *work)
