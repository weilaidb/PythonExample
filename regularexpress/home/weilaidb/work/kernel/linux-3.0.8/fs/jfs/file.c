int jfs_fsync(struct file *file, int datasync)
static int jfs_open(struct inode *inode, struct file *file)
static int jfs_release(struct inode *inode, struct file *file)
int jfs_setattr(struct dentry *dentry, struct iattr *iattr)
const struct inode_operations jfs_file_inode_operations = ;
const struct file_operations jfs_file_operations = ;
