const u32 ib_qib_rnr_table[32] = ;
static int qib_init_sge(struct qib_qp *qp, struct qib_rwqe *wqe)
int qib_get_rwqe(struct qib_qp *qp, int wr_id_only)
void qib_migrate_qp(struct qib_qp *qp)
static __be64 get_sguid(struct qib_ibport *ibp, unsigned index)
static int gid_ok(union ib_gid *gid, __be64 gid_prefix, __be64 id)
int qib_ruc_check_hdr(struct qib_ibport *ibp, struct qib_ib_header *hdr,
int has_grh, struct qib_qp *qp, u32 bth0)
static void qib_ruc_loopback(struct qib_qp *sqp)
u32 qib_make_grh(struct qib_ibport *ibp, struct ib_grh *hdr,
struct ib_global_route *grh, u32 hwords, u32 nwords)
void qib_make_ruc_header(struct qib_qp *qp, struct qib_other_headers *ohdr,
u32 bth0, u32 bth2)
void qib_do_send(struct work_struct *work)
void qib_send_complete(struct qib_qp *qp, struct qib_swqe *wqe,
enum ib_wc_status status)
