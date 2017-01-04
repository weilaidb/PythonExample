int qib_alloc_lkey(struct qib_lkey_table *rkt, struct qib_mregion *mr)
int qib_free_lkey(struct qib_ibdev *dev, struct qib_mregion *mr)
int qib_lkey_ok(struct qib_lkey_table *rkt, struct qib_pd *pd,
struct qib_sge *isge, struct ib_sge *sge, int acc)
int qib_rkey_ok(struct qib_qp *qp, struct qib_sge *sge,
u32 len, u64 vaddr, u32 rkey, int acc)
int qib_fast_reg_mr(struct qib_qp *qp, struct ib_send_wr *wr)
