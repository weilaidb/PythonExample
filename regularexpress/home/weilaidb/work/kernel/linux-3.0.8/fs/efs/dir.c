static int efs_readdir(struct file *, void *, filldir_t);
const struct file_operations efs_dir_operations = ;
const struct inode_operations efs_dir_inode_operations = ;
static int efs_readdir(struct file *filp, void *dirent, filldir_t filldir)
