u32 mlx4_bitmap_alloc(struct mlx4_bitmap *bitmap)
void mlx4_bitmap_free(struct mlx4_bitmap *bitmap, u32 obj)
u32 mlx4_bitmap_alloc_range(struct mlx4_bitmap *bitmap, int cnt, int align)
u32 mlx4_bitmap_avail(struct mlx4_bitmap *bitmap)
void mlx4_bitmap_free_range(struct mlx4_bitmap *bitmap, u32 obj, int cnt)
int mlx4_bitmap_init(struct mlx4_bitmap *bitmap, u32 num, u32 mask,
u32 reserved_bot, u32 reserved_top)
void mlx4_bitmap_cleanup(struct mlx4_bitmap *bitmap)
int mlx4_buf_alloc(struct mlx4_dev *dev, int size, int max_direct,
struct mlx4_buf *buf)
EXPORT_SYMBOL_GPL(mlx4_buf_alloc);
void mlx4_buf_free(struct mlx4_dev *dev, int size, struct mlx4_buf *buf)
EXPORT_SYMBOL_GPL(mlx4_buf_free);
static struct mlx4_db_pgdir *mlx4_alloc_db_pgdir(struct device *dma_device)
static int mlx4_alloc_db_from_pgdir(struct mlx4_db_pgdir *pgdir,
struct mlx4_db *db, int order)
int mlx4_db_alloc(struct mlx4_dev *dev, struct mlx4_db *db, int order)
EXPORT_SYMBOL_GPL(mlx4_db_alloc);
void mlx4_db_free(struct mlx4_dev *dev, struct mlx4_db *db)
EXPORT_SYMBOL_GPL(mlx4_db_free);
int mlx4_alloc_hwq_res(struct mlx4_dev *dev, struct mlx4_hwq_resources *wqres,
int size, int max_direct)
EXPORT_SYMBOL_GPL(mlx4_alloc_hwq_res);
void mlx4_free_hwq_res(struct mlx4_dev *dev, struct mlx4_hwq_resources *wqres,
int size)
EXPORT_SYMBOL_GPL(mlx4_free_hwq_res);
