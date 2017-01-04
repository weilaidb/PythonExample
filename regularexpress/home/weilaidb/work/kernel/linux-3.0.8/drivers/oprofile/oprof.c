struct oprofile_operations oprofile_ops;
unsigned long oprofile_started;
unsigned long oprofile_backtrace_depth;
static unsigned long is_setup;
static DEFINE_MUTEX(start_mutex);
static int timer = 0;
int oprofile_setup(void)
static void switch_worker(struct work_struct *work);
static DECLARE_DELAYED_WORK(switch_work, switch_worker);
static void start_switch_worker(void)
static void stop_switch_worker(void)
static void switch_worker(struct work_struct *work)
int oprofile_set_timeout(unsigned long val_msec)
static inline void start_switch_worker(void)
static inline void stop_switch_worker(void)
int oprofile_start(void)
void oprofile_stop(void)
void oprofile_shutdown(void)
int oprofile_set_ulong(unsigned long *addr, unsigned long val)
static int __init oprofile_init(void)
static void __exit oprofile_exit(void)
module_init(oprofile_init);
module_exit(oprofile_exit);
module_param_named(timer, timer, int, 0644);
MODULE_PARM_DESC(timer, "force use of timer interrupt");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("John Levon <levon@movementarian.org>");
MODULE_DESCRIPTION("OProfile system profiler");
