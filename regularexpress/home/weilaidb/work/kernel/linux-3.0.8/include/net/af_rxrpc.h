#define _NET_RXRPC_H
struct rxrpc_call;
enum ;
typedef void (*rxrpc_interceptor_t)(struct sock *, unsigned long,
struct sk_buff *);
extern void rxrpc_kernel_intercept_rx_messages(struct socket *,
rxrpc_interceptor_t);
extern struct rxrpc_call *rxrpc_kernel_begin_call(struct socket *,
struct sockaddr_rxrpc *,
struct key *,
unsigned long,
gfp_t);
extern int rxrpc_kernel_send_data(struct rxrpc_call *, struct msghdr *,
size_t);
extern void rxrpc_kernel_abort_call(struct rxrpc_call *, u32);
extern void rxrpc_kernel_end_call(struct rxrpc_call *);
extern bool rxrpc_kernel_is_data_last(struct sk_buff *);
extern u32 rxrpc_kernel_get_abort_code(struct sk_buff *);
extern int rxrpc_kernel_get_error_number(struct sk_buff *);
extern void rxrpc_kernel_data_delivered(struct sk_buff *);
extern void rxrpc_kernel_free_skb(struct sk_buff *);
extern struct rxrpc_call *rxrpc_kernel_accept_call(struct socket *,
unsigned long);
extern int rxrpc_kernel_reject_call(struct socket *);
