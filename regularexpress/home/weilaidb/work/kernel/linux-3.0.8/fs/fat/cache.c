#define FAT_MAX_CACHE	8
struct fat_cache ;
struct fat_cache_id ;
static inline int fat_max_cache(struct inode *inode)
static struct kmem_cache *fat_cache_cachep;
static void init_once(void *foo)
int __init fat_cache_init(void)
void fat_cache_destroy(void)
static inline struct fat_cache *fat_cache_alloc(struct inode *inode)
static inline void fat_cache_free(struct fat_cache *cache)
static inline void fat_cache_update_lru(struct inode *inode,
struct fat_cache *cache)
static int fat_cache_lookup(struct inode *inode, int fclus,
struct fat_cache_id *cid,
int *cached_fclus, int *cached_dclus)
static struct fat_cache *fat_cache_merge(struct inode *inode,
struct fat_cache_id *new)
static void fat_cache_add(struct inode *inode, struct fat_cache_id *new)
static void __fat_cache_inval_inode(struct inode *inode)
void fat_cache_inval_inode(struct inode *inode)
static inline int cache_contiguous(struct fat_cache_id *cid, int dclus)
static inline void cache_init(struct fat_cache_id *cid, int fclus, int dclus)
int fat_get_cluster(struct inode *inode, int cluster, int *fclus, int *dclus)
static int fat_bmap_cluster(struct inode *inode, int cluster)
int fat_bmap(struct inode *inode, sector_t sector, sector_t *phys,
unsigned long *mapped_blocks, int create)
