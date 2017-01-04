#define DRIVER_AUTHOR "Harrison Metzger <harrisonmetz@gmail.com>"
#define DRIVER_DESC "USB 7 Segment Driver"
#define VENDOR_ID	0x0fc5
#define PRODUCT_ID	0x1227
#define MAXLEN		6
static const struct usb_device_id id_table[] = ;
MODULE_DEVICE_TABLE(usb, id_table);
static char *display_textmodes[] = ;
struct usb_sevsegdev ;
inline size_t my_memlen(const char *buf, size_t count)
static void update_display_powered(struct usb_sevsegdev *mydev)
static void update_display_mode(struct usb_sevsegdev *mydev)
static void update_display_visual(struct usb_sevsegdev *mydev, gfp_t mf)
#define MYDEV_ATTR_SIMPLE_UNSIGNED(name, update_fcn)		\
static ssize_t show_attr_##name(struct device *dev, 		\
struct device_attribute *attr, char *buf) 		\
\
\
static ssize_t set_attr_##name(struct device *dev, 		\
struct device_attribute *attr, const char *buf, size_t count) \
\
static DEVICE_ATTR(name, S_IRUGO | S_IWUSR, show_attr_##name, set_attr_##name);
static ssize_t show_attr_text(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t set_attr_text(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(text, S_IRUGO | S_IWUSR, show_attr_text, set_attr_text);
static ssize_t show_attr_decimals(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t set_attr_decimals(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(decimals, S_IRUGO | S_IWUSR, show_attr_decimals, set_attr_decimals);
static ssize_t show_attr_textmode(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t set_attr_textmode(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(textmode, S_IRUGO | S_IWUSR, show_attr_textmode, set_attr_textmode);
MYDEV_ATTR_SIMPLE_UNSIGNED(powered, update_display_powered);
MYDEV_ATTR_SIMPLE_UNSIGNED(mode_msb, update_display_mode);
MYDEV_ATTR_SIMPLE_UNSIGNED(mode_lsb, update_display_mode);
static struct attribute *dev_attrs[] = ;
static struct attribute_group dev_attr_grp = ;
static int sevseg_probe(struct usb_interface *interface,
const struct usb_device_id *id)
static void sevseg_disconnect(struct usb_interface *interface)
static int sevseg_suspend(struct usb_interface *intf, pm_message_t message)
static int sevseg_resume(struct usb_interface *intf)
static int sevseg_reset_resume(struct usb_interface *intf)
static struct usb_driver sevseg_driver = ;
static int __init usb_sevseg_init(void)
static void __exit usb_sevseg_exit(void)
module_init(usb_sevseg_init);
module_exit(usb_sevseg_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
