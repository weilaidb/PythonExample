ssize_t __btrfs_getxattr(struct inode *inode, const char *name,
void *buffer, size_t size)
static int do_setxattr(struct btrfs_trans_handle *trans,
struct inode *inode, const char *name,
const void *value, size_t size, int flags)
int __btrfs_setxattr(struct btrfs_trans_handle *trans,
struct inode *inode, const char *name,
const void *value, size_t size, int flags)
ssize_t btrfs_listxattr(struct dentry *dentry, char *buffer, size_t size)
const struct xattr_handler *btrfs_xattr_handlers[] = ;
static bool btrfs_is_valid_xattr(const char *name)
ssize_t btrfs_getxattr(struct dentry *dentry, const char *name,
void *buffer, size_t size)
int btrfs_setxattr(struct dentry *dentry, const char *name, const void *value,
size_t size, int flags)
int btrfs_removexattr(struct dentry *dentry, const char *name)
int btrfs_xattr_security_init(struct btrfs_trans_handle *trans,
struct inode *inode, struct inode *dir,
const struct qstr *qstr)
