#define FS_9P_ACL_H
extern int v9fs_get_acl(struct inode *, struct p9_fid *);
extern int v9fs_check_acl(struct inode *inode, int mask, unsigned int flags);
extern int v9fs_acl_chmod(struct dentry *);
extern int v9fs_set_create_acl(struct dentry *,
struct posix_acl **, struct posix_acl **);
extern int v9fs_acl_mode(struct inode *dir, mode_t *modep,
struct posix_acl **dpacl, struct posix_acl **pacl);
#define v9fs_check_acl NULL
static inline int v9fs_get_acl(struct inode *inode, struct p9_fid *fid)
static inline int v9fs_acl_chmod(struct dentry *dentry)
static inline int v9fs_set_create_acl(struct dentry *dentry,
struct posix_acl **dpacl,
struct posix_acl **pacl)
static inline int v9fs_acl_mode(struct inode *dir, mode_t *modep,
struct posix_acl **dpacl,
struct posix_acl **pacl)
