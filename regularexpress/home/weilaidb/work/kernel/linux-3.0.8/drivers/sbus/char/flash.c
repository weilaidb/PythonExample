static DEFINE_MUTEX(flash_mutex);
static DEFINE_SPINLOCK(flash_lock);
static struct  flash;
#define FLASH_MINOR	152
static int
flash_mmap(struct file *file, struct vm_area_struct *vma)
static long long
flash_llseek(struct file *file, long long offset, int origin)
static ssize_t
flash_read(struct file * file, char __user * buf,
size_t count, loff_t *ppos)
static int
flash_open(struct inode *inode, struct file *file)
static int
flash_release(struct inode *inode, struct file *file)
static const struct file_operations flash_fops = ;
static struct miscdevice flash_dev = ;
static int __devinit flash_probe(struct platform_device *op)
static int __devexit flash_remove(struct platform_device *op)
static const struct of_device_id flash_match[] = ;
MODULE_DEVICE_TABLE(of, flash_match);
static struct platform_driver flash_driver = ;
static int __init flash_init(void)
static void __exit flash_cleanup(void)
module_init(flash_init);
module_exit(flash_cleanup);
MODULE_LICENSE("GPL");
