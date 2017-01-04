#define NVRAM_VERSION "1.0"
#define NVRAM_SIZE	8192
static loff_t nvram_llseek(struct file *file, loff_t offset, int origin)
static ssize_t read_nvram(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t write_nvram(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static long nvram_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
const struct file_operations nvram_fops = ;
static struct miscdevice nvram_dev = ;
int __init nvram_init(void)
void __exit nvram_cleanup(void)
module_init(nvram_init);
module_exit(nvram_cleanup);
MODULE_LICENSE("GPL");
