#define LOAD_INT(x) ((x) >> FSHIFT)
#define LOAD_FRAC(x) LOAD_INT(((x) & (FIXED_1-1)) * 100)
static int loadavg_proc_show(struct seq_file *m, void *v)
static int loadavg_proc_open(struct inode *inode, struct file *file)
static const struct file_operations loadavg_proc_fops = ;
static int __init proc_loadavg_init(void)
module_init(proc_loadavg_init);
