static const char *gfs2_acl_name(int type)
static struct posix_acl *gfs2_acl_get(struct gfs2_inode *ip, int type)
int gfs2_check_acl(struct inode *inode, int mask, unsigned int flags)
static int gfs2_set_mode(struct inode *inode, mode_t mode)
static int gfs2_acl_set(struct inode *inode, int type, struct posix_acl *acl)
int gfs2_acl_create(struct gfs2_inode *dip, struct inode *inode)
int gfs2_acl_chmod(struct gfs2_inode *ip, struct iattr *attr)
static int gfs2_acl_type(const char *name)
static int gfs2_xattr_system_get(struct dentry *dentry, const char *name,
void *buffer, size_t size, int xtype)
static int gfs2_xattr_system_set(struct dentry *dentry, const char *name,
const void *value, size_t size, int flags,
int xtype)
const struct xattr_handler gfs2_xattr_system_handler = ;
