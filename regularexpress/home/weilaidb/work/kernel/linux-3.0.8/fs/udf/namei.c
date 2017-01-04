enum ;
static inline int udf_match(int len1, const unsigned char *name1, int len2,
const unsigned char *name2)
int udf_write_fi(struct inode *inode, struct fileIdentDesc *cfi,
struct fileIdentDesc *sfi, struct udf_fileident_bh *fibh,
uint8_t *impuse, uint8_t *fileident)
static struct fileIdentDesc *udf_find_entry(struct inode *dir,
const struct qstr *child,
struct udf_fileident_bh *fibh,
struct fileIdentDesc *cfi)
static struct dentry *udf_lookup(struct inode *dir, struct dentry *dentry,
struct nameidata *nd)
static struct fileIdentDesc *udf_add_entry(struct inode *dir,
struct dentry *dentry,
struct udf_fileident_bh *fibh,
struct fileIdentDesc *cfi, int *err)
static int udf_delete_entry(struct inode *inode, struct fileIdentDesc *fi,
struct udf_fileident_bh *fibh,
struct fileIdentDesc *cfi)
static int udf_create(struct inode *dir, struct dentry *dentry, int mode,
struct nameidata *nd)
static int udf_mknod(struct inode *dir, struct dentry *dentry, int mode,
dev_t rdev)
static int udf_mkdir(struct inode *dir, struct dentry *dentry, int mode)
static int empty_dir(struct inode *dir)
static int udf_rmdir(struct inode *dir, struct dentry *dentry)
static int udf_unlink(struct inode *dir, struct dentry *dentry)
static int udf_symlink(struct inode *dir, struct dentry *dentry,
const char *symname)
static int udf_link(struct dentry *old_dentry, struct inode *dir,
struct dentry *dentry)
static int udf_rename(struct inode *old_dir, struct dentry *old_dentry,
struct inode *new_dir, struct dentry *new_dentry)
static struct dentry *udf_get_parent(struct dentry *child)
static struct dentry *udf_nfs_get_inode(struct super_block *sb, u32 block,
u16 partref, __u32 generation)
static struct dentry *udf_fh_to_dentry(struct super_block *sb,
struct fid *fid, int fh_len, int fh_type)
static struct dentry *udf_fh_to_parent(struct super_block *sb,
struct fid *fid, int fh_len, int fh_type)
static int udf_encode_fh(struct dentry *de, __u32 *fh, int *lenp,
int connectable)
const struct export_operations udf_export_ops = ;
const struct inode_operations udf_dir_inode_operations = ;
const struct inode_operations udf_symlink_inode_operations = ;
