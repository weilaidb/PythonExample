static char *rds_ib_event_type_strings[] = ;
static char *rds_ib_event_str(enum ib_event_type type)
;
static void rds_ib_set_protocol(struct rds_connection *conn, unsigned int version)
static void rds_ib_set_flow_control(struct rds_connection *conn, u32 credits)
static void
rds_ib_tune_rnr(struct rds_ib_connection *ic, struct ib_qp_attr *attr)
void rds_ib_cm_connect_complete(struct rds_connection *conn, struct rdma_cm_event *event)
static void rds_ib_cm_fill_conn_param(struct rds_connection *conn,
struct rdma_conn_param *conn_param,
struct rds_ib_connect_private *dp,
u32 protocol_version,
u32 max_responder_resources,
u32 max_initiator_depth)
static void rds_ib_cq_event_handler(struct ib_event *event, void *data)
static void rds_ib_qp_event_handler(struct ib_event *event, void *data)
static int rds_ib_setup_qp(struct rds_connection *conn)
static u32 rds_ib_protocol_compatible(struct rdma_cm_event *event)
int rds_ib_cm_handle_connect(struct rdma_cm_id *cm_id,
struct rdma_cm_event *event)
int rds_ib_cm_initiate_connect(struct rdma_cm_id *cm_id)
int rds_ib_conn_connect(struct rds_connection *conn)
void rds_ib_conn_shutdown(struct rds_connection *conn)
int rds_ib_conn_alloc(struct rds_connection *conn, gfp_t gfp)
void rds_ib_conn_free(void *arg)
void
__rds_ib_conn_error(struct rds_connection *conn, const char *fmt, ...)
