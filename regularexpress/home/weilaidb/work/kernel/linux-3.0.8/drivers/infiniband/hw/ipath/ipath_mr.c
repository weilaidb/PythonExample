struct ipath_fmr ;
static inline struct ipath_fmr *to_ifmr(struct ib_fmr *ibfmr)
struct ib_mr *ipath_get_dma_mr(struct ib_pd *pd, int acc)
static struct ipath_mr *alloc_mr(int count,
struct ipath_lkey_table *lk_table)
struct ib_mr *ipath_reg_phys_mr(struct ib_pd *pd,
struct ib_phys_buf *buffer_list,
int num_phys_buf, int acc, u64 *iova_start)
struct ib_mr *ipath_reg_user_mr(struct ib_pd *pd, u64 start, u64 length,
u64 virt_addr, int mr_access_flags,
struct ib_udata *udata)
int ipath_dereg_mr(struct ib_mr *ibmr)
struct ib_fmr *ipath_alloc_fmr(struct ib_pd *pd, int mr_access_flags,
struct ib_fmr_attr *fmr_attr)
int ipath_map_phys_fmr(struct ib_fmr *ibfmr, u64 * page_list,
int list_len, u64 iova)
int ipath_unmap_fmr(struct list_head *fmr_list)
int ipath_dealloc_fmr(struct ib_fmr *ibfmr)
