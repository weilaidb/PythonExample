static void rds_iw_set_protocol(struct rds_connection *conn, unsigned int version)
static void rds_iw_set_flow_control(struct rds_connection *conn, u32 credits)
void rds_iw_cm_connect_complete(struct rds_connection *conn, struct rdma_cm_event *event)
static void rds_iw_cm_fill_conn_param(struct rds_connection *conn,
struct rdma_conn_param *conn_param,
struct rds_iw_connect_private *dp,
u32 protocol_version)
static void rds_iw_cq_event_handler(struct ib_event *event, void *data)
static void rds_iw_qp_event_handler(struct ib_event *event, void *data)
static int rds_iw_init_qp_attrs(struct ib_qp_init_attr *attr,
struct rds_iw_device *rds_iwdev,
struct rds_iw_work_ring *send_ring,
void (*send_cq_handler)(struct ib_cq *, void *),
struct rds_iw_work_ring *recv_ring,
void (*recv_cq_handler)(struct ib_cq *, void *),
void *context)
static int rds_iw_setup_qp(struct rds_connection *conn)
static u32 rds_iw_protocol_compatible(const struct rds_iw_connect_private *dp)
int rds_iw_cm_handle_connect(struct rdma_cm_id *cm_id,
struct rdma_cm_event *event)
int rds_iw_cm_initiate_connect(struct rdma_cm_id *cm_id)
int rds_iw_conn_connect(struct rds_connection *conn)
void rds_iw_conn_shutdown(struct rds_connection *conn)
int rds_iw_conn_alloc(struct rds_connection *conn, gfp_t gfp)
void rds_iw_conn_free(void *arg)
void
__rds_iw_conn_error(struct rds_connection *conn, const char *fmt, ...)
