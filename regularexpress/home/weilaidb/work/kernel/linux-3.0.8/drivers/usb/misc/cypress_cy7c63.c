#define DRIVER_AUTHOR		"Oliver Bock (bock@tfh-berlin.de)"
#define DRIVER_DESC		"Cypress CY7C63xxx USB driver"
#define CYPRESS_VENDOR_ID	0xa2c
#define CYPRESS_PRODUCT_ID	0x8
#define CYPRESS_READ_PORT	0x4
#define CYPRESS_WRITE_PORT	0x5
#define CYPRESS_READ_RAM	0x2
#define CYPRESS_WRITE_RAM	0x3
#define CYPRESS_READ_ROM	0x1
#define CYPRESS_READ_PORT_ID0	0
#define CYPRESS_WRITE_PORT_ID0	0
#define CYPRESS_READ_PORT_ID1	0x2
#define CYPRESS_WRITE_PORT_ID1	1
#define CYPRESS_MAX_REQSIZE	8
static const struct usb_device_id cypress_table[] = ;
MODULE_DEVICE_TABLE(usb, cypress_table);
struct cypress ;
static int vendor_command(struct cypress *dev, unsigned char request,
unsigned char address, unsigned char data)
static ssize_t write_port(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count,
int port_num, int write_id)
static ssize_t set_port0_handler(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t set_port1_handler(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t read_port(struct device *dev, struct device_attribute *attr,
char *buf, int port_num, int read_id)
static ssize_t get_port0_handler(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t get_port1_handler(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(port0, S_IRUGO | S_IWUSR, get_port0_handler, set_port0_handler);
static DEVICE_ATTR(port1, S_IRUGO | S_IWUSR, get_port1_handler, set_port1_handler);
static int cypress_probe(struct usb_interface *interface,
const struct usb_device_id *id)
static void cypress_disconnect(struct usb_interface *interface)
static struct usb_driver cypress_driver = ;
static int __init cypress_init(void)
static void __exit cypress_exit(void)
module_init(cypress_init);
module_exit(cypress_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
