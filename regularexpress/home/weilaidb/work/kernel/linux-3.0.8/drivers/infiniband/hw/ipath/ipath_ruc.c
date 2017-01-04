const u32 ib_ipath_rnr_table[32] = ;
void ipath_insert_rnr_queue(struct ipath_qp *qp)
int ipath_init_sge(struct ipath_qp *qp, struct ipath_rwqe *wqe,
u32 *lengthp, struct ipath_sge_state *ss)
int ipath_get_rwqe(struct ipath_qp *qp, int wr_id_only)
static void ipath_ruc_loopback(struct ipath_qp *sqp)
static void want_buffer(struct ipath_devdata *dd, struct ipath_qp *qp)
static int ipath_no_bufs_available(struct ipath_qp *qp,
struct ipath_ibdev *dev)
u32 ipath_make_grh(struct ipath_ibdev *dev, struct ib_grh *hdr,
struct ib_global_route *grh, u32 hwords, u32 nwords)
void ipath_make_ruc_header(struct ipath_ibdev *dev, struct ipath_qp *qp,
struct ipath_other_headers *ohdr,
u32 bth0, u32 bth2)
void ipath_do_send(unsigned long data)
void ipath_send_complete(struct ipath_qp *qp, struct ipath_swqe *wqe,
enum ib_wc_status status)
