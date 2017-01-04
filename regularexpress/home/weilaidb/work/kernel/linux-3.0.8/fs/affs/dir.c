static int affs_readdir(struct file *, void *, filldir_t);
const struct file_operations affs_dir_operations = ;
const struct inode_operations affs_dir_inode_operations = ;
static int
affs_readdir(struct file *filp, void *dirent, filldir_t filldir)
