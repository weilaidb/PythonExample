#define _NFS_FSCACHE_H
struct nfs_fscache_key ;
extern struct fscache_netfs nfs_fscache_netfs;
extern const struct fscache_cookie_def nfs_fscache_server_index_def;
extern const struct fscache_cookie_def nfs_fscache_super_index_def;
extern const struct fscache_cookie_def nfs_fscache_inode_object_def;
extern int nfs_fscache_register(void);
extern void nfs_fscache_unregister(void);
extern void nfs_fscache_get_client_cookie(struct nfs_client *);
extern void nfs_fscache_release_client_cookie(struct nfs_client *);
extern void nfs_fscache_get_super_cookie(struct super_block *,
const char *,
struct nfs_clone_mount *);
extern void nfs_fscache_release_super_cookie(struct super_block *);
extern void nfs_fscache_init_inode_cookie(struct inode *);
extern void nfs_fscache_release_inode_cookie(struct inode *);
extern void nfs_fscache_zap_inode_cookie(struct inode *);
extern void nfs_fscache_set_inode_cookie(struct inode *, struct file *);
extern void nfs_fscache_reset_inode_cookie(struct inode *);
extern void __nfs_fscache_invalidate_page(struct page *, struct inode *);
extern int nfs_fscache_release_page(struct page *, gfp_t);
extern int __nfs_readpage_from_fscache(struct nfs_open_context *,
struct inode *, struct page *);
extern int __nfs_readpages_from_fscache(struct nfs_open_context *,
struct inode *, struct address_space *,
struct list_head *, unsigned *);
extern void __nfs_readpage_to_fscache(struct inode *, struct page *, int);
static inline void nfs_fscache_wait_on_page_write(struct nfs_inode *nfsi,
struct page *page)
static inline void nfs_fscache_invalidate_page(struct page *page,
struct inode *inode)
static inline int nfs_readpage_from_fscache(struct nfs_open_context *ctx,
struct inode *inode,
struct page *page)
static inline int nfs_readpages_from_fscache(struct nfs_open_context *ctx,
struct inode *inode,
struct address_space *mapping,
struct list_head *pages,
unsigned *nr_pages)
static inline void nfs_readpage_to_fscache(struct inode *inode,
struct page *page,
int sync)
static inline const char *nfs_server_fscache_state(struct nfs_server *server)
static inline int nfs_fscache_register(void)
static inline void nfs_fscache_unregister(void)
static inline void nfs_fscache_get_client_cookie(struct nfs_client *clp)
static inline void nfs_fscache_release_client_cookie(struct nfs_client *clp)
static inline void nfs_fscache_get_super_cookie(
struct super_block *sb,
const char *uniq,
struct nfs_clone_mount *mntdata)
static inline void nfs_fscache_release_super_cookie(struct super_block *sb)
static inline void nfs_fscache_init_inode_cookie(struct inode *inode)
static inline void nfs_fscache_release_inode_cookie(struct inode *inode)
static inline void nfs_fscache_zap_inode_cookie(struct inode *inode)
static inline void nfs_fscache_set_inode_cookie(struct inode *inode,
struct file *filp)
static inline void nfs_fscache_reset_inode_cookie(struct inode *inode)
static inline int nfs_fscache_release_page(struct page *page, gfp_t gfp)
static inline void nfs_fscache_invalidate_page(struct page *page,
struct inode *inode)
static inline void nfs_fscache_wait_on_page_write(struct nfs_inode *nfsi,
struct page *page)
static inline int nfs_readpage_from_fscache(struct nfs_open_context *ctx,
struct inode *inode,
struct page *page)
static inline int nfs_readpages_from_fscache(struct nfs_open_context *ctx,
struct inode *inode,
struct address_space *mapping,
struct list_head *pages,
unsigned *nr_pages)
static inline void nfs_readpage_to_fscache(struct inode *inode,
struct page *page, int sync)
static inline const char *nfs_server_fscache_state(struct nfs_server *server)
