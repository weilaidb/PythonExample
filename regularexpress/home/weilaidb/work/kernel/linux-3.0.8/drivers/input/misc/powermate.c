#define POWERMATE_VENDOR	0x077d
#define POWERMATE_PRODUCT_NEW	0x0410
#define POWERMATE_PRODUCT_OLD	0x04AA
#define CONTOUR_VENDOR		0x05f3
#define CONTOUR_JOG		0x0240
#define SET_STATIC_BRIGHTNESS  0x01
#define SET_PULSE_ASLEEP       0x02
#define SET_PULSE_AWAKE        0x03
#define SET_PULSE_MODE         0x04
#define UPDATE_STATIC_BRIGHTNESS (1<<0)
#define UPDATE_PULSE_ASLEEP      (1<<1)
#define UPDATE_PULSE_AWAKE       (1<<2)
#define UPDATE_PULSE_MODE        (1<<3)
#define POWERMATE_PAYLOAD_SIZE_MAX 6
#define POWERMATE_PAYLOAD_SIZE_MIN 3
struct powermate_device ;
static char pm_name_powermate[] = "Griffin PowerMate";
static char pm_name_soundknob[] = "Griffin SoundKnob";
static void powermate_config_complete(struct urb *urb);
static void powermate_irq(struct urb *urb)
static void powermate_sync_state(struct powermate_device *pm)
static void powermate_config_complete(struct urb *urb)
static void powermate_pulse_led(struct powermate_device *pm, int static_brightness, int pulse_speed,
int pulse_table, int pulse_asleep, int pulse_awake)
static int powermate_input_event(struct input_dev *dev, unsigned int type, unsigned int code, int _value)
static int powermate_alloc_buffers(struct usb_device *udev, struct powermate_device *pm)
static void powermate_free_buffers(struct usb_device *udev, struct powermate_device *pm)
static int powermate_probe(struct usb_interface *intf, const struct usb_device_id *id)
static void powermate_disconnect(struct usb_interface *intf)
static struct usb_device_id powermate_devices [] = ;
MODULE_DEVICE_TABLE (usb, powermate_devices);
static struct usb_driver powermate_driver = ;
static int __init powermate_init(void)
static void __exit powermate_cleanup(void)
module_init(powermate_init);
module_exit(powermate_cleanup);
MODULE_AUTHOR( "William R Sowerbutts" );
MODULE_DESCRIPTION( "Griffin Technology, Inc PowerMate driver" );
MODULE_LICENSE("GPL");
