static struct posix_acl *
ext2_acl_from_disk(const void *value, size_t size)
static void *
ext2_acl_to_disk(const struct posix_acl *acl, size_t *size)
static struct posix_acl *
ext2_get_acl(struct inode *inode, int type)
static int
ext2_set_acl(struct inode *inode, int type, struct posix_acl *acl)
int
ext2_check_acl(struct inode *inode, int mask, unsigned int flags)
int
ext2_init_acl(struct inode *inode, struct inode *dir)
int
ext2_acl_chmod(struct inode *inode)
static size_t
ext2_xattr_list_acl_access(struct dentry *dentry, char *list, size_t list_size,
const char *name, size_t name_len, int type)
static size_t
ext2_xattr_list_acl_default(struct dentry *dentry, char *list, size_t list_size,
const char *name, size_t name_len, int type)
static int
ext2_xattr_get_acl(struct dentry *dentry, const char *name, void *buffer,
size_t size, int type)
static int
ext2_xattr_set_acl(struct dentry *dentry, const char *name, const void *value,
size_t size, int flags, int type)
const struct xattr_handler ext2_xattr_acl_access_handler = ;
const struct xattr_handler ext2_xattr_acl_default_handler = ;
