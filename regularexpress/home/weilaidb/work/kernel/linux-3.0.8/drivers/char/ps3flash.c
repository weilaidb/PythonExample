#define DEVICE_NAME		"ps3flash"
#define FLASH_BLOCK_SIZE	(256*1024)
struct ps3flash_private ;
static struct ps3_storage_device *ps3flash_dev;
static int ps3flash_read_write_sectors(struct ps3_storage_device *dev,
u64 start_sector, int write)
static int ps3flash_writeback(struct ps3_storage_device *dev)
static int ps3flash_fetch(struct ps3_storage_device *dev, u64 start_sector)
static loff_t ps3flash_llseek(struct file *file, loff_t offset, int origin)
static ssize_t ps3flash_read(char __user *userbuf, void *kernelbuf,
size_t count, loff_t *pos)
static ssize_t ps3flash_write(const char __user *userbuf,
const void *kernelbuf, size_t count, loff_t *pos)
static ssize_t ps3flash_user_read(struct file *file, char __user *buf,
size_t count, loff_t *pos)
static ssize_t ps3flash_user_write(struct file *file, const char __user *buf,
size_t count, loff_t *pos)
static ssize_t ps3flash_kernel_read(void *buf, size_t count, loff_t pos)
static ssize_t ps3flash_kernel_write(const void *buf, size_t count,
loff_t pos)
static int ps3flash_flush(struct file *file, fl_owner_t id)
static int ps3flash_fsync(struct file *file, int datasync)
static irqreturn_t ps3flash_interrupt(int irq, void *data)
static const struct file_operations ps3flash_fops = ;
static const struct ps3_os_area_flash_ops ps3flash_kernel_ops = ;
static struct miscdevice ps3flash_misc = ;
static int __devinit ps3flash_probe(struct ps3_system_bus_device *_dev)
static int ps3flash_remove(struct ps3_system_bus_device *_dev)
static struct ps3_system_bus_driver ps3flash = ;
static int __init ps3flash_init(void)
static void __exit ps3flash_exit(void)
module_init(ps3flash_init);
module_exit(ps3flash_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("PS3 FLASH ROM Storage Driver");
MODULE_AUTHOR("Sony Corporation");
MODULE_ALIAS(PS3_MODULE_ALIAS_STOR_FLASH);
