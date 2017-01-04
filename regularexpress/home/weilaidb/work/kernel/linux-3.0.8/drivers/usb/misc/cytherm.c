#define DRIVER_VERSION "v1.0"
#define DRIVER_AUTHOR "Erik Rigtorp"
#define DRIVER_DESC "Cypress USB Thermometer driver"
#define USB_SKEL_VENDOR_ID	0x04b4
#define USB_SKEL_PRODUCT_ID	0x0002
static const struct usb_device_id id_table[] = ;
MODULE_DEVICE_TABLE (usb, id_table);
struct usb_cytherm ;
static int cytherm_probe(struct usb_interface *interface,
const struct usb_device_id *id);
static void cytherm_disconnect(struct usb_interface *interface);
static struct usb_driver cytherm_driver = ;
#define PING       0x00
#define READ_ROM   0x01
#define READ_RAM   0x02
#define WRITE_RAM  0x03
#define READ_PORT  0x04
#define WRITE_PORT 0x05
static int vendor_command(struct usb_device *dev, unsigned char request,
unsigned char value, unsigned char index,
void *buf, int size)
#define BRIGHTNESS 0x2c
#define BRIGHTNESS_SEM 0x2b
static ssize_t show_brightness(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t set_brightness(struct device *dev, struct device_attribute *attr, const char *buf,
size_t count)
static DEVICE_ATTR(brightness, S_IRUGO | S_IWUSR | S_IWGRP,
show_brightness, set_brightness);
#define TEMP 0x33
#define SIGN 0x34
static ssize_t show_temp(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t set_temp(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(temp, S_IRUGO, show_temp, set_temp);
#define BUTTON 0x7a
static ssize_t show_button(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t set_button(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(button, S_IRUGO, show_button, set_button);
static ssize_t show_port0(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t set_port0(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(port0, S_IRUGO | S_IWUSR | S_IWGRP, show_port0, set_port0);
static ssize_t show_port1(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t set_port1(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(port1, S_IRUGO | S_IWUSR | S_IWGRP, show_port1, set_port1);
static int cytherm_probe(struct usb_interface *interface,
const struct usb_device_id *id)
static void cytherm_disconnect(struct usb_interface *interface)
static int __init usb_cytherm_init(void)
static void __exit usb_cytherm_exit(void)
module_init (usb_cytherm_init);
module_exit (usb_cytherm_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
