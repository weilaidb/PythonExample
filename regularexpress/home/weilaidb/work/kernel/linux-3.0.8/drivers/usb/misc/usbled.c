#define DRIVER_AUTHOR "Greg Kroah-Hartman, greg@kroah.com"
#define DRIVER_DESC "USB LED Driver"
enum led_type ;
static const struct usb_device_id id_table[] = ;
MODULE_DEVICE_TABLE (usb, id_table);
struct usb_led ;
static void change_color(struct usb_led *led)
#define show_set(value)	\
static ssize_t show_##value(struct device *dev, struct device_attribute *attr, char *buf)		\
\
static ssize_t set_##value(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)	\
\
static DEVICE_ATTR(value, S_IRUGO | S_IWUSR, show_##value, set_##value);
show_set(blue);
show_set(red);
show_set(green);
static int led_probe(struct usb_interface *interface, const struct usb_device_id *id)
static void led_disconnect(struct usb_interface *interface)
static struct usb_driver led_driver = ;
static int __init usb_led_init(void)
static void __exit usb_led_exit(void)
module_init (usb_led_init);
module_exit (usb_led_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
