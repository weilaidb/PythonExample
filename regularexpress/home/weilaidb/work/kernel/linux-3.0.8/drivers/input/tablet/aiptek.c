#define DRIVER_VERSION "v2.3 (May 2, 2007)"
#define DRIVER_AUTHOR  "Bryan W. Headley/Chris Atenasio/Cedric Brun/Rene van Paassen"
#define DRIVER_DESC    "Aiptek HyperPen USB Tablet Driver (Linux 2.6.x)"
#define USB_VENDOR_ID_AIPTEK				0x08ca
#define USB_VENDOR_ID_KYE				0x0458
#define USB_REQ_GET_REPORT				0x01
#define USB_REQ_SET_REPORT				0x09
#define AIPTEK_POINTER_ONLY_MOUSE_MODE			0
#define AIPTEK_POINTER_ONLY_STYLUS_MODE			1
#define AIPTEK_POINTER_EITHER_MODE			2
#define AIPTEK_POINTER_ALLOW_MOUSE_MODE(a)		\
(a == AIPTEK_POINTER_ONLY_MOUSE_MODE ||		\
a == AIPTEK_POINTER_EITHER_MODE)
#define AIPTEK_POINTER_ALLOW_STYLUS_MODE(a)		\
(a == AIPTEK_POINTER_ONLY_STYLUS_MODE ||	\
a == AIPTEK_POINTER_EITHER_MODE)
#define AIPTEK_COORDINATE_RELATIVE_MODE			0
#define AIPTEK_COORDINATE_ABSOLUTE_MODE			1
#define AIPTEK_TILT_MIN					(-128)
#define AIPTEK_TILT_MAX					127
#define AIPTEK_TILT_DISABLE				(-10101)
#define AIPTEK_WHEEL_MIN				0
#define AIPTEK_WHEEL_MAX				1024
#define AIPTEK_WHEEL_DISABLE				(-10101)
#define AIPTEK_TOOL_BUTTON_PEN_MODE			BTN_TOOL_PEN
#define AIPTEK_TOOL_BUTTON_PEN_MODE			BTN_TOOL_PEN
#define AIPTEK_TOOL_BUTTON_PENCIL_MODE			BTN_TOOL_PENCIL
#define AIPTEK_TOOL_BUTTON_BRUSH_MODE			BTN_TOOL_BRUSH
#define AIPTEK_TOOL_BUTTON_AIRBRUSH_MODE		BTN_TOOL_AIRBRUSH
#define AIPTEK_TOOL_BUTTON_ERASER_MODE			BTN_TOOL_RUBBER
#define AIPTEK_TOOL_BUTTON_MOUSE_MODE			BTN_TOOL_MOUSE
#define AIPTEK_TOOL_BUTTON_LENS_MODE			BTN_TOOL_LENS
#define AIPTEK_DIAGNOSTIC_NA				0
#define AIPTEK_DIAGNOSTIC_SENDING_RELATIVE_IN_ABSOLUTE	1
#define AIPTEK_DIAGNOSTIC_SENDING_ABSOLUTE_IN_RELATIVE	2
#define AIPTEK_DIAGNOSTIC_TOOL_DISALLOWED		3
#define AIPTEK_JITTER_DELAY_DEFAULT			50
#define AIPTEK_PROGRAMMABLE_DELAY_25		25
#define AIPTEK_PROGRAMMABLE_DELAY_50		50
#define AIPTEK_PROGRAMMABLE_DELAY_100		100
#define AIPTEK_PROGRAMMABLE_DELAY_200		200
#define AIPTEK_PROGRAMMABLE_DELAY_300		300
#define AIPTEK_PROGRAMMABLE_DELAY_400		400
#define AIPTEK_PROGRAMMABLE_DELAY_DEFAULT	AIPTEK_PROGRAMMABLE_DELAY_400
#define AIPTEK_MOUSE_LEFT_BUTTON		0x04
#define AIPTEK_MOUSE_RIGHT_BUTTON		0x08
#define AIPTEK_MOUSE_MIDDLE_BUTTON		0x10
#define AIPTEK_STYLUS_LOWER_BUTTON		0x08
#define AIPTEK_STYLUS_UPPER_BUTTON		0x10
#define AIPTEK_PACKET_LENGTH			8
#define AIPTEK_REPORT_TOOL_UNKNOWN		0x10
#define AIPTEK_REPORT_TOOL_STYLUS		0x20
#define AIPTEK_REPORT_TOOL_MOUSE		0x40
static int programmableDelay = AIPTEK_PROGRAMMABLE_DELAY_DEFAULT;
static int jitterDelay = AIPTEK_JITTER_DELAY_DEFAULT;
struct aiptek_features ;
struct aiptek_settings ;
struct aiptek ;
static const int eventTypes[] = ;
static const int absEvents[] = ;
static const int relEvents[] = ;
static const int buttonEvents[] = ;
static const int macroKeyEvents[] = ;
#define AIPTEK_INVALID_VALUE	-1
struct aiptek_map ;
static int map_str_to_val(const struct aiptek_map *map, const char *str, size_t count)
static const char *map_val_to_str(const struct aiptek_map *map, int val)
static void aiptek_irq(struct urb *urb)
static const struct usb_device_id aiptek_ids[] = ;
MODULE_DEVICE_TABLE(usb, aiptek_ids);
static int aiptek_open(struct input_dev *inputdev)
static void aiptek_close(struct input_dev *inputdev)
static int
aiptek_set_report(struct aiptek *aiptek,
unsigned char report_type,
unsigned char report_id, void *buffer, int size)
static int
aiptek_get_report(struct aiptek *aiptek,
unsigned char report_type,
unsigned char report_id, void *buffer, int size)
static int
aiptek_command(struct aiptek *aiptek, unsigned char command, unsigned char data)
static int
aiptek_query(struct aiptek *aiptek, unsigned char command, unsigned char data)
static int aiptek_program_tablet(struct aiptek *aiptek)
static ssize_t show_tabletSize(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(size, S_IRUGO, show_tabletSize, NULL);
static struct aiptek_map pointer_mode_map[] = ;
static ssize_t show_tabletPointerMode(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_tabletPointerMode(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(pointer_mode,
S_IRUGO | S_IWUSR,
show_tabletPointerMode, store_tabletPointerMode);
static struct aiptek_map coordinate_mode_map[] = ;
static ssize_t show_tabletCoordinateMode(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_tabletCoordinateMode(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(coordinate_mode,
S_IRUGO | S_IWUSR,
show_tabletCoordinateMode, store_tabletCoordinateMode);
static struct aiptek_map tool_mode_map[] = ;
static ssize_t show_tabletToolMode(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_tabletToolMode(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(tool_mode,
S_IRUGO | S_IWUSR,
show_tabletToolMode, store_tabletToolMode);
static ssize_t show_tabletXtilt(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_tabletXtilt(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(xtilt,
S_IRUGO | S_IWUSR, show_tabletXtilt, store_tabletXtilt);
static ssize_t show_tabletYtilt(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_tabletYtilt(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(ytilt,
S_IRUGO | S_IWUSR, show_tabletYtilt, store_tabletYtilt);
static ssize_t show_tabletJitterDelay(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_tabletJitterDelay(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(jitter,
S_IRUGO | S_IWUSR,
show_tabletJitterDelay, store_tabletJitterDelay);
static ssize_t show_tabletProgrammableDelay(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_tabletProgrammableDelay(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(delay,
S_IRUGO | S_IWUSR,
show_tabletProgrammableDelay, store_tabletProgrammableDelay);
static ssize_t show_tabletEventsReceived(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(event_count, S_IRUGO, show_tabletEventsReceived, NULL);
static ssize_t show_tabletDiagnosticMessage(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(diagnostic, S_IRUGO, show_tabletDiagnosticMessage, NULL);
static struct aiptek_map stylus_button_map[] = ;
static ssize_t show_tabletStylusUpper(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_tabletStylusUpper(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(stylus_upper,
S_IRUGO | S_IWUSR,
show_tabletStylusUpper, store_tabletStylusUpper);
static ssize_t show_tabletStylusLower(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_tabletStylusLower(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(stylus_lower,
S_IRUGO | S_IWUSR,
show_tabletStylusLower, store_tabletStylusLower);
static struct aiptek_map mouse_button_map[] = ;
static ssize_t show_tabletMouseLeft(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_tabletMouseLeft(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(mouse_left,
S_IRUGO | S_IWUSR,
show_tabletMouseLeft, store_tabletMouseLeft);
static ssize_t show_tabletMouseMiddle(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_tabletMouseMiddle(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(mouse_middle,
S_IRUGO | S_IWUSR,
show_tabletMouseMiddle, store_tabletMouseMiddle);
static ssize_t show_tabletMouseRight(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_tabletMouseRight(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(mouse_right,
S_IRUGO | S_IWUSR,
show_tabletMouseRight, store_tabletMouseRight);
static ssize_t show_tabletWheel(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_tabletWheel(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(wheel,
S_IRUGO | S_IWUSR, show_tabletWheel, store_tabletWheel);
static ssize_t show_tabletExecute(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_tabletExecute(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(execute,
S_IRUGO | S_IWUSR, show_tabletExecute, store_tabletExecute);
static ssize_t show_tabletODMCode(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(odm_code, S_IRUGO, show_tabletODMCode, NULL);
static ssize_t show_tabletModelCode(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(model_code, S_IRUGO, show_tabletModelCode, NULL);
static ssize_t show_firmwareCode(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(firmware_code, S_IRUGO, show_firmwareCode, NULL);
static struct attribute *aiptek_attributes[] = ;
static struct attribute_group aiptek_attribute_group = ;
static int
aiptek_probe(struct usb_interface *intf, const struct usb_device_id *id)
static void aiptek_disconnect(struct usb_interface *intf)
static struct usb_driver aiptek_driver = ;
static int __init aiptek_init(void)
static void __exit aiptek_exit(void)
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
module_param(programmableDelay, int, 0);
MODULE_PARM_DESC(programmableDelay, "delay used during tablet programming");
module_param(jitterDelay, int, 0);
MODULE_PARM_DESC(jitterDelay, "stylus/mouse settlement delay");
module_init(aiptek_init);
module_exit(aiptek_exit);
