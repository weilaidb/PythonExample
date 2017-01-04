#define MAX_RETRY 16
#define IPC_SET_WATCHDOG_TIMER	0xF8
static int timer_margin = DEFAULT_SOFT_TO_HARD_MARGIN;
module_param(timer_margin, int, 0);
MODULE_PARM_DESC(timer_margin,
"Watchdog timer margin"
"Time between interrupt and resetting the system"
"The range is from 1 to 160"
"This is the time for all keep alives to arrive");
static int timer_set = DEFAULT_TIME;
module_param(timer_set, int, 0);
MODULE_PARM_DESC(timer_set,
"Default Watchdog timer setting"
"Complete cycle time"
"The range is from 1 to 170"
"This is the time for all keep alives to arrive");
static int force_boot;
module_param(force_boot, int, 0);
MODULE_PARM_DESC(force_boot,
"A value of 1 means that the driver will reboot"
"the system immediately if the /dev/watchdog device is closed"
"A value of 0 means that when /dev/watchdog device is closed"
"the watchdog timer will be refreshed for one more interval"
"of length: timer_set. At the end of this interval, the"
"watchdog timer will reset the system."
);
static struct intel_scu_watchdog_dev watchdog_device;
static void watchdog_fire(void)
static int check_timer_margin(int new_margin)
static int watchdog_set_ipc(int soft_threshold, int threshold)
;
static irqreturn_t watchdog_timer_interrupt(int irq, void *dev_id)
static int intel_scu_keepalive(void)
static int intel_scu_stop(void)
static int intel_scu_set_heartbeat(u32 t)
static int intel_scu_open(struct inode *inode, struct file *file)
static int intel_scu_release(struct inode *inode, struct file *file)
static ssize_t intel_scu_write(struct file *file,
char const *data,
size_t len,
loff_t *ppos)
static long intel_scu_ioctl(struct file *file,
unsigned int cmd,
unsigned long arg)
static int intel_scu_notify_sys(struct notifier_block *this,
unsigned long code,
void *another_unused)
static const struct file_operations intel_scu_fops = ;
static int __init intel_scu_watchdog_init(void)
static void __exit intel_scu_watchdog_exit(void)
late_initcall(intel_scu_watchdog_init);
module_exit(intel_scu_watchdog_exit);
MODULE_AUTHOR("Intel Corporation");
MODULE_DESCRIPTION("Intel SCU Watchdog Device Driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
MODULE_VERSION(WDT_VER);
