#define __XFS_MRU_CACHE_H__
typedef void (*xfs_mru_cache_free_func_t)(unsigned long, void*);
typedef struct xfs_mru_cache
xfs_mru_cache_t;
int xfs_mru_cache_init(void);
void xfs_mru_cache_uninit(void);
int xfs_mru_cache_create(struct xfs_mru_cache **mrup, unsigned int lifetime_ms,
unsigned int grp_count,
xfs_mru_cache_free_func_t free_func);
void xfs_mru_cache_destroy(struct xfs_mru_cache *mru);
int xfs_mru_cache_insert(struct xfs_mru_cache *mru, unsigned long key,
void *value);
void * xfs_mru_cache_remove(struct xfs_mru_cache *mru, unsigned long key);
void xfs_mru_cache_delete(struct xfs_mru_cache *mru, unsigned long key);
void *xfs_mru_cache_lookup(struct xfs_mru_cache *mru, unsigned long key);
void xfs_mru_cache_done(struct xfs_mru_cache *mru);
