#define RNG_MODULE_NAME		"hw_random"
#define PFX			RNG_MODULE_NAME ": "
#define RNG_MISCDEV_MINOR	183
static struct hwrng *current_rng;
static LIST_HEAD(rng_list);
static DEFINE_MUTEX(rng_mutex);
static int data_avail;
static u8 rng_buffer[SMP_CACHE_BYTES < 32 ? 32 : SMP_CACHE_BYTES]
__cacheline_aligned;
static inline int hwrng_init(struct hwrng *rng)
static inline void hwrng_cleanup(struct hwrng *rng)
static int rng_dev_open(struct inode *inode, struct file *filp)
static inline int rng_get_data(struct hwrng *rng, u8 *buffer, size_t size,
int wait)
static ssize_t rng_dev_read(struct file *filp, char __user *buf,
size_t size, loff_t *offp)
static const struct file_operations rng_chrdev_ops = ;
static struct miscdevice rng_miscdev = ;
static ssize_t hwrng_attr_current_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static ssize_t hwrng_attr_current_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t hwrng_attr_available_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(rng_current, S_IRUGO | S_IWUSR,
hwrng_attr_current_show,
hwrng_attr_current_store);
static DEVICE_ATTR(rng_available, S_IRUGO,
hwrng_attr_available_show,
NULL);
static void unregister_miscdev(void)
static int register_miscdev(void)
int hwrng_register(struct hwrng *rng)
EXPORT_SYMBOL_GPL(hwrng_register);
void hwrng_unregister(struct hwrng *rng)
EXPORT_SYMBOL_GPL(hwrng_unregister);
MODULE_DESCRIPTION("H/W Random Number Generator (RNG) driver");
MODULE_LICENSE("GPL");
