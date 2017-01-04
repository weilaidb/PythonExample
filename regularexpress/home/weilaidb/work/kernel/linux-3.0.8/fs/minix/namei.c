static int add_nondir(struct dentry *dentry, struct inode *inode)
static struct dentry *minix_lookup(struct inode * dir, struct dentry *dentry, struct nameidata *nd)
static int minix_mknod(struct inode * dir, struct dentry *dentry, int mode, dev_t rdev)
static int minix_create(struct inode * dir, struct dentry *dentry, int mode,
struct nameidata *nd)
static int minix_symlink(struct inode * dir, struct dentry *dentry,
const char * symname)
static int minix_link(struct dentry * old_dentry, struct inode * dir,
struct dentry *dentry)
static int minix_mkdir(struct inode * dir, struct dentry *dentry, int mode)
static int minix_unlink(struct inode * dir, struct dentry *dentry)
static int minix_rmdir(struct inode * dir, struct dentry *dentry)
static int minix_rename(struct inode * old_dir, struct dentry *old_dentry,
struct inode * new_dir, struct dentry *new_dentry)
const struct inode_operations minix_dir_inode_operations = ;
