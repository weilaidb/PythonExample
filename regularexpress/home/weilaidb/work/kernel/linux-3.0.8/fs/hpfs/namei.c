static int hpfs_mkdir(struct inode *dir, struct dentry *dentry, int mode)
static int hpfs_create(struct inode *dir, struct dentry *dentry, int mode, struct nameidata *nd)
static int hpfs_mknod(struct inode *dir, struct dentry *dentry, int mode, dev_t rdev)
static int hpfs_symlink(struct inode *dir, struct dentry *dentry, const char *symlink)
static int hpfs_unlink(struct inode *dir, struct dentry *dentry)
static int hpfs_rmdir(struct inode *dir, struct dentry *dentry)
static int hpfs_symlink_readpage(struct file *file, struct page *page)
const struct address_space_operations hpfs_symlink_aops = ;
static int hpfs_rename(struct inode *old_dir, struct dentry *old_dentry,
struct inode *new_dir, struct dentry *new_dentry)
const struct inode_operations hpfs_dir_iops =
;
