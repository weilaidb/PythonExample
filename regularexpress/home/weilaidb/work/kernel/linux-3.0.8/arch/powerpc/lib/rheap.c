static inline void fixup(unsigned long s, unsigned long e, int d,
struct list_head *l)
static int grow(rh_info_t * info, int max_blocks)
static int assure_empty(rh_info_t * info, int slots)
static rh_block_t *get_slot(rh_info_t * info)
static inline void release_slot(rh_info_t * info, rh_block_t * blk)
static void attach_free_block(rh_info_t * info, rh_block_t * blkn)
static void attach_taken_block(rh_info_t * info, rh_block_t * blkn)
rh_info_t *rh_create(unsigned int alignment)
EXPORT_SYMBOL_GPL(rh_create);
void rh_destroy(rh_info_t * info)
EXPORT_SYMBOL_GPL(rh_destroy);
void rh_init(rh_info_t * info, unsigned int alignment, int max_blocks,
rh_block_t * block)
EXPORT_SYMBOL_GPL(rh_init);
int rh_attach_region(rh_info_t * info, unsigned long start, int size)
EXPORT_SYMBOL_GPL(rh_attach_region);
unsigned long rh_detach_region(rh_info_t * info, unsigned long start, int size)
EXPORT_SYMBOL_GPL(rh_detach_region);
unsigned long rh_alloc_align(rh_info_t * info, int size, int alignment, const char *owner)
EXPORT_SYMBOL_GPL(rh_alloc_align);
unsigned long rh_alloc(rh_info_t * info, int size, const char *owner)
EXPORT_SYMBOL_GPL(rh_alloc);
unsigned long rh_alloc_fixed(rh_info_t * info, unsigned long start, int size, const char *owner)
EXPORT_SYMBOL_GPL(rh_alloc_fixed);
int rh_free(rh_info_t * info, unsigned long start)
EXPORT_SYMBOL_GPL(rh_free);
int rh_get_stats(rh_info_t * info, int what, int max_stats, rh_stats_t * stats)
EXPORT_SYMBOL_GPL(rh_get_stats);
int rh_set_owner(rh_info_t * info, unsigned long start, const char *owner)
EXPORT_SYMBOL_GPL(rh_set_owner);
void rh_dump(rh_info_t * info)
EXPORT_SYMBOL_GPL(rh_dump);
void rh_dump_blk(rh_info_t * info, rh_block_t * blk)
EXPORT_SYMBOL_GPL(rh_dump_blk);
