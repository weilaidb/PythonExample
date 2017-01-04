int           coda_hard;
unsigned long coda_timeout = 30;
struct venus_comm coda_comms[MAX_CODADEVS];
static struct class *coda_psdev_class;
static unsigned int coda_psdev_poll(struct file *file, poll_table * wait)
static long coda_psdev_ioctl(struct file * filp, unsigned int cmd, unsigned long arg)
static ssize_t coda_psdev_write(struct file *file, const char __user *buf,
size_t nbytes, loff_t *off)
static ssize_t coda_psdev_read(struct file * file, char __user * buf,
size_t nbytes, loff_t *off)
static int coda_psdev_open(struct inode * inode, struct file * file)
static int coda_psdev_release(struct inode * inode, struct file * file)
static const struct file_operations coda_psdev_fops = ;
static int init_coda_psdev(void)
MODULE_AUTHOR("Jan Harkes, Peter J. Braam");
MODULE_DESCRIPTION("Coda Distributed File System VFS interface");
MODULE_ALIAS_CHARDEV_MAJOR(CODA_PSDEV_MAJOR);
MODULE_LICENSE("GPL");
MODULE_VERSION("6.6");
static int __init init_coda(void)
static void __exit exit_coda(void)
module_init(init_coda);
module_exit(exit_coda);
