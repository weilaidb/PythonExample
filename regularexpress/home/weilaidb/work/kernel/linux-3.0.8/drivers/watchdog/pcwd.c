#define WATCHDOG_VERSION "1.20"
#define WATCHDOG_DATE "18 Feb 2007"
#define WATCHDOG_DRIVER_NAME "ISA-PC Watchdog"
#define WATCHDOG_NAME "pcwd"
#define PFX WATCHDOG_NAME ": "
#define DRIVER_VERSION WATCHDOG_DRIVER_NAME " driver, v" WATCHDOG_VERSION "\n"
#define	PCWD_REVISION_A		1
#define	PCWD_REVISION_C		2
#define PCWD_ISA_NR_CARDS	3
static int pcwd_ioports[] = ;
#define WD_WDRST		0x01
#define WD_T110			0x02
#define WD_HRTBT		0x04
#define WD_RLY2			0x08
#define WD_SRLY2		0x80
#define WD_REVC_WTRP		0x01
#define WD_REVC_HRBT		0x02
#define WD_REVC_TTRP		0x04
#define WD_REVC_RL2A		0x08
#define WD_REVC_RL1A		0x10
#define WD_REVC_R2DS		0x40
#define WD_REVC_RLY2		0x80
#define WD_WDIS			0x10
#define WD_ENTP			0x20
#define WD_SSEL			0x40
#define WD_WCMD			0x80
#define ISA_COMMAND_TIMEOUT     1000
#define CMD_ISA_IDLE			0x00
#define CMD_ISA_VERSION_INTEGER		0x01
#define CMD_ISA_VERSION_TENTH		0x02
#define CMD_ISA_VERSION_HUNDRETH	0x03
#define CMD_ISA_VERSION_MINOR		0x04
#define CMD_ISA_SWITCH_SETTINGS		0x05
#define CMD_ISA_RESET_PC		0x06
#define CMD_ISA_ARM_0			0x07
#define CMD_ISA_ARM_30			0x08
#define CMD_ISA_ARM_60			0x09
#define CMD_ISA_DELAY_TIME_2SECS	0x0A
#define CMD_ISA_DELAY_TIME_4SECS	0x0B
#define CMD_ISA_DELAY_TIME_8SECS	0x0C
#define CMD_ISA_RESET_RELAYS		0x0D
static const int heartbeat_tbl[] = ;
#define WDT_INTERVAL (HZ/2+1)
static int cards_found;
static unsigned long open_allowed;
static char expect_close;
static int temp_panic;
static struct  pcwd_private;
#define QUIET	0
#define VERBOSE	1
#define DEBUG	2
static int debug = QUIET;
module_param(debug, int, 0);
MODULE_PARM_DESC(debug,
"Debug level: 0=Quiet, 1=Verbose, 2=Debug (default=0)");
#define WATCHDOG_HEARTBEAT 0
static int heartbeat = WATCHDOG_HEARTBEAT;
module_param(heartbeat, int, 0);
MODULE_PARM_DESC(heartbeat, "Watchdog heartbeat in seconds. "
"(2 <= heartbeat <= 7200 or 0=delay-time from dip-switches, default="
__MODULE_STRING(WATCHDOG_HEARTBEAT) ")");
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout,
"Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
static int send_isa_command(int cmd)
static int set_command_mode(void)
static void unset_command_mode(void)
static inline void pcwd_check_temperature_support(void)
static inline void pcwd_get_firmware(void)
static inline int pcwd_get_option_switches(void)
static void pcwd_show_card_info(void)
static void pcwd_timer_ping(unsigned long data)
static int pcwd_start(void)
static int pcwd_stop(void)
static int pcwd_keepalive(void)
static int pcwd_set_heartbeat(int t)
static int pcwd_get_status(int *status)
static int pcwd_clear_status(void)
static int pcwd_get_temperature(int *temperature)
static long pcwd_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static ssize_t pcwd_write(struct file *file, const char __user *buf, size_t len,
loff_t *ppos)
static int pcwd_open(struct inode *inode, struct file *file)
static int pcwd_close(struct inode *inode, struct file *file)
static ssize_t pcwd_temp_read(struct file *file, char __user *buf, size_t count,
loff_t *ppos)
static int pcwd_temp_open(struct inode *inode, struct file *file)
static int pcwd_temp_close(struct inode *inode, struct file *file)
static const struct file_operations pcwd_fops = ;
static struct miscdevice pcwd_miscdev = ;
static const struct file_operations pcwd_temp_fops = ;
static struct miscdevice temp_miscdev = ;
static inline int get_revision(void)
static int __devinit pcwd_isa_match(struct device *dev, unsigned int id)
static int __devinit pcwd_isa_probe(struct device *dev, unsigned int id)
static int __devexit pcwd_isa_remove(struct device *dev, unsigned int id)
static void pcwd_isa_shutdown(struct device *dev, unsigned int id)
static struct isa_driver pcwd_isa_driver = ;
static int __init pcwd_init_module(void)
static void __exit pcwd_cleanup_module(void)
module_init(pcwd_init_module);
module_exit(pcwd_cleanup_module);
MODULE_AUTHOR("Ken Hollis <kenji@bitgate.com>, "
"Wim Van Sebroeck <wim@iguana.be>");
MODULE_DESCRIPTION("Berkshire ISA-PC Watchdog driver");
MODULE_VERSION(WATCHDOG_VERSION);
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
MODULE_ALIAS_MISCDEV(TEMP_MINOR);
