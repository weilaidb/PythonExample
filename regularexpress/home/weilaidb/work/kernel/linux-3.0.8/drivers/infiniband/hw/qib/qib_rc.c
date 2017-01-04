#define OP(x) IB_OPCODE_RC_##x
static void rc_timeout(unsigned long arg);
static u32 restart_sge(struct qib_sge_state *ss, struct qib_swqe *wqe,
u32 psn, u32 pmtu)
static void start_timer(struct qib_qp *qp)
static int qib_make_rc_ack(struct qib_ibdev *dev, struct qib_qp *qp,
struct qib_other_headers *ohdr, u32 pmtu)
int qib_make_rc_req(struct qib_qp *qp)
void qib_send_rc_ack(struct qib_qp *qp)
static void reset_psn(struct qib_qp *qp, u32 psn)
static void qib_restart_rc(struct qib_qp *qp, u32 psn, int wait)
static void rc_timeout(unsigned long arg)
void qib_rc_rnr_retry(unsigned long arg)
static void reset_sending_psn(struct qib_qp *qp, u32 psn)
void qib_rc_send_complete(struct qib_qp *qp, struct qib_ib_header *hdr)
static inline void update_last_psn(struct qib_qp *qp, u32 psn)
static struct qib_swqe *do_rc_completion(struct qib_qp *qp,
struct qib_swqe *wqe,
struct qib_ibport *ibp)
static int do_rc_ack(struct qib_qp *qp, u32 aeth, u32 psn, int opcode,
u64 val, struct qib_ctxtdata *rcd)
static void rdma_seq_err(struct qib_qp *qp, struct qib_ibport *ibp, u32 psn,
struct qib_ctxtdata *rcd)
static void qib_rc_rcv_resp(struct qib_ibport *ibp,
struct qib_other_headers *ohdr,
void *data, u32 tlen,
struct qib_qp *qp,
u32 opcode,
u32 psn, u32 hdrsize, u32 pmtu,
struct qib_ctxtdata *rcd)
static int qib_rc_rcv_error(struct qib_other_headers *ohdr,
void *data,
struct qib_qp *qp,
u32 opcode,
u32 psn,
int diff,
struct qib_ctxtdata *rcd)
void qib_rc_error(struct qib_qp *qp, enum ib_wc_status err)
static inline void qib_update_ack_queue(struct qib_qp *qp, unsigned n)
void qib_rc_rcv(struct qib_ctxtdata *rcd, struct qib_ib_header *hdr,
int has_grh, void *data, u32 tlen, struct qib_qp *qp)
