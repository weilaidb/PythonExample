int
minstrel_stats_open(struct inode *inode, struct file *file)
ssize_t
minstrel_stats_read(struct file *file, char __user *buf, size_t len, loff_t *ppos)
int
minstrel_stats_release(struct inode *inode, struct file *file)
static const struct file_operations minstrel_stat_fops = ;
void
minstrel_add_sta_debugfs(void *priv, void *priv_sta, struct dentry *dir)
void
minstrel_remove_sta_debugfs(void *priv, void *priv_sta)
