static u32 convert_access(int acc)
struct ib_mr *mlx4_ib_get_dma_mr(struct ib_pd *pd, int acc)
int mlx4_ib_umem_write_mtt(struct mlx4_ib_dev *dev, struct mlx4_mtt *mtt,
struct ib_umem *umem)
struct ib_mr *mlx4_ib_reg_user_mr(struct ib_pd *pd, u64 start, u64 length,
u64 virt_addr, int access_flags,
struct ib_udata *udata)
int mlx4_ib_dereg_mr(struct ib_mr *ibmr)
struct ib_mr *mlx4_ib_alloc_fast_reg_mr(struct ib_pd *pd,
int max_page_list_len)
struct ib_fast_reg_page_list *mlx4_ib_alloc_fast_reg_page_list(struct ib_device *ibdev,
int page_list_len)
void mlx4_ib_free_fast_reg_page_list(struct ib_fast_reg_page_list *page_list)
struct ib_fmr *mlx4_ib_fmr_alloc(struct ib_pd *pd, int acc,
struct ib_fmr_attr *fmr_attr)
int mlx4_ib_map_phys_fmr(struct ib_fmr *ibfmr, u64 *page_list,
int npages, u64 iova)
int mlx4_ib_unmap_fmr(struct list_head *fmr_list)
int mlx4_ib_fmr_dealloc(struct ib_fmr *ibfmr)
