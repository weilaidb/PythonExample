static DEFINE_SPINLOCK(loop_conns_lock);
static LIST_HEAD(loop_conns);
static int rds_loop_xmit(struct rds_connection *conn, struct rds_message *rm,
unsigned int hdr_off, unsigned int sg,
unsigned int off)
static void rds_loop_inc_free(struct rds_incoming *inc)
static int rds_loop_recv(struct rds_connection *conn)
struct rds_loop_connection ;
static int rds_loop_conn_alloc(struct rds_connection *conn, gfp_t gfp)
static void rds_loop_conn_free(void *arg)
static int rds_loop_conn_connect(struct rds_connection *conn)
static void rds_loop_conn_shutdown(struct rds_connection *conn)
void rds_loop_exit(void)
struct rds_transport rds_loop_transport = ;
