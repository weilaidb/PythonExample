struct procfs_params_zr36067 ;
static const struct procfs_params_zr36067 zr67[] = ;
static void
setparam (struct zoran *zr,
char         *name,
char         *sval)
static int zoran_show(struct seq_file *p, void *v)
static int zoran_open(struct inode *inode, struct file *file)
static ssize_t zoran_write(struct file *file, const char __user *buffer,
size_t count, loff_t *ppos)
static const struct file_operations zoran_operations = ;
int
zoran_proc_init (struct zoran *zr)
void
zoran_proc_cleanup (struct zoran *zr)
