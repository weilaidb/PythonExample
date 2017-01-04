static int cachefiles_read_waiter(wait_queue_t *wait, unsigned mode,
int sync, void *_key)
static int cachefiles_read_reissue(struct cachefiles_object *object,
struct cachefiles_one_read *monitor)
static void cachefiles_read_copier(struct fscache_operation *_op)
static int cachefiles_read_backing_file_one(struct cachefiles_object *object,
struct fscache_retrieval *op,
struct page *netpage,
struct pagevec *pagevec)
int cachefiles_read_or_alloc_page(struct fscache_retrieval *op,
struct page *page,
gfp_t gfp)
static int cachefiles_read_backing_file(struct cachefiles_object *object,
struct fscache_retrieval *op,
struct list_head *list,
struct pagevec *mark_pvec)
int cachefiles_read_or_alloc_pages(struct fscache_retrieval *op,
struct list_head *pages,
unsigned *nr_pages,
gfp_t gfp)
int cachefiles_allocate_page(struct fscache_retrieval *op,
struct page *page,
gfp_t gfp)
int cachefiles_allocate_pages(struct fscache_retrieval *op,
struct list_head *pages,
unsigned *nr_pages,
gfp_t gfp)
int cachefiles_write_page(struct fscache_storage *op, struct page *page)
void cachefiles_uncache_page(struct fscache_object *_object, struct page *page)
