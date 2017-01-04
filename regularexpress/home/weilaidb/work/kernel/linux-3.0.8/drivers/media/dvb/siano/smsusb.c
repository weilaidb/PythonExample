static int sms_dbg;
module_param_named(debug, sms_dbg, int, 0644);
MODULE_PARM_DESC(debug, "set debug level (info=1, adv=2 (or-able))");
#define USB1_BUFFER_SIZE		0x1000
#define USB2_BUFFER_SIZE		0x4000
#define MAX_BUFFERS		50
#define MAX_URBS		10
struct smsusb_device_t;
struct smsusb_urb_t ;
struct smsusb_device_t ;
static int smsusb_submit_urb(struct smsusb_device_t *dev,
struct smsusb_urb_t *surb);
static void smsusb_onresponse(struct urb *urb)
static int smsusb_submit_urb(struct smsusb_device_t *dev,
struct smsusb_urb_t *surb)
static void smsusb_stop_streaming(struct smsusb_device_t *dev)
static int smsusb_start_streaming(struct smsusb_device_t *dev)
static int smsusb_sendrequest(void *context, void *buffer, size_t size)
static char *smsusb1_fw_lkup[] = ;
static inline char *sms_get_fw_name(int mode, int board_id)
static int smsusb1_load_firmware(struct usb_device *udev, int id, int board_id)
static void smsusb1_detectmode(void *context, int *mode)
static int smsusb1_setmode(void *context, int mode)
static void smsusb_term_device(struct usb_interface *intf)
static int smsusb_init_device(struct usb_interface *intf, int board_id)
static int __devinit smsusb_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void smsusb_disconnect(struct usb_interface *intf)
static int smsusb_suspend(struct usb_interface *intf, pm_message_t msg)
static int smsusb_resume(struct usb_interface *intf)
static const struct usb_device_id smsusb_id_table[] __devinitconst = ;
MODULE_DEVICE_TABLE(usb, smsusb_id_table);
static struct usb_driver smsusb_driver = ;
static int __init smsusb_module_init(void)
static void __exit smsusb_module_exit(void)
module_init(smsusb_module_init);
module_exit(smsusb_module_exit);
MODULE_DESCRIPTION("Driver for the Siano SMS1xxx USB dongle");
MODULE_AUTHOR("Siano Mobile Silicon, INC. (uris@siano-ms.com)");
MODULE_LICENSE("GPL");
