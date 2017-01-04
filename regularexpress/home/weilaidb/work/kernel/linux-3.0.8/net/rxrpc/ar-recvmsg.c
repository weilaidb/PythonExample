void rxrpc_remove_user_ID(struct rxrpc_sock *rx, struct rxrpc_call *call)
int rxrpc_recvmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t len, int flags)
void rxrpc_kernel_data_delivered(struct sk_buff *skb)
EXPORT_SYMBOL(rxrpc_kernel_data_delivered);
bool rxrpc_kernel_is_data_last(struct sk_buff *skb)
EXPORT_SYMBOL(rxrpc_kernel_is_data_last);
u32 rxrpc_kernel_get_abort_code(struct sk_buff *skb)
EXPORT_SYMBOL(rxrpc_kernel_get_abort_code);
int rxrpc_kernel_get_error_number(struct sk_buff *skb)
EXPORT_SYMBOL(rxrpc_kernel_get_error_number);
