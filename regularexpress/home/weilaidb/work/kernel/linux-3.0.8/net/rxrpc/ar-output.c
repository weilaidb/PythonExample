int rxrpc_resend_timeout = 4;
static int rxrpc_send_data(struct kiocb *iocb,
struct rxrpc_sock *rx,
struct rxrpc_call *call,
struct msghdr *msg, size_t len);
static int rxrpc_sendmsg_cmsg(struct rxrpc_sock *rx, struct msghdr *msg,
unsigned long *user_call_ID,
enum rxrpc_command *command,
u32 *abort_code,
bool server)
static void rxrpc_send_abort(struct rxrpc_call *call, u32 abort_code)
int rxrpc_client_sendmsg(struct kiocb *iocb, struct rxrpc_sock *rx,
struct rxrpc_transport *trans, struct msghdr *msg,
size_t len)
int rxrpc_kernel_send_data(struct rxrpc_call *call, struct msghdr *msg,
size_t len)
EXPORT_SYMBOL(rxrpc_kernel_send_data);
void rxrpc_kernel_abort_call(struct rxrpc_call *call, u32 abort_code)
EXPORT_SYMBOL(rxrpc_kernel_abort_call);
int rxrpc_server_sendmsg(struct kiocb *iocb, struct rxrpc_sock *rx,
struct msghdr *msg, size_t len)
int rxrpc_send_packet(struct rxrpc_transport *trans, struct sk_buff *skb)
static int rxrpc_wait_for_tx_window(struct rxrpc_sock *rx,
struct rxrpc_call *call,
long *timeo)
static inline void rxrpc_instant_resend(struct rxrpc_call *call)
static void rxrpc_queue_packet(struct rxrpc_call *call, struct sk_buff *skb,
bool last)
static int rxrpc_send_data(struct kiocb *iocb,
struct rxrpc_sock *rx,
struct rxrpc_call *call,
struct msghdr *msg, size_t len)
