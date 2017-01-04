static size_t
ext3_xattr_trusted_list(struct dentry *dentry, char *list, size_t list_size,
const char *name, size_t name_len, int type)
static int
ext3_xattr_trusted_get(struct dentry *dentry, const char *name,
void *buffer, size_t size, int type)
static int
ext3_xattr_trusted_set(struct dentry *dentry, const char *name,
const void *value, size_t size, int flags, int type)
const struct xattr_handler ext3_xattr_trusted_handler = ;
