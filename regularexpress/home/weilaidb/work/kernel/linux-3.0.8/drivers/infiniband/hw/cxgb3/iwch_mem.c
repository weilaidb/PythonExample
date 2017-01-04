static int iwch_finish_mem_reg(struct iwch_mr *mhp, u32 stag)
int iwch_register_mem(struct iwch_dev *rhp, struct iwch_pd *php,
struct iwch_mr *mhp, int shift)
int iwch_reregister_mem(struct iwch_dev *rhp, struct iwch_pd *php,
struct iwch_mr *mhp,
int shift,
int npages)
int iwch_alloc_pbl(struct iwch_mr *mhp, int npages)
void iwch_free_pbl(struct iwch_mr *mhp)
int iwch_write_pbl(struct iwch_mr *mhp, __be64 *pages, int npages, int offset)
int build_phys_page_list(struct ib_phys_buf *buffer_list,
int num_phys_buf,
u64 *iova_start,
u64 *total_size,
int *npages,
int *shift,
__be64 **page_list)
