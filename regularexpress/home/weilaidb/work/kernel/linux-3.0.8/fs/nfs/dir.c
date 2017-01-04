static int nfs_opendir(struct inode *, struct file *);
static int nfs_closedir(struct inode *, struct file *);
static int nfs_readdir(struct file *, void *, filldir_t);
static struct dentry *nfs_lookup(struct inode *, struct dentry *, struct nameidata *);
static int nfs_create(struct inode *, struct dentry *, int, struct nameidata *);
static int nfs_mkdir(struct inode *, struct dentry *, int);
static int nfs_rmdir(struct inode *, struct dentry *);
static int nfs_unlink(struct inode *, struct dentry *);
static int nfs_symlink(struct inode *, struct dentry *, const char *);
static int nfs_link(struct dentry *, struct inode *, struct dentry *);
static int nfs_mknod(struct inode *, struct dentry *, int, dev_t);
static int nfs_rename(struct inode *, struct dentry *,
struct inode *, struct dentry *);
static int nfs_fsync_dir(struct file *, int);
static loff_t nfs_llseek_dir(struct file *, loff_t, int);
static void nfs_readdir_clear_array(struct page*);
const struct file_operations nfs_dir_operations = ;
const struct inode_operations nfs_dir_inode_operations = ;
const struct address_space_operations nfs_dir_aops = ;
const struct inode_operations nfs3_dir_inode_operations = ;
static struct dentry *nfs_atomic_lookup(struct inode *, struct dentry *, struct nameidata *);
static int nfs_open_create(struct inode *dir, struct dentry *dentry, int mode, struct nameidata *nd);
const struct inode_operations nfs4_dir_inode_operations = ;
static struct nfs_open_dir_context *alloc_nfs_open_dir_context(struct inode *dir, struct rpc_cred *cred)
static void put_nfs_open_dir_context(struct nfs_open_dir_context *ctx)
static int
nfs_opendir(struct inode *inode, struct file *filp)
static int
nfs_closedir(struct inode *inode, struct file *filp)
struct nfs_cache_array_entry ;
struct nfs_cache_array ;
typedef int (*decode_dirent_t)(struct xdr_stream *, struct nfs_entry *, int);
typedef struct  nfs_readdir_descriptor_t;
static
struct nfs_cache_array *nfs_readdir_get_array(struct page *page)
static
void nfs_readdir_release_array(struct page *page)
static
void nfs_readdir_clear_array(struct page *page)
static
int nfs_readdir_make_qstr(struct qstr *string, const char *name, unsigned int len)
static
int nfs_readdir_add_to_array(struct nfs_entry *entry, struct page *page)
static
int nfs_readdir_search_for_pos(struct nfs_cache_array *array, nfs_readdir_descriptor_t *desc)
static
int nfs_readdir_search_for_cookie(struct nfs_cache_array *array, nfs_readdir_descriptor_t *desc)
static
int nfs_readdir_search_array(nfs_readdir_descriptor_t *desc)
static
int nfs_readdir_xdr_filler(struct page **pages, nfs_readdir_descriptor_t *desc,
struct nfs_entry *entry, struct file *file, struct inode *inode)
static int xdr_decode(nfs_readdir_descriptor_t *desc,
struct nfs_entry *entry, struct xdr_stream *xdr)
static
int nfs_same_file(struct dentry *dentry, struct nfs_entry *entry)
static
void nfs_prime_dcache(struct dentry *parent, struct nfs_entry *entry)
static
int nfs_readdir_page_filler(nfs_readdir_descriptor_t *desc, struct nfs_entry *entry,
struct page **xdr_pages, struct page *page, unsigned int buflen)
static
void nfs_readdir_free_pagearray(struct page **pages, unsigned int npages)
static
void nfs_readdir_free_large_page(void *ptr, struct page **pages,
unsigned int npages)
static
int nfs_readdir_large_page(struct page **pages, unsigned int npages)
static
int nfs_readdir_xdr_to_array(nfs_readdir_descriptor_t *desc, struct page *page, struct inode *inode)
static
int nfs_readdir_filler(nfs_readdir_descriptor_t *desc, struct page* page)
static
void cache_page_release(nfs_readdir_descriptor_t *desc)
static
struct page *get_cache_page(nfs_readdir_descriptor_t *desc)
static
int find_cache_page(nfs_readdir_descriptor_t *desc)
static inline
int readdir_search_pagecache(nfs_readdir_descriptor_t *desc)
static
int nfs_do_filldir(nfs_readdir_descriptor_t *desc, void *dirent,
filldir_t filldir)
static inline
int uncached_readdir(nfs_readdir_descriptor_t *desc, void *dirent,
filldir_t filldir)
static int nfs_readdir(struct file *filp, void *dirent, filldir_t filldir)
static loff_t nfs_llseek_dir(struct file *filp, loff_t offset, int origin)
static int nfs_fsync_dir(struct file *filp, int datasync)
void nfs_force_lookup_revalidate(struct inode *dir)
static int nfs_check_verifier(struct inode *dir, struct dentry *dentry)
static inline unsigned int nfs_lookup_check_intent(struct nameidata *nd,
unsigned int mask)
static int nfs_is_exclusive_create(struct inode *dir, struct nameidata *nd)
static inline
int nfs_lookup_verify_inode(struct inode *inode, struct nameidata *nd)
static inline
int nfs_neg_need_reval(struct inode *dir, struct dentry *dentry,
struct nameidata *nd)
static int nfs_lookup_revalidate(struct dentry *dentry, struct nameidata *nd)
static int nfs_dentry_delete(const struct dentry *dentry)
static void nfs_drop_nlink(struct inode *inode)
static void nfs_dentry_iput(struct dentry *dentry, struct inode *inode)
static void nfs_d_release(struct dentry *dentry)
const struct dentry_operations nfs_dentry_operations = ;
static struct dentry *nfs_lookup(struct inode *dir, struct dentry * dentry, struct nameidata *nd)
static int nfs_open_revalidate(struct dentry *, struct nameidata *);
const struct dentry_operations nfs4_dentry_operations = ;
static int is_atomic_open(struct nameidata *nd)
static struct nfs_open_context *nameidata_to_nfs_open_context(struct dentry *dentry, struct nameidata *nd)
static int do_open(struct inode *inode, struct file *filp)
static int nfs_intent_set_file(struct nameidata *nd, struct nfs_open_context *ctx)
static struct dentry *nfs_atomic_lookup(struct inode *dir, struct dentry *dentry, struct nameidata *nd)
static int nfs_open_revalidate(struct dentry *dentry, struct nameidata *nd)
static int nfs_open_create(struct inode *dir, struct dentry *dentry, int mode,
struct nameidata *nd)
int nfs_instantiate(struct dentry *dentry, struct nfs_fh *fhandle,
struct nfs_fattr *fattr)
static int nfs_create(struct inode *dir, struct dentry *dentry, int mode,
struct nameidata *nd)
static int
nfs_mknod(struct inode *dir, struct dentry *dentry, int mode, dev_t rdev)
static int nfs_mkdir(struct inode *dir, struct dentry *dentry, int mode)
static void nfs_dentry_handle_enoent(struct dentry *dentry)
static int nfs_rmdir(struct inode *dir, struct dentry *dentry)
static int nfs_safe_remove(struct dentry *dentry)
static int nfs_unlink(struct inode *dir, struct dentry *dentry)
static int nfs_symlink(struct inode *dir, struct dentry *dentry, const char *symname)
static int
nfs_link(struct dentry *old_dentry, struct inode *dir, struct dentry *dentry)
static int nfs_rename(struct inode *old_dir, struct dentry *old_dentry,
struct inode *new_dir, struct dentry *new_dentry)
static DEFINE_SPINLOCK(nfs_access_lru_lock);
static LIST_HEAD(nfs_access_lru_list);
static atomic_long_t nfs_access_nr_entries;
static void nfs_access_free_entry(struct nfs_access_entry *entry)
static void nfs_access_free_list(struct list_head *head)
int nfs_access_cache_shrinker(struct shrinker *shrink,
struct shrink_control *sc)
static void __nfs_access_zap_cache(struct nfs_inode *nfsi, struct list_head *head)
void nfs_access_zap_cache(struct inode *inode)
static struct nfs_access_entry *nfs_access_search_rbtree(struct inode *inode, struct rpc_cred *cred)
static int nfs_access_get_cached(struct inode *inode, struct rpc_cred *cred, struct nfs_access_entry *res)
static void nfs_access_add_rbtree(struct inode *inode, struct nfs_access_entry *set)
static void nfs_access_add_cache(struct inode *inode, struct nfs_access_entry *set)
static int nfs_do_access(struct inode *inode, struct rpc_cred *cred, int mask)
static int nfs_open_permission_mask(int openflags)
int nfs_may_open(struct inode *inode, struct rpc_cred *cred, int openflags)
int nfs_permission(struct inode *inode, int mask, unsigned int flags)
