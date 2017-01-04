static struct dentry *dbfs_dir;
static struct hypfs_dbfs_data *hypfs_dbfs_data_alloc(struct hypfs_dbfs_file *f)
static void hypfs_dbfs_data_free(struct kref *kref)
static void data_free_delayed(struct work_struct *work)
static ssize_t dbfs_read(struct file *file, char __user *buf,
size_t size, loff_t *ppos)
static const struct file_operations dbfs_ops = ;
int hypfs_dbfs_create_file(struct hypfs_dbfs_file *df)
void hypfs_dbfs_remove_file(struct hypfs_dbfs_file *df)
int hypfs_dbfs_init(void)
void hypfs_dbfs_exit(void)
