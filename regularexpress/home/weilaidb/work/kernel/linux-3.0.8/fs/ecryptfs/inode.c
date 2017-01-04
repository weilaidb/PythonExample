static struct dentry *lock_parent(struct dentry *dentry)
static void unlock_dir(struct dentry *dir)
static int ecryptfs_inode_test(struct inode *inode, void *lower_inode)
static int ecryptfs_inode_set(struct inode *inode, void *opaque)
static struct inode *__ecryptfs_get_inode(struct inode *lower_inode,
struct super_block *sb)
struct inode *ecryptfs_get_inode(struct inode *lower_inode,
struct super_block *sb)
static int ecryptfs_interpose(struct dentry *lower_dentry,
struct dentry *dentry, struct super_block *sb)
static int
ecryptfs_create_underlying_file(struct inode *lower_dir_inode,
struct dentry *dentry, int mode,
struct nameidata *nd)
static int
ecryptfs_do_create(struct inode *directory_inode,
struct dentry *ecryptfs_dentry, int mode,
struct nameidata *nd)
static int ecryptfs_initialize_file(struct dentry *ecryptfs_dentry)
static int
ecryptfs_create(struct inode *directory_inode, struct dentry *ecryptfs_dentry,
int mode, struct nameidata *nd)
static int ecryptfs_i_size_read(struct dentry *dentry, struct inode *inode)
static int ecryptfs_lookup_interpose(struct dentry *dentry,
struct dentry *lower_dentry,
struct inode *dir_inode)
static struct dentry *ecryptfs_lookup(struct inode *ecryptfs_dir_inode,
struct dentry *ecryptfs_dentry,
struct nameidata *ecryptfs_nd)
static int ecryptfs_link(struct dentry *old_dentry, struct inode *dir,
struct dentry *new_dentry)
static int ecryptfs_unlink(struct inode *dir, struct dentry *dentry)
static int ecryptfs_symlink(struct inode *dir, struct dentry *dentry,
const char *symname)
static int ecryptfs_mkdir(struct inode *dir, struct dentry *dentry, int mode)
static int ecryptfs_rmdir(struct inode *dir, struct dentry *dentry)
static int
ecryptfs_mknod(struct inode *dir, struct dentry *dentry, int mode, dev_t dev)
static int
ecryptfs_rename(struct inode *old_dir, struct dentry *old_dentry,
struct inode *new_dir, struct dentry *new_dentry)
static int ecryptfs_readlink_lower(struct dentry *dentry, char **buf,
size_t *bufsiz)
static int
ecryptfs_readlink(struct dentry *dentry, char __user *buf, int bufsiz)
static void *ecryptfs_follow_link(struct dentry *dentry, struct nameidata *nd)
static void
ecryptfs_put_link(struct dentry *dentry, struct nameidata *nd, void *ptr)
static loff_t
upper_size_to_lower_size(struct ecryptfs_crypt_stat *crypt_stat,
loff_t upper_size)
static int truncate_upper(struct dentry *dentry, struct iattr *ia,
struct iattr *lower_ia)
int ecryptfs_truncate(struct dentry *dentry, loff_t new_length)
static int
ecryptfs_permission(struct inode *inode, int mask, unsigned int flags)
static int ecryptfs_setattr(struct dentry *dentry, struct iattr *ia)
int ecryptfs_getattr_link(struct vfsmount *mnt, struct dentry *dentry,
struct kstat *stat)
int ecryptfs_getattr(struct vfsmount *mnt, struct dentry *dentry,
struct kstat *stat)
int
ecryptfs_setxattr(struct dentry *dentry, const char *name, const void *value,
size_t size, int flags)
ssize_t
ecryptfs_getxattr_lower(struct dentry *lower_dentry, const char *name,
void *value, size_t size)
static ssize_t
ecryptfs_getxattr(struct dentry *dentry, const char *name, void *value,
size_t size)
static ssize_t
ecryptfs_listxattr(struct dentry *dentry, char *list, size_t size)
static int ecryptfs_removexattr(struct dentry *dentry, const char *name)
const struct inode_operations ecryptfs_symlink_iops = ;
const struct inode_operations ecryptfs_dir_iops = ;
const struct inode_operations ecryptfs_main_iops = ;
