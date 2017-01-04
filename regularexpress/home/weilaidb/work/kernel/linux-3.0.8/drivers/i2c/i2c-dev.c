struct i2c_dev ;
#define I2C_MINORS	256
static LIST_HEAD(i2c_dev_list);
static DEFINE_SPINLOCK(i2c_dev_list_lock);
static struct i2c_dev *i2c_dev_get_by_minor(unsigned index)
static struct i2c_dev *get_free_i2c_dev(struct i2c_adapter *adap)
static void return_i2c_dev(struct i2c_dev *i2c_dev)
static ssize_t show_adapter_name(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(name, S_IRUGO, show_adapter_name, NULL);
static ssize_t i2cdev_read(struct file *file, char __user *buf, size_t count,
loff_t *offset)
static ssize_t i2cdev_write(struct file *file, const char __user *buf,
size_t count, loff_t *offset)
static int i2cdev_check(struct device *dev, void *addrp)
static int i2cdev_check_mux_parents(struct i2c_adapter *adapter, int addr)
static int i2cdev_check_mux_children(struct device *dev, void *addrp)
static int i2cdev_check_addr(struct i2c_adapter *adapter, unsigned int addr)
static noinline int i2cdev_ioctl_rdrw(struct i2c_client *client,
unsigned long arg)
static noinline int i2cdev_ioctl_smbus(struct i2c_client *client,
unsigned long arg)
static long i2cdev_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static int i2cdev_open(struct inode *inode, struct file *file)
static int i2cdev_release(struct inode *inode, struct file *file)
static const struct file_operations i2cdev_fops = ;
static struct class *i2c_dev_class;
static int i2cdev_attach_adapter(struct device *dev, void *dummy)
static int i2cdev_detach_adapter(struct device *dev, void *dummy)
int i2cdev_notifier_call(struct notifier_block *nb, unsigned long action,
void *data)
static struct notifier_block i2cdev_notifier = ;
static int __init i2c_dev_init(void)
static void __exit i2c_dev_exit(void)
MODULE_AUTHOR("Frodo Looijaard <frodol@dds.nl> and "
"Simon G. Vogl <simon@tk.uni-linz.ac.at>");
MODULE_DESCRIPTION("I2C /dev entries driver");
MODULE_LICENSE("GPL");
module_init(i2c_dev_init);
module_exit(i2c_dev_exit);
