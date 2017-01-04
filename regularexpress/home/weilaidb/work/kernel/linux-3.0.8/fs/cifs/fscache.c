void cifs_fscache_get_client_cookie(struct TCP_Server_Info *server)
void cifs_fscache_release_client_cookie(struct TCP_Server_Info *server)
void cifs_fscache_get_super_cookie(struct cifs_tcon *tcon)
void cifs_fscache_release_super_cookie(struct cifs_tcon *tcon)
static void cifs_fscache_enable_inode_cookie(struct inode *inode)
void cifs_fscache_release_inode_cookie(struct inode *inode)
static void cifs_fscache_disable_inode_cookie(struct inode *inode)
void cifs_fscache_set_inode_cookie(struct inode *inode, struct file *filp)
void cifs_fscache_reset_inode_cookie(struct inode *inode)
int cifs_fscache_release_page(struct page *page, gfp_t gfp)
static void cifs_readpage_from_fscache_complete(struct page *page, void *ctx,
int error)
int __cifs_readpage_from_fscache(struct inode *inode, struct page *page)
int __cifs_readpages_from_fscache(struct inode *inode,
struct address_space *mapping,
struct list_head *pages,
unsigned *nr_pages)
void __cifs_readpage_to_fscache(struct inode *inode, struct page *page)
void __cifs_fscache_invalidate_page(struct page *page, struct inode *inode)
