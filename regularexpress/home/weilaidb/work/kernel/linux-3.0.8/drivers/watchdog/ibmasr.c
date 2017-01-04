enum ;
#define PFX "ibmasr: "
#define TOPAZ_ASR_REG_OFFSET	4
#define TOPAZ_ASR_TOGGLE	0x40
#define TOPAZ_ASR_DISABLE	0x80
#define PEARL_BASE	0xe04
#define PEARL_WRITE	0xe06
#define PEARL_READ	0xe07
#define PEARL_ASR_DISABLE_MASK	0x80
#define PEARL_ASR_TOGGLE_MASK	0x40
#define JASPER_ASR_REG_OFFSET	0x38
#define JASPER_ASR_DISABLE_MASK	0x01
#define JASPER_ASR_TOGGLE_MASK	0x02
#define JUNIPER_BASE_ADDRESS	0x54b
#define JUNIPER_ASR_DISABLE_MASK 0x01
#define JUNIPER_ASR_TOGGLE_MASK	0x02
#define SPRUCE_BASE_ADDRESS	0x118e
#define SPRUCE_ASR_DISABLE_MASK	0x01
#define SPRUCE_ASR_TOGGLE_MASK	0x02
static int nowayout = WATCHDOG_NOWAYOUT;
static unsigned long asr_is_open;
static char asr_expect_close;
static unsigned int asr_type, asr_base, asr_length;
static unsigned int asr_read_addr, asr_write_addr;
static unsigned char asr_toggle_mask, asr_disable_mask;
static spinlock_t asr_lock;
static void __asr_toggle(void)
static void asr_toggle(void)
static void asr_enable(void)
static void asr_disable(void)
static int __init asr_get_base_address(void)
static ssize_t asr_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static long asr_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static int asr_open(struct inode *inode, struct file *file)
static int asr_release(struct inode *inode, struct file *file)
static const struct file_operations asr_fops = ;
static struct miscdevice asr_miscdev = ;
struct ibmasr_id ;
static struct ibmasr_id __initdata ibmasr_id_table[] = ;
static int __init ibmasr_init(void)
static void __exit ibmasr_exit(void)
module_init(ibmasr_init);
module_exit(ibmasr_exit);
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout,
"Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
MODULE_DESCRIPTION("IBM Automatic Server Restart driver");
MODULE_AUTHOR("Andrey Panin");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
