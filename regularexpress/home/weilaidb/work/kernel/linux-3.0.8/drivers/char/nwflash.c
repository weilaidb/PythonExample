#define	NWFLASH_VERSION "6.4"
static DEFINE_MUTEX(flash_mutex);
static void kick_open(void);
static int get_flash_id(void);
static int erase_block(int nBlock);
static int write_block(unsigned long p, const char __user *buf, int count);
#define KFLASH_SIZE	1024*1024
#define KFLASH_SIZE4	4*1024*1024
#define KFLASH_ID	0x89A6
#define KFLASH_ID4	0xB0D4
static int flashdebug;
static int gbWriteEnable;
static int gbWriteBase64Enable;
static volatile unsigned char *FLASH_BASE;
static int gbFlashSize = KFLASH_SIZE;
static DEFINE_MUTEX(nwflash_mutex);
static int get_flash_id(void)
static long flash_ioctl(struct file *filep, unsigned int cmd, unsigned long arg)
static ssize_t flash_read(struct file *file, char __user *buf, size_t size,
loff_t *ppos)
static ssize_t flash_write(struct file *file, const char __user *buf,
size_t size, loff_t * ppos)
static loff_t flash_llseek(struct file *file, loff_t offset, int orig)
static int erase_block(int nBlock)
static int write_block(unsigned long p, const char __user *buf, int count)
static void kick_open(void)
static const struct file_operations flash_fops =
;
static struct miscdevice flash_miscdev =
;
static int __init nwflash_init(void)
static void __exit nwflash_exit(void)
MODULE_LICENSE("GPL");
module_param(flashdebug, bool, 0644);
module_init(nwflash_init);
module_exit(nwflash_exit);
