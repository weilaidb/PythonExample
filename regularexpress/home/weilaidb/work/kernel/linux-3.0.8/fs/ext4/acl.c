static struct posix_acl *
ext4_acl_from_disk(const void *value, size_t size)
static void *
ext4_acl_to_disk(const struct posix_acl *acl, size_t *size)
static struct posix_acl *
ext4_get_acl(struct inode *inode, int type)
static int
ext4_set_acl(handle_t *handle, struct inode *inode, int type,
struct posix_acl *acl)
int
ext4_check_acl(struct inode *inode, int mask, unsigned int flags)
int
ext4_init_acl(handle_t *handle, struct inode *inode, struct inode *dir)
int
ext4_acl_chmod(struct inode *inode)
static size_t
ext4_xattr_list_acl_access(struct dentry *dentry, char *list, size_t list_len,
const char *name, size_t name_len, int type)
static size_t
ext4_xattr_list_acl_default(struct dentry *dentry, char *list, size_t list_len,
const char *name, size_t name_len, int type)
static int
ext4_xattr_get_acl(struct dentry *dentry, const char *name, void *buffer,
size_t size, int type)
static int
ext4_xattr_set_acl(struct dentry *dentry, const char *name, const void *value,
size_t size, int flags, int type)
const struct xattr_handler ext4_xattr_acl_access_handler = ;
const struct xattr_handler ext4_xattr_acl_default_handler = ;
