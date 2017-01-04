enum ;
static void mlx4_free_icm_pages(struct mlx4_dev *dev, struct mlx4_icm_chunk *chunk)
static void mlx4_free_icm_coherent(struct mlx4_dev *dev, struct mlx4_icm_chunk *chunk)
void mlx4_free_icm(struct mlx4_dev *dev, struct mlx4_icm *icm, int coherent)
static int mlx4_alloc_icm_pages(struct scatterlist *mem, int order, gfp_t gfp_mask)
static int mlx4_alloc_icm_coherent(struct device *dev, struct scatterlist *mem,
int order, gfp_t gfp_mask)
struct mlx4_icm *mlx4_alloc_icm(struct mlx4_dev *dev, int npages,
gfp_t gfp_mask, int coherent)
static int mlx4_MAP_ICM(struct mlx4_dev *dev, struct mlx4_icm *icm, u64 virt)
static int mlx4_UNMAP_ICM(struct mlx4_dev *dev, u64 virt, u32 page_count)
int mlx4_MAP_ICM_AUX(struct mlx4_dev *dev, struct mlx4_icm *icm)
int mlx4_UNMAP_ICM_AUX(struct mlx4_dev *dev)
int mlx4_table_get(struct mlx4_dev *dev, struct mlx4_icm_table *table, int obj)
void mlx4_table_put(struct mlx4_dev *dev, struct mlx4_icm_table *table, int obj)
void *mlx4_table_find(struct mlx4_icm_table *table, int obj, dma_addr_t *dma_handle)
int mlx4_table_get_range(struct mlx4_dev *dev, struct mlx4_icm_table *table,
int start, int end)
void mlx4_table_put_range(struct mlx4_dev *dev, struct mlx4_icm_table *table,
int start, int end)
int mlx4_init_icm_table(struct mlx4_dev *dev, struct mlx4_icm_table *table,
u64 virt, int obj_size,	int nobj, int reserved,
int use_lowmem, int use_coherent)
void mlx4_cleanup_icm_table(struct mlx4_dev *dev, struct mlx4_icm_table *table)
