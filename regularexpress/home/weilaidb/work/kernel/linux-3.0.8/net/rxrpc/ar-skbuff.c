static void rxrpc_request_final_ACK(struct rxrpc_call *call)
static void rxrpc_hard_ACK_data(struct rxrpc_call *call,
struct rxrpc_skb_priv *sp)
void rxrpc_packet_destructor(struct sk_buff *skb)
void rxrpc_kernel_free_skb(struct sk_buff *skb)
EXPORT_SYMBOL(rxrpc_kernel_free_skb);
