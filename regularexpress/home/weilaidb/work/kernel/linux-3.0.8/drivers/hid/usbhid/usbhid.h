#define __USBHID_H
int usbhid_wait_io(struct hid_device* hid);
void usbhid_close(struct hid_device *hid);
int usbhid_open(struct hid_device *hid);
void usbhid_init_reports(struct hid_device *hid);
void usbhid_submit_report
(struct hid_device *hid, struct hid_report *report, unsigned char dir);
int usbhid_get_power(struct hid_device *hid);
void usbhid_put_power(struct hid_device *hid);
struct usb_interface *usbhid_find_interface(int minor);
#define HID_CTRL_RUNNING	1
#define HID_OUT_RUNNING		2
#define HID_IN_RUNNING		3
#define HID_RESET_PENDING	4
#define HID_SUSPENDED		5
#define HID_CLEAR_HALT		6
#define HID_DISCONNECTED	7
#define HID_STARTED		8
#define HID_REPORTED_IDLE	9
#define HID_KEYS_PRESSED	10
#define HID_LED_ON		11
struct usbhid_device ;
#define	hid_to_usb_dev(hid_dev) \
container_of(hid_dev->dev.parent->parent, struct usb_device, dev)
