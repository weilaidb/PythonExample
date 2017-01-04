DEFINE_PER_CPU(struct xfsstats, xfsstats);
static int xfs_stat_proc_show(struct seq_file *m, void *v)
static int xfs_stat_proc_open(struct inode *inode, struct file *file)
static const struct file_operations xfs_stat_proc_fops = ;
int
xfs_init_procfs(void)
void
xfs_cleanup_procfs(void)
