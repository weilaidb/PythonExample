int inode_change_ok(const struct inode *inode, struct iattr *attr)
EXPORT_SYMBOL(inode_change_ok);
int inode_newsize_ok(const struct inode *inode, loff_t offset)
EXPORT_SYMBOL(inode_newsize_ok);
void setattr_copy(struct inode *inode, const struct iattr *attr)
EXPORT_SYMBOL(setattr_copy);
int notify_change(struct dentry * dentry, struct iattr * attr)
EXPORT_SYMBOL(notify_change);
