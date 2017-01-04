#define TTM_MEMORY_H
struct ttm_mem_shrink ;
#define TTM_MEM_MAX_ZONES 2
struct ttm_mem_zone;
struct ttm_mem_global ;
static inline void ttm_mem_init_shrink(struct ttm_mem_shrink *shrink,
int (*func) (struct ttm_mem_shrink *))
static inline int ttm_mem_register_shrink(struct ttm_mem_global *glob,
struct ttm_mem_shrink *shrink)
static inline void ttm_mem_unregister_shrink(struct ttm_mem_global *glob,
struct ttm_mem_shrink *shrink)
extern int ttm_mem_global_init(struct ttm_mem_global *glob);
extern void ttm_mem_global_release(struct ttm_mem_global *glob);
extern int ttm_mem_global_alloc(struct ttm_mem_global *glob, uint64_t memory,
bool no_wait, bool interruptible);
extern void ttm_mem_global_free(struct ttm_mem_global *glob,
uint64_t amount);
extern int ttm_mem_global_alloc_page(struct ttm_mem_global *glob,
struct page *page,
bool no_wait, bool interruptible);
extern void ttm_mem_global_free_page(struct ttm_mem_global *glob,
struct page *page);
extern size_t ttm_round_pot(size_t size);
