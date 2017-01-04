#define pr_fmt(fmt) KBUILD_MODNAME ":%s: " fmt, __func__
#define MOD_AUTHOR	"Jarod Wilson <jarod@wilsonet.com>"
#define MOD_DESC	"Driver for SoundGraph iMON MultiMedia IR/Display"
#define MOD_NAME	"imon"
#define MOD_VERSION	"0.9.3"
#define DISPLAY_MINOR_BASE	144
#define DEVICE_NAME	"lcd%d"
#define BUF_CHUNK_SIZE	8
#define BUF_SIZE	128
#define BIT_DURATION	250
#define IMON_CLOCK_ENABLE_PACKETS	2
static int imon_probe(struct usb_interface *interface,
const struct usb_device_id *id);
static void imon_disconnect(struct usb_interface *interface);
static void usb_rx_callback_intf0(struct urb *urb);
static void usb_rx_callback_intf1(struct urb *urb);
static void usb_tx_callback(struct urb *urb);
static int imon_resume(struct usb_interface *intf);
static int imon_suspend(struct usb_interface *intf, pm_message_t message);
static int display_open(struct inode *inode, struct file *file);
static int display_close(struct inode *inode, struct file *file);
static ssize_t vfd_write(struct file *file, const char *buf,
size_t n_bytes, loff_t *pos);
static ssize_t lcd_write(struct file *file, const char *buf,
size_t n_bytes, loff_t *pos);
struct imon_context ;
#define TOUCH_TIMEOUT	(HZ/30)
static const struct file_operations vfd_fops = ;
static const struct file_operations lcd_fops = ;
enum ;
enum ;
static struct usb_device_id imon_usb_id_table[] = ;
static struct usb_driver imon_driver = ;
static struct usb_class_driver imon_vfd_class = ;
static struct usb_class_driver imon_lcd_class = ;
static const struct  imon_panel_key_table[] = ;
static DEFINE_MUTEX(driver_lock);
MODULE_AUTHOR(MOD_AUTHOR);
MODULE_DESCRIPTION(MOD_DESC);
MODULE_VERSION(MOD_VERSION);
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(usb, imon_usb_id_table);
static bool debug;
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug messages: 0=no, 1=yes (default: no)");
static int display_type;
module_param(display_type, int, S_IRUGO);
MODULE_PARM_DESC(display_type, "Type of attached display. 0=autodetect, "
"1=vfd, 2=lcd, 3=vga, 4=none (default: autodetect)");
static int pad_stabilize = 1;
module_param(pad_stabilize, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(pad_stabilize, "Apply stabilization algorithm to iMON PAD "
"presses in arrow key mode. 0=disable, 1=enable (default).");
static bool nomouse;
module_param(nomouse, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(nomouse, "Disable mouse input device mode when IR device is "
"open. 0=don't disable, 1=disable. (default: don't disable)");
static int pad_thresh;
module_param(pad_thresh, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(pad_thresh, "Threshold at which a pad push registers as an "
"arrow key in kbd mode (default: 28)");
static void free_imon_context(struct imon_context *ictx)
static int display_open(struct inode *inode, struct file *file)
static int display_close(struct inode *inode, struct file *file)
static int send_packet(struct imon_context *ictx)
static int send_associate_24g(struct imon_context *ictx)
static int send_set_imon_clock(struct imon_context *ictx,
unsigned int year, unsigned int month,
unsigned int day, unsigned int dow,
unsigned int hour, unsigned int minute,
unsigned int second)
static ssize_t show_associate_remote(struct device *d,
struct device_attribute *attr,
char *buf)
static ssize_t store_associate_remote(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_imon_clock(struct device *d,
struct device_attribute *attr, char *buf)
static ssize_t store_imon_clock(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(imon_clock, S_IWUSR | S_IRUGO, show_imon_clock,
store_imon_clock);
static DEVICE_ATTR(associate_remote, S_IWUSR | S_IRUGO, show_associate_remote,
store_associate_remote);
static struct attribute *imon_display_sysfs_entries[] = ;
static struct attribute_group imon_display_attr_group = ;
static struct attribute *imon_rf_sysfs_entries[] = ;
static struct attribute_group imon_rf_attr_group = ;
static ssize_t vfd_write(struct file *file, const char *buf,
size_t n_bytes, loff_t *pos)
static ssize_t lcd_write(struct file *file, const char *buf,
size_t n_bytes, loff_t *pos)
static void usb_tx_callback(struct urb *urb)
static void imon_touch_display_timeout(unsigned long data)
static int imon_ir_change_protocol(struct rc_dev *rc, u64 rc_type)
{
int retval;
struct imon_context *ictx = rc->priv;
struct device *dev = ictx->dev;
bool unlock = false;
unsigned char ir_proto_packet[] = ;
if (rc_type && !(rc_type & rc->allowed_protos))
dev_warn(dev, "Looks like you're trying to use an IR protocol "
"this device does not support\n");
switch (rc_type) {
case RC_TYPE_RC6:
dev_dbg(dev, "Configuring IR receiver for MCE protocol\n");
ir_proto_packet[0] = 0x01;
break;
case RC_TYPE_UNKNOWN:
case RC_TYPE_OTHER:
dev_dbg(dev, "Configuring IR receiver for iMON protocol\n");
if (!pad_stabilize)
dev_dbg(dev, "PAD stabilize functionality disabled\n");
static int stabilize(int a, int b, u16 timeout, u16 threshold)
static u32 imon_remote_key_lookup(struct imon_context *ictx, u32 scancode)
static u32 imon_mce_key_lookup(struct imon_context *ictx, u32 scancode)
static u32 imon_panel_key_lookup(u64 code)
static bool imon_mouse_event(struct imon_context *ictx,
unsigned char *buf, int len)
static void imon_touch_event(struct imon_context *ictx, unsigned char *buf)
static void imon_pad_to_keys(struct imon_context *ictx, unsigned char *buf)
static int imon_parse_press_type(struct imon_context *ictx,
unsigned char *buf, u8 ktype)
static void imon_incoming_packet(struct imon_context *ictx,
struct urb *urb, int intf)
static void usb_rx_callback_intf0(struct urb *urb)
static void usb_rx_callback_intf1(struct urb *urb)
static void imon_get_ffdc_type(struct imon_context *ictx)
static void imon_set_display_type(struct imon_context *ictx)
static struct rc_dev *imon_init_rdev(struct imon_context *ictx)
static struct input_dev *imon_init_idev(struct imon_context *ictx)
static struct input_dev *imon_init_touch(struct imon_context *ictx)
static bool imon_find_endpoints(struct imon_context *ictx,
struct usb_host_interface *iface_desc)
static struct imon_context *imon_init_intf0(struct usb_interface *intf)
static struct imon_context *imon_init_intf1(struct usb_interface *intf,
struct imon_context *ictx)
static void imon_init_display(struct imon_context *ictx,
struct usb_interface *intf)
static int __devinit imon_probe(struct usb_interface *interface,
const struct usb_device_id *id)
static void __devexit imon_disconnect(struct usb_interface *interface)
static int imon_suspend(struct usb_interface *intf, pm_message_t message)
static int imon_resume(struct usb_interface *intf)
static int __init imon_init(void)
static void __exit imon_exit(void)
module_init(imon_init);
module_exit(imon_exit);
