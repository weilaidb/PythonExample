unsigned long __read_mostly sysctl_hung_task_check_count = PID_MAX_LIMIT;
#define HUNG_TASK_BATCHING 1024
unsigned long __read_mostly sysctl_hung_task_timeout_secs = CONFIG_DEFAULT_HUNG_TASK_TIMEOUT;
unsigned long __read_mostly sysctl_hung_task_warnings = 10;
static int __read_mostly did_panic;
static struct task_struct *watchdog_task;
unsigned int __read_mostly sysctl_hung_task_panic =
CONFIG_BOOTPARAM_HUNG_TASK_PANIC_VALUE;
static int __init hung_task_panic_setup(char *str)
__setup("hung_task_panic=", hung_task_panic_setup);
static int
hung_task_panic(struct notifier_block *this, unsigned long event, void *ptr)
static struct notifier_block panic_block = ;
static void check_hung_task(struct task_struct *t, unsigned long timeout)
static void rcu_lock_break(struct task_struct *g, struct task_struct *t)
static void check_hung_uninterruptible_tasks(unsigned long timeout)
static unsigned long timeout_jiffies(unsigned long timeout)
int proc_dohung_task_timeout_secs(struct ctl_table *table, int write,
void __user *buffer,
size_t *lenp, loff_t *ppos)
static int watchdog(void *dummy)
static int __init hung_task_init(void)
module_init(hung_task_init);
