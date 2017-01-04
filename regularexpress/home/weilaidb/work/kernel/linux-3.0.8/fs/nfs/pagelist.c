static struct kmem_cache *nfs_page_cachep;
static inline struct nfs_page *
nfs_page_alloc(void)
static inline void
nfs_page_free(struct nfs_page *p)
struct nfs_page *
nfs_create_request(struct nfs_open_context *ctx, struct inode *inode,
struct page *page,
unsigned int offset, unsigned int count)
void nfs_unlock_request(struct nfs_page *req)
int nfs_set_page_tag_locked(struct nfs_page *req)
void nfs_clear_page_tag_locked(struct nfs_page *req)
static void nfs_clear_request(struct nfs_page *req)
static void nfs_free_request(struct kref *kref)
void nfs_release_request(struct nfs_page *req)
static int nfs_wait_bit_uninterruptible(void *word)
int
nfs_wait_on_request(struct nfs_page *req)
bool nfs_generic_pg_test(struct nfs_pageio_descriptor *desc, struct nfs_page *prev, struct nfs_page *req)
EXPORT_SYMBOL_GPL(nfs_generic_pg_test);
void nfs_pageio_init(struct nfs_pageio_descriptor *desc,
struct inode *inode,
int (*doio)(struct nfs_pageio_descriptor *),
size_t bsize,
int io_flags)
static bool nfs_can_coalesce_requests(struct nfs_page *prev,
struct nfs_page *req,
struct nfs_pageio_descriptor *pgio)
static int nfs_pageio_do_add_request(struct nfs_pageio_descriptor *desc,
struct nfs_page *req)
static void nfs_pageio_doio(struct nfs_pageio_descriptor *desc)
int nfs_pageio_add_request(struct nfs_pageio_descriptor *desc,
struct nfs_page *req)
void nfs_pageio_complete(struct nfs_pageio_descriptor *desc)
void nfs_pageio_cond_complete(struct nfs_pageio_descriptor *desc, pgoff_t index)
#define NFS_SCAN_MAXENTRIES 16
int nfs_scan_list(struct nfs_inode *nfsi,
struct list_head *dst, pgoff_t idx_start,
unsigned int npages, int tag)
int __init nfs_init_nfspagecache(void)
void nfs_destroy_nfspagecache(void)
