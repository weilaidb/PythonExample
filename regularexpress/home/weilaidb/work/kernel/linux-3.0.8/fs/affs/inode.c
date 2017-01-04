extern const struct inode_operations affs_symlink_inode_operations;
extern struct timezone sys_tz;
struct inode *affs_iget(struct super_block *sb, unsigned long ino)
int
affs_write_inode(struct inode *inode, struct writeback_control *wbc)
int
affs_notify_change(struct dentry *dentry, struct iattr *attr)
void
affs_evict_inode(struct inode *inode)
struct inode *
affs_new_inode(struct inode *dir)
int
affs_add_entry(struct inode *dir, struct inode *inode, struct dentry *dentry, s32 type)
