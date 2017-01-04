static int v9fs_xattr_user_get(struct dentry *dentry, const char *name,
void *buffer, size_t size, int type)
static int v9fs_xattr_user_set(struct dentry *dentry, const char *name,
const void *value, size_t size, int flags, int type)
struct xattr_handler v9fs_xattr_user_handler = ;
