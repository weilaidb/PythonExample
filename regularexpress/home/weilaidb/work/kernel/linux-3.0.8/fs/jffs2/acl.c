static size_t jffs2_acl_size(int count)
static int jffs2_acl_count(size_t size)
static struct posix_acl *jffs2_acl_from_medium(void *value, size_t size)
static void *jffs2_acl_to_medium(const struct posix_acl *acl, size_t *size)
static struct posix_acl *jffs2_get_acl(struct inode *inode, int type)
static int __jffs2_set_acl(struct inode *inode, int xprefix, struct posix_acl *acl)
static int jffs2_set_acl(struct inode *inode, int type, struct posix_acl *acl)
int jffs2_check_acl(struct inode *inode, int mask, unsigned int flags)
int jffs2_init_acl_pre(struct inode *dir_i, struct inode *inode, int *i_mode)
int jffs2_init_acl_post(struct inode *inode)
int jffs2_acl_chmod(struct inode *inode)
static size_t jffs2_acl_access_listxattr(struct dentry *dentry, char *list,
size_t list_size, const char *name, size_t name_len, int type)
static size_t jffs2_acl_default_listxattr(struct dentry *dentry, char *list,
size_t list_size, const char *name, size_t name_len, int type)
static int jffs2_acl_getxattr(struct dentry *dentry, const char *name,
void *buffer, size_t size, int type)
static int jffs2_acl_setxattr(struct dentry *dentry, const char *name,
const void *value, size_t size, int flags, int type)
const struct xattr_handler jffs2_acl_access_xattr_handler = ;
const struct xattr_handler jffs2_acl_default_xattr_handler = ;
