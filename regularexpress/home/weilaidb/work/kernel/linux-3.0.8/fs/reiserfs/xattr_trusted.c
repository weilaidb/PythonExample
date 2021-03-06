static int
trusted_get(struct dentry *dentry, const char *name, void *buffer, size_t size,
int handler_flags)
static int
trusted_set(struct dentry *dentry, const char *name, const void *buffer,
size_t size, int flags, int handler_flags)
static size_t trusted_list(struct dentry *dentry, char *list, size_t list_size,
const char *name, size_t name_len, int handler_flags)
const struct xattr_handler reiserfs_xattr_trusted_handler = ;
