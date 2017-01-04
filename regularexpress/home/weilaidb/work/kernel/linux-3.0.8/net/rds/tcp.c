static DEFINE_SPINLOCK(rds_tcp_tc_list_lock);
static LIST_HEAD(rds_tcp_tc_list);
static unsigned int rds_tcp_tc_count;
static DEFINE_SPINLOCK(rds_tcp_conn_lock);
static LIST_HEAD(rds_tcp_conn_list);
static struct kmem_cache *rds_tcp_conn_slab;
#define RDS_TCP_DEFAULT_BUFSIZE (128 * 1024)
void rds_tcp_nonagle(struct socket *sock)
void rds_tcp_tune(struct socket *sock)
u32 rds_tcp_snd_nxt(struct rds_tcp_connection *tc)
u32 rds_tcp_snd_una(struct rds_tcp_connection *tc)
void rds_tcp_restore_callbacks(struct socket *sock,
struct rds_tcp_connection *tc)
void rds_tcp_set_callbacks(struct socket *sock, struct rds_connection *conn)
static void rds_tcp_tc_info(struct socket *sock, unsigned int len,
struct rds_info_iterator *iter,
struct rds_info_lengths *lens)
static int rds_tcp_laddr_check(__be32 addr)
static int rds_tcp_conn_alloc(struct rds_connection *conn, gfp_t gfp)
static void rds_tcp_conn_free(void *arg)
static void rds_tcp_destroy_conns(void)
static void rds_tcp_exit(void)
module_exit(rds_tcp_exit);
struct rds_transport rds_tcp_transport = ;
static int rds_tcp_init(void)
module_init(rds_tcp_init);
MODULE_AUTHOR("Oracle Corporation <rds-devel@oss.oracle.com>");
MODULE_DESCRIPTION("RDS: TCP transport");
MODULE_LICENSE("Dual BSD/GPL");
