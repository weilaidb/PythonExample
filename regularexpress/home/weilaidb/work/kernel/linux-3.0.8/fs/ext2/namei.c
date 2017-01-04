static inline int ext2_add_nondir(struct dentry *dentry, struct inode *inode)
static struct dentry *ext2_lookup(struct inode * dir, struct dentry *dentry, struct nameidata *nd)
struct dentry *ext2_get_parent(struct dentry *child)
static int ext2_create (struct inode * dir, struct dentry * dentry, int mode, struct nameidata *nd)
static int ext2_mknod (struct inode * dir, struct dentry *dentry, int mode, dev_t rdev)
static int ext2_symlink (struct inode * dir, struct dentry * dentry,
const char * symname)
static int ext2_link (struct dentry * old_dentry, struct inode * dir,
struct dentry *dentry)
static int ext2_mkdir(struct inode * dir, struct dentry * dentry, int mode)
static int ext2_unlink(struct inode * dir, struct dentry *dentry)
static int ext2_rmdir (struct inode * dir, struct dentry *dentry)
static int ext2_rename (struct inode * old_dir, struct dentry * old_dentry,
struct inode * new_dir,	struct dentry * new_dentry )
const struct inode_operations ext2_dir_inode_operations = ;
const struct inode_operations ext2_special_inode_operations = ;
