#define MEDIA_NUM_DEVICES	256
#define MEDIA_NAME		"media"
static dev_t media_dev_t;
static DEFINE_MUTEX(media_devnode_lock);
static DECLARE_BITMAP(media_devnode_nums, MEDIA_NUM_DEVICES);
static void media_devnode_release(struct device *cd)
static struct bus_type media_bus_type = ;
static ssize_t media_read(struct file *filp, char __user *buf,
size_t sz, loff_t *off)
static ssize_t media_write(struct file *filp, const char __user *buf,
size_t sz, loff_t *off)
static unsigned int media_poll(struct file *filp,
struct poll_table_struct *poll)
static long media_ioctl(struct file *filp, unsigned int cmd, unsigned long arg)
static int media_open(struct inode *inode, struct file *filp)
static int media_release(struct inode *inode, struct file *filp)
static const struct file_operations media_devnode_fops = ;
int __must_check media_devnode_register(struct media_devnode *mdev)
void media_devnode_unregister(struct media_devnode *mdev)
static int __init media_devnode_init(void)
static void __exit media_devnode_exit(void)
module_init(media_devnode_init)
module_exit(media_devnode_exit)
MODULE_AUTHOR("Laurent Pinchart <laurent.pinchart@ideasonboard.com>");
MODULE_DESCRIPTION("Device node registration for media drivers");
MODULE_LICENSE("GPL");
