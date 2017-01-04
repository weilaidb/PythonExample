static DEFINE_MUTEX(vme_user_mutex);
static char driver_name[] = "vme_user";
static int bus[USER_BUS_MAX];
static unsigned int bus_num;
#define VME_MAJOR	221
#define VME_DEVS	9
#define MASTER_MINOR	0
#define MASTER_MAX	3
#define SLAVE_MINOR	4
#define SLAVE_MAX	7
#define CONTROL_MINOR	8
#define PCI_BUF_SIZE  0x20000
typedef struct  image_desc_t;
static image_desc_t image[VME_DEVS];
typedef struct  driver_stats_t;
static driver_stats_t statistics;
static struct cdev *vme_user_cdev;
static struct class *vme_user_sysfs_class;
static struct device *vme_user_bridge;
static const int type[VME_DEVS] = ;
static int vme_user_open(struct inode *, struct file *);
static int vme_user_release(struct inode *, struct file *);
static ssize_t vme_user_read(struct file *, char __user *, size_t, loff_t *);
static ssize_t vme_user_write(struct file *, const char __user *, size_t,
loff_t *);
static loff_t vme_user_llseek(struct file *, loff_t, int);
static long vme_user_unlocked_ioctl(struct file *, unsigned int, unsigned long);
static int __devinit vme_user_probe(struct device *, int, int);
static int __devexit vme_user_remove(struct device *, int, int);
static struct file_operations vme_user_fops = ;
static void reset_counters(void)
static int vme_user_open(struct inode *inode, struct file *file)
static int vme_user_release(struct inode *inode, struct file *file)
static ssize_t resource_to_user(int minor, char __user *buf, size_t count,
loff_t *ppos)
static ssize_t resource_from_user(unsigned int minor, const char __user *buf,
size_t count, loff_t *ppos)
static ssize_t buffer_to_user(unsigned int minor, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t buffer_from_user(unsigned int minor, const char __user *buf,
size_t count, loff_t *ppos)
static ssize_t vme_user_read(struct file *file, char __user *buf, size_t count,
loff_t *ppos)
static ssize_t vme_user_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static loff_t vme_user_llseek(struct file *file, loff_t off, int whence)
static int vme_user_ioctl(struct inode *inode, struct file *file,
unsigned int cmd, unsigned long arg)
static long
vme_user_unlocked_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static void buf_unalloc(int num)
static struct vme_driver vme_user_driver = ;
static int __init vme_user_init(void)
static int __devinit vme_user_probe(struct device *dev, int cur_bus,
int cur_slot)
static int __devexit vme_user_remove(struct device *dev, int cur_bus,
int cur_slot)
static void __exit vme_user_exit(void)
MODULE_PARM_DESC(bus, "Enumeration of VMEbus to which the driver is connected");
module_param_array(bus, int, &bus_num, 0);
MODULE_DESCRIPTION("VME User Space Access Driver");
MODULE_AUTHOR("Martyn Welch <martyn.welch@ge.com");
MODULE_LICENSE("GPL");
module_init(vme_user_init);
module_exit(vme_user_exit);
