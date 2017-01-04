static int debug = 1;
static int debug;
#undef dbg
#define dbg(format, arg...) \
do  while (0)
#define DRIVER_VERSION "1.02"
#define DRIVER_AUTHOR "Wim Van Sebroeck <wim@iguana.be>"
#define DRIVER_DESC "Berkshire USB-PC Watchdog driver"
#define DRIVER_LICENSE "GPL"
#define DRIVER_NAME "pcwd_usb"
#define PFX DRIVER_NAME ": "
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE(DRIVER_LICENSE);
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
MODULE_ALIAS_MISCDEV(TEMP_MINOR);
module_param(debug, int, 0);
MODULE_PARM_DESC(debug, "Debug enabled or not");
#define WATCHDOG_HEARTBEAT 0
static int heartbeat = WATCHDOG_HEARTBEAT;
module_param(heartbeat, int, 0);
MODULE_PARM_DESC(heartbeat, "Watchdog heartbeat in seconds. "
"(0<heartbeat<65536 or 0=delay-time from dip-switches, default="
__MODULE_STRING(WATCHDOG_HEARTBEAT) ")");
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout, "Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
#define USB_PCWD_VENDOR_ID	0x0c98
#define USB_PCWD_PRODUCT_ID	0x1140
static struct usb_device_id usb_pcwd_table[] = ;
MODULE_DEVICE_TABLE(usb, usb_pcwd_table);
#define USB_COMMAND_TIMEOUT	250
#define CMD_READ_TEMP			0x02
#define CMD_TRIGGER			CMD_READ_TEMP
#define CMD_GET_STATUS			0x04
#define CMD_GET_FIRMWARE_VERSION	0x08
#define CMD_GET_DIP_SWITCH_SETTINGS	0x0c
#define CMD_READ_WATCHDOG_TIMEOUT	0x18
#define CMD_WRITE_WATCHDOG_TIMEOUT	0x19
#define CMD_ENABLE_WATCHDOG		0x30
#define CMD_DISABLE_WATCHDOG		CMD_ENABLE_WATCHDOG
static const int heartbeat_tbl[] = ;
static int cards_found;
static unsigned long is_active;
static char expect_release;
struct usb_pcwd_private ;
static struct usb_pcwd_private *usb_pcwd_device;
static DEFINE_MUTEX(disconnect_mutex);
static int usb_pcwd_probe(struct usb_interface *interface,
const struct usb_device_id *id);
static void usb_pcwd_disconnect(struct usb_interface *interface);
static struct usb_driver usb_pcwd_driver = ;
static void usb_pcwd_intr_done(struct urb *urb)
static int usb_pcwd_send_command(struct usb_pcwd_private *usb_pcwd,
unsigned char cmd, unsigned char *msb, unsigned char *lsb)
static int usb_pcwd_start(struct usb_pcwd_private *usb_pcwd)
static int usb_pcwd_stop(struct usb_pcwd_private *usb_pcwd)
static int usb_pcwd_keepalive(struct usb_pcwd_private *usb_pcwd)
static int usb_pcwd_set_heartbeat(struct usb_pcwd_private *usb_pcwd, int t)
static int usb_pcwd_get_temperature(struct usb_pcwd_private *usb_pcwd,
int *temperature)
static int usb_pcwd_get_timeleft(struct usb_pcwd_private *usb_pcwd,
int *time_left)
static ssize_t usb_pcwd_write(struct file *file, const char __user *data,
size_t len, loff_t *ppos)
static long usb_pcwd_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int usb_pcwd_open(struct inode *inode, struct file *file)
static int usb_pcwd_release(struct inode *inode, struct file *file)
static ssize_t usb_pcwd_temperature_read(struct file *file, char __user *data,
size_t len, loff_t *ppos)
static int usb_pcwd_temperature_open(struct inode *inode, struct file *file)
static int usb_pcwd_temperature_release(struct inode *inode, struct file *file)
static int usb_pcwd_notify_sys(struct notifier_block *this, unsigned long code,
void *unused)
static const struct file_operations usb_pcwd_fops = ;
static struct miscdevice usb_pcwd_miscdev = ;
static const struct file_operations usb_pcwd_temperature_fops = ;
static struct miscdevice usb_pcwd_temperature_miscdev = ;
static struct notifier_block usb_pcwd_notifier = ;
static inline void usb_pcwd_delete(struct usb_pcwd_private *usb_pcwd)
static int usb_pcwd_probe(struct usb_interface *interface,
const struct usb_device_id *id)
static void usb_pcwd_disconnect(struct usb_interface *interface)
static int __init usb_pcwd_init(void)
static void __exit usb_pcwd_exit(void)
module_init(usb_pcwd_init);
module_exit(usb_pcwd_exit);
