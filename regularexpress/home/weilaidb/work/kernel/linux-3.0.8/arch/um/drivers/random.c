#define RNG_VERSION "1.0.0"
#define RNG_MODULE_NAME "hw_random"
#define RNG_MISCDEV_MINOR		183
static int random_fd = -1;
static DECLARE_WAIT_QUEUE_HEAD(host_read_wait);
static int rng_dev_open (struct inode *inode, struct file *filp)
static atomic_t host_sleep_count = ATOMIC_INIT(0);
static ssize_t rng_dev_read (struct file *filp, char __user *buf, size_t size,
loff_t *offp)
static const struct file_operations rng_chrdev_ops = ;
static struct miscdevice rng_miscdev = ;
static irqreturn_t random_interrupt(int irq, void *data)
static int __init rng_init (void)
static void __exit rng_cleanup (void)
module_init (rng_init);
module_exit (rng_cleanup);
MODULE_DESCRIPTION("UML Host Random Number Generator (RNG) driver");
MODULE_LICENSE("GPL");
