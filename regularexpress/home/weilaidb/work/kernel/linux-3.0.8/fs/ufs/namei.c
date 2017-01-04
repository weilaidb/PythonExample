static inline int ufs_add_nondir(struct dentry *dentry, struct inode *inode)
static struct dentry *ufs_lookup(struct inode * dir, struct dentry *dentry, struct nameidata *nd)
static int ufs_create (struct inode * dir, struct dentry * dentry, int mode,
struct nameidata *nd)
static int ufs_mknod (struct inode * dir, struct dentry *dentry, int mode, dev_t rdev)
static int ufs_symlink (struct inode * dir, struct dentry * dentry,
const char * symname)
static int ufs_link (struct dentry * old_dentry, struct inode * dir,
struct dentry *dentry)
static int ufs_mkdir(struct inode * dir, struct dentry * dentry, int mode)
static int ufs_unlink(struct inode *dir, struct dentry *dentry)
static int ufs_rmdir (struct inode * dir, struct dentry *dentry)
static int ufs_rename(struct inode *old_dir, struct dentry *old_dentry,
struct inode *new_dir, struct dentry *new_dentry)
const struct inode_operations ufs_dir_inode_operations = ;
