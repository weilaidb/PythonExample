#define NAME "it8712f_wdt"
MODULE_AUTHOR("Jorge Boncompte - DTI2 <jorge@dti2.net>");
MODULE_DESCRIPTION("IT8712F Watchdog Driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
static int max_units = 255;
static int margin = 60;
module_param(margin, int, 0);
MODULE_PARM_DESC(margin, "Watchdog margin in seconds");
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout, "Disable watchdog shutdown on close");
static unsigned long wdt_open;
static unsigned expect_close;
static spinlock_t io_lock;
static unsigned char revision;
static unsigned short address;
#define	REG		0x2e
#define	VAL		0x2f
#define	LDN		0x07
#define	DEVID		0x20
#define	DEVREV		0x22
#define ACT_REG		0x30
#define BASE_REG	0x60
#define IT8712F_DEVID	0x8712
#define LDN_GPIO	0x07
#define LDN_GAME	0x09
#define WDT_CONTROL	0x71
#define WDT_CONFIG	0x72
#define WDT_TIMEOUT	0x73
#define WDT_RESET_GAME	0x10
#define WDT_RESET_KBD	0x20
#define WDT_RESET_MOUSE	0x40
#define WDT_RESET_CIR	0x80
#define WDT_UNIT_SEC	0x80
#define WDT_OUT_PWROK	0x10
#define WDT_OUT_KRST	0x40
static int wdt_control_reg = WDT_RESET_GAME;
module_param(wdt_control_reg, int, 0);
MODULE_PARM_DESC(wdt_control_reg, "Value to write to watchdog control "
"register. The default WDT_RESET_GAME resets the timer on "
"game port reads that this driver generates. You can also "
"use KBD, MOUSE or CIR if you have some external way to "
"generate those interrupts.");
static int superio_inb(int reg)
static void superio_outb(int val, int reg)
static int superio_inw(int reg)
static inline void superio_select(int ldn)
static inline void superio_enter(void)
static inline void superio_exit(void)
static inline void it8712f_wdt_ping(void)
static void it8712f_wdt_update_margin(void)
static int it8712f_wdt_get_status(void)
static void it8712f_wdt_enable(void)
static void it8712f_wdt_disable(void)
static int it8712f_wdt_notify(struct notifier_block *this,
unsigned long code, void *unused)
static struct notifier_block it8712f_wdt_notifier = ;
static ssize_t it8712f_wdt_write(struct file *file, const char __user *data,
size_t len, loff_t *ppos)
static long it8712f_wdt_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int it8712f_wdt_open(struct inode *inode, struct file *file)
static int it8712f_wdt_release(struct inode *inode, struct file *file)
static const struct file_operations it8712f_wdt_fops = ;
static struct miscdevice it8712f_wdt_miscdev = ;
static int __init it8712f_wdt_find(unsigned short *address)
static int __init it8712f_wdt_init(void)
static void __exit it8712f_wdt_exit(void)
module_init(it8712f_wdt_init);
module_exit(it8712f_wdt_exit);
