#define OCFS2_ACL_H
struct ocfs2_acl_entry ;
extern int ocfs2_check_acl(struct inode *, int, unsigned int);
extern int ocfs2_acl_chmod(struct inode *);
extern int ocfs2_init_acl(handle_t *, struct inode *, struct inode *,
struct buffer_head *, struct buffer_head *,
struct ocfs2_alloc_context *,
struct ocfs2_alloc_context *);
