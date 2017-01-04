struct mlx4_mpt_entry  __packed;
#define MLX4_MPT_FLAG_SW_OWNS	    (0xfUL << 28)
#define MLX4_MPT_FLAG_FREE	    (0x3UL << 28)
#define MLX4_MPT_FLAG_MIO	    (1 << 17)
#define MLX4_MPT_FLAG_BIND_ENABLE   (1 << 15)
#define MLX4_MPT_FLAG_PHYSICAL	    (1 <<  9)
#define MLX4_MPT_FLAG_REGION	    (1 <<  8)
#define MLX4_MPT_PD_FLAG_FAST_REG   (1 << 27)
#define MLX4_MPT_PD_FLAG_RAE	    (1 << 28)
#define MLX4_MPT_PD_FLAG_EN_INV	    (3 << 24)
#define MLX4_MPT_STATUS_SW		0xF0
#define MLX4_MPT_STATUS_HW		0x00
static u32 mlx4_buddy_alloc(struct mlx4_buddy *buddy, int order)
static void mlx4_buddy_free(struct mlx4_buddy *buddy, u32 seg, int order)
static int mlx4_buddy_init(struct mlx4_buddy *buddy, int max_order)
static void mlx4_buddy_cleanup(struct mlx4_buddy *buddy)
static u32 mlx4_alloc_mtt_range(struct mlx4_dev *dev, int order)
int mlx4_mtt_init(struct mlx4_dev *dev, int npages, int page_shift,
struct mlx4_mtt *mtt)
EXPORT_SYMBOL_GPL(mlx4_mtt_init);
void mlx4_mtt_cleanup(struct mlx4_dev *dev, struct mlx4_mtt *mtt)
EXPORT_SYMBOL_GPL(mlx4_mtt_cleanup);
u64 mlx4_mtt_addr(struct mlx4_dev *dev, struct mlx4_mtt *mtt)
EXPORT_SYMBOL_GPL(mlx4_mtt_addr);
static u32 hw_index_to_key(u32 ind)
static u32 key_to_hw_index(u32 key)
static int mlx4_SW2HW_MPT(struct mlx4_dev *dev, struct mlx4_cmd_mailbox *mailbox,
int mpt_index)
static int mlx4_HW2SW_MPT(struct mlx4_dev *dev, struct mlx4_cmd_mailbox *mailbox,
int mpt_index)
int mlx4_mr_alloc(struct mlx4_dev *dev, u32 pd, u64 iova, u64 size, u32 access,
int npages, int page_shift, struct mlx4_mr *mr)
EXPORT_SYMBOL_GPL(mlx4_mr_alloc);
void mlx4_mr_free(struct mlx4_dev *dev, struct mlx4_mr *mr)
EXPORT_SYMBOL_GPL(mlx4_mr_free);
int mlx4_mr_enable(struct mlx4_dev *dev, struct mlx4_mr *mr)
EXPORT_SYMBOL_GPL(mlx4_mr_enable);
static int mlx4_write_mtt_chunk(struct mlx4_dev *dev, struct mlx4_mtt *mtt,
int start_index, int npages, u64 *page_list)
int mlx4_write_mtt(struct mlx4_dev *dev, struct mlx4_mtt *mtt,
int start_index, int npages, u64 *page_list)
EXPORT_SYMBOL_GPL(mlx4_write_mtt);
int mlx4_buf_write_mtt(struct mlx4_dev *dev, struct mlx4_mtt *mtt,
struct mlx4_buf *buf)
EXPORT_SYMBOL_GPL(mlx4_buf_write_mtt);
int mlx4_init_mr_table(struct mlx4_dev *dev)
void mlx4_cleanup_mr_table(struct mlx4_dev *dev)
static inline int mlx4_check_fmr(struct mlx4_fmr *fmr, u64 *page_list,
int npages, u64 iova)
int mlx4_map_phys_fmr(struct mlx4_dev *dev, struct mlx4_fmr *fmr, u64 *page_list,
int npages, u64 iova, u32 *lkey, u32 *rkey)
EXPORT_SYMBOL_GPL(mlx4_map_phys_fmr);
int mlx4_fmr_alloc(struct mlx4_dev *dev, u32 pd, u32 access, int max_pages,
int max_maps, u8 page_shift, struct mlx4_fmr *fmr)
EXPORT_SYMBOL_GPL(mlx4_fmr_alloc);
int mlx4_fmr_enable(struct mlx4_dev *dev, struct mlx4_fmr *fmr)
EXPORT_SYMBOL_GPL(mlx4_fmr_enable);
void mlx4_fmr_unmap(struct mlx4_dev *dev, struct mlx4_fmr *fmr,
u32 *lkey, u32 *rkey)
EXPORT_SYMBOL_GPL(mlx4_fmr_unmap);
int mlx4_fmr_free(struct mlx4_dev *dev, struct mlx4_fmr *fmr)
EXPORT_SYMBOL_GPL(mlx4_fmr_free);
int mlx4_SYNC_TPT(struct mlx4_dev *dev)
EXPORT_SYMBOL_GPL(mlx4_SYNC_TPT);
