MODULE_LICENSE("GPL");
static DEFINE_MUTEX(harddog_mutex);
static DEFINE_SPINLOCK(lock);
static int timer_alive;
static int harddog_in_fd = -1;
static int harddog_out_fd = -1;
extern int start_watchdog(int *in_fd_ret, int *out_fd_ret, char *sock);
static int harddog_open(struct inode *inode, struct file *file)
extern void stop_watchdog(int in_fd, int out_fd);
static int harddog_release(struct inode *inode, struct file *file)
extern int ping_watchdog(int fd);
static ssize_t harddog_write(struct file *file, const char __user *data, size_t len,
loff_t *ppos)
static int harddog_ioctl_unlocked(struct file *file,
unsigned int cmd, unsigned long arg)
static long harddog_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static const struct file_operations harddog_fops = ;
static struct miscdevice harddog_miscdev = ;
static char banner[] __initdata = KERN_INFO "UML Watchdog Timer\n";
static int __init harddog_init(void)
static void __exit harddog_exit(void)
module_init(harddog_init);
module_exit(harddog_exit);
