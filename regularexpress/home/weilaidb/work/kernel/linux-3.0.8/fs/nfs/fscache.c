#define NFSDBG_FACILITY		NFSDBG_FSCACHE
static struct rb_root nfs_fscache_keys = RB_ROOT;
static DEFINE_SPINLOCK(nfs_fscache_keys_lock);
void nfs_fscache_get_client_cookie(struct nfs_client *clp)
void nfs_fscache_release_client_cookie(struct nfs_client *clp)
void nfs_fscache_get_super_cookie(struct super_block *sb, const char *uniq,
struct nfs_clone_mount *mntdata)
void nfs_fscache_release_super_cookie(struct super_block *sb)
void nfs_fscache_init_inode_cookie(struct inode *inode)
static void nfs_fscache_enable_inode_cookie(struct inode *inode)
void nfs_fscache_release_inode_cookie(struct inode *inode)
void nfs_fscache_zap_inode_cookie(struct inode *inode)
static void nfs_fscache_disable_inode_cookie(struct inode *inode)
static int nfs_fscache_wait_bit(void *flags)
static inline void nfs_fscache_inode_lock(struct inode *inode)
static inline void nfs_fscache_inode_unlock(struct inode *inode)
void nfs_fscache_set_inode_cookie(struct inode *inode, struct file *filp)
void nfs_fscache_reset_inode_cookie(struct inode *inode)
int nfs_fscache_release_page(struct page *page, gfp_t gfp)
void __nfs_fscache_invalidate_page(struct page *page, struct inode *inode)
static void nfs_readpage_from_fscache_complete(struct page *page,
void *context,
int error)
int __nfs_readpage_from_fscache(struct nfs_open_context *ctx,
struct inode *inode, struct page *page)
int __nfs_readpages_from_fscache(struct nfs_open_context *ctx,
struct inode *inode,
struct address_space *mapping,
struct list_head *pages,
unsigned *nr_pages)
void __nfs_readpage_to_fscache(struct inode *inode, struct page *page, int sync)
