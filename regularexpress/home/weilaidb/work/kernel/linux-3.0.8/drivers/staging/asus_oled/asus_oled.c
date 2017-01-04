#define ASUS_OLED_VERSION		"0.04-dev"
#define ASUS_OLED_NAME			"asus-oled"
#define ASUS_OLED_UNDERSCORE_NAME	"asus_oled"
#define ASUS_OLED_ERROR			"Asus OLED Display Error: "
#define ASUS_OLED_STATIC		's'
#define ASUS_OLED_ROLL			'r'
#define ASUS_OLED_FLASH			'f'
#define ASUS_OLED_MAX_WIDTH		1792
#define ASUS_OLED_DISP_HEIGHT		32
#define ASUS_OLED_PACKET_BUF_SIZE	256
#define USB_VENDOR_ID_ASUS      0x0b05
#define USB_DEVICE_ID_ASUS_LCM      0x1726
#define USB_DEVICE_ID_ASUS_LCM2     0x175b
MODULE_AUTHOR("Jakub Schmidtke, sjakub@gmail.com");
MODULE_DESCRIPTION("Asus OLED Driver v" ASUS_OLED_VERSION);
MODULE_LICENSE("GPL");
static struct class *oled_class;
static int oled_num;
static uint start_off;
module_param(start_off, uint, 0644);
MODULE_PARM_DESC(start_off,
"Set to 1 to switch off OLED display after it is attached");
enum oled_pack_mode ;
struct oled_dev_desc_str ;
static const struct usb_device_id id_table[] = ;
static struct oled_dev_desc_str oled_dev_desc_table[] = ;
MODULE_DEVICE_TABLE(usb, id_table);
struct asus_oled_header  __attribute((packed));
struct asus_oled_packet  __attribute((packed));
struct asus_oled_dev ;
static void setup_packet_header(struct asus_oled_packet *packet, char flags,
char value3, char buffer1, char buffer2, char value6,
char value7, char value8)
static void enable_oled(struct asus_oled_dev *odev, uint8_t enabl)
static ssize_t set_enabled(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t class_set_enabled(struct device *device,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t get_enabled(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t class_get_enabled(struct device *device,
struct device_attribute *attr, char *buf)
static void send_packets(struct usb_device *udev,
struct asus_oled_packet *packet,
char *buf, uint8_t p_type, size_t p_num)
static void send_packet(struct usb_device *udev,
struct asus_oled_packet *packet,
size_t offset, size_t len, char *buf, uint8_t b1,
uint8_t b2, uint8_t b3, uint8_t b4, uint8_t b5,
uint8_t b6)
static void send_packets_g50(struct usb_device *udev,
struct asus_oled_packet *packet, char *buf)
static void send_data(struct asus_oled_dev *odev)
static int append_values(struct asus_oled_dev *odev, uint8_t val, size_t count)
static ssize_t odev_set_picture(struct asus_oled_dev *odev,
const char *buf, size_t count)
static ssize_t set_picture(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t class_set_picture(struct device *device,
struct device_attribute *attr,
const char *buf, size_t count)
#define ASUS_OLED_DEVICE_ATTR(_file)		dev_attr_asus_oled_##_file
static DEVICE_ATTR(asus_oled_enabled, S_IWUSR | S_IRUGO,
get_enabled, set_enabled);
static DEVICE_ATTR(asus_oled_picture, S_IWUSR , NULL, set_picture);
static DEVICE_ATTR(enabled, S_IWUSR | S_IRUGO,
class_get_enabled, class_set_enabled);
static DEVICE_ATTR(picture, S_IWUSR, NULL, class_set_picture);
static int asus_oled_probe(struct usb_interface *interface,
const struct usb_device_id *id)
static void asus_oled_disconnect(struct usb_interface *interface)
static struct usb_driver oled_driver = ;
static CLASS_ATTR_STRING(version, S_IRUGO,
ASUS_OLED_UNDERSCORE_NAME " " ASUS_OLED_VERSION);
static int __init asus_oled_init(void)
static void __exit asus_oled_exit(void)
module_init(asus_oled_init);
module_exit(asus_oled_exit);
