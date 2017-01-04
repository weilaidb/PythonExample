static int show_console_dev(struct seq_file *m, void *v)
static void *c_start(struct seq_file *m, loff_t *pos)
static void *c_next(struct seq_file *m, void *v, loff_t *pos)
static void c_stop(struct seq_file *m, void *v)
static const struct seq_operations consoles_op = ;
static int consoles_open(struct inode *inode, struct file *file)
static const struct file_operations proc_consoles_operations = ;
static int __init proc_consoles_init(void)
module_init(proc_consoles_init);
