#define OP(x) IB_OPCODE_RC_##x
static u32 restart_sge(struct ipath_sge_state *ss, struct ipath_swqe *wqe,
u32 psn, u32 pmtu)
static void ipath_init_restart(struct ipath_qp *qp, struct ipath_swqe *wqe)
static int ipath_make_rc_ack(struct ipath_ibdev *dev, struct ipath_qp *qp,
struct ipath_other_headers *ohdr, u32 pmtu)
int ipath_make_rc_req(struct ipath_qp *qp)
static void send_rc_ack(struct ipath_qp *qp)
static void reset_psn(struct ipath_qp *qp, u32 psn)
void ipath_restart_rc(struct ipath_qp *qp, u32 psn)
static inline void update_last_psn(struct ipath_qp *qp, u32 psn)
static int do_rc_ack(struct ipath_qp *qp, u32 aeth, u32 psn, int opcode,
u64 val)
static inline void ipath_rc_rcv_resp(struct ipath_ibdev *dev,
struct ipath_other_headers *ohdr,
void *data, u32 tlen,
struct ipath_qp *qp,
u32 opcode,
u32 psn, u32 hdrsize, u32 pmtu,
int header_in_data)
static inline int ipath_rc_rcv_error(struct ipath_ibdev *dev,
struct ipath_other_headers *ohdr,
void *data,
struct ipath_qp *qp,
u32 opcode,
u32 psn,
int diff,
int header_in_data)
void ipath_rc_error(struct ipath_qp *qp, enum ib_wc_status err)
static inline void ipath_update_ack_queue(struct ipath_qp *qp, unsigned n)
void ipath_rc_rcv(struct ipath_ibdev *dev, struct ipath_ib_header *hdr,
int has_grh, void *data, u32 tlen, struct ipath_qp *qp)
