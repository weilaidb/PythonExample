static struct raw3270_fn fs3270_fn;
struct fs3270 ;
static DEFINE_MUTEX(fs3270_mutex);
static void
fs3270_wake_up(struct raw3270_request *rq, void *data)
static inline int
fs3270_working(struct fs3270 *fp)
static int
fs3270_do_io(struct raw3270_view *view, struct raw3270_request *rq)
static void
fs3270_reset_callback(struct raw3270_request *rq, void *data)
static void
fs3270_restore_callback(struct raw3270_request *rq, void *data)
static int
fs3270_activate(struct raw3270_view *view)
static void
fs3270_save_callback(struct raw3270_request *rq, void *data)
static void
fs3270_deactivate(struct raw3270_view *view)
static int
fs3270_irq(struct fs3270 *fp, struct raw3270_request *rq, struct irb *irb)
static ssize_t
fs3270_read(struct file *filp, char __user *data, size_t count, loff_t *off)
static ssize_t
fs3270_write(struct file *filp, const char __user *data, size_t count, loff_t *off)
static long
fs3270_ioctl(struct file *filp, unsigned int cmd, unsigned long arg)
static struct fs3270 *
fs3270_alloc_view(void)
static void
fs3270_free_view(struct raw3270_view *view)
static void
fs3270_release(struct raw3270_view *view)
static struct raw3270_fn fs3270_fn = ;
static int
fs3270_open(struct inode *inode, struct file *filp)
static int
fs3270_close(struct inode *inode, struct file *filp)
static const struct file_operations fs3270_fops = ;
static int __init
fs3270_init(void)
static void __exit
fs3270_exit(void)
MODULE_LICENSE("GPL");
MODULE_ALIAS_CHARDEV_MAJOR(IBM_FS3270_MAJOR);
module_init(fs3270_init);
module_exit(fs3270_exit);
