#define CREATE_TRACE_POINTS
static void simple_thread_func(int cnt)
static int simple_thread(void *arg)
static struct task_struct *simple_tsk;
static int __init trace_event_init(void)
static void __exit trace_event_exit(void)
module_init(trace_event_init);
module_exit(trace_event_exit);
MODULE_AUTHOR("Steven Rostedt");
MODULE_DESCRIPTION("trace-events-sample");
MODULE_LICENSE("GPL");
