#define __ACL_DOT_H__
#define GFS2_POSIX_ACL_ACCESS		"posix_acl_access"
#define GFS2_POSIX_ACL_DEFAULT		"posix_acl_default"
#define GFS2_ACL_MAX_ENTRIES		25
extern int gfs2_check_acl(struct inode *inode, int mask, unsigned int);
extern int gfs2_acl_create(struct gfs2_inode *dip, struct inode *inode);
extern int gfs2_acl_chmod(struct gfs2_inode *ip, struct iattr *attr);
extern const struct xattr_handler gfs2_xattr_system_handler;
