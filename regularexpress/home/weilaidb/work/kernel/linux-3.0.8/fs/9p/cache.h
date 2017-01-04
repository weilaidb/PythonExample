extern struct fscache_netfs v9fs_cache_netfs;
extern const struct fscache_cookie_def v9fs_cache_session_index_def;
extern const struct fscache_cookie_def v9fs_cache_inode_index_def;
extern void v9fs_cache_session_get_cookie(struct v9fs_session_info *v9ses);
extern void v9fs_cache_session_put_cookie(struct v9fs_session_info *v9ses);
extern void v9fs_cache_inode_get_cookie(struct inode *inode);
extern void v9fs_cache_inode_put_cookie(struct inode *inode);
extern void v9fs_cache_inode_flush_cookie(struct inode *inode);
extern void v9fs_cache_inode_set_cookie(struct inode *inode, struct file *filp);
extern void v9fs_cache_inode_reset_cookie(struct inode *inode);
extern int __v9fs_cache_register(void);
extern void __v9fs_cache_unregister(void);
extern int __v9fs_fscache_release_page(struct page *page, gfp_t gfp);
extern void __v9fs_fscache_invalidate_page(struct page *page);
extern int __v9fs_readpage_from_fscache(struct inode *inode,
struct page *page);
extern int __v9fs_readpages_from_fscache(struct inode *inode,
struct address_space *mapping,
struct list_head *pages,
unsigned *nr_pages);
extern void __v9fs_readpage_to_fscache(struct inode *inode, struct page *page);
extern void __v9fs_fscache_wait_on_page_write(struct inode *inode,
struct page *page);
static inline int v9fs_fscache_release_page(struct page *page,
gfp_t gfp)
static inline void v9fs_fscache_invalidate_page(struct page *page)
static inline int v9fs_readpage_from_fscache(struct inode *inode,
struct page *page)
static inline int v9fs_readpages_from_fscache(struct inode *inode,
struct address_space *mapping,
struct list_head *pages,
unsigned *nr_pages)
static inline void v9fs_readpage_to_fscache(struct inode *inode,
struct page *page)
static inline void v9fs_uncache_page(struct inode *inode, struct page *page)
static inline void v9fs_fscache_wait_on_page_write(struct inode *inode,
struct page *page)
static inline int v9fs_fscache_release_page(struct page *page,
gfp_t gfp)
static inline void v9fs_fscache_invalidate_page(struct page *page)
static inline int v9fs_readpage_from_fscache(struct inode *inode,
struct page *page)
static inline int v9fs_readpages_from_fscache(struct inode *inode,
struct address_space *mapping,
struct list_head *pages,
unsigned *nr_pages)
static inline void v9fs_readpage_to_fscache(struct inode *inode,
struct page *page)
static inline void v9fs_uncache_page(struct inode *inode, struct page *page)
static inline void v9fs_fscache_wait_on_page_write(struct inode *inode,
struct page *page)
