struct xqmstats xqmstats;
static int xqm_proc_show(struct seq_file *m, void *v)
static int xqm_proc_open(struct inode *inode, struct file *file)
static const struct file_operations xqm_proc_fops = ;
static int xqmstat_proc_show(struct seq_file *m, void *v)
static int xqmstat_proc_open(struct inode *inode, struct file *file)
static const struct file_operations xqmstat_proc_fops = ;
void
xfs_qm_init_procfs(void)
void
xfs_qm_cleanup_procfs(void)
