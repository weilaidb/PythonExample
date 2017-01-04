struct jffs2_acl_entry ;
struct jffs2_acl_entry_short ;
struct jffs2_acl_header ;
extern int jffs2_check_acl(struct inode *, int, unsigned int);
extern int jffs2_acl_chmod(struct inode *);
extern int jffs2_init_acl_pre(struct inode *, struct inode *, int *);
extern int jffs2_init_acl_post(struct inode *);
extern const struct xattr_handler jffs2_acl_access_xattr_handler;
extern const struct xattr_handler jffs2_acl_default_xattr_handler;
#define jffs2_check_acl				(NULL)
#define jffs2_acl_chmod(inode)			(0)
#define jffs2_init_acl_pre(dir_i,inode,mode)	(0)
#define jffs2_init_acl_post(inode)		(0)
