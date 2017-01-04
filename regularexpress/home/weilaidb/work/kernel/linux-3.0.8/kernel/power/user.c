#define SNAPSHOT_SET_SWAP_FILE	_IOW(SNAPSHOT_IOC_MAGIC, 10, unsigned int)
#define SNAPSHOT_PMOPS		_IOW(SNAPSHOT_IOC_MAGIC, 12, unsigned int)
#define PMOPS_PREPARE	1
#define PMOPS_ENTER	2
#define PMOPS_FINISH	3
#define SNAPSHOT_ATOMIC_SNAPSHOT	_IOW(SNAPSHOT_IOC_MAGIC, 3, void *)
#define SNAPSHOT_SET_IMAGE_SIZE		_IOW(SNAPSHOT_IOC_MAGIC, 6, unsigned long)
#define SNAPSHOT_AVAIL_SWAP		_IOR(SNAPSHOT_IOC_MAGIC, 7, void *)
#define SNAPSHOT_GET_SWAP_PAGE		_IOR(SNAPSHOT_IOC_MAGIC, 8, void *)
#define SNAPSHOT_MINOR	231
static struct snapshot_data  snapshot_state;
atomic_t snapshot_device_available = ATOMIC_INIT(1);
static int snapshot_open(struct inode *inode, struct file *filp)
static int snapshot_release(struct inode *inode, struct file *filp)
static ssize_t snapshot_read(struct file *filp, char __user *buf,
size_t count, loff_t *offp)
static ssize_t snapshot_write(struct file *filp, const char __user *buf,
size_t count, loff_t *offp)
static void snapshot_deprecated_ioctl(unsigned int cmd)
static long snapshot_ioctl(struct file *filp, unsigned int cmd,
unsigned long arg)
static const struct file_operations snapshot_fops = ;
static struct miscdevice snapshot_device = ;
static int __init snapshot_device_init(void)
;
device_initcall(snapshot_device_init);
