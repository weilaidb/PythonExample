#define _H_JFS_ACL
int jfs_check_acl(struct inode *, int, unsigned int flags);
int jfs_init_acl(tid_t, struct inode *, struct inode *);
int jfs_acl_chmod(struct inode *inode);
static inline int jfs_init_acl(tid_t tid, struct inode *inode,
struct inode *dir)
static inline int jfs_acl_chmod(struct inode *inode)
