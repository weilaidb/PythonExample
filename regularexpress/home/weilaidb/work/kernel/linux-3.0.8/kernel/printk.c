void asmlinkage __attribute__((weak)) early_printk(const char *fmt, ...)
#define __LOG_BUF_LEN	(1 << CONFIG_LOG_BUF_SHIFT)
#define DEFAULT_MESSAGE_LOGLEVEL CONFIG_DEFAULT_MESSAGE_LOGLEVEL
#define MINIMUM_CONSOLE_LOGLEVEL 1
#define DEFAULT_CONSOLE_LOGLEVEL 7
DECLARE_WAIT_QUEUE_HEAD(log_wait);
int console_printk[4] = ;
int oops_in_progress;
EXPORT_SYMBOL(oops_in_progress);
static DEFINE_SEMAPHORE(console_sem);
struct console *console_drivers;
EXPORT_SYMBOL_GPL(console_drivers);
static int console_locked, console_suspended;
static DEFINE_SPINLOCK(logbuf_lock);
#define LOG_BUF_MASK (log_buf_len-1)
#define LOG_BUF(idx) (log_buf[(idx) & LOG_BUF_MASK])
static unsigned log_start;
static unsigned con_start;
static unsigned log_end;
static struct console *exclusive_console;
struct console_cmdline
;
#define MAX_CMDLINECONSOLES 8
static struct console_cmdline console_cmdline[MAX_CMDLINECONSOLES];
static int selected_console = -1;
static int preferred_console = -1;
int console_set_on_cmdline;
EXPORT_SYMBOL(console_set_on_cmdline);
static int console_may_schedule;
static char __log_buf[__LOG_BUF_LEN];
static char *log_buf = __log_buf;
static int log_buf_len = __LOG_BUF_LEN;
static unsigned logged_chars;
static int saved_console_loglevel = -1;
void log_buf_kexec_setup(void)
static unsigned long __initdata new_log_buf_len;
static int __init log_buf_len_setup(char *str)
early_param("log_buf_len", log_buf_len_setup);
void __init setup_log_buf(int early)
static int boot_delay;
static unsigned long long loops_per_msec;
static int __init boot_delay_setup(char *str)
__setup("boot_delay=", boot_delay_setup);
static void boot_delay_msec(void)
static inline void boot_delay_msec(void)
int dmesg_restrict = 1;
int dmesg_restrict;
static int syslog_action_restricted(int type)
static int check_syslog_permissions(int type, bool from_file)
int do_syslog(int type, char __user *buf, int len, bool from_file)
SYSCALL_DEFINE3(syslog, int, type, char __user *, buf, int, len)
void kdb_syslog_data(char *syslog_data[4])
static void __call_console_drivers(unsigned start, unsigned end)
static int __read_mostly ignore_loglevel;
static int __init ignore_loglevel_setup(char *str)
early_param("ignore_loglevel", ignore_loglevel_setup);
static void _call_console_drivers(unsigned start,
unsigned end, int msg_log_level)
static size_t log_prefix(const char *p, unsigned int *level, char *special)
static void call_console_drivers(unsigned start, unsigned end)
static void emit_log_char(char c)
static void zap_locks(void)
#if defined(CONFIG_PRINTK_TIME)
static int printk_time = 1;
static int printk_time = 0;
module_param_named(time, printk_time, bool, S_IRUGO | S_IWUSR);
static int have_callable_console(void)
asmlinkage int printk(const char *fmt, ...)
static volatile unsigned int printk_cpu = UINT_MAX;
static inline int can_use_console(unsigned int cpu)
static int console_trylock_for_printk(unsigned int cpu)
__releases(&logbuf_lock)
static const char recursion_bug_msg [] =
KERN_CRIT "BUG: recent printk recursion!\n";
static int recursion_bug;
static int new_text_line = 1;
static char printk_buf[1024];
int printk_delay_msec __read_mostly;
static inline void printk_delay(void)
asmlinkage int vprintk(const char *fmt, va_list args)
EXPORT_SYMBOL(printk);
EXPORT_SYMBOL(vprintk);
static void call_console_drivers(unsigned start, unsigned end)
static int __add_preferred_console(char *name, int idx, char *options,
char *brl_options)
static int __init console_setup(char *str)
__setup("console=", console_setup);
int add_preferred_console(char *name, int idx, char *options)
int update_console_cmdline(char *name, int idx, char *name_new, int idx_new, char *options)
int console_suspend_enabled = 1;
EXPORT_SYMBOL(console_suspend_enabled);
static int __init console_suspend_disable(char *str)
__setup("no_console_suspend", console_suspend_disable);
void suspend_console(void)
void resume_console(void)
static int __cpuinit console_cpu_notify(struct notifier_block *self,
unsigned long action, void *hcpu)
void console_lock(void)
EXPORT_SYMBOL(console_lock);
int console_trylock(void)
EXPORT_SYMBOL(console_trylock);
int is_console_locked(void)
static DEFINE_PER_CPU(int, printk_pending);
void printk_tick(void)
int printk_needs_cpu(int cpu)
void wake_up_klogd(void)
void console_unlock(void)
EXPORT_SYMBOL(console_unlock);
void __sched console_conditional_schedule(void)
EXPORT_SYMBOL(console_conditional_schedule);
void console_unblank(void)
struct tty_driver *console_device(int *index)
void console_stop(struct console *console)
EXPORT_SYMBOL(console_stop);
void console_start(struct console *console)
EXPORT_SYMBOL(console_start);
static int __read_mostly keep_bootcon;
static int __init keep_bootcon_setup(char *str)
early_param("keep_bootcon", keep_bootcon_setup);
void register_console(struct console *newcon)
EXPORT_SYMBOL(register_console);
int unregister_console(struct console *console)
EXPORT_SYMBOL(unregister_console);
static int __init printk_late_init(void)
late_initcall(printk_late_init);
#if defined CONFIG_PRINTK
DEFINE_RATELIMIT_STATE(printk_ratelimit_state, 5 * HZ, 10);
int __printk_ratelimit(const char *func)
EXPORT_SYMBOL(__printk_ratelimit);
bool printk_timed_ratelimit(unsigned long *caller_jiffies,
unsigned int interval_msecs)
EXPORT_SYMBOL(printk_timed_ratelimit);
static DEFINE_SPINLOCK(dump_list_lock);
static LIST_HEAD(dump_list);
int kmsg_dump_register(struct kmsg_dumper *dumper)
EXPORT_SYMBOL_GPL(kmsg_dump_register);
int kmsg_dump_unregister(struct kmsg_dumper *dumper)
EXPORT_SYMBOL_GPL(kmsg_dump_unregister);
void kmsg_dump(enum kmsg_dump_reason reason)
