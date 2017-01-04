struct eventfd_ctx ;
int eventfd_signal(struct eventfd_ctx *ctx, int n)
EXPORT_SYMBOL_GPL(eventfd_signal);
static void eventfd_free_ctx(struct eventfd_ctx *ctx)
static void eventfd_free(struct kref *kref)
struct eventfd_ctx *eventfd_ctx_get(struct eventfd_ctx *ctx)
EXPORT_SYMBOL_GPL(eventfd_ctx_get);
void eventfd_ctx_put(struct eventfd_ctx *ctx)
EXPORT_SYMBOL_GPL(eventfd_ctx_put);
static int eventfd_release(struct inode *inode, struct file *file)
static unsigned int eventfd_poll(struct file *file, poll_table *wait)
static void eventfd_ctx_do_read(struct eventfd_ctx *ctx, __u64 *cnt)
int eventfd_ctx_remove_wait_queue(struct eventfd_ctx *ctx, wait_queue_t *wait,
__u64 *cnt)
EXPORT_SYMBOL_GPL(eventfd_ctx_remove_wait_queue);
ssize_t eventfd_ctx_read(struct eventfd_ctx *ctx, int no_wait, __u64 *cnt)
EXPORT_SYMBOL_GPL(eventfd_ctx_read);
static ssize_t eventfd_read(struct file *file, char __user *buf, size_t count,
loff_t *ppos)
static ssize_t eventfd_write(struct file *file, const char __user *buf, size_t count,
loff_t *ppos)
static const struct file_operations eventfd_fops = ;
struct file *eventfd_fget(int fd)
EXPORT_SYMBOL_GPL(eventfd_fget);
struct eventfd_ctx *eventfd_ctx_fdget(int fd)
EXPORT_SYMBOL_GPL(eventfd_ctx_fdget);
struct eventfd_ctx *eventfd_ctx_fileget(struct file *file)
EXPORT_SYMBOL_GPL(eventfd_ctx_fileget);
struct file *eventfd_file_create(unsigned int count, int flags)
SYSCALL_DEFINE2(eventfd2, unsigned int, count, int, flags)
SYSCALL_DEFINE1(eventfd, unsigned int, count)
