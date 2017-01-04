#define USB_VENDOR_ID_APPLE		0x05ac
#define USB_DEVICE_ID_APPLE_WELLSPRING_ANSI	0x0223
#define USB_DEVICE_ID_APPLE_WELLSPRING_ISO	0x0224
#define USB_DEVICE_ID_APPLE_WELLSPRING_JIS	0x0225
#define USB_DEVICE_ID_APPLE_WELLSPRING2_ANSI	0x0230
#define USB_DEVICE_ID_APPLE_WELLSPRING2_ISO	0x0231
#define USB_DEVICE_ID_APPLE_WELLSPRING2_JIS	0x0232
#define USB_DEVICE_ID_APPLE_WELLSPRING3_ANSI	0x0236
#define USB_DEVICE_ID_APPLE_WELLSPRING3_ISO	0x0237
#define USB_DEVICE_ID_APPLE_WELLSPRING3_JIS	0x0238
#define USB_DEVICE_ID_APPLE_WELLSPRING4_ANSI	0x023f
#define USB_DEVICE_ID_APPLE_WELLSPRING4_ISO	0x0240
#define USB_DEVICE_ID_APPLE_WELLSPRING4_JIS	0x0241
#define USB_DEVICE_ID_APPLE_WELLSPRING4A_ANSI	0x0242
#define USB_DEVICE_ID_APPLE_WELLSPRING4A_ISO	0x0243
#define USB_DEVICE_ID_APPLE_WELLSPRING4A_JIS	0x0244
#define USB_DEVICE_ID_APPLE_WELLSPRING5_ANSI	0x0245
#define USB_DEVICE_ID_APPLE_WELLSPRING5_ISO	0x0246
#define USB_DEVICE_ID_APPLE_WELLSPRING5_JIS	0x0247
#define BCM5974_DEVICE(prod)
static const struct usb_device_id bcm5974_table[] = ;
MODULE_DEVICE_TABLE(usb, bcm5974_table);
MODULE_AUTHOR("Henrik Rydberg");
MODULE_DESCRIPTION("Apple USB BCM5974 multitouch driver");
MODULE_LICENSE("GPL");
#define dprintk(level, format, a...)\
static int debug = 1;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Activate debugging output");
struct bt_data ;
enum tp_type ;
#define FINGER_TYPE1		(13 * sizeof(__le16))
#define FINGER_TYPE2		(15 * sizeof(__le16))
#define BUTTON_TYPE2		15
#define HAS_INTEGRATED_BUTTON	1
struct tp_finger  __attribute__((packed,aligned(2)));
#define SIZEOF_FINGER		sizeof(struct tp_finger)
#define SIZEOF_ALL_FINGERS	(16 * SIZEOF_FINGER)
#define MAX_FINGER_ORIENTATION	16384
struct bcm5974_param ;
struct bcm5974_config ;
struct bcm5974 ;
#define DIM_PRESSURE	256
#define DIM_WIDTH	16
#define DIM_X		1280
#define DIM_Y		800
#define SN_PRESSURE	45
#define SN_WIDTH	100
#define SN_COORD	250
#define PRESSURE_LOW	(2 * DIM_PRESSURE / SN_PRESSURE)
#define PRESSURE_HIGH	(3 * PRESSURE_LOW)
static const struct bcm5974_config bcm5974_config_table[] = ;
static const struct bcm5974_config *bcm5974_get_config(struct usb_device *udev)
static inline int raw2int(__le16 x)
static inline int int2scale(const struct bcm5974_param *p, int x)
static inline int int2bound(const struct bcm5974_param *p, int x)
static void setup_events_to_report(struct input_dev *input_dev,
const struct bcm5974_config *cfg)
static int report_bt_state(struct bcm5974 *dev, int size)
static void report_finger_data(struct input_dev *input,
const struct bcm5974_config *cfg,
const struct tp_finger *f)
static int report_tp_state(struct bcm5974 *dev, int size)
#define BCM5974_WELLSPRING_MODE_READ_REQUEST_ID		1
#define BCM5974_WELLSPRING_MODE_WRITE_REQUEST_ID	9
#define BCM5974_WELLSPRING_MODE_REQUEST_VALUE		0x300
#define BCM5974_WELLSPRING_MODE_REQUEST_INDEX		0
#define BCM5974_WELLSPRING_MODE_VENDOR_VALUE		0x01
#define BCM5974_WELLSPRING_MODE_NORMAL_VALUE		0x08
static int bcm5974_wellspring_mode(struct bcm5974 *dev, bool on)
static void bcm5974_irq_button(struct urb *urb)
static void bcm5974_irq_trackpad(struct urb *urb)
static int bcm5974_start_traffic(struct bcm5974 *dev)
static void bcm5974_pause_traffic(struct bcm5974 *dev)
static int bcm5974_open(struct input_dev *input)
static void bcm5974_close(struct input_dev *input)
static int bcm5974_suspend(struct usb_interface *iface, pm_message_t message)
static int bcm5974_resume(struct usb_interface *iface)
static int bcm5974_probe(struct usb_interface *iface,
const struct usb_device_id *id)
static void bcm5974_disconnect(struct usb_interface *iface)
static struct usb_driver bcm5974_driver = ;
static int __init bcm5974_init(void)
static void __exit bcm5974_exit(void)
module_init(bcm5974_init);
module_exit(bcm5974_exit);
