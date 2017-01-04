static unsigned rxrpc_ack_defer = 1;
static const char *const rxrpc_acks[] = ;
static const s8 rxrpc_ack_priority[] = ;
void __rxrpc_propose_ACK(struct rxrpc_call *call, u8 ack_reason,
__be32 serial, bool immediate)
void rxrpc_propose_ACK(struct rxrpc_call *call, u8 ack_reason,
__be32 serial, bool immediate)
static void rxrpc_set_resend(struct rxrpc_call *call, u8 resend,
unsigned long resend_at)
static void rxrpc_resend(struct rxrpc_call *call)
static void rxrpc_resend_timer(struct rxrpc_call *call)
static int rxrpc_process_soft_ACKs(struct rxrpc_call *call,
struct rxrpc_ackpacket *ack,
struct sk_buff *skb)
static void rxrpc_rotate_tx_window(struct rxrpc_call *call, u32 hard)
static void rxrpc_clear_tx_window(struct rxrpc_call *call)
static int rxrpc_drain_rx_oos_queue(struct rxrpc_call *call)
static void rxrpc_insert_oos_packet(struct rxrpc_call *call,
struct sk_buff *skb)
static void rxrpc_zap_tx_window(struct rxrpc_call *call)
static void rxrpc_extract_ackinfo(struct rxrpc_call *call, struct sk_buff *skb,
unsigned latest, int nAcks)
static int rxrpc_process_rx_queue(struct rxrpc_call *call,
u32 *_abort_code)
static int rxrpc_post_message(struct rxrpc_call *call, u32 mark, u32 error,
bool fatal)
void rxrpc_process_call(struct work_struct *work)
