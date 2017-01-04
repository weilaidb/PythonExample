#define FSCACHE_DEBUG_LEVEL PAGE
bool __fscache_check_page_write(struct fscache_cookie *cookie, struct page *page)
EXPORT_SYMBOL(__fscache_check_page_write);
void __fscache_wait_on_page_write(struct fscache_cookie *cookie, struct page *page)
EXPORT_SYMBOL(__fscache_wait_on_page_write);
bool __fscache_maybe_release_page(struct fscache_cookie *cookie,
struct page *page,
gfp_t gfp)
EXPORT_SYMBOL(__fscache_maybe_release_page);
static void fscache_end_page_write(struct fscache_object *object,
struct page *page)
static void fscache_attr_changed_op(struct fscache_operation *op)
int __fscache_attr_changed(struct fscache_cookie *cookie)
EXPORT_SYMBOL(__fscache_attr_changed);
static void fscache_release_retrieval_op(struct fscache_operation *_op)
static struct fscache_retrieval *fscache_alloc_retrieval(
struct address_space *mapping,
fscache_rw_complete_t end_io_func,
void *context)
static int fscache_wait_for_deferred_lookup(struct fscache_cookie *cookie)
static int fscache_wait_for_retrieval_activation(struct fscache_object *object,
struct fscache_retrieval *op,
atomic_t *stat_op_waits,
atomic_t *stat_object_dead)
int __fscache_read_or_alloc_page(struct fscache_cookie *cookie,
struct page *page,
fscache_rw_complete_t end_io_func,
void *context,
gfp_t gfp)
EXPORT_SYMBOL(__fscache_read_or_alloc_page);
int __fscache_read_or_alloc_pages(struct fscache_cookie *cookie,
struct address_space *mapping,
struct list_head *pages,
unsigned *nr_pages,
fscache_rw_complete_t end_io_func,
void *context,
gfp_t gfp)
EXPORT_SYMBOL(__fscache_read_or_alloc_pages);
int __fscache_alloc_page(struct fscache_cookie *cookie,
struct page *page,
gfp_t gfp)
EXPORT_SYMBOL(__fscache_alloc_page);
static void fscache_release_write_op(struct fscache_operation *_op)
static void fscache_write_op(struct fscache_operation *_op)
int __fscache_write_page(struct fscache_cookie *cookie,
struct page *page,
gfp_t gfp)
EXPORT_SYMBOL(__fscache_write_page);
void __fscache_uncache_page(struct fscache_cookie *cookie, struct page *page)
EXPORT_SYMBOL(__fscache_uncache_page);
void fscache_mark_pages_cached(struct fscache_retrieval *op,
struct pagevec *pagevec)
EXPORT_SYMBOL(fscache_mark_pages_cached);
void __fscache_uncache_all_inode_pages(struct fscache_cookie *cookie,
struct inode *inode)
EXPORT_SYMBOL(__fscache_uncache_all_inode_pages);
