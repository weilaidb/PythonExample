#define DRVNAME "f71808e_wdt"
#define SIO_F71808FG_LD_WDT	0x07
#define SIO_UNLOCK_KEY		0x87
#define SIO_LOCK_KEY		0xAA
#define SIO_REG_LDSEL		0x07
#define SIO_REG_DEVID		0x20
#define SIO_REG_DEVREV		0x22
#define SIO_REG_MANID		0x23
#define SIO_REG_ROM_ADDR_SEL	0x27
#define SIO_REG_MFUNCT1		0x29
#define SIO_REG_MFUNCT2		0x2a
#define SIO_REG_MFUNCT3		0x2b
#define SIO_REG_ENABLE		0x30
#define SIO_REG_ADDR		0x60
#define SIO_FINTEK_ID		0x1934
#define SIO_F71808_ID		0x0901
#define SIO_F71858_ID		0x0507
#define SIO_F71862_ID		0x0601
#define SIO_F71869_ID		0x0814
#define SIO_F71882_ID		0x0541
#define SIO_F71889_ID		0x0723
#define F71808FG_REG_WDO_CONF		0xf0
#define F71808FG_REG_WDT_CONF		0xf5
#define F71808FG_REG_WD_TIME		0xf6
#define F71808FG_FLAG_WDOUT_EN		7
#define F71808FG_FLAG_WDTMOUT_STS	5
#define F71808FG_FLAG_WD_EN		5
#define F71808FG_FLAG_WD_PULSE		4
#define F71808FG_FLAG_WD_UNIT		3
#define WATCHDOG_TIMEOUT	60
#define WATCHDOG_MAX_TIMEOUT	(60 * 255)
#define WATCHDOG_PULSE_WIDTH	125
#define WATCHDOG_F71862FG_PIN	63
static unsigned short force_id;
module_param(force_id, ushort, 0);
MODULE_PARM_DESC(force_id, "Override the detected device ID");
static const int max_timeout = WATCHDOG_MAX_TIMEOUT;
static int timeout = WATCHDOG_TIMEOUT;
module_param(timeout, int, 0);
MODULE_PARM_DESC(timeout,
"Watchdog timeout in seconds. 1<= timeout <="
__MODULE_STRING(WATCHDOG_MAX_TIMEOUT) " (default="
__MODULE_STRING(WATCHDOG_TIMEOUT) ")");
static unsigned int pulse_width = WATCHDOG_PULSE_WIDTH;
module_param(pulse_width, uint, 0);
MODULE_PARM_DESC(pulse_width,
"Watchdog signal pulse width. 0(=level), 1 ms, 25 ms, 125 ms or 5000 ms"
" (default=" __MODULE_STRING(WATCHDOG_PULSE_WIDTH) ")");
static unsigned int f71862fg_pin = WATCHDOG_F71862FG_PIN;
module_param(f71862fg_pin, uint, 0);
MODULE_PARM_DESC(f71862fg_pin,
"Watchdog f71862fg reset output pin configuration. Choose pin 56 or 63"
" (default=" __MODULE_STRING(WATCHDOG_F71862FG_PIN)")");
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, bool, 0444);
MODULE_PARM_DESC(nowayout, "Disable watchdog shutdown on close");
static unsigned int start_withtimeout;
module_param(start_withtimeout, uint, 0);
MODULE_PARM_DESC(start_withtimeout, "Start watchdog timer on module load with"
" given initial timeout. Zero (default) disables this feature.");
enum chips ;
static const char *f71808e_names[] = ;
static inline int superio_inb(int base, int reg);
static inline int superio_inw(int base, int reg);
static inline void superio_outb(int base, int reg, u8 val);
static inline void superio_set_bit(int base, int reg, int bit);
static inline void superio_clear_bit(int base, int reg, int bit);
static inline int superio_enter(int base);
static inline void superio_select(int base, int ld);
static inline void superio_exit(int base);
struct watchdog_data ;
static struct watchdog_data watchdog = ;
static inline int superio_inb(int base, int reg)
static int superio_inw(int base, int reg)
static inline void superio_outb(int base, int reg, u8 val)
static inline void superio_set_bit(int base, int reg, int bit)
static inline void superio_clear_bit(int base, int reg, int bit)
static inline int superio_enter(int base)
static inline void superio_select(int base, int ld)
static inline void superio_exit(int base)
static int watchdog_set_timeout(int timeout)
static int watchdog_set_pulse_width(unsigned int pw)
static int watchdog_keepalive(void)
static int f71862fg_pin_configure(unsigned short ioaddr)
static int watchdog_start(void)
static int watchdog_stop(void)
static int watchdog_get_status(void)
static bool watchdog_is_running(void)
static int watchdog_open(struct inode *inode, struct file *file)
static int watchdog_release(struct inode *inode, struct file *file)
static ssize_t watchdog_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static long watchdog_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int watchdog_notify_sys(struct notifier_block *this, unsigned long code,
void *unused)
static const struct file_operations watchdog_fops = ;
static struct miscdevice watchdog_miscdev = ;
static struct notifier_block watchdog_notifier = ;
static int __init watchdog_init(int sioaddr)
static int __init f71808e_find(int sioaddr)
static int __init f71808e_init(void)
static void __exit f71808e_exit(void)
MODULE_DESCRIPTION("F71808E Watchdog Driver");
MODULE_AUTHOR("Giel van Schijndel <me@mortis.eu>");
MODULE_LICENSE("GPL");
module_init(f71808e_init);
module_exit(f71808e_exit);
