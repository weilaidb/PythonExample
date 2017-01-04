int ipath_alloc_lkey(struct ipath_lkey_table *rkt, struct ipath_mregion *mr)
void ipath_free_lkey(struct ipath_lkey_table *rkt, u32 lkey)
int ipath_lkey_ok(struct ipath_qp *qp, struct ipath_sge *isge,
struct ib_sge *sge, int acc)
int ipath_rkey_ok(struct ipath_qp *qp, struct ipath_sge_state *ss,
u32 len, u64 vaddr, u32 rkey, int acc)
