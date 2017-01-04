static struct kmem_cache *pohmelfs_mcache_cache;
static mempool_t *pohmelfs_mcache_pool;
static inline int pohmelfs_mcache_cmp(u64 gen, u64 new)
struct pohmelfs_mcache *pohmelfs_mcache_search(struct pohmelfs_sb *psb, u64 gen)
static int pohmelfs_mcache_insert(struct pohmelfs_sb *psb, struct pohmelfs_mcache *m)
static int pohmelfs_mcache_remove(struct pohmelfs_sb *psb, struct pohmelfs_mcache *m)
void pohmelfs_mcache_remove_locked(struct pohmelfs_sb *psb, struct pohmelfs_mcache *m)
struct pohmelfs_mcache *pohmelfs_mcache_alloc(struct pohmelfs_sb *psb, u64 start,
unsigned int size, void *data)
void pohmelfs_mcache_free(struct pohmelfs_sb *psb, struct pohmelfs_mcache *m)
int __init pohmelfs_mcache_init(void)
void pohmelfs_mcache_exit(void)
