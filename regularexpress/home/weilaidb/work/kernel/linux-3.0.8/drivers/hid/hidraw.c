#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static int hidraw_major;
static struct cdev hidraw_cdev;
static struct class *hidraw_class;
static struct hidraw *hidraw_table[HIDRAW_MAX_DEVICES];
static DEFINE_MUTEX(minors_lock);
static ssize_t hidraw_read(struct file *file, char __user *buffer, size_t count, loff_t *ppos)
static ssize_t hidraw_send_report(struct file *file, const char __user *buffer, size_t count, unsigned char report_type)
static ssize_t hidraw_write(struct file *file, const char __user *buffer, size_t count, loff_t *ppos)
static ssize_t hidraw_get_report(struct file *file, char __user *buffer, size_t count, unsigned char report_type)
static unsigned int hidraw_poll(struct file *file, poll_table *wait)
static int hidraw_open(struct inode *inode, struct file *file)
static int hidraw_release(struct inode * inode, struct file * file)
static long hidraw_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static const struct file_operations hidraw_ops = ;
void hidraw_report_event(struct hid_device *hid, u8 *data, int len)
EXPORT_SYMBOL_GPL(hidraw_report_event);
int hidraw_connect(struct hid_device *hid)
EXPORT_SYMBOL_GPL(hidraw_connect);
void hidraw_disconnect(struct hid_device *hid)
EXPORT_SYMBOL_GPL(hidraw_disconnect);
int __init hidraw_init(void)
void hidraw_exit(void)
