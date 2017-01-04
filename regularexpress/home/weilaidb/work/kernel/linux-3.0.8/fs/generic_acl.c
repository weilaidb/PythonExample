static size_t
generic_acl_list(struct dentry *dentry, char *list, size_t list_size,
const char *name, size_t name_len, int type)
static int
generic_acl_get(struct dentry *dentry, const char *name, void *buffer,
size_t size, int type)
static int
generic_acl_set(struct dentry *dentry, const char *name, const void *value,
size_t size, int flags, int type)
int
generic_acl_init(struct inode *inode, struct inode *dir)
int
generic_acl_chmod(struct inode *inode)
int
generic_check_acl(struct inode *inode, int mask, unsigned int flags)
const struct xattr_handler generic_acl_access_handler = ;
const struct xattr_handler generic_acl_default_handler = ;
