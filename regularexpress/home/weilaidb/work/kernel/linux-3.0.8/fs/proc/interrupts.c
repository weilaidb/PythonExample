static void *int_seq_start(struct seq_file *f, loff_t *pos)
static void *int_seq_next(struct seq_file *f, void *v, loff_t *pos)
static void int_seq_stop(struct seq_file *f, void *v)
static const struct seq_operations int_seq_ops = ;
static int interrupts_open(struct inode *inode, struct file *filp)
static const struct file_operations proc_interrupts_operations = ;
static int __init proc_interrupts_init(void)
module_init(proc_interrupts_init);
