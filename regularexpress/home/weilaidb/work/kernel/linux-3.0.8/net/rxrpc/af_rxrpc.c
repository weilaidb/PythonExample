MODULE_DESCRIPTION("RxRPC network protocol");
MODULE_AUTHOR("Red Hat, Inc.");
MODULE_LICENSE("GPL");
MODULE_ALIAS_NETPROTO(PF_RXRPC);
unsigned rxrpc_debug;
module_param_named(debug, rxrpc_debug, uint, S_IWUSR | S_IRUGO);
MODULE_PARM_DESC(debug, "RxRPC debugging mask");
static int sysctl_rxrpc_max_qlen __read_mostly = 10;
static struct proto rxrpc_proto;
static const struct proto_ops rxrpc_rpc_ops;
__be32 rxrpc_epoch;
atomic_t rxrpc_debug_id;
atomic_t rxrpc_n_skbs;
struct workqueue_struct *rxrpc_workqueue;
static void rxrpc_sock_destructor(struct sock *);
static inline int rxrpc_writable(struct sock *sk)
static void rxrpc_write_space(struct sock *sk)
static int rxrpc_validate_address(struct rxrpc_sock *rx,
struct sockaddr_rxrpc *srx,
int len)
static int rxrpc_bind(struct socket *sock, struct sockaddr *saddr, int len)
static int rxrpc_listen(struct socket *sock, int backlog)
static struct rxrpc_transport *rxrpc_name_to_transport(struct socket *sock,
struct sockaddr *addr,
int addr_len, int flags,
gfp_t gfp)
struct rxrpc_call *rxrpc_kernel_begin_call(struct socket *sock,
struct sockaddr_rxrpc *srx,
struct key *key,
unsigned long user_call_ID,
gfp_t gfp)
EXPORT_SYMBOL(rxrpc_kernel_begin_call);
void rxrpc_kernel_end_call(struct rxrpc_call *call)
EXPORT_SYMBOL(rxrpc_kernel_end_call);
void rxrpc_kernel_intercept_rx_messages(struct socket *sock,
rxrpc_interceptor_t interceptor)
EXPORT_SYMBOL(rxrpc_kernel_intercept_rx_messages);
static int rxrpc_connect(struct socket *sock, struct sockaddr *addr,
int addr_len, int flags)
static int rxrpc_sendmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *m, size_t len)
static int rxrpc_setsockopt(struct socket *sock, int level, int optname,
char __user *optval, unsigned int optlen)
static unsigned int rxrpc_poll(struct file *file, struct socket *sock,
poll_table *wait)
static int rxrpc_create(struct net *net, struct socket *sock, int protocol,
int kern)
static void rxrpc_sock_destructor(struct sock *sk)
static int rxrpc_release_sock(struct sock *sk)
static int rxrpc_release(struct socket *sock)
static const struct proto_ops rxrpc_rpc_ops = ;
static struct proto rxrpc_proto = ;
static const struct net_proto_family rxrpc_family_ops = ;
static int __init af_rxrpc_init(void)
static void __exit af_rxrpc_exit(void)
module_init(af_rxrpc_init);
module_exit(af_rxrpc_exit);
