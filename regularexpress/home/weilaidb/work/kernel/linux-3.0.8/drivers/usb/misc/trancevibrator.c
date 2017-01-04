#define DRIVER_VERSION "v1.1"
#define DRIVER_AUTHOR "Sam Hocevar, sam@zoy.org"
#define DRIVER_DESC "PlayStation 2 Trance Vibrator driver"
#define TRANCEVIBRATOR_VENDOR_ID	0x0b49
#define TRANCEVIBRATOR_PRODUCT_ID	0x064f
static const struct usb_device_id id_table[] = ;
MODULE_DEVICE_TABLE (usb, id_table);
struct trancevibrator ;
static ssize_t show_speed(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_speed(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(speed, S_IRUGO | S_IWUSR, show_speed, set_speed);
static int tv_probe(struct usb_interface *interface,
const struct usb_device_id *id)
static void tv_disconnect(struct usb_interface *interface)
static struct usb_driver tv_driver = ;
static int __init tv_init(void)
static void __exit tv_exit(void)
module_init (tv_init);
module_exit (tv_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
