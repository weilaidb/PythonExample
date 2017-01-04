struct signalfd_ctx ;
static int signalfd_release(struct inode *inode, struct file *file)
static unsigned int signalfd_poll(struct file *file, poll_table *wait)
static int signalfd_copyinfo(struct signalfd_siginfo __user *uinfo,
siginfo_t const *kinfo)
static ssize_t signalfd_dequeue(struct signalfd_ctx *ctx, siginfo_t *info,
int nonblock)
static ssize_t signalfd_read(struct file *file, char __user *buf, size_t count,
loff_t *ppos)
static const struct file_operations signalfd_fops = ;
SYSCALL_DEFINE4(signalfd4, int, ufd, sigset_t __user *, user_mask,
size_t, sizemask, int, flags)
SYSCALL_DEFINE3(signalfd, int, ufd, sigset_t __user *, user_mask,
size_t, sizemask)
