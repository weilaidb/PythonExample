static void rds_iw_send_rdma_complete(struct rds_message *rm,
int wc_status)
static void rds_iw_send_unmap_rdma(struct rds_iw_connection *ic,
struct rm_rdma_op *op)
static void rds_iw_send_unmap_rm(struct rds_iw_connection *ic,
struct rds_iw_send_work *send,
int wc_status)
void rds_iw_send_init_ring(struct rds_iw_connection *ic)
void rds_iw_send_clear_ring(struct rds_iw_connection *ic)
void rds_iw_send_cq_comp_handler(struct ib_cq *cq, void *context)
int rds_iw_send_grab_credits(struct rds_iw_connection *ic,
u32 wanted, u32 *adv_credits, int need_posted, int max_posted)
void rds_iw_send_add_credits(struct rds_connection *conn, unsigned int credits)
void rds_iw_advertise_credits(struct rds_connection *conn, unsigned int posted)
static inline void
rds_iw_xmit_populate_wr(struct rds_iw_connection *ic,
struct rds_iw_send_work *send, unsigned int pos,
unsigned long buffer, unsigned int length,
int send_flags)
int rds_iw_xmit(struct rds_connection *conn, struct rds_message *rm,
unsigned int hdr_off, unsigned int sg, unsigned int off)
static void rds_iw_build_send_fastreg(struct rds_iw_device *rds_iwdev, struct rds_iw_connection *ic, struct rds_iw_send_work *send, int nent, int len, u64 sg_addr)
int rds_iw_xmit_rdma(struct rds_connection *conn, struct rm_rdma_op *op)
void rds_iw_xmit_complete(struct rds_connection *conn)
