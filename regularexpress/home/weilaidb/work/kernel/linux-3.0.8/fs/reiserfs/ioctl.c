long reiserfs_ioctl(struct file *filp, unsigned int cmd, unsigned long arg)
long reiserfs_compat_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
int reiserfs_commit_write(struct file *f, struct page *page,
unsigned from, unsigned to);
int reiserfs_unpack(struct inode *inode, struct file *filp)
