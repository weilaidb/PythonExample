static int hpfs_hash_dentry(const struct dentry *dentry, const struct inode *inode,
struct qstr *qstr)
static int hpfs_compare_dentry(const struct dentry *parent,
const struct inode *pinode,
const struct dentry *dentry, const struct inode *inode,
unsigned int len, const char *str, const struct qstr *name)
const struct dentry_operations hpfs_dentry_operations = ;
