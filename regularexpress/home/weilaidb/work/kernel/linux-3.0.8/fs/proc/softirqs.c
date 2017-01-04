static int show_softirqs(struct seq_file *p, void *v)
static int softirqs_open(struct inode *inode, struct file *file)
static const struct file_operations proc_softirqs_operations = ;
static int __init proc_softirqs_init(void)
module_init(proc_softirqs_init);
