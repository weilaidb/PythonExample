extern int max_threads;
static struct workqueue_struct *khelper_wq;
#define CAP_BSET	(void *)1
#define CAP_PI		(void *)2
static kernel_cap_t usermodehelper_bset = CAP_FULL_SET;
static kernel_cap_t usermodehelper_inheritable = CAP_FULL_SET;
static DEFINE_SPINLOCK(umh_sysctl_lock);
char modprobe_path[KMOD_PATH_LEN] = "/sbin/modprobe";
int __request_module(bool wait, const char *fmt, ...)
EXPORT_SYMBOL(__request_module);
static int ____call_usermodehelper(void *data)
void call_usermodehelper_freeinfo(struct subprocess_info *info)
EXPORT_SYMBOL(call_usermodehelper_freeinfo);
static int wait_for_helper(void *data)
static void __call_usermodehelper(struct work_struct *work)
static int usermodehelper_disabled;
static atomic_t running_helpers = ATOMIC_INIT(0);
static DECLARE_WAIT_QUEUE_HEAD(running_helpers_waitq);
#define RUNNING_HELPERS_TIMEOUT	(5 * HZ)
int usermodehelper_disable(void)
void usermodehelper_enable(void)
bool usermodehelper_is_disabled(void)
EXPORT_SYMBOL_GPL(usermodehelper_is_disabled);
static void helper_lock(void)
static void helper_unlock(void)
struct subprocess_info *call_usermodehelper_setup(char *path, char **argv,
char **envp, gfp_t gfp_mask)
EXPORT_SYMBOL(call_usermodehelper_setup);
void call_usermodehelper_setfns(struct subprocess_info *info,
int (*init)(struct subprocess_info *info, struct cred *new),
void (*cleanup)(struct subprocess_info *info),
void *data)
EXPORT_SYMBOL(call_usermodehelper_setfns);
int call_usermodehelper_exec(struct subprocess_info *sub_info,
enum umh_wait wait)
EXPORT_SYMBOL(call_usermodehelper_exec);
static int proc_cap_handler(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
struct ctl_table usermodehelper_table[] = ;
void __init usermodehelper_init(void)
