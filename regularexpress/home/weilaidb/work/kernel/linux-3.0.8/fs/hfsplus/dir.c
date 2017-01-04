static inline void hfsplus_instantiate(struct dentry *dentry,
struct inode *inode, u32 cnid)
static struct dentry *hfsplus_lookup(struct inode *dir, struct dentry *dentry,
struct nameidata *nd)
static int hfsplus_readdir(struct file *filp, void *dirent, filldir_t filldir)
static int hfsplus_dir_release(struct inode *inode, struct file *file)
static int hfsplus_link(struct dentry *src_dentry, struct inode *dst_dir,
struct dentry *dst_dentry)
static int hfsplus_unlink(struct inode *dir, struct dentry *dentry)
static int hfsplus_rmdir(struct inode *dir, struct dentry *dentry)
static int hfsplus_symlink(struct inode *dir, struct dentry *dentry,
const char *symname)
static int hfsplus_mknod(struct inode *dir, struct dentry *dentry,
int mode, dev_t rdev)
static int hfsplus_create(struct inode *dir, struct dentry *dentry, int mode,
struct nameidata *nd)
static int hfsplus_mkdir(struct inode *dir, struct dentry *dentry, int mode)
static int hfsplus_rename(struct inode *old_dir, struct dentry *old_dentry,
struct inode *new_dir, struct dentry *new_dentry)
const struct inode_operations hfsplus_dir_inode_operations = ;
const struct file_operations hfsplus_dir_operations = ;
