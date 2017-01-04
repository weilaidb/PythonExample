static int hpfs_dir_release(struct inode *inode, struct file *filp)
static loff_t hpfs_dir_lseek(struct file *filp, loff_t off, int whence)
static int hpfs_readdir(struct file *filp, void *dirent, filldir_t filldir)
struct dentry *hpfs_lookup(struct inode *dir, struct dentry *dentry, struct nameidata *nd)
const struct file_operations hpfs_dir_ops =
;
