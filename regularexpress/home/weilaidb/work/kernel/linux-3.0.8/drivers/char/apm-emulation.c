#define APM_MINOR_DEV	134
#define APM_MAX_EVENTS		16
struct apm_queue ;
enum apm_suspend_state ;
struct apm_user ;
static atomic_t suspend_acks_pending = ATOMIC_INIT(0);
static atomic_t userspace_notification_inhibit = ATOMIC_INIT(0);
static int apm_disabled;
static struct task_struct *kapmd_tsk;
static DECLARE_WAIT_QUEUE_HEAD(apm_waitqueue);
static DECLARE_WAIT_QUEUE_HEAD(apm_suspend_waitqueue);
static DECLARE_RWSEM(user_list_lock);
static LIST_HEAD(apm_user_list);
static DECLARE_WAIT_QUEUE_HEAD(kapmd_wait);
static DEFINE_SPINLOCK(kapmd_queue_lock);
static struct apm_queue kapmd_queue;
static DEFINE_MUTEX(state_lock);
static const char driver_version[] = "1.13";
static void __apm_get_power_status(struct apm_power_info *info)
void (*apm_get_power_status)(struct apm_power_info *) = __apm_get_power_status;
EXPORT_SYMBOL(apm_get_power_status);
static inline int queue_empty(struct apm_queue *q)
static inline apm_event_t queue_get_event(struct apm_queue *q)
static void queue_add_event(struct apm_queue *q, apm_event_t event)
static void queue_event(apm_event_t event)
static ssize_t apm_read(struct file *fp, char __user *buf, size_t count, loff_t *ppos)
static unsigned int apm_poll(struct file *fp, poll_table * wait)
static long
apm_ioctl(struct file *filp, u_int cmd, u_long arg)
static int apm_release(struct inode * inode, struct file * filp)
static int apm_open(struct inode * inode, struct file * filp)
static const struct file_operations apm_bios_fops = ;
static struct miscdevice apm_device = ;
static int proc_apm_show(struct seq_file *m, void *v)
static int proc_apm_open(struct inode *inode, struct file *file)
static const struct file_operations apm_proc_fops = ;
static int kapmd(void *arg)
static int apm_suspend_notifier(struct notifier_block *nb,
unsigned long event,
void *dummy)
static struct notifier_block apm_notif_block = ;
static int __init apm_init(void)
static void __exit apm_exit(void)
module_init(apm_init);
module_exit(apm_exit);
MODULE_AUTHOR("Stephen Rothwell");
MODULE_DESCRIPTION("Advanced Power Management");
MODULE_LICENSE("GPL");
static int __init apm_setup(char *str)
__setup("apm=", apm_setup);
void apm_queue_event(apm_event_t event)
EXPORT_SYMBOL(apm_queue_event);
