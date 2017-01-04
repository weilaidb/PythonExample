struct timerfd_ctx ;
static LIST_HEAD(cancel_list);
static DEFINE_SPINLOCK(cancel_lock);
static enum hrtimer_restart timerfd_tmrproc(struct hrtimer *htmr)
void timerfd_clock_was_set(void)
static void timerfd_remove_cancel(struct timerfd_ctx *ctx)
static bool timerfd_canceled(struct timerfd_ctx *ctx)
static void timerfd_setup_cancel(struct timerfd_ctx *ctx, int flags)
static ktime_t timerfd_get_remaining(struct timerfd_ctx *ctx)
static int timerfd_setup(struct timerfd_ctx *ctx, int flags,
const struct itimerspec *ktmr)
static int timerfd_release(struct inode *inode, struct file *file)
static unsigned int timerfd_poll(struct file *file, poll_table *wait)
static ssize_t timerfd_read(struct file *file, char __user *buf, size_t count,
loff_t *ppos)
static const struct file_operations timerfd_fops = ;
static struct file *timerfd_fget(int fd)
SYSCALL_DEFINE2(timerfd_create, int, clockid, int, flags)
SYSCALL_DEFINE4(timerfd_settime, int, ufd, int, flags,
const struct itimerspec __user *, utmr,
struct itimerspec __user *, otmr)
SYSCALL_DEFINE2(timerfd_gettime, int, ufd, struct itimerspec __user *, otmr)
