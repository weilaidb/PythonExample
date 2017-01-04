static struct dentry *qla2x00_dfs_root;
static atomic_t qla2x00_dfs_root_count;
static int
qla2x00_dfs_fce_show(struct seq_file *s, void *unused)
static int
qla2x00_dfs_fce_open(struct inode *inode, struct file *file)
static int
qla2x00_dfs_fce_release(struct inode *inode, struct file *file)
static const struct file_operations dfs_fce_ops = ;
int
qla2x00_dfs_setup(scsi_qla_host_t *vha)
int
qla2x00_dfs_remove(scsi_qla_host_t *vha)
