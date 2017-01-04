#define WACOM_H
#define DRIVER_VERSION "v1.52"
#define DRIVER_AUTHOR "Vojtech Pavlik <vojtech@ucw.cz>"
#define DRIVER_DESC "USB Wacom tablet driver"
#define DRIVER_LICENSE "GPL"
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE(DRIVER_LICENSE);
#define USB_VENDOR_ID_WACOM	0x056a
#define USB_VENDOR_ID_LENOVO	0x17ef
struct wacom ;
extern const struct usb_device_id wacom_ids[];
void wacom_wac_irq(struct wacom_wac *wacom_wac, size_t len);
void wacom_setup_device_quirks(struct wacom_features *features);
void wacom_setup_input_capabilities(struct input_dev *input_dev,
struct wacom_wac *wacom_wac);
