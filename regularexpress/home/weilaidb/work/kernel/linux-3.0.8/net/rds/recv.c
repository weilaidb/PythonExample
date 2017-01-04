void rds_inc_init(struct rds_incoming *inc, struct rds_connection *conn,
__be32 saddr)
EXPORT_SYMBOL_GPL(rds_inc_init);
static void rds_inc_addref(struct rds_incoming *inc)
void rds_inc_put(struct rds_incoming *inc)
EXPORT_SYMBOL_GPL(rds_inc_put);
static void rds_recv_rcvbuf_delta(struct rds_sock *rs, struct sock *sk,
struct rds_cong_map *map,
int delta, __be16 port)
static void rds_recv_incoming_exthdrs(struct rds_incoming *inc, struct rds_sock *rs)
void rds_recv_incoming(struct rds_connection *conn, __be32 saddr, __be32 daddr,
struct rds_incoming *inc, gfp_t gfp, enum km_type km)
EXPORT_SYMBOL_GPL(rds_recv_incoming);
static int rds_next_incoming(struct rds_sock *rs, struct rds_incoming **inc)
static int rds_still_queued(struct rds_sock *rs, struct rds_incoming *inc,
int drop)
int rds_notify_queue_get(struct rds_sock *rs, struct msghdr *msghdr)
static int rds_notify_cong(struct rds_sock *rs, struct msghdr *msghdr)
static int rds_cmsg_recv(struct rds_incoming *inc, struct msghdr *msg)
int rds_recvmsg(struct kiocb *iocb, struct socket *sock, struct msghdr *msg,
size_t size, int msg_flags)
void rds_clear_recv_queue(struct rds_sock *rs)
void rds_inc_info_copy(struct rds_incoming *inc,
struct rds_info_iterator *iter,
__be32 saddr, __be32 daddr, int flip)
