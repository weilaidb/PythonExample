unsigned long rxrpc_ack_timeout = 1;
const char *rxrpc_pkts[] = ;
int rxrpc_queue_rcv_skb(struct rxrpc_call *call, struct sk_buff *skb,
bool force, bool terminal)
static int rxrpc_fast_process_data(struct rxrpc_call *call,
struct sk_buff *skb, u32 seq)
static void rxrpc_assume_implicit_ackall(struct rxrpc_call *call, u32 serial)
void rxrpc_fast_process_packet(struct rxrpc_call *call, struct sk_buff *skb)
static void rxrpc_process_jumbo_packet(struct rxrpc_call *call,
struct sk_buff *jumbo)
static void rxrpc_post_packet_to_call(struct rxrpc_connection *conn,
struct sk_buff *skb)
static void rxrpc_post_packet_to_conn(struct rxrpc_connection *conn,
struct sk_buff *skb)
void rxrpc_data_ready(struct sock *sk, int count)
