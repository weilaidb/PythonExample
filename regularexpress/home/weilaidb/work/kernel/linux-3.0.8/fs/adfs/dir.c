static DEFINE_RWLOCK(adfs_dir_lock);
static int
adfs_readdir(struct file *filp, void *dirent, filldir_t filldir)
int
adfs_dir_update(struct super_block *sb, struct object_info *obj, int wait)
static int
adfs_match(struct qstr *name, struct object_info *obj)
static int
adfs_dir_lookup_byname(struct inode *inode, struct qstr *name, struct object_info *obj)
const struct file_operations adfs_dir_operations = ;
static int
adfs_hash(const struct dentry *parent, const struct inode *inode,
struct qstr *qstr)
static int
adfs_compare(const struct dentry *parent, const struct inode *pinode,
const struct dentry *dentry, const struct inode *inode,
unsigned int len, const char *str, const struct qstr *name)
const struct dentry_operations adfs_dentry_operations = ;
static struct dentry *
adfs_lookup(struct inode *dir, struct dentry *dentry, struct nameidata *nd)
const struct inode_operations adfs_dir_inode_operations = ;
