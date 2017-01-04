#define CACHETAG_LEN  11
struct fscache_netfs v9fs_cache_netfs = ;
static
int v9fs_random_cachetag(struct v9fs_session_info *v9ses)
static uint16_t v9fs_cache_session_get_key(const void *cookie_netfs_data,
void *buffer, uint16_t bufmax)
const struct fscache_cookie_def v9fs_cache_session_index_def = ;
void v9fs_cache_session_get_cookie(struct v9fs_session_info *v9ses)
void v9fs_cache_session_put_cookie(struct v9fs_session_info *v9ses)
static uint16_t v9fs_cache_inode_get_key(const void *cookie_netfs_data,
void *buffer, uint16_t bufmax)
static void v9fs_cache_inode_get_attr(const void *cookie_netfs_data,
uint64_t *size)
static uint16_t v9fs_cache_inode_get_aux(const void *cookie_netfs_data,
void *buffer, uint16_t buflen)
static enum
fscache_checkaux v9fs_cache_inode_check_aux(void *cookie_netfs_data,
const void *buffer,
uint16_t buflen)
static void v9fs_cache_inode_now_uncached(void *cookie_netfs_data)
const struct fscache_cookie_def v9fs_cache_inode_index_def = ;
void v9fs_cache_inode_get_cookie(struct inode *inode)
void v9fs_cache_inode_put_cookie(struct inode *inode)
void v9fs_cache_inode_flush_cookie(struct inode *inode)
void v9fs_cache_inode_set_cookie(struct inode *inode, struct file *filp)
void v9fs_cache_inode_reset_cookie(struct inode *inode)
int __v9fs_fscache_release_page(struct page *page, gfp_t gfp)
void __v9fs_fscache_invalidate_page(struct page *page)
static void v9fs_vfs_readpage_complete(struct page *page, void *data,
int error)
int __v9fs_readpage_from_fscache(struct inode *inode, struct page *page)
int __v9fs_readpages_from_fscache(struct inode *inode,
struct address_space *mapping,
struct list_head *pages,
unsigned *nr_pages)
void __v9fs_readpage_to_fscache(struct inode *inode, struct page *page)
void __v9fs_fscache_wait_on_page_write(struct inode *inode, struct page *page)
