const struct dentry_operations jfs_ci_dentry_operations;
static s64 commitZeroLink(tid_t, struct inode *);
static inline void free_ea_wmap(struct inode *inode)
static int jfs_create(struct inode *dip, struct dentry *dentry, int mode,
struct nameidata *nd)
static int jfs_mkdir(struct inode *dip, struct dentry *dentry, int mode)
static int jfs_rmdir(struct inode *dip, struct dentry *dentry)
static int jfs_unlink(struct inode *dip, struct dentry *dentry)
static s64 commitZeroLink(tid_t tid, struct inode *ip)
void jfs_free_zero_link(struct inode *ip)
static int jfs_link(struct dentry *old_dentry,
struct inode *dir, struct dentry *dentry)
static int jfs_symlink(struct inode *dip, struct dentry *dentry,
const char *name)
static int jfs_rename(struct inode *old_dir, struct dentry *old_dentry,
struct inode *new_dir, struct dentry *new_dentry)
static int jfs_mknod(struct inode *dir, struct dentry *dentry,
int mode, dev_t rdev)
static struct dentry *jfs_lookup(struct inode *dip, struct dentry *dentry, struct nameidata *nd)
static struct inode *jfs_nfs_get_inode(struct super_block *sb,
u64 ino, u32 generation)
struct dentry *jfs_fh_to_dentry(struct super_block *sb, struct fid *fid,
int fh_len, int fh_type)
struct dentry *jfs_fh_to_parent(struct super_block *sb, struct fid *fid,
int fh_len, int fh_type)
struct dentry *jfs_get_parent(struct dentry *dentry)
const struct inode_operations jfs_dir_inode_operations = ;
const struct file_operations jfs_dir_operations = ;
static int jfs_ci_hash(const struct dentry *dir, const struct inode *inode,
struct qstr *this)
static int jfs_ci_compare(const struct dentry *parent,
const struct inode *pinode,
const struct dentry *dentry, const struct inode *inode,
unsigned int len, const char *str, const struct qstr *name)
static int jfs_ci_revalidate(struct dentry *dentry, struct nameidata *nd)
const struct dentry_operations jfs_ci_dentry_operations =
;
