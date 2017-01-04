struct mb_cache_entry ;
struct mb_cache ;
struct mb_cache *mb_cache_create(const char *, int);
void mb_cache_shrink(struct block_device *);
void mb_cache_destroy(struct mb_cache *);
struct mb_cache_entry *mb_cache_entry_alloc(struct mb_cache *, gfp_t);
int mb_cache_entry_insert(struct mb_cache_entry *, struct block_device *,
sector_t, unsigned int);
void mb_cache_entry_release(struct mb_cache_entry *);
void mb_cache_entry_free(struct mb_cache_entry *);
struct mb_cache_entry *mb_cache_entry_get(struct mb_cache *,
struct block_device *,
sector_t);
struct mb_cache_entry *mb_cache_entry_find_first(struct mb_cache *cache,
struct block_device *,
unsigned int);
struct mb_cache_entry *mb_cache_entry_find_next(struct mb_cache_entry *,
struct block_device *,
unsigned int);
