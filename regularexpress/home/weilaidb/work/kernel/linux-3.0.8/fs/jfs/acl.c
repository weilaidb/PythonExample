static struct posix_acl *jfs_get_acl(struct inode *inode, int type)
static int jfs_set_acl(tid_t tid, struct inode *inode, int type,
struct posix_acl *acl)
int jfs_check_acl(struct inode *inode, int mask, unsigned int flags)
int jfs_init_acl(tid_t tid, struct inode *inode, struct inode *dir)
int jfs_acl_chmod(struct inode *inode)
