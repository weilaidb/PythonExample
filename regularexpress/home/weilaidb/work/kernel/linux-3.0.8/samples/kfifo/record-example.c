#define FIFO_SIZE	128
#define	PROC_FIFO	"record-fifo"
static DEFINE_MUTEX(read_lock);
static DEFINE_MUTEX(write_lock);
struct kfifo_rec_ptr_1 test;
typedef STRUCT_KFIFO_REC_1(FIFO_SIZE) mytest;
static mytest test;
static const char *expected_result[] = ;
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
