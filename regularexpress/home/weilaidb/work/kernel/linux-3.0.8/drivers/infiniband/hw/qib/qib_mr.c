struct qib_fmr ;
static inline struct qib_fmr *to_ifmr(struct ib_fmr *ibfmr)
struct ib_mr *qib_get_dma_mr(struct ib_pd *pd, int acc)
static struct qib_mr *alloc_mr(int count, struct qib_lkey_table *lk_table)
struct ib_mr *qib_reg_phys_mr(struct ib_pd *pd,
struct ib_phys_buf *buffer_list,
int num_phys_buf, int acc, u64 *iova_start)
struct ib_mr *qib_reg_user_mr(struct ib_pd *pd, u64 start, u64 length,
u64 virt_addr, int mr_access_flags,
struct ib_udata *udata)
int qib_dereg_mr(struct ib_mr *ibmr)
struct ib_mr *qib_alloc_fast_reg_mr(struct ib_pd *pd, int max_page_list_len)
struct ib_fast_reg_page_list *
qib_alloc_fast_reg_page_list(struct ib_device *ibdev, int page_list_len)
void qib_free_fast_reg_page_list(struct ib_fast_reg_page_list *pl)
struct ib_fmr *qib_alloc_fmr(struct ib_pd *pd, int mr_access_flags,
struct ib_fmr_attr *fmr_attr)
int qib_map_phys_fmr(struct ib_fmr *ibfmr, u64 *page_list,
int list_len, u64 iova)
int qib_unmap_fmr(struct list_head *fmr_list)
int qib_dealloc_fmr(struct ib_fmr *ibfmr)
