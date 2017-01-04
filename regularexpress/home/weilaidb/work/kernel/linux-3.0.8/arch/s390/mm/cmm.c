static char *cmm_default_sender = "VMRMSVM";
static char *sender;
module_param(sender, charp, 0400);
MODULE_PARM_DESC(sender,
"Guest name that may send SMSG messages (default VMRMSVM)");
#define CMM_NR_PAGES ((PAGE_SIZE / sizeof(unsigned long)) - 2)
struct cmm_page_array ;
static long cmm_pages;
static long cmm_timed_pages;
static volatile long cmm_pages_target;
static volatile long cmm_timed_pages_target;
static long cmm_timeout_pages;
static long cmm_timeout_seconds;
static int cmm_suspended;
static struct cmm_page_array *cmm_page_list;
static struct cmm_page_array *cmm_timed_page_list;
static DEFINE_SPINLOCK(cmm_lock);
static struct task_struct *cmm_thread_ptr;
static DECLARE_WAIT_QUEUE_HEAD(cmm_thread_wait);
static DEFINE_TIMER(cmm_timer, NULL, 0, 0);
static void cmm_timer_fn(unsigned long);
static void cmm_set_timer(void);
static long cmm_alloc_pages(long nr, long *counter,
struct cmm_page_array **list)
static long cmm_free_pages(long nr, long *counter, struct cmm_page_array **list)
static int cmm_oom_notify(struct notifier_block *self,
unsigned long dummy, void *parm)
static struct notifier_block cmm_oom_nb = ;
static int cmm_thread(void *dummy)
static void cmm_kick_thread(void)
static void cmm_set_timer(void)
static void cmm_timer_fn(unsigned long ignored)
static void cmm_set_pages(long nr)
static long cmm_get_pages(void)
static void cmm_add_timed_pages(long nr)
static long cmm_get_timed_pages(void)
static void cmm_set_timeout(long nr, long seconds)
static int cmm_skip_blanks(char *cp, char **endp)
static struct ctl_table cmm_table[];
static int cmm_pages_handler(ctl_table *ctl, int write, void __user *buffer,
size_t *lenp, loff_t *ppos)
static int cmm_timeout_handler(ctl_table *ctl, int write,  void __user *buffer,
size_t *lenp, loff_t *ppos)
static struct ctl_table cmm_table[] = ;
static struct ctl_table cmm_dir_table[] = ;
#define SMSG_PREFIX "CMM"
static void cmm_smsg_target(const char *from, char *msg)
static struct ctl_table_header *cmm_sysctl_header;
static int cmm_suspend(void)
static int cmm_resume(void)
static int cmm_power_event(struct notifier_block *this,
unsigned long event, void *ptr)
static struct notifier_block cmm_power_notifier = ;
static int __init cmm_init(void)
module_init(cmm_init);
static void __exit cmm_exit(void)
module_exit(cmm_exit);
MODULE_LICENSE("GPL");
