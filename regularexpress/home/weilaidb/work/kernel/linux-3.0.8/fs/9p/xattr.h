#define FS_9P_XATTR_H
extern const struct xattr_handler *v9fs_xattr_handlers[];
extern struct xattr_handler v9fs_xattr_user_handler;
extern const struct xattr_handler v9fs_xattr_acl_access_handler;
extern const struct xattr_handler v9fs_xattr_acl_default_handler;
extern ssize_t v9fs_fid_xattr_get(struct p9_fid *, const char *,
void *, size_t);
extern ssize_t v9fs_xattr_get(struct dentry *, const char *,
void *, size_t);
extern int v9fs_xattr_set(struct dentry *, const char *,
const void *, size_t, int);
extern ssize_t v9fs_listxattr(struct dentry *, char *, size_t);
