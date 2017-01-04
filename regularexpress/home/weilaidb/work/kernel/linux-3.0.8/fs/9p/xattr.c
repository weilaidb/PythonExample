ssize_t v9fs_fid_xattr_get(struct p9_fid *fid, const char *name,
void *buffer, size_t buffer_size)
ssize_t v9fs_xattr_get(struct dentry *dentry, const char *name,
void *buffer, size_t buffer_size)
int v9fs_xattr_set(struct dentry *dentry, const char *name,
const void *value, size_t value_len, int flags)
ssize_t v9fs_listxattr(struct dentry *dentry, char *buffer, size_t buffer_size)
const struct xattr_handler *v9fs_xattr_handlers[] = ;
