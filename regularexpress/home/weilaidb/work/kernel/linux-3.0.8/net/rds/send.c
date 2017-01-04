static int send_batch_count = 64;
module_param(send_batch_count, int, 0444);
MODULE_PARM_DESC(send_batch_count, " batch factor when working the send queue");
static void rds_send_remove_from_sock(struct list_head *messages, int status);
void rds_send_reset(struct rds_connection *conn)
static int acquire_in_xmit(struct rds_connection *conn)
static void release_in_xmit(struct rds_connection *conn)
int rds_send_xmit(struct rds_connection *conn)
static void rds_send_sndbuf_remove(struct rds_sock *rs, struct rds_message *rm)
static inline int rds_send_is_acked(struct rds_message *rm, u64 ack,
is_acked_func is_acked)
void rds_rdma_send_complete(struct rds_message *rm, int status)
EXPORT_SYMBOL_GPL(rds_rdma_send_complete);
void rds_atomic_send_complete(struct rds_message *rm, int status)
EXPORT_SYMBOL_GPL(rds_atomic_send_complete);
static inline void
__rds_send_complete(struct rds_sock *rs, struct rds_message *rm, int status)
struct rds_message *rds_send_get_message(struct rds_connection *conn,
struct rm_rdma_op *op)
EXPORT_SYMBOL_GPL(rds_send_get_message);
static void rds_send_remove_from_sock(struct list_head *messages, int status)
void rds_send_drop_acked(struct rds_connection *conn, u64 ack,
is_acked_func is_acked)
EXPORT_SYMBOL_GPL(rds_send_drop_acked);
void rds_send_drop_to(struct rds_sock *rs, struct sockaddr_in *dest)
static int rds_send_queue_rm(struct rds_sock *rs, struct rds_connection *conn,
struct rds_message *rm, __be16 sport,
__be16 dport, int *queued)
static int rds_rm_size(struct msghdr *msg, int data_len)
static int rds_cmsg_send(struct rds_sock *rs, struct rds_message *rm,
struct msghdr *msg, int *allocated_mr)
int rds_sendmsg(struct kiocb *iocb, struct socket *sock, struct msghdr *msg,
size_t payload_len)
int
rds_send_pong(struct rds_connection *conn, __be16 dport)
