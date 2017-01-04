static int write_dir(struct inode *dir, struct logfs_disk_dentry *dd,
loff_t pos)
static int write_inode(struct inode *inode)
static s64 dir_seek_data(struct inode *inode, s64 pos)
static int beyond_eof(struct inode *inode, loff_t bix)
static u32 hash_32(const char *s, int len, u32 seed)
static pgoff_t hash_index(u32 hash, int round)
static struct page *logfs_get_dd_page(struct inode *dir, struct dentry *dentry)
static int logfs_remove_inode(struct inode *inode)
static void abort_transaction(struct inode *inode, struct logfs_transaction *ta)
static int logfs_unlink(struct inode *dir, struct dentry *dentry)
static inline int logfs_empty_dir(struct inode *dir)
static int logfs_rmdir(struct inode *dir, struct dentry *dentry)
#define IMPLICIT_NODES 2
static int __logfs_readdir(struct file *file, void *buf, filldir_t filldir)
static int logfs_readdir(struct file *file, void *buf, filldir_t filldir)
static void logfs_set_name(struct logfs_disk_dentry *dd, struct qstr *name)
static struct dentry *logfs_lookup(struct inode *dir, struct dentry *dentry,
struct nameidata *nd)
static void grow_dir(struct inode *dir, loff_t index)
static int logfs_write_dir(struct inode *dir, struct dentry *dentry,
struct inode *inode)
static int __logfs_create(struct inode *dir, struct dentry *dentry,
struct inode *inode, const char *dest, long destlen)
static int logfs_mkdir(struct inode *dir, struct dentry *dentry, int mode)
static int logfs_create(struct inode *dir, struct dentry *dentry, int mode,
struct nameidata *nd)
static int logfs_mknod(struct inode *dir, struct dentry *dentry, int mode,
dev_t rdev)
static int logfs_symlink(struct inode *dir, struct dentry *dentry,
const char *target)
static int logfs_link(struct dentry *old_dentry, struct inode *dir,
struct dentry *dentry)
static int logfs_get_dd(struct inode *dir, struct dentry *dentry,
struct logfs_disk_dentry *dd, loff_t *pos)
static int logfs_delete_dd(struct inode *dir, loff_t pos)
static int logfs_rename_cross(struct inode *old_dir, struct dentry *old_dentry,
struct inode *new_dir, struct dentry *new_dentry)
static int logfs_replace_inode(struct inode *dir, struct dentry *dentry,
struct logfs_disk_dentry *dd, struct inode *inode)
static int logfs_rename_target(struct inode *old_dir, struct dentry *old_dentry,
struct inode *new_dir, struct dentry *new_dentry)
static int logfs_rename(struct inode *old_dir, struct dentry *old_dentry,
struct inode *new_dir, struct dentry *new_dentry)
int logfs_replay_journal(struct super_block *sb)
const struct inode_operations logfs_symlink_iops = ;
const struct inode_operations logfs_dir_iops = ;
const struct file_operations logfs_dir_fops = ;
