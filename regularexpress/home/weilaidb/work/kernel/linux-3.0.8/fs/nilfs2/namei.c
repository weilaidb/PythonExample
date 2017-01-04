#define NILFS_FID_SIZE_NON_CONNECTABLE \
(offsetof(struct nilfs_fid, parent_gen) / 4)
#define NILFS_FID_SIZE_CONNECTABLE	(sizeof(struct nilfs_fid) / 4)
static inline int nilfs_add_nondir(struct dentry *dentry, struct inode *inode)
static struct dentry *
nilfs_lookup(struct inode *dir, struct dentry *dentry, struct nameidata *nd)
static int nilfs_create(struct inode *dir, struct dentry *dentry, int mode,
struct nameidata *nd)
static int
nilfs_mknod(struct inode *dir, struct dentry *dentry, int mode, dev_t rdev)
static int nilfs_symlink(struct inode *dir, struct dentry *dentry,
const char *symname)
static int nilfs_link(struct dentry *old_dentry, struct inode *dir,
struct dentry *dentry)
static int nilfs_mkdir(struct inode *dir, struct dentry *dentry, int mode)
static int nilfs_do_unlink(struct inode *dir, struct dentry *dentry)
static int nilfs_unlink(struct inode *dir, struct dentry *dentry)
static int nilfs_rmdir(struct inode *dir, struct dentry *dentry)
static int nilfs_rename(struct inode *old_dir, struct dentry *old_dentry,
struct inode *new_dir,	struct dentry *new_dentry)
static struct dentry *nilfs_get_parent(struct dentry *child)
static struct dentry *nilfs_get_dentry(struct super_block *sb, u64 cno,
u64 ino, u32 gen)
static struct dentry *nilfs_fh_to_dentry(struct super_block *sb, struct fid *fh,
int fh_len, int fh_type)
static struct dentry *nilfs_fh_to_parent(struct super_block *sb, struct fid *fh,
int fh_len, int fh_type)
static int nilfs_encode_fh(struct dentry *dentry, __u32 *fh, int *lenp,
int connectable)
const struct inode_operations nilfs_dir_inode_operations = ;
const struct inode_operations nilfs_special_inode_operations = ;
const struct inode_operations nilfs_symlink_inode_operations = ;
const struct export_operations nilfs_export_ops = ;
