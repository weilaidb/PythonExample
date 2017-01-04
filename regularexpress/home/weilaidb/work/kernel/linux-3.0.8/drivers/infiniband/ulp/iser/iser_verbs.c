#define ISCSI_ISER_MAX_CONN	8
#define ISER_MAX_RX_CQ_LEN	(ISER_QP_MAX_RECV_DTOS * ISCSI_ISER_MAX_CONN)
#define ISER_MAX_TX_CQ_LEN	(ISER_QP_MAX_REQ_DTOS  * ISCSI_ISER_MAX_CONN)
static void iser_cq_tasklet_fn(unsigned long data);
static void iser_cq_callback(struct ib_cq *cq, void *cq_context);
static void iser_cq_event_callback(struct ib_event *cause, void *context)
static void iser_qp_event_callback(struct ib_event *cause, void *context)
static void iser_event_handler(struct ib_event_handler *handler,
struct ib_event *event)
static int iser_create_device_ib_res(struct iser_device *device)
static void iser_free_device_ib_res(struct iser_device *device)
static int iser_create_ib_conn_res(struct iser_conn *ib_conn)
static int iser_free_ib_conn_res(struct iser_conn *ib_conn, int can_destroy_id)
static
struct iser_device *iser_device_find_by_ib_device(struct rdma_cm_id *cma_id)
static void iser_device_try_release(struct iser_device *device)
static int iser_conn_state_comp_exch(struct iser_conn *ib_conn,
enum iser_ib_conn_state comp,
enum iser_ib_conn_state exch)
static void iser_conn_release(struct iser_conn *ib_conn, int can_destroy_id)
void iser_conn_get(struct iser_conn *ib_conn)
int iser_conn_put(struct iser_conn *ib_conn, int can_destroy_id)
void iser_conn_terminate(struct iser_conn *ib_conn)
static int iser_connect_error(struct rdma_cm_id *cma_id)
static int iser_addr_handler(struct rdma_cm_id *cma_id)
static int iser_route_handler(struct rdma_cm_id *cma_id)
static void iser_connected_handler(struct rdma_cm_id *cma_id)
static int iser_disconnected_handler(struct rdma_cm_id *cma_id)
static int iser_cma_handler(struct rdma_cm_id *cma_id, struct rdma_cm_event *event)
void iser_conn_init(struct iser_conn *ib_conn)
int iser_connect(struct iser_conn   *ib_conn,
struct sockaddr_in *src_addr,
struct sockaddr_in *dst_addr,
int                 non_blocking)
int iser_reg_page_vec(struct iser_conn     *ib_conn,
struct iser_page_vec *page_vec,
struct iser_mem_reg  *mem_reg)
void iser_unreg_mem(struct iser_mem_reg *reg)
int iser_post_recvl(struct iser_conn *ib_conn)
int iser_post_recvm(struct iser_conn *ib_conn, int count)
int iser_post_send(struct iser_conn *ib_conn, struct iser_tx_desc *tx_desc)
static void iser_handle_comp_error(struct iser_tx_desc *desc,
struct iser_conn *ib_conn)
static int iser_drain_tx_cq(struct iser_device  *device)
static void iser_cq_tasklet_fn(unsigned long data)
static void iser_cq_callback(struct ib_cq *cq, void *cq_context)
