#define MTHCA_MEMFREE_H
#define MTHCA_ICM_CHUNK_LEN \
((256 - sizeof (struct list_head) - 2 * sizeof (int)) /		\
(sizeof (struct scatterlist)))
enum ;
struct mthca_icm_chunk ;
struct mthca_icm ;
struct mthca_icm_table ;
struct mthca_icm_iter ;
struct mthca_dev;
struct mthca_icm *mthca_alloc_icm(struct mthca_dev *dev, int npages,
gfp_t gfp_mask, int coherent);
void mthca_free_icm(struct mthca_dev *dev, struct mthca_icm *icm, int coherent);
struct mthca_icm_table *mthca_alloc_icm_table(struct mthca_dev *dev,
u64 virt, int obj_size,
int nobj, int reserved,
int use_lowmem, int use_coherent);
void mthca_free_icm_table(struct mthca_dev *dev, struct mthca_icm_table *table);
int mthca_table_get(struct mthca_dev *dev, struct mthca_icm_table *table, int obj);
void mthca_table_put(struct mthca_dev *dev, struct mthca_icm_table *table, int obj);
void *mthca_table_find(struct mthca_icm_table *table, int obj, dma_addr_t *dma_handle);
int mthca_table_get_range(struct mthca_dev *dev, struct mthca_icm_table *table,
int start, int end);
void mthca_table_put_range(struct mthca_dev *dev, struct mthca_icm_table *table,
int start, int end);
static inline void mthca_icm_first(struct mthca_icm *icm,
struct mthca_icm_iter *iter)
static inline int mthca_icm_last(struct mthca_icm_iter *iter)
static inline void mthca_icm_next(struct mthca_icm_iter *iter)
static inline dma_addr_t mthca_icm_addr(struct mthca_icm_iter *iter)
static inline unsigned long mthca_icm_size(struct mthca_icm_iter *iter)
struct mthca_db_page ;
struct mthca_db_table ;
enum mthca_db_type ;
struct mthca_user_db_table;
struct mthca_uar;
int mthca_map_user_db(struct mthca_dev *dev, struct mthca_uar *uar,
struct mthca_user_db_table *db_tab, int index, u64 uaddr);
void mthca_unmap_user_db(struct mthca_dev *dev, struct mthca_uar *uar,
struct mthca_user_db_table *db_tab, int index);
struct mthca_user_db_table *mthca_init_user_db_tab(struct mthca_dev *dev);
void mthca_cleanup_user_db_tab(struct mthca_dev *dev, struct mthca_uar *uar,
struct mthca_user_db_table *db_tab);
int mthca_init_db_tab(struct mthca_dev *dev);
void mthca_cleanup_db_tab(struct mthca_dev *dev);
int mthca_alloc_db(struct mthca_dev *dev, enum mthca_db_type type,
u32 qn, __be32 **db);
void mthca_free_db(struct mthca_dev *dev, int type, int db_index);
