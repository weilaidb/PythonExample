#define ZF_IOBASE	0x218
#define INDEX		0x218
#define DATA_B		0x219
#define DATA_W		0x21A
#define DATA_D		0x21A
#define ZFL_VERSION	0x02
#define CONTROL		0x10
#define STATUS		0x12
#define COUNTER_1	0x0C
#define COUNTER_2	0x0E
#define PULSE_LEN	0x0F
#define ENABLE_WD1	0x0001
#define ENABLE_WD2	0x0002
#define RESET_WD1	0x0010
#define RESET_WD2	0x0020
#define GEN_SCI		0x0100
#define GEN_NMI		0x0200
#define GEN_SMI		0x0400
#define GEN_RESET	0x0800
#define WD1	0
#define WD2	1
#define zf_writew(port, data)
#define zf_writeb(port, data)
#define zf_get_ZFL_version()   zf_readw(ZFL_VERSION)
static unsigned short zf_readw(unsigned char port)
MODULE_AUTHOR("Fernando Fuganti <fuganti@conectiva.com.br>");
MODULE_DESCRIPTION("MachZ ZF-Logic Watchdog driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout,
"Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
#define PFX "machzwd"
static const struct watchdog_info zf_info = ;
static int action;
module_param(action, int, 0);
MODULE_PARM_DESC(action, "after watchdog resets, generate: "
"0 = RESET(*)  1 = SMI  2 = NMI  3 = SCI");
static void zf_ping(unsigned long data);
static int zf_action = GEN_RESET;
static unsigned long zf_is_open;
static char zf_expect_close;
static DEFINE_SPINLOCK(zf_port_lock);
static DEFINE_TIMER(zf_timer, zf_ping, 0, 0);
static unsigned long next_heartbeat;
#define ZF_USER_TIMEO (HZ*10)
#define ZF_HW_TIMEO (HZ/2)
#define ZF_CTIMEOUT 0xffff
#	define dprintk(format, args...)
#	define dprintk(format, args...) printk(KERN_DEBUG PFX \
":%s:%d: " format, __func__, __LINE__ , ## args)
static inline void zf_set_status(unsigned char new)
static inline unsigned short zf_get_control(void)
static inline void zf_set_control(unsigned short new)
static inline void zf_set_timer(unsigned short new, unsigned char n)
static void zf_timer_off(void)
static void zf_timer_on(void)
static void zf_ping(unsigned long data)
static ssize_t zf_write(struct file *file, const char __user *buf, size_t count,
loff_t *ppos)
static long zf_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static int zf_open(struct inode *inode, struct file *file)
static int zf_close(struct inode *inode, struct file *file)
static int zf_notify_sys(struct notifier_block *this, unsigned long code,
void *unused)
static const struct file_operations zf_fops = ;
static struct miscdevice zf_miscdev = ;
static struct notifier_block zf_notifier = ;
static void __init zf_show_action(int act)
static int __init zf_init(void)
static void __exit zf_exit(void)
module_init(zf_init);
module_exit(zf_exit);
