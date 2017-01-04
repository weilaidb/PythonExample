#define __XFS_ACL_H__
struct inode;
struct posix_acl;
struct xfs_inode;
#define XFS_ACL_MAX_ENTRIES 25
#define XFS_ACL_NOT_PRESENT (-1)
struct xfs_acl ;
#define SGI_ACL_FILE		(unsigned char *)"SGI_ACL_FILE"
#define SGI_ACL_DEFAULT		(unsigned char *)"SGI_ACL_DEFAULT"
#define SGI_ACL_FILE_SIZE	(sizeof(SGI_ACL_FILE)-1)
#define SGI_ACL_DEFAULT_SIZE	(sizeof(SGI_ACL_DEFAULT)-1)
extern int xfs_check_acl(struct inode *inode, int mask, unsigned int flags);
extern struct posix_acl *xfs_get_acl(struct inode *inode, int type);
extern int xfs_inherit_acl(struct inode *inode, struct posix_acl *default_acl);
extern int xfs_acl_chmod(struct inode *inode);
extern int posix_acl_access_exists(struct inode *inode);
extern int posix_acl_default_exists(struct inode *inode);
extern const struct xattr_handler xfs_xattr_acl_access_handler;
extern const struct xattr_handler xfs_xattr_acl_default_handler;
# define xfs_check_acl					NULL
# define xfs_get_acl(inode, type)			NULL
# define xfs_inherit_acl(inode, default_acl)		0
# define xfs_acl_chmod(inode)				0
# define posix_acl_access_exists(inode)			0
# define posix_acl_default_exists(inode)		0
