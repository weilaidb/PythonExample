#define ACK_CIRC_THRESHOLD 2000000
static u64 replace_wr_id(u64 wr_id, u16 idx)
static u16 get_app_wr_id(u64 wr_id)
static inline int ehca_write_rwqe(struct ipz_queue *ipz_rqueue,
struct ehca_wqe *wqe_p,
struct ib_recv_wr *recv_wr,
u32 rq_map_idx)
#if defined(DEBUG_GSI_SEND_WR)
static void trace_send_wr_ud(const struct ib_send_wr *send_wr)
static inline int ehca_write_swqe(struct ehca_qp *qp,
struct ehca_wqe *wqe_p,
const struct ib_send_wr *send_wr,
u32 sq_map_idx,
int hidden)
static inline void map_ib_wc_status(u32 cqe_status,
enum ib_wc_status *wc_status)
static inline int post_one_send(struct ehca_qp *my_qp,
struct ib_send_wr *cur_send_wr,
int hidden)
int ehca_post_send(struct ib_qp *qp,
struct ib_send_wr *send_wr,
struct ib_send_wr **bad_send_wr)
static int internal_post_recv(struct ehca_qp *my_qp,
struct ib_device *dev,
struct ib_recv_wr *recv_wr,
struct ib_recv_wr **bad_recv_wr)
int ehca_post_recv(struct ib_qp *qp,
struct ib_recv_wr *recv_wr,
struct ib_recv_wr **bad_recv_wr)
int ehca_post_srq_recv(struct ib_srq *srq,
struct ib_recv_wr *recv_wr,
struct ib_recv_wr **bad_recv_wr)
static const u8 ib_wc_opcode[255] = ;
static inline int ehca_poll_cq_one(struct ib_cq *cq, struct ib_wc *wc)
static int generate_flush_cqes(struct ehca_qp *my_qp, struct ib_cq *cq,
struct ib_wc *wc, int num_entries,
struct ipz_queue *ipz_queue, int on_sq)
int ehca_poll_cq(struct ib_cq *cq, int num_entries, struct ib_wc *wc)
int ehca_req_notify_cq(struct ib_cq *cq, enum ib_cq_notify_flags notify_flags)
