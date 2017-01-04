static unsigned char caseorder[256] = ;
int hfs_hash_dentry(const struct dentry *dentry, const struct inode *inode,
struct qstr *this)
int hfs_strcmp(const unsigned char *s1, unsigned int len1,
const unsigned char *s2, unsigned int len2)
int hfs_compare_dentry(const struct dentry *parent, const struct inode *pinode,
const struct dentry *dentry, const struct inode *inode,
unsigned int len, const char *str, const struct qstr *name)
