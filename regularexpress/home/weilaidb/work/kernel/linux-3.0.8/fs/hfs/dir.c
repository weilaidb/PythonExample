static struct dentry *hfs_lookup(struct inode *dir, struct dentry *dentry,
struct nameidata *nd)
static int hfs_readdir(struct file *filp, void *dirent, filldir_t filldir)
static int hfs_dir_release(struct inode *inode, struct file *file)
static int hfs_create(struct inode *dir, struct dentry *dentry, int mode,
struct nameidata *nd)
static int hfs_mkdir(struct inode *dir, struct dentry *dentry, int mode)
static int hfs_remove(struct inode *dir, struct dentry *dentry)
static int hfs_rename(struct inode *old_dir, struct dentry *old_dentry,
struct inode *new_dir, struct dentry *new_dentry)
const struct file_operations hfs_dir_operations = ;
const struct inode_operations hfs_dir_inode_operations = ;
