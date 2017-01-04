static int jffs2_trusted_getxattr(struct dentry *dentry, const char *name,
void *buffer, size_t size, int type)
static int jffs2_trusted_setxattr(struct dentry *dentry, const char *name,
const void *buffer, size_t size, int flags, int type)
static size_t jffs2_trusted_listxattr(struct dentry *dentry, char *list,
size_t list_size, const char *name, size_t name_len, int type)
const struct xattr_handler jffs2_trusted_xattr_handler = ;
