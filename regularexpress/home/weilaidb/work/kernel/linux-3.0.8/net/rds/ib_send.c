static char *rds_ib_wc_status_strings[] = ;
char *rds_ib_wc_status_str(enum ib_wc_status status)
static void rds_ib_send_complete(struct rds_message *rm,
int wc_status,
void (*complete)(struct rds_message *rm, int status))
static void rds_ib_send_unmap_data(struct rds_ib_connection *ic,
struct rm_data_op *op,
int wc_status)
static void rds_ib_send_unmap_rdma(struct rds_ib_connection *ic,
struct rm_rdma_op *op,
int wc_status)
static void rds_ib_send_unmap_atomic(struct rds_ib_connection *ic,
struct rm_atomic_op *op,
int wc_status)
static struct rds_message *rds_ib_send_unmap_op(struct rds_ib_connection *ic,
struct rds_ib_send_work *send,
int wc_status)
void rds_ib_send_init_ring(struct rds_ib_connection *ic)
void rds_ib_send_clear_ring(struct rds_ib_connection *ic)
static void rds_ib_sub_signaled(struct rds_ib_connection *ic, int nr)
void rds_ib_send_cq_comp_handler(struct ib_cq *cq, void *context)
int rds_ib_send_grab_credits(struct rds_ib_connection *ic,
u32 wanted, u32 *adv_credits, int need_posted, int max_posted)
void rds_ib_send_add_credits(struct rds_connection *conn, unsigned int credits)
void rds_ib_advertise_credits(struct rds_connection *conn, unsigned int posted)
static inline int rds_ib_set_wr_signal_state(struct rds_ib_connection *ic,
struct rds_ib_send_work *send,
bool notify)
int rds_ib_xmit(struct rds_connection *conn, struct rds_message *rm,
unsigned int hdr_off, unsigned int sg, unsigned int off)
int rds_ib_xmit_atomic(struct rds_connection *conn, struct rm_atomic_op *op)
int rds_ib_xmit_rdma(struct rds_connection *conn, struct rm_rdma_op *op)
void rds_ib_xmit_complete(struct rds_connection *conn)
