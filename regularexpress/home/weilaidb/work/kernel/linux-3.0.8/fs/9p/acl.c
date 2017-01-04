static struct posix_acl *__v9fs_get_acl(struct p9_fid *fid, char *name)
int v9fs_get_acl(struct inode *inode, struct p9_fid *fid)
static struct posix_acl *v9fs_get_cached_acl(struct inode *inode, int type)
int v9fs_check_acl(struct inode *inode, int mask, unsigned int flags)
static int v9fs_set_acl(struct dentry *dentry, int type, struct posix_acl *acl)
int v9fs_acl_chmod(struct dentry *dentry)
int v9fs_set_create_acl(struct dentry *dentry,
struct posix_acl **dpacl, struct posix_acl **pacl)
int v9fs_acl_mode(struct inode *dir, mode_t *modep,
struct posix_acl **dpacl, struct posix_acl **pacl)
static int v9fs_remote_get_acl(struct dentry *dentry, const char *name,
void *buffer, size_t size, int type)
static int v9fs_xattr_get_acl(struct dentry *dentry, const char *name,
void *buffer, size_t size, int type)
static int v9fs_remote_set_acl(struct dentry *dentry, const char *name,
const void *value, size_t size,
int flags, int type)
static int v9fs_xattr_set_acl(struct dentry *dentry, const char *name,
const void *value, size_t size,
int flags, int type)
const struct xattr_handler v9fs_xattr_acl_access_handler = ;
const struct xattr_handler v9fs_xattr_acl_default_handler = ;
