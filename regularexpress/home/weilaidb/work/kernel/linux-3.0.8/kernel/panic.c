#define PANIC_TIMER_STEP 100
#define PANIC_BLINK_SPD 18
int panic_on_oops;
static unsigned long tainted_mask;
static int pause_on_oops;
static int pause_on_oops_flag;
static DEFINE_SPINLOCK(pause_on_oops_lock);
int panic_timeout;
EXPORT_SYMBOL_GPL(panic_timeout);
ATOMIC_NOTIFIER_HEAD(panic_notifier_list);
EXPORT_SYMBOL(panic_notifier_list);
static long no_blink(int state)
long (*panic_blink)(int state);
EXPORT_SYMBOL(panic_blink);
NORET_TYPE void panic(const char * fmt, ...)
EXPORT_SYMBOL(panic);
struct tnt ;
static const struct tnt tnts[] = ;
const char *print_tainted(void)
int test_taint(unsigned flag)
EXPORT_SYMBOL(test_taint);
unsigned long get_taint(void)
void add_taint(unsigned flag)
EXPORT_SYMBOL(add_taint);
static void spin_msec(int msecs)
static void do_oops_enter_exit(void)
int oops_may_print(void)
void oops_enter(void)
static u64 oops_id;
static int init_oops_id(void)
late_initcall(init_oops_id);
void print_oops_end_marker(void)
void oops_exit(void)
struct slowpath_args ;
static void warn_slowpath_common(const char *file, int line, void *caller,
unsigned taint, struct slowpath_args *args)
void warn_slowpath_fmt(const char *file, int line, const char *fmt, ...)
EXPORT_SYMBOL(warn_slowpath_fmt);
void warn_slowpath_fmt_taint(const char *file, int line,
unsigned taint, const char *fmt, ...)
EXPORT_SYMBOL(warn_slowpath_fmt_taint);
void warn_slowpath_null(const char *file, int line)
EXPORT_SYMBOL(warn_slowpath_null);
void __stack_chk_fail(void)
EXPORT_SYMBOL(__stack_chk_fail);
core_param(panic, panic_timeout, int, 0644);
core_param(pause_on_oops, pause_on_oops, int, 0644);
static int __init oops_setup(char *s)
early_param("oops", oops_setup);
