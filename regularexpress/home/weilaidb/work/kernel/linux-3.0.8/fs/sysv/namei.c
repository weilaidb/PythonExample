static int add_nondir(struct dentry *dentry, struct inode *inode)
static int sysv_hash(const struct dentry *dentry, const struct inode *inode,
struct qstr *qstr)
const struct dentry_operations sysv_dentry_operations = ;
static struct dentry *sysv_lookup(struct inode * dir, struct dentry * dentry, struct nameidata *nd)
static int sysv_mknod(struct inode * dir, struct dentry * dentry, int mode, dev_t rdev)
static int sysv_create(struct inode * dir, struct dentry * dentry, int mode, struct nameidata *nd)
static int sysv_symlink(struct inode * dir, struct dentry * dentry,
const char * symname)
static int sysv_link(struct dentry * old_dentry, struct inode * dir,
struct dentry * dentry)
static int sysv_mkdir(struct inode * dir, struct dentry *dentry, int mode)
static int sysv_unlink(struct inode * dir, struct dentry * dentry)
static int sysv_rmdir(struct inode * dir, struct dentry * dentry)
static int sysv_rename(struct inode * old_dir, struct dentry * old_dentry,
struct inode * new_dir, struct dentry * new_dentry)
const struct inode_operations sysv_dir_inode_operations = ;
