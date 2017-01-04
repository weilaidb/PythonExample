static void probe_subsys_event(void *ignore,
struct inode *inode, struct file *file)
static void probe_subsys_eventb(void *ignore)
static int __init tp_sample_trace_init(void)
module_init(tp_sample_trace_init);
static void __exit tp_sample_trace_exit(void)
module_exit(tp_sample_trace_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mathieu Desnoyers");
MODULE_DESCRIPTION("Tracepoint Probes Samples");
