static int ocfs2_do_flock(struct file *file, struct inode *inode,
int cmd, struct file_lock *fl)
static int ocfs2_do_funlock(struct file *file, int cmd, struct file_lock *fl)
int ocfs2_flock(struct file *file, int cmd, struct file_lock *fl)
int ocfs2_lock(struct file *file, int cmd, struct file_lock *fl)
