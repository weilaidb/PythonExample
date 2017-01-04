#define KMSG_COMPONENT "vmur"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
static char ur_banner[] = "z/VM virtual unit record device driver";
MODULE_AUTHOR("IBM Corporation");
MODULE_DESCRIPTION("s390 z/VM virtual unit record device driver");
MODULE_LICENSE("GPL");
static dev_t ur_first_dev_maj_min;
static struct class *vmur_class;
static struct debug_info *vmur_dbf;
static struct ccw_device_id ur_ids[] = ;
MODULE_DEVICE_TABLE(ccw, ur_ids);
static int ur_probe(struct ccw_device *cdev);
static void ur_remove(struct ccw_device *cdev);
static int ur_set_online(struct ccw_device *cdev);
static int ur_set_offline(struct ccw_device *cdev);
static int ur_pm_suspend(struct ccw_device *cdev);
static struct ccw_driver ur_driver = ;
static DEFINE_MUTEX(vmur_mutex);
static struct urdev *urdev_alloc(struct ccw_device *cdev)
static void urdev_free(struct urdev *urd)
static void urdev_get(struct urdev *urd)
static struct urdev *urdev_get_from_cdev(struct ccw_device *cdev)
static struct urdev *urdev_get_from_devno(u16 devno)
static void urdev_put(struct urdev *urd)
static int ur_pm_suspend(struct ccw_device *cdev)
static void free_chan_prog(struct ccw1 *cpa)
static struct ccw1 *alloc_chan_prog(const char __user *ubuf, int rec_count,
int reclen)
static int do_ur_io(struct urdev *urd, struct ccw1 *cpa)
static void ur_int_handler(struct ccw_device *cdev, unsigned long intparm,
struct irb *irb)
static ssize_t ur_attr_reclen_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(reclen, 0444, ur_attr_reclen_show, NULL);
static int ur_create_attributes(struct device *dev)
static void ur_remove_attributes(struct device *dev)
static int get_urd_class(struct urdev *urd)
static struct urfile *urfile_alloc(struct urdev *urd)
static void urfile_free(struct urfile *urf)
static ssize_t do_write(struct urdev *urd, const char __user *udata,
size_t count, size_t reclen, loff_t *ppos)
static ssize_t ur_write(struct file *file, const char __user *udata,
size_t count, loff_t *ppos)
static int diag_position_to_record(int devno, int record)
static int diag_read_file(int devno, char *buf)
static ssize_t diag14_read(struct file *file, char __user *ubuf, size_t count,
loff_t *offs)
static ssize_t ur_read(struct file *file, char __user *ubuf, size_t count,
loff_t *offs)
static int diag_read_next_file_info(struct file_control_block *buf, int spid)
static int verify_uri_device(struct urdev *urd)
static int verify_device(struct urdev *urd)
static int get_uri_file_reclen(struct urdev *urd)
static int get_file_reclen(struct urdev *urd)
static int ur_open(struct inode *inode, struct file *file)
static int ur_release(struct inode *inode, struct file *file)
static loff_t ur_llseek(struct file *file, loff_t offset, int whence)
static const struct file_operations ur_fops = ;
static int ur_probe(struct ccw_device *cdev)
static int ur_set_online(struct ccw_device *cdev)
static int ur_set_offline_force(struct ccw_device *cdev, int force)
static int ur_set_offline(struct ccw_device *cdev)
static void ur_remove(struct ccw_device *cdev)
static int __init ur_init(void)
static void __exit ur_exit(void)
module_init(ur_init);
module_exit(ur_exit);
