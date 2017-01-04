STATIC struct posix_acl *
xfs_acl_from_disk(struct xfs_acl *aclp)
STATIC void
xfs_acl_to_disk(struct xfs_acl *aclp, const struct posix_acl *acl)
struct posix_acl *
xfs_get_acl(struct inode *inode, int type)
STATIC int
xfs_set_acl(struct inode *inode, int type, struct posix_acl *acl)
int
xfs_check_acl(struct inode *inode, int mask, unsigned int flags)
static int
xfs_set_mode(struct inode *inode, mode_t mode)
static int
xfs_acl_exists(struct inode *inode, unsigned char *name)
int
posix_acl_access_exists(struct inode *inode)
int
posix_acl_default_exists(struct inode *inode)
int
xfs_inherit_acl(struct inode *inode, struct posix_acl *default_acl)
int
xfs_acl_chmod(struct inode *inode)
static int
xfs_xattr_acl_get(struct dentry *dentry, const char *name,
void *value, size_t size, int type)
static int
xfs_xattr_acl_set(struct dentry *dentry, const char *name,
const void *value, size_t size, int flags, int type)
const struct xattr_handler xfs_xattr_acl_access_handler = ;
const struct xattr_handler xfs_xattr_acl_default_handler = ;
