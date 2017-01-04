static inline int exofs_add_nondir(struct dentry *dentry, struct inode *inode)
static struct dentry *exofs_lookup(struct inode *dir, struct dentry *dentry,
struct nameidata *nd)
static int exofs_create(struct inode *dir, struct dentry *dentry, int mode,
struct nameidata *nd)
static int exofs_mknod(struct inode *dir, struct dentry *dentry, int mode,
dev_t rdev)
static int exofs_symlink(struct inode *dir, struct dentry *dentry,
const char *symname)
static int exofs_link(struct dentry *old_dentry, struct inode *dir,
struct dentry *dentry)
static int exofs_mkdir(struct inode *dir, struct dentry *dentry, int mode)
static int exofs_unlink(struct inode *dir, struct dentry *dentry)
static int exofs_rmdir(struct inode *dir, struct dentry *dentry)
static int exofs_rename(struct inode *old_dir, struct dentry *old_dentry,
struct inode *new_dir, struct dentry *new_dentry)
const struct inode_operations exofs_dir_inode_operations = ;
const struct inode_operations exofs_special_inode_operations = ;
