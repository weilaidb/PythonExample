#define HID_DEVICET_HID		(USB_TYPE_CLASS | 0x01)
#define HID_DEVICET_REPORT	(USB_TYPE_CLASS | 0x02)
#define HID_USAGE_UNDEFINED		0x00
#define HID_USAGE_PAGE			0x05
#define HID_USAGE_PAGE_DIGITIZER	0x0d
#define HID_USAGE_PAGE_DESKTOP		0x01
#define HID_USAGE			0x09
#define HID_USAGE_X			0x30
#define HID_USAGE_Y			0x31
#define HID_USAGE_X_TILT		0x3d
#define HID_USAGE_Y_TILT		0x3e
#define HID_USAGE_FINGER		0x22
#define HID_USAGE_STYLUS		0x20
#define HID_COLLECTION			0xc0
enum ;
struct hid_descriptor  __attribute__ ((packed));
#define USB_REQ_GET_REPORT	0x01
#define USB_REQ_SET_REPORT	0x09
#define WAC_HID_FEATURE_REPORT	0x03
static int usb_get_report(struct usb_interface *intf, unsigned char type,
unsigned char id, void *buf, int size)
static int usb_set_report(struct usb_interface *intf, unsigned char type,
unsigned char id, void *buf, int size)
static void wacom_sys_irq(struct urb *urb)
static int wacom_open(struct input_dev *dev)
static void wacom_close(struct input_dev *dev)
static int wacom_parse_hid(struct usb_interface *intf, struct hid_descriptor *hid_desc,
struct wacom_features *features)
static int wacom_query_tablet_data(struct usb_interface *intf, struct wacom_features *features)
static int wacom_retrieve_hid_descriptor(struct usb_interface *intf,
struct wacom_features *features)
struct wacom_usbdev_data ;
static LIST_HEAD(wacom_udev_list);
static DEFINE_MUTEX(wacom_udev_list_lock);
static struct wacom_usbdev_data *wacom_get_usbdev_data(struct usb_device *dev)
static int wacom_add_shared_data(struct wacom_wac *wacom,
struct usb_device *dev)
static void wacom_release_shared_data(struct kref *kref)
static void wacom_remove_shared_data(struct wacom_wac *wacom)
static int wacom_probe(struct usb_interface *intf, const struct usb_device_id *id)
static void wacom_disconnect(struct usb_interface *intf)
static int wacom_suspend(struct usb_interface *intf, pm_message_t message)
static int wacom_resume(struct usb_interface *intf)
static int wacom_reset_resume(struct usb_interface *intf)
static struct usb_driver wacom_driver = ;
static int __init wacom_init(void)
static void __exit wacom_exit(void)
module_init(wacom_init);
module_exit(wacom_exit);
