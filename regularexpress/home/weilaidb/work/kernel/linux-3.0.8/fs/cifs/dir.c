static void
renew_parental_timestamps(struct dentry *direntry)
char *
build_path_from_dentry(struct dentry *direntry)
int
cifs_create(struct inode *inode, struct dentry *direntry, int mode,
struct nameidata *nd)
int cifs_mknod(struct inode *inode, struct dentry *direntry, int mode,
dev_t device_number)
struct dentry *
cifs_lookup(struct inode *parent_dir_inode, struct dentry *direntry,
struct nameidata *nd)
static int
cifs_d_revalidate(struct dentry *direntry, struct nameidata *nd)
const struct dentry_operations cifs_dentry_ops = ;
static int cifs_ci_hash(const struct dentry *dentry, const struct inode *inode,
struct qstr *q)
static int cifs_ci_compare(const struct dentry *parent,
const struct inode *pinode,
const struct dentry *dentry, const struct inode *inode,
unsigned int len, const char *str, const struct qstr *name)
const struct dentry_operations cifs_ci_dentry_ops = ;
