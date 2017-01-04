static int rxrpc_busy(struct rxrpc_local *local, struct sockaddr_rxrpc *srx,
struct rxrpc_header *hdr)
static int rxrpc_accept_incoming_call(struct rxrpc_local *local,
struct rxrpc_sock *rx,
struct sk_buff *skb,
struct sockaddr_rxrpc *srx)
void rxrpc_accept_incoming_calls(struct work_struct *work)
struct rxrpc_call *rxrpc_accept_call(struct rxrpc_sock *rx,
unsigned long user_call_ID)
int rxrpc_reject_call(struct rxrpc_sock *rx)
struct rxrpc_call *rxrpc_kernel_accept_call(struct socket *sock,
unsigned long user_call_ID)
EXPORT_SYMBOL(rxrpc_kernel_accept_call);
int rxrpc_kernel_reject_call(struct socket *sock)
EXPORT_SYMBOL(rxrpc_kernel_reject_call);
