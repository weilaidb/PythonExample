static int exofs_release_file(struct inode *inode, struct file *filp)
static int exofs_file_fsync(struct file *filp, int datasync)
static int exofs_flush(struct file *file, fl_owner_t id)
const struct file_operations exofs_file_operations = ;
const struct inode_operations exofs_file_inode_operations = ;
