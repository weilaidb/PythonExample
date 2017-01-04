int jffs2_init_security(struct inode *inode, struct inode *dir,
const struct qstr *qstr)
static int jffs2_security_getxattr(struct dentry *dentry, const char *name,
void *buffer, size_t size, int type)
static int jffs2_security_setxattr(struct dentry *dentry, const char *name,
const void *buffer, size_t size, int flags, int type)
static size_t jffs2_security_listxattr(struct dentry *dentry, char *list,
size_t list_size, const char *name, size_t name_len, int type)
const struct xattr_handler jffs2_security_xattr_handler = ;
