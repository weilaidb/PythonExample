#define HAVE_DIE_NMI
#define	PFX "IPMI Watchdog: "
#define WDOG_DONT_LOG		(1 << 7)
#define WDOG_DONT_STOP_ON_SET	(1 << 6)
#define WDOG_SET_TIMER_USE(byte, use) \
byte = ((byte) & 0xf8) | ((use) & 0x7)
#define WDOG_GET_TIMER_USE(byte) ((byte) & 0x7)
#define WDOG_TIMER_USE_BIOS_FRB2	1
#define WDOG_TIMER_USE_BIOS_POST	2
#define WDOG_TIMER_USE_OS_LOAD		3
#define WDOG_TIMER_USE_SMS_OS		4
#define WDOG_TIMER_USE_OEM		5
#define WDOG_SET_PRETIMEOUT_ACT(byte, use) \
byte = ((byte) & 0x8f) | (((use) & 0x7) << 4)
#define WDOG_GET_PRETIMEOUT_ACT(byte) (((byte) >> 4) & 0x7)
#define WDOG_PRETIMEOUT_NONE		0
#define WDOG_PRETIMEOUT_SMI		1
#define WDOG_PRETIMEOUT_NMI		2
#define WDOG_PRETIMEOUT_MSG_INT		3
#define WDOG_PREOP_NONE		0
#define WDOG_PREOP_PANIC	1
#define WDOG_PREOP_GIVE_DATA	2
#define WDOG_SET_TIMEOUT_ACT(byte, use) \
byte = ((byte) & 0xf8) | ((use) & 0x7)
#define WDOG_GET_TIMEOUT_ACT(byte) ((byte) & 0x7)
#define WDOG_TIMEOUT_NONE		0
#define WDOG_TIMEOUT_RESET		1
#define WDOG_TIMEOUT_POWER_DOWN		2
#define WDOG_TIMEOUT_POWER_CYCLE	3
#define WDOG_EXPIRE_CLEAR_BIOS_FRB2	(1 << 1)
#define WDOG_EXPIRE_CLEAR_BIOS_POST	(1 << 2)
#define WDOG_EXPIRE_CLEAR_OS_LOAD	(1 << 3)
#define WDOG_EXPIRE_CLEAR_SMS_OS	(1 << 4)
#define WDOG_EXPIRE_CLEAR_OEM		(1 << 5)
#define WDOG_SET_TIMEOUT(byte1, byte2, val) \
(byte1) = (((val) * 10) & 0xff), (byte2) = (((val) * 10) >> 8)
#define WDOG_GET_TIMEOUT(byte1, byte2) \
(((byte1) | ((byte2) << 8)) / 10)
#define IPMI_WDOG_RESET_TIMER		0x22
#define IPMI_WDOG_SET_TIMER		0x24
#define IPMI_WDOG_GET_TIMER		0x25
#define	WDIOC_GETTIMEOUT        _IOW(WATCHDOG_IOCTL_BASE, 20, int)
#define	WDIOC_SET_PRETIMEOUT     _IOW(WATCHDOG_IOCTL_BASE, 21, int)
#define	WDIOC_GET_PRETIMEOUT     _IOW(WATCHDOG_IOCTL_BASE, 22, int)
static DEFINE_MUTEX(ipmi_watchdog_mutex);
static int nowayout = WATCHDOG_NOWAYOUT;
static ipmi_user_t watchdog_user;
static int watchdog_ifnum;
static int timeout = 10;
static int pretimeout;
static unsigned char action_val = WDOG_TIMEOUT_RESET;
static char action[16] = "reset";
static unsigned char preaction_val = WDOG_PRETIMEOUT_NONE;
static char preaction[16] = "pre_none";
static unsigned char preop_val = WDOG_PREOP_NONE;
static char preop[16] = "preop_none";
static DEFINE_SPINLOCK(ipmi_read_lock);
static char data_to_read;
static DECLARE_WAIT_QUEUE_HEAD(read_q);
static struct fasync_struct *fasync_q;
static char pretimeout_since_last_heartbeat;
static char expect_close;
static int ifnum_to_use = -1;
#define IPMI_SET_TIMEOUT_NO_HB			0
#define IPMI_SET_TIMEOUT_HB_IF_NECESSARY	1
#define IPMI_SET_TIMEOUT_FORCE_HB		2
static int ipmi_set_timeout(int do_heartbeat);
static void ipmi_register_watchdog(int ipmi_intf);
static void ipmi_unregister_watchdog(int ipmi_intf);
static int start_now;
static int set_param_timeout(const char *val, const struct kernel_param *kp)
static struct kernel_param_ops param_ops_timeout = ;
#define param_check_timeout param_check_int
typedef int (*action_fn)(const char *intval, char *outval);
static int action_op(const char *inval, char *outval);
static int preaction_op(const char *inval, char *outval);
static int preop_op(const char *inval, char *outval);
static void check_parms(void);
static int set_param_str(const char *val, const struct kernel_param *kp)
static int get_param_str(char *buffer, const struct kernel_param *kp)
static int set_param_wdog_ifnum(const char *val, const struct kernel_param *kp)
static struct kernel_param_ops param_ops_wdog_ifnum = ;
#define param_check_wdog_ifnum param_check_int
static struct kernel_param_ops param_ops_str = ;
module_param(ifnum_to_use, wdog_ifnum, 0644);
MODULE_PARM_DESC(ifnum_to_use, "The interface number to use for the watchdog "
"timer.  Setting to -1 defaults to the first registered "
"interface");
module_param(timeout, timeout, 0644);
MODULE_PARM_DESC(timeout, "Timeout value in seconds.");
module_param(pretimeout, timeout, 0644);
MODULE_PARM_DESC(pretimeout, "Pretimeout value in seconds.");
module_param_cb(action, &param_ops_str, action_op, 0644);
MODULE_PARM_DESC(action, "Timeout action. One of: "
"reset, none, power_cycle, power_off.");
module_param_cb(preaction, &param_ops_str, preaction_op, 0644);
MODULE_PARM_DESC(preaction, "Pretimeout action.  One of: "
"pre_none, pre_smi, pre_nmi, pre_int.");
module_param_cb(preop, &param_ops_str, preop_op, 0644);
MODULE_PARM_DESC(preop, "Pretimeout driver operation.  One of: "
"preop_none, preop_panic, preop_give_data.");
module_param(start_now, int, 0444);
MODULE_PARM_DESC(start_now, "Set to 1 to start the watchdog as"
"soon as the driver is loaded.");
module_param(nowayout, int, 0644);
MODULE_PARM_DESC(nowayout, "Watchdog cannot be stopped once started "
"(default=CONFIG_WATCHDOG_NOWAYOUT)");
static unsigned char ipmi_watchdog_state = WDOG_TIMEOUT_NONE;
static int ipmi_ignore_heartbeat;
static unsigned long ipmi_wdog_open;
static int ipmi_start_timer_on_heartbeat;
static unsigned char ipmi_version_major;
static unsigned char ipmi_version_minor;
static atomic_t preop_panic_excl = ATOMIC_INIT(-1);
static int testing_nmi;
static int nmi_handler_registered;
static int ipmi_heartbeat(void);
static atomic_t set_timeout_tofree = ATOMIC_INIT(0);
static DEFINE_MUTEX(set_timeout_lock);
static DECLARE_COMPLETION(set_timeout_wait);
static void set_timeout_free_smi(struct ipmi_smi_msg *msg)
static void set_timeout_free_recv(struct ipmi_recv_msg *msg)
static struct ipmi_smi_msg set_timeout_smi_msg = ;
static struct ipmi_recv_msg set_timeout_recv_msg = ;
static int i_ipmi_set_timeout(struct ipmi_smi_msg  *smi_msg,
struct ipmi_recv_msg *recv_msg,
int                  *send_heartbeat_now)
static int ipmi_set_timeout(int do_heartbeat)
static atomic_t panic_done_count = ATOMIC_INIT(0);
static void panic_smi_free(struct ipmi_smi_msg *msg)
static void panic_recv_free(struct ipmi_recv_msg *msg)
static struct ipmi_smi_msg panic_halt_heartbeat_smi_msg = ;
static struct ipmi_recv_msg panic_halt_heartbeat_recv_msg = ;
static void panic_halt_ipmi_heartbeat(void)
static struct ipmi_smi_msg panic_halt_smi_msg = ;
static struct ipmi_recv_msg panic_halt_recv_msg = ;
static void panic_halt_ipmi_set_timeout(void)
static atomic_t heartbeat_tofree = ATOMIC_INIT(0);
static DEFINE_MUTEX(heartbeat_lock);
static DECLARE_COMPLETION(heartbeat_wait);
static void heartbeat_free_smi(struct ipmi_smi_msg *msg)
static void heartbeat_free_recv(struct ipmi_recv_msg *msg)
static struct ipmi_smi_msg heartbeat_smi_msg = ;
static struct ipmi_recv_msg heartbeat_recv_msg = ;
static int ipmi_heartbeat(void)
static struct watchdog_info ident = ;
static int ipmi_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static long ipmi_unlocked_ioctl(struct file *file,
unsigned int cmd,
unsigned long arg)
static ssize_t ipmi_write(struct file *file,
const char  __user *buf,
size_t      len,
loff_t      *ppos)
static ssize_t ipmi_read(struct file *file,
char        __user *buf,
size_t      count,
loff_t      *ppos)
static int ipmi_open(struct inode *ino, struct file *filep)
static unsigned int ipmi_poll(struct file *file, poll_table *wait)
static int ipmi_fasync(int fd, struct file *file, int on)
static int ipmi_close(struct inode *ino, struct file *filep)
static const struct file_operations ipmi_wdog_fops = ;
static struct miscdevice ipmi_wdog_miscdev = ;
static void ipmi_wdog_msg_handler(struct ipmi_recv_msg *msg,
void                 *handler_data)
static void ipmi_wdog_pretimeout_handler(void *handler_data)
static struct ipmi_user_hndl ipmi_hndlrs = ;
static void ipmi_register_watchdog(int ipmi_intf)
static void ipmi_unregister_watchdog(int ipmi_intf)
static int
ipmi_nmi(struct notifier_block *self, unsigned long val, void *data)
static struct notifier_block ipmi_nmi_handler = ;
static int wdog_reboot_handler(struct notifier_block *this,
unsigned long         code,
void                  *unused)
static struct notifier_block wdog_reboot_notifier = ;
static int wdog_panic_handler(struct notifier_block *this,
unsigned long         event,
void                  *unused)
static struct notifier_block wdog_panic_notifier = ;
static void ipmi_new_smi(int if_num, struct device *device)
static void ipmi_smi_gone(int if_num)
static struct ipmi_smi_watcher smi_watcher = ;
static int action_op(const char *inval, char *outval)
static int preaction_op(const char *inval, char *outval)
static int preop_op(const char *inval, char *outval)
static void check_parms(void)
static int __init ipmi_wdog_init(void)
static void __exit ipmi_wdog_exit(void)
module_exit(ipmi_wdog_exit);
module_init(ipmi_wdog_init);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Corey Minyard <minyard@mvista.com>");
MODULE_DESCRIPTION("watchdog timer based upon the IPMI interface.");
