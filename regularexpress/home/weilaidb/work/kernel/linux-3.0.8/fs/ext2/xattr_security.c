static size_t
ext2_xattr_security_list(struct dentry *dentry, char *list, size_t list_size,
const char *name, size_t name_len, int type)
static int
ext2_xattr_security_get(struct dentry *dentry, const char *name,
void *buffer, size_t size, int type)
static int
ext2_xattr_security_set(struct dentry *dentry, const char *name,
const void *value, size_t size, int flags, int type)
int
ext2_init_security(struct inode *inode, struct inode *dir,
const struct qstr *qstr)
const struct xattr_handler ext2_xattr_security_handler = ;
