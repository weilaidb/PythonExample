#define SS_LISTENING	-1
#define SS_READY	-2
#define OVERLOAD_LIMIT_BASE	5000
#define CONN_TIMEOUT_DEFAULT	8000
struct tipc_sock ;
#define tipc_sk(sk) ((struct tipc_sock *)(sk))
#define tipc_sk_port(sk) ((struct tipc_port *)(tipc_sk(sk)->p))
#define tipc_rx_ready(sock) (!skb_queue_empty(&sock->sk->sk_receive_queue) || \
(sock->state == SS_DISCONNECTING))
static int backlog_rcv(struct sock *sk, struct sk_buff *skb);
static u32 dispatch(struct tipc_port *tport, struct sk_buff *buf);
static void wakeupdispatch(struct tipc_port *tport);
static const struct proto_ops packet_ops;
static const struct proto_ops stream_ops;
static const struct proto_ops msg_ops;
static struct proto tipc_proto;
static int sockets_enabled;
static atomic_t tipc_queue_size = ATOMIC_INIT(0);
static void advance_rx_queue(struct sock *sk)
static void discard_rx_queue(struct sock *sk)
static void reject_rx_queue(struct sock *sk)
static int tipc_create(struct net *net, struct socket *sock, int protocol,
int kern)
static int release(struct socket *sock)
static int bind(struct socket *sock, struct sockaddr *uaddr, int uaddr_len)
static int get_name(struct socket *sock, struct sockaddr *uaddr,
int *uaddr_len, int peer)
static unsigned int poll(struct file *file, struct socket *sock,
poll_table *wait)
static int dest_name_check(struct sockaddr_tipc *dest, struct msghdr *m)
static int send_msg(struct kiocb *iocb, struct socket *sock,
struct msghdr *m, size_t total_len)
static int send_packet(struct kiocb *iocb, struct socket *sock,
struct msghdr *m, size_t total_len)
static int send_stream(struct kiocb *iocb, struct socket *sock,
struct msghdr *m, size_t total_len)
static int auto_connect(struct socket *sock, struct tipc_msg *msg)
static void set_orig_addr(struct msghdr *m, struct tipc_msg *msg)
static int anc_data_recv(struct msghdr *m, struct tipc_msg *msg,
struct tipc_port *tport)
static int recv_msg(struct kiocb *iocb, struct socket *sock,
struct msghdr *m, size_t buf_len, int flags)
static int recv_stream(struct kiocb *iocb, struct socket *sock,
struct msghdr *m, size_t buf_len, int flags)
static int rx_queue_full(struct tipc_msg *msg, u32 queue_size, u32 base)
static u32 filter_rcv(struct sock *sk, struct sk_buff *buf)
static int backlog_rcv(struct sock *sk, struct sk_buff *buf)
static u32 dispatch(struct tipc_port *tport, struct sk_buff *buf)
static void wakeupdispatch(struct tipc_port *tport)
static int connect(struct socket *sock, struct sockaddr *dest, int destlen,
int flags)
static int listen(struct socket *sock, int len)
static int accept(struct socket *sock, struct socket *new_sock, int flags)
static int shutdown(struct socket *sock, int how)
static int setsockopt(struct socket *sock,
int lvl, int opt, char __user *ov, unsigned int ol)
static int getsockopt(struct socket *sock,
int lvl, int opt, char __user *ov, int __user *ol)
static const struct proto_ops msg_ops = ;
static const struct proto_ops packet_ops = ;
static const struct proto_ops stream_ops = ;
static const struct net_proto_family tipc_family_ops = ;
static struct proto tipc_proto = ;
int tipc_socket_init(void)
void tipc_socket_stop(void)
