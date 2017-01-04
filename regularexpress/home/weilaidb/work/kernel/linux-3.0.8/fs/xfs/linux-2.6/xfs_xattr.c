static int
xfs_xattr_get(struct dentry *dentry, const char *name,
void *value, size_t size, int xflags)
static int
xfs_xattr_set(struct dentry *dentry, const char *name, const void *value,
size_t size, int flags, int xflags)
static const struct xattr_handler xfs_xattr_user_handler = ;
static const struct xattr_handler xfs_xattr_trusted_handler = ;
static const struct xattr_handler xfs_xattr_security_handler = ;
const struct xattr_handler *xfs_xattr_handlers[] = ;
static unsigned int xfs_xattr_prefix_len(int flags)
static const char *xfs_xattr_prefix(int flags)
static int
xfs_xattr_put_listent(
struct xfs_attr_list_context *context,
int		flags,
unsigned char	*name,
int		namelen,
int		valuelen,
unsigned char	*value)
static int
xfs_xattr_put_listent_sizes(
struct xfs_attr_list_context *context,
int		flags,
unsigned char	*name,
int		namelen,
int		valuelen,
unsigned char	*value)
static int
list_one_attr(const char *name, const size_t len, void *data,
size_t size, ssize_t *result)
ssize_t
xfs_vn_listxattr(struct dentry *dentry, char *data, size_t size)
