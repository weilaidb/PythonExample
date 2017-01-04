#define DRIVER_VERSION "20080805"
#define DRIVER_AUTHOR  "Alfred E. Heggestad"
#define DRIVER_DESC    "CM109 phone driver"
static char *phone = "kip1000";
module_param(phone, charp, S_IRUSR);
MODULE_PARM_DESC(phone, "Phone name ");
enum ;
struct cm109_ctl_packet  __attribute__ ((packed));
enum ;
struct cm109_dev ;
static unsigned short special_keymap(int code)
static unsigned short keymap_kip1000(int scancode)
static unsigned short keymap_gtalk(int scancode)
static unsigned short keymap_usbph01(int scancode)
static unsigned short keymap_atcom(int scancode)
static unsigned short (*keymap)(int) = keymap_kip1000;
static void report_key(struct cm109_dev *dev, int key)
static void cm109_submit_buzz_toggle(struct cm109_dev *dev)
static void cm109_urb_irq_callback(struct urb *urb)
static void cm109_urb_ctl_callback(struct urb *urb)
static void cm109_toggle_buzzer_async(struct cm109_dev *dev)
static void cm109_toggle_buzzer_sync(struct cm109_dev *dev, int on)
static void cm109_stop_traffic(struct cm109_dev *dev)
static void cm109_restore_state(struct cm109_dev *dev)
static int cm109_input_open(struct input_dev *idev)
static void cm109_input_close(struct input_dev *idev)
static int cm109_input_ev(struct input_dev *idev, unsigned int type,
unsigned int code, int value)
struct driver_info ;
static const struct driver_info info_cm109 = ;
enum ;
static const struct usb_device_id cm109_usb_table[] = ;
static void cm109_usb_cleanup(struct cm109_dev *dev)
static void cm109_usb_disconnect(struct usb_interface *interface)
static int cm109_usb_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static int cm109_usb_suspend(struct usb_interface *intf, pm_message_t message)
static int cm109_usb_resume(struct usb_interface *intf)
static int cm109_usb_pre_reset(struct usb_interface *intf)
static int cm109_usb_post_reset(struct usb_interface *intf)
static struct usb_driver cm109_driver = ;
static int __init cm109_select_keymap(void)
static int __init cm109_init(void)
static void __exit cm109_exit(void)
module_init(cm109_init);
module_exit(cm109_exit);
MODULE_DEVICE_TABLE(usb, cm109_usb_table);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
