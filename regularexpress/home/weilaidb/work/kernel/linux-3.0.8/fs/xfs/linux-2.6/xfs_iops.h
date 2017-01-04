#define __XFS_IOPS_H__
struct xfs_inode;
extern const struct file_operations xfs_file_operations;
extern const struct file_operations xfs_dir_file_operations;
extern ssize_t xfs_vn_listxattr(struct dentry *, char *data, size_t size);
extern void xfs_setup_inode(struct xfs_inode *);
