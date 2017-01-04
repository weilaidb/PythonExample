#define NFSDBG_FACILITY		NFSDBG_VFS
#define NFS_64_BIT_INODE_NUMBERS_ENABLED	1
static int enable_ino64 = NFS_64_BIT_INODE_NUMBERS_ENABLED;
static void nfs_invalidate_inode(struct inode *);
static int nfs_update_inode(struct inode *, struct nfs_fattr *);
static struct kmem_cache * nfs_inode_cachep;
static inline unsigned long
nfs_fattr_to_ino_t(struct nfs_fattr *fattr)
int nfs_wait_bit_killable(void *word)
u64 nfs_compat_user_ino64(u64 fileid)
static void nfs_clear_inode(struct inode *inode)
void nfs_evict_inode(struct inode *inode)
int nfs_sync_mapping(struct address_space *mapping)
static void nfs_zap_caches_locked(struct inode *inode)
void nfs_zap_caches(struct inode *inode)
void nfs_zap_mapping(struct inode *inode, struct address_space *mapping)
void nfs_zap_acl_cache(struct inode *inode)
void nfs_invalidate_atime(struct inode *inode)
static void nfs_invalidate_inode(struct inode *inode)
struct nfs_find_desc ;
static int
nfs_find_actor(struct inode *inode, void *opaque)
static int
nfs_init_locked(struct inode *inode, void *opaque)
struct inode *
nfs_fhget(struct super_block *sb, struct nfs_fh *fh, struct nfs_fattr *fattr)
#define NFS_VALID_ATTRS (ATTR_MODE|ATTR_UID|ATTR_GID|ATTR_SIZE|ATTR_ATIME|ATTR_ATIME_SET|ATTR_MTIME|ATTR_MTIME_SET|ATTR_FILE)
int
nfs_setattr(struct dentry *dentry, struct iattr *attr)
static int nfs_vmtruncate(struct inode * inode, loff_t offset)
void nfs_setattr_update_inode(struct inode *inode, struct iattr *attr)
int nfs_getattr(struct vfsmount *mnt, struct dentry *dentry, struct kstat *stat)
static void nfs_init_lock_context(struct nfs_lock_context *l_ctx)
static struct nfs_lock_context *__nfs_find_lock_context(struct nfs_open_context *ctx)
struct nfs_lock_context *nfs_get_lock_context(struct nfs_open_context *ctx)
void nfs_put_lock_context(struct nfs_lock_context *l_ctx)
void nfs_close_context(struct nfs_open_context *ctx, int is_sync)
struct nfs_open_context *alloc_nfs_open_context(struct path *path, struct rpc_cred *cred, fmode_t f_mode)
struct nfs_open_context *get_nfs_open_context(struct nfs_open_context *ctx)
static void __put_nfs_open_context(struct nfs_open_context *ctx, int is_sync)
void put_nfs_open_context(struct nfs_open_context *ctx)
void nfs_file_set_open_context(struct file *filp, struct nfs_open_context *ctx)
struct nfs_open_context *nfs_find_open_context(struct inode *inode, struct rpc_cred *cred, fmode_t mode)
static void nfs_file_clear_open_context(struct file *filp)
int nfs_open(struct inode *inode, struct file *filp)
int nfs_release(struct inode *inode, struct file *filp)
int
__nfs_revalidate_inode(struct nfs_server *server, struct inode *inode)
int nfs_attribute_timeout(struct inode *inode)
static int nfs_attribute_cache_expired(struct inode *inode)
int nfs_revalidate_inode(struct nfs_server *server, struct inode *inode)
static int nfs_invalidate_mapping(struct inode *inode, struct address_space *mapping)
int nfs_revalidate_mapping(struct inode *inode, struct address_space *mapping)
static unsigned long nfs_wcc_update_inode(struct inode *inode, struct nfs_fattr *fattr)
static int nfs_check_inode_attributes(struct inode *inode, struct nfs_fattr *fattr)
static int nfs_ctime_need_update(const struct inode *inode, const struct nfs_fattr *fattr)
static int nfs_size_need_update(const struct inode *inode, const struct nfs_fattr *fattr)
static atomic_long_t nfs_attr_generation_counter;
static unsigned long nfs_read_attr_generation_counter(void)
unsigned long nfs_inc_attr_generation_counter(void)
void nfs_fattr_init(struct nfs_fattr *fattr)
struct nfs_fattr *nfs_alloc_fattr(void)
struct nfs_fh *nfs_alloc_fhandle(void)
static int nfs_inode_attrs_need_update(const struct inode *inode, const struct nfs_fattr *fattr)
static int nfs_refresh_inode_locked(struct inode *inode, struct nfs_fattr *fattr)
int nfs_refresh_inode(struct inode *inode, struct nfs_fattr *fattr)
static int nfs_post_op_update_inode_locked(struct inode *inode, struct nfs_fattr *fattr)
int nfs_post_op_update_inode(struct inode *inode, struct nfs_fattr *fattr)
int nfs_post_op_update_inode_force_wcc(struct inode *inode, struct nfs_fattr *fattr)
static int nfs_update_inode(struct inode *inode, struct nfs_fattr *fattr)
void nfs4_evict_inode(struct inode *inode)
struct inode *nfs_alloc_inode(struct super_block *sb)
static void nfs_i_callback(struct rcu_head *head)
void nfs_destroy_inode(struct inode *inode)
static inline void nfs4_init_once(struct nfs_inode *nfsi)
static void init_once(void *foo)
static int __init nfs_init_inodecache(void)
static void nfs_destroy_inodecache(void)
struct workqueue_struct *nfsiod_workqueue;
static int nfsiod_start(void)
static void nfsiod_stop(void)
static int __init init_nfs_fs(void)
static void __exit exit_nfs_fs(void)
MODULE_AUTHOR("Olaf Kirch <okir@monad.swb.de>");
MODULE_LICENSE("GPL");
module_param(enable_ino64, bool, 0644);
module_init(init_nfs_fs)
module_exit(exit_nfs_fs)
