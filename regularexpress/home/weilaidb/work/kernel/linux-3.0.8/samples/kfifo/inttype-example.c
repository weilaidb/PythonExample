#define FIFO_SIZE	32
#define	PROC_FIFO	"int-fifo"
static DEFINE_MUTEX(read_lock);
static DEFINE_MUTEX(write_lock);
static DECLARE_KFIFO_PTR(test, int);
static DEFINE_KFIFO(test, int, FIFO_SIZE);
static const int expected_result[FIFO_SIZE] = ;
static int __init testfunc(void)
static ssize_t fifo_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static ssize_t fifo_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations fifo_fops = ;
static int __init example_init(void)
static void __exit example_exit(void)
module_init(example_init);
module_exit(example_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Stefani Seibold <stefani@seibold.net>");
