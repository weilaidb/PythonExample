#define PFX "fmr_pool: "
enum ;
struct ib_fmr_pool ;
static inline u32 ib_fmr_hash(u64 first_page)
static inline struct ib_pool_fmr *ib_fmr_cache_lookup(struct ib_fmr_pool *pool,
u64 *page_list,
int  page_list_len,
u64  io_virtual_address)
static void ib_fmr_batch_release(struct ib_fmr_pool *pool)
static int ib_fmr_cleanup_thread(void *pool_ptr)
struct ib_fmr_pool *ib_create_fmr_pool(struct ib_pd             *pd,
struct ib_fmr_pool_param *params)
EXPORT_SYMBOL(ib_create_fmr_pool);
void ib_destroy_fmr_pool(struct ib_fmr_pool *pool)
EXPORT_SYMBOL(ib_destroy_fmr_pool);
int ib_flush_fmr_pool(struct ib_fmr_pool *pool)
EXPORT_SYMBOL(ib_flush_fmr_pool);
struct ib_pool_fmr *ib_fmr_pool_map_phys(struct ib_fmr_pool *pool_handle,
u64                *page_list,
int                 list_len,
u64                 io_virtual_address)
EXPORT_SYMBOL(ib_fmr_pool_map_phys);
int ib_fmr_pool_unmap(struct ib_pool_fmr *fmr)
EXPORT_SYMBOL(ib_fmr_pool_unmap);
