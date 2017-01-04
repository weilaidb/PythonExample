#define DEBUG
static void stat_inc(u64 *value)
static void stat_dec(u64 *value)
static int test_flag(struct block_header *block, enum blockflags flag)
static void set_flag(struct block_header *block, enum blockflags flag)
static void clear_flag(struct block_header *block, enum blockflags flag)
static void *get_ptr_atomic(struct page *page, u16 offset, enum km_type type)
static void put_ptr_atomic(void *ptr, enum km_type type)
static u32 get_blockprev(struct block_header *block)
static void set_blockprev(struct block_header *block, u16 new_offset)
static struct block_header *BLOCK_NEXT(struct block_header *block)
static u32 get_index_for_insert(u32 size)
static u32 get_index(u32 size)
static u32 find_block(struct xv_pool *pool, u32 size,
struct page **page, u32 *offset)
static void insert_block(struct xv_pool *pool, struct page *page, u32 offset,
struct block_header *block)
static void remove_block(struct xv_pool *pool, struct page *page, u32 offset,
struct block_header *block, u32 slindex)
static int grow_pool(struct xv_pool *pool, gfp_t flags)
struct xv_pool *xv_create_pool(void)
EXPORT_SYMBOL_GPL(xv_create_pool);
void xv_destroy_pool(struct xv_pool *pool)
EXPORT_SYMBOL_GPL(xv_destroy_pool);
int xv_malloc(struct xv_pool *pool, u32 size, struct page **page,
u32 *offset, gfp_t flags)
EXPORT_SYMBOL_GPL(xv_malloc);
void xv_free(struct xv_pool *pool, struct page *page, u32 offset)
EXPORT_SYMBOL_GPL(xv_free);
u32 xv_get_object_size(void *obj)
EXPORT_SYMBOL_GPL(xv_get_object_size);
u64 xv_get_total_size_bytes(struct xv_pool *pool)
EXPORT_SYMBOL_GPL(xv_get_total_size_bytes);
