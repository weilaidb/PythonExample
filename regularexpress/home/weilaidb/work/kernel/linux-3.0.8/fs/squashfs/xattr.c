static const struct xattr_handler *squashfs_xattr_handler(int);
ssize_t squashfs_listxattr(struct dentry *d, char *buffer,
size_t buffer_size)
static int squashfs_xattr_get(struct inode *inode, int name_index,
const char *name, void *buffer, size_t buffer_size)
static size_t squashfs_user_list(struct dentry *d, char *list, size_t list_size,
const char *name, size_t name_len, int type)
static int squashfs_user_get(struct dentry *d, const char *name, void *buffer,
size_t size, int type)
static const struct xattr_handler squashfs_xattr_user_handler = ;
static size_t squashfs_trusted_list(struct dentry *d, char *list,
size_t list_size, const char *name, size_t name_len, int type)
static int squashfs_trusted_get(struct dentry *d, const char *name,
void *buffer, size_t size, int type)
static const struct xattr_handler squashfs_xattr_trusted_handler = ;
static size_t squashfs_security_list(struct dentry *d, char *list,
size_t list_size, const char *name, size_t name_len, int type)
static int squashfs_security_get(struct dentry *d, const char *name,
void *buffer, size_t size, int type)
static const struct xattr_handler squashfs_xattr_security_handler = ;
static const struct xattr_handler *squashfs_xattr_handler(int type)
const struct xattr_handler *squashfs_xattr_handlers[] = ;
