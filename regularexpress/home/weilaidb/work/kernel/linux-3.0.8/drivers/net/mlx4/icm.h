#define MLX4_ICM_H
#define MLX4_ICM_CHUNK_LEN						\
((256 - sizeof (struct list_head) - 2 * sizeof (int)) /		\
(sizeof (struct scatterlist)))
enum ;
struct mlx4_icm_chunk ;
struct mlx4_icm ;
struct mlx4_icm_iter ;
struct mlx4_dev;
struct mlx4_icm *mlx4_alloc_icm(struct mlx4_dev *dev, int npages,
gfp_t gfp_mask, int coherent);
void mlx4_free_icm(struct mlx4_dev *dev, struct mlx4_icm *icm, int coherent);
int mlx4_table_get(struct mlx4_dev *dev, struct mlx4_icm_table *table, int obj);
void mlx4_table_put(struct mlx4_dev *dev, struct mlx4_icm_table *table, int obj);
int mlx4_table_get_range(struct mlx4_dev *dev, struct mlx4_icm_table *table,
int start, int end);
void mlx4_table_put_range(struct mlx4_dev *dev, struct mlx4_icm_table *table,
int start, int end);
int mlx4_init_icm_table(struct mlx4_dev *dev, struct mlx4_icm_table *table,
u64 virt, int obj_size,	int nobj, int reserved,
int use_lowmem, int use_coherent);
void mlx4_cleanup_icm_table(struct mlx4_dev *dev, struct mlx4_icm_table *table);
int mlx4_table_get(struct mlx4_dev *dev, struct mlx4_icm_table *table, int obj);
void mlx4_table_put(struct mlx4_dev *dev, struct mlx4_icm_table *table, int obj);
void *mlx4_table_find(struct mlx4_icm_table *table, int obj, dma_addr_t *dma_handle);
int mlx4_table_get_range(struct mlx4_dev *dev, struct mlx4_icm_table *table,
int start, int end);
void mlx4_table_put_range(struct mlx4_dev *dev, struct mlx4_icm_table *table,
int start, int end);
static inline void mlx4_icm_first(struct mlx4_icm *icm,
struct mlx4_icm_iter *iter)
static inline int mlx4_icm_last(struct mlx4_icm_iter *iter)
static inline void mlx4_icm_next(struct mlx4_icm_iter *iter)
static inline dma_addr_t mlx4_icm_addr(struct mlx4_icm_iter *iter)
static inline unsigned long mlx4_icm_size(struct mlx4_icm_iter *iter)
int mlx4_MAP_ICM_AUX(struct mlx4_dev *dev, struct mlx4_icm *icm);
int mlx4_UNMAP_ICM_AUX(struct mlx4_dev *dev);
