#define ERST_DBG_PFX			"ERST DBG: "
#define ERST_DBG_RECORD_LEN_MAX		4096
static void *erst_dbg_buf;
static unsigned int erst_dbg_buf_len;
static DEFINE_MUTEX(erst_dbg_mutex);
static int erst_dbg_open(struct inode *inode, struct file *file)
static int erst_dbg_release(struct inode *inode, struct file *file)
static long erst_dbg_ioctl(struct file *f, unsigned int cmd, unsigned long arg)
static ssize_t erst_dbg_read(struct file *filp, char __user *ubuf,
size_t usize, loff_t *off)
static ssize_t erst_dbg_write(struct file *filp, const char __user *ubuf,
size_t usize, loff_t *off)
static const struct file_operations erst_dbg_ops = ;
static struct miscdevice erst_dbg_dev = ;
static __init int erst_dbg_init(void)
static __exit void erst_dbg_exit(void)
module_init(erst_dbg_init);
module_exit(erst_dbg_exit);
MODULE_AUTHOR("Huang Ying");
MODULE_DESCRIPTION("APEI Error Record Serialization Table debug support");
MODULE_LICENSE("GPL");
