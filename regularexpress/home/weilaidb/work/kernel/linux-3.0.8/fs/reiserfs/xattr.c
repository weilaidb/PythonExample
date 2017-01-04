#define PRIVROOT_NAME ".reiserfs_priv"
#define XAROOT_NAME   "xattrs"
static int xattr_create(struct inode *dir, struct dentry *dentry, int mode)
static int xattr_mkdir(struct inode *dir, struct dentry *dentry, int mode)
static int xattr_unlink(struct inode *dir, struct dentry *dentry)
static int xattr_rmdir(struct inode *dir, struct dentry *dentry)
#define xattr_may_create(flags)	(!flags || flags & XATTR_CREATE)
static struct dentry *open_xa_root(struct super_block *sb, int flags)
static struct dentry *open_xa_dir(const struct inode *inode, int flags)
struct reiserfs_dentry_buf ;
static int
fill_with_dentries(void *buf, const char *name, int namelen, loff_t offset,
u64 ino, unsigned int d_type)
static void
cleanup_dentry_buf(struct reiserfs_dentry_buf *buf)
static int reiserfs_for_each_xattr(struct inode *inode,
int (*action)(struct dentry *, void *),
void *data)
static int delete_one_xattr(struct dentry *dentry, void *data)
static int chown_one_xattr(struct dentry *dentry, void *data)
int reiserfs_delete_xattrs(struct inode *inode)
int reiserfs_chown_xattrs(struct inode *inode, struct iattr *attrs)
static struct dentry *xattr_lookup(struct inode *inode, const char *name,
int flags)
static inline void reiserfs_put_page(struct page *page)
static struct page *reiserfs_get_page(struct inode *dir, size_t n)
static inline __u32 xattr_hash(const char *msg, int len)
int reiserfs_commit_write(struct file *f, struct page *page,
unsigned from, unsigned to);
static void update_ctime(struct inode *inode)
static int lookup_and_delete_xattr(struct inode *inode, const char *name)
int
reiserfs_xattr_set_handle(struct reiserfs_transaction_handle *th,
struct inode *inode, const char *name,
const void *buffer, size_t buffer_size, int flags)
int reiserfs_xattr_set(struct inode *inode, const char *name,
const void *buffer, size_t buffer_size, int flags)
int
reiserfs_xattr_get(struct inode *inode, const char *name, void *buffer,
size_t buffer_size)
#define for_each_xattr_handler(handlers, handler)		\
for ((handler) = *(handlers)++;			\
(handler) != NULL;			\
(handler) = *(handlers)++)
static inline const struct xattr_handler *
find_xattr_handler_prefix(const struct xattr_handler **handlers,
const char *name)
ssize_t
reiserfs_getxattr(struct dentry * dentry, const char *name, void *buffer,
size_t size)
int
reiserfs_setxattr(struct dentry *dentry, const char *name, const void *value,
size_t size, int flags)
int reiserfs_removexattr(struct dentry *dentry, const char *name)
struct listxattr_buf ;
static int listxattr_filler(void *buf, const char *name, int namelen,
loff_t offset, u64 ino, unsigned int d_type)
ssize_t reiserfs_listxattr(struct dentry * dentry, char *buffer, size_t size)
static int reiserfs_check_acl(struct inode *inode, int mask, unsigned int flags)
static int create_privroot(struct dentry *dentry)
int __init reiserfs_xattr_register_handlers(void)
void reiserfs_xattr_unregister_handlers(void)
static int create_privroot(struct dentry *dentry)
const struct xattr_handler *reiserfs_xattr_handlers[] = ;
static int xattr_mount_check(struct super_block *s)
int reiserfs_permission(struct inode *inode, int mask, unsigned int flags)
static int xattr_hide_revalidate(struct dentry *dentry, struct nameidata *nd)
static const struct dentry_operations xattr_lookup_poison_ops = ;
int reiserfs_lookup_privroot(struct super_block *s)
int reiserfs_xattr_init(struct super_block *s, int mount_flags)
