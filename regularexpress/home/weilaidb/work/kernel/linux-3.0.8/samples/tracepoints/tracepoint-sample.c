DEFINE_TRACE(subsys_event);
DEFINE_TRACE(subsys_eventb);
struct proc_dir_entry *pentry_sample;
static int my_open(struct inode *inode, struct file *file)
static const struct file_operations mark_ops = ;
static int __init sample_init(void)
static void __exit sample_exit(void)
module_init(sample_init)
module_exit(sample_exit)
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mathieu Desnoyers");
MODULE_DESCRIPTION("Tracepoint sample");
