static struct kmem_cache *rds_tcp_incoming_slab;
static void rds_tcp_inc_purge(struct rds_incoming *inc)
void rds_tcp_inc_free(struct rds_incoming *inc)
int rds_tcp_inc_copy_to_user(struct rds_incoming *inc, struct iovec *first_iov,
size_t size)
static void rds_tcp_cong_recv(struct rds_connection *conn,
struct rds_tcp_incoming *tinc)
struct rds_tcp_desc_arg ;
static int rds_tcp_data_recv(read_descriptor_t *desc, struct sk_buff *skb,
unsigned int offset, size_t len)
static int rds_tcp_read_sock(struct rds_connection *conn, gfp_t gfp,
enum km_type km)
int rds_tcp_recv(struct rds_connection *conn)
void rds_tcp_data_ready(struct sock *sk, int bytes)
int rds_tcp_recv_init(void)
void rds_tcp_recv_exit(void)
