static struct posix_acl *btrfs_get_acl(struct inode *inode, int type)
static int btrfs_xattr_acl_get(struct dentry *dentry, const char *name,
void *value, size_t size, int type)
static int btrfs_set_acl(struct btrfs_trans_handle *trans,
struct inode *inode, struct posix_acl *acl, int type)
static int btrfs_xattr_acl_set(struct dentry *dentry, const char *name,
const void *value, size_t size, int flags, int type)
int btrfs_check_acl(struct inode *inode, int mask, unsigned int flags)
int btrfs_init_acl(struct btrfs_trans_handle *trans,
struct inode *inode, struct inode *dir)
int btrfs_acl_chmod(struct inode *inode)
const struct xattr_handler btrfs_xattr_acl_default_handler = ;
const struct xattr_handler btrfs_xattr_acl_access_handler = ;
int btrfs_acl_chmod(struct inode *inode)
int btrfs_init_acl(struct btrfs_trans_handle *trans,
struct inode *inode, struct inode *dir)
