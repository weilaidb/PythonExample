#define CUSE_CONNTBL_LEN	64
struct cuse_conn ;
static DEFINE_SPINLOCK(cuse_lock);
static struct list_head cuse_conntbl[CUSE_CONNTBL_LEN];
static struct class *cuse_class;
static struct cuse_conn *fc_to_cc(struct fuse_conn *fc)
static struct list_head *cuse_conntbl_head(dev_t devt)
static ssize_t cuse_read(struct file *file, char __user *buf, size_t count,
loff_t *ppos)
static ssize_t cuse_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static int cuse_open(struct inode *inode, struct file *file)
static int cuse_release(struct inode *inode, struct file *file)
static long cuse_file_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static long cuse_file_compat_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static const struct file_operations cuse_frontend_fops = ;
struct cuse_devinfo ;
static int cuse_parse_one(char **pp, char *end, char **keyp, char **valp)
static int cuse_parse_devinfo(char *p, size_t len, struct cuse_devinfo *devinfo)
static void cuse_gendev_release(struct device *dev)
static void cuse_process_init_reply(struct fuse_conn *fc, struct fuse_req *req)
static int cuse_send_init(struct cuse_conn *cc)
static void cuse_fc_release(struct fuse_conn *fc)
static int cuse_channel_open(struct inode *inode, struct file *file)
static int cuse_channel_release(struct inode *inode, struct file *file)
static struct file_operations cuse_channel_fops;
static ssize_t cuse_class_waiting_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t cuse_class_abort_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static struct device_attribute cuse_class_dev_attrs[] = ;
static struct miscdevice cuse_miscdev = ;
static int __init cuse_init(void)
static void __exit cuse_exit(void)
module_init(cuse_init);
module_exit(cuse_exit);
MODULE_AUTHOR("Tejun Heo <tj@kernel.org>");
MODULE_DESCRIPTION("Character device in Userspace");
MODULE_LICENSE("GPL");
