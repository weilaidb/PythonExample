#define DRIVER_AUTHOR "Marko Friedemann <mfr@bmx-chemnitz.de>"
#define DRIVER_DESC "X-Box pad driver"
#define XPAD_PKT_LEN 32
#define MAP_DPAD_TO_BUTTONS		(1 << 0)
#define MAP_TRIGGERS_TO_BUTTONS		(1 << 1)
#define MAP_STICKS_TO_NULL		(1 << 2)
#define DANCEPAD_MAP_CONFIG	(MAP_DPAD_TO_BUTTONS |			\
MAP_TRIGGERS_TO_BUTTONS | MAP_STICKS_TO_NULL)
#define XTYPE_XBOX        0
#define XTYPE_XBOX360     1
#define XTYPE_XBOX360W    2
#define XTYPE_UNKNOWN     3
static int dpad_to_buttons;
module_param(dpad_to_buttons, bool, S_IRUGO);
MODULE_PARM_DESC(dpad_to_buttons, "Map D-PAD to buttons rather than axes for unknown pads");
static int triggers_to_buttons;
module_param(triggers_to_buttons, bool, S_IRUGO);
MODULE_PARM_DESC(triggers_to_buttons, "Map triggers to buttons rather than axes for unknown pads");
static int sticks_to_null;
module_param(sticks_to_null, bool, S_IRUGO);
MODULE_PARM_DESC(sticks_to_null, "Do not map sticks at all for unknown pads");
static const struct xpad_device  xpad_device[] = ;
static const signed short xpad_common_btn[] = ;
static const signed short xpad_btn[] = ;
static const signed short xpad_btn_pad[] = ;
static const signed short xpad_btn_triggers[] = ;
static const signed short xpad360_btn[] = ;
static const signed short xpad_abs[] = ;
static const signed short xpad_abs_pad[] = ;
static const signed short xpad_abs_triggers[] = ;
#define XPAD_XBOX360_VENDOR_PROTOCOL(vend,pr) \
.match_flags = USB_DEVICE_ID_MATCH_VENDOR | USB_DEVICE_ID_MATCH_INT_INFO, \
.idVendor = (vend), \
.bInterfaceClass = USB_CLASS_VENDOR_SPEC, \
.bInterfaceSubClass = 93, \
.bInterfaceProtocol = (pr)
#define XPAD_XBOX360_VENDOR(vend) \
, \
static struct usb_device_id xpad_table [] = ;
MODULE_DEVICE_TABLE (usb, xpad_table);
struct usb_xpad ;
static void xpad_process_packet(struct usb_xpad *xpad, u16 cmd, unsigned char *data)
static void xpad360_process_packet(struct usb_xpad *xpad,
u16 cmd, unsigned char *data)
static void xpad360w_process_packet(struct usb_xpad *xpad, u16 cmd, unsigned char *data)
static void xpad_irq_in(struct urb *urb)
static void xpad_bulk_out(struct urb *urb)
#if defined(CONFIG_JOYSTICK_XPAD_FF) || defined(CONFIG_JOYSTICK_XPAD_LEDS)
static void xpad_irq_out(struct urb *urb)
static int xpad_init_output(struct usb_interface *intf, struct usb_xpad *xpad)
static void xpad_stop_output(struct usb_xpad *xpad)
static void xpad_deinit_output(struct usb_xpad *xpad)
static int xpad_init_output(struct usb_interface *intf, struct usb_xpad *xpad)
static void xpad_deinit_output(struct usb_xpad *xpad)
static void xpad_stop_output(struct usb_xpad *xpad)
static int xpad_play_effect(struct input_dev *dev, void *data, struct ff_effect *effect)
static int xpad_init_ff(struct usb_xpad *xpad)
static int xpad_init_ff(struct usb_xpad *xpad)
#if defined(CONFIG_JOYSTICK_XPAD_LEDS)
struct xpad_led ;
static void xpad_send_led_command(struct usb_xpad *xpad, int command)
static void xpad_led_set(struct led_classdev *led_cdev,
enum led_brightness value)
static int xpad_led_probe(struct usb_xpad *xpad)
static void xpad_led_disconnect(struct usb_xpad *xpad)
static int xpad_led_probe(struct usb_xpad *xpad)
static void xpad_led_disconnect(struct usb_xpad *xpad)
static int xpad_open(struct input_dev *dev)
static void xpad_close(struct input_dev *dev)
static void xpad_set_up_abs(struct input_dev *input_dev, signed short abs)
static int xpad_probe(struct usb_interface *intf, const struct usb_device_id *id)
static void xpad_disconnect(struct usb_interface *intf)
static struct usb_driver xpad_driver = ;
static int __init usb_xpad_init(void)
static void __exit usb_xpad_exit(void)
module_init(usb_xpad_init);
module_exit(usb_xpad_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
