static int do_udf_readdir(struct inode *dir, struct file *filp,
filldir_t filldir, void *dirent)
static int udf_readdir(struct file *filp, void *dirent, filldir_t filldir)
const struct file_operations udf_dir_operations = ;
