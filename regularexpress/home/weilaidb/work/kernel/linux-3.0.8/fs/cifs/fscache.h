#define _CIFS_FSCACHE_H
extern struct fscache_netfs cifs_fscache_netfs;
extern const struct fscache_cookie_def cifs_fscache_server_index_def;
extern const struct fscache_cookie_def cifs_fscache_super_index_def;
extern const struct fscache_cookie_def cifs_fscache_inode_object_def;
extern int cifs_fscache_register(void);
extern void cifs_fscache_unregister(void);
extern void cifs_fscache_get_client_cookie(struct TCP_Server_Info *);
extern void cifs_fscache_release_client_cookie(struct TCP_Server_Info *);
extern void cifs_fscache_get_super_cookie(struct cifs_tcon *);
extern void cifs_fscache_release_super_cookie(struct cifs_tcon *);
extern void cifs_fscache_release_inode_cookie(struct inode *);
extern void cifs_fscache_set_inode_cookie(struct inode *, struct file *);
extern void cifs_fscache_reset_inode_cookie(struct inode *);
extern void __cifs_fscache_invalidate_page(struct page *, struct inode *);
extern int cifs_fscache_release_page(struct page *page, gfp_t gfp);
extern int __cifs_readpage_from_fscache(struct inode *, struct page *);
extern int __cifs_readpages_from_fscache(struct inode *,
struct address_space *,
struct list_head *,
unsigned *);
extern void __cifs_readpage_to_fscache(struct inode *, struct page *);
static inline void cifs_fscache_invalidate_page(struct page *page,
struct inode *inode)
static inline int cifs_readpage_from_fscache(struct inode *inode,
struct page *page)
static inline int cifs_readpages_from_fscache(struct inode *inode,
struct address_space *mapping,
struct list_head *pages,
unsigned *nr_pages)
static inline void cifs_readpage_to_fscache(struct inode *inode,
struct page *page)
static inline int cifs_fscache_register(void)
static inline void cifs_fscache_unregister(void)
static inline void
cifs_fscache_get_client_cookie(struct TCP_Server_Info *server)
static inline void
cifs_fscache_release_client_cookie(struct TCP_Server_Info *server)
static inline void cifs_fscache_get_super_cookie(struct cifs_tcon *tcon)
static inline void
cifs_fscache_release_super_cookie(struct cifs_tcon *tcon)
static inline void cifs_fscache_release_inode_cookie(struct inode *inode)
static inline void cifs_fscache_set_inode_cookie(struct inode *inode,
struct file *filp)
static inline void cifs_fscache_reset_inode_cookie(struct inode *inode)
static inline int cifs_fscache_release_page(struct page *page, gfp_t gfp)
static inline void cifs_fscache_invalidate_page(struct page *page,
struct inode *inode)
static inline int
cifs_readpage_from_fscache(struct inode *inode, struct page *page)
static inline int cifs_readpages_from_fscache(struct inode *inode,
struct address_space *mapping,
struct list_head *pages,
unsigned *nr_pages)
static inline void cifs_readpage_to_fscache(struct inode *inode,
struct page *page)
