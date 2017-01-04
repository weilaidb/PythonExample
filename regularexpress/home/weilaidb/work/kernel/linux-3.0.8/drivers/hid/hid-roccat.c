#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define ROCCAT_FIRST_MINOR 0
#define ROCCAT_MAX_DEVICES 8
#define ROCCAT_CBUF_SIZE 16
struct roccat_report ;
struct roccat_device ;
struct roccat_reader ;
static int roccat_major;
static struct cdev roccat_cdev;
static struct roccat_device *devices[ROCCAT_MAX_DEVICES];
static DEFINE_MUTEX(devices_lock);
static ssize_t roccat_read(struct file *file, char __user *buffer,
size_t count, loff_t *ppos)
static unsigned int roccat_poll(struct file *file, poll_table *wait)
static int roccat_open(struct inode *inode, struct file *file)
static int roccat_release(struct inode *inode, struct file *file)
int roccat_report_event(int minor, u8 const *data)
EXPORT_SYMBOL_GPL(roccat_report_event);
int roccat_connect(struct class *klass, struct hid_device *hid, int report_size)
EXPORT_SYMBOL_GPL(roccat_connect);
void roccat_disconnect(int minor)
EXPORT_SYMBOL_GPL(roccat_disconnect);
static long roccat_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static const struct file_operations roccat_ops = ;
static int __init roccat_init(void)
static void __exit roccat_exit(void)
module_init(roccat_init);
module_exit(roccat_exit);
MODULE_AUTHOR("Stefan Achatz");
MODULE_DESCRIPTION("USB Roccat char device");
MODULE_LICENSE("GPL v2");
