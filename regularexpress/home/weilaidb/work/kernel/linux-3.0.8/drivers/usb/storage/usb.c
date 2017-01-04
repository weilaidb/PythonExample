#define DEBUG
MODULE_AUTHOR("Matthew Dharm <mdharm-usb@one-eyed-alien.net>");
MODULE_DESCRIPTION("USB Mass Storage driver for Linux");
MODULE_LICENSE("GPL");
static unsigned int delay_use = 1;
module_param(delay_use, uint, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(delay_use, "seconds to delay before using a new device");
static char quirks[128];
module_param_string(quirks, quirks, sizeof(quirks), S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(quirks, "supplemental list of device IDs and their quirks");
#define UNUSUAL_DEV(idVendor, idProduct, bcdDeviceMin, bcdDeviceMax, \
vendor_name, product_name, use_protocol, use_transport, \
init_function, Flags) \
#define COMPLIANT_DEV	UNUSUAL_DEV
#define USUAL_DEV(use_protocol, use_transport, use_type) \
static struct us_unusual_dev us_unusual_dev_list[] = ;
#undef UNUSUAL_DEV
#undef COMPLIANT_DEV
#undef USUAL_DEV
int usb_stor_suspend(struct usb_interface *iface, pm_message_t message)
EXPORT_SYMBOL_GPL(usb_stor_suspend);
int usb_stor_resume(struct usb_interface *iface)
EXPORT_SYMBOL_GPL(usb_stor_resume);
int usb_stor_reset_resume(struct usb_interface *iface)
EXPORT_SYMBOL_GPL(usb_stor_reset_resume);
int usb_stor_pre_reset(struct usb_interface *iface)
EXPORT_SYMBOL_GPL(usb_stor_pre_reset);
int usb_stor_post_reset(struct usb_interface *iface)
EXPORT_SYMBOL_GPL(usb_stor_post_reset);
void fill_inquiry_response(struct us_data *us, unsigned char *data,
unsigned int data_len)
EXPORT_SYMBOL_GPL(fill_inquiry_response);
static int usb_stor_control_thread(void * __us)
static int associate_dev(struct us_data *us, struct usb_interface *intf)
#define TOLOWER(x) ((x) | 0x20)
static void adjust_quirks(struct us_data *us)
static int get_device_info(struct us_data *us, const struct usb_device_id *id,
struct us_unusual_dev *unusual_dev)
static void get_transport(struct us_data *us)
static void get_protocol(struct us_data *us)
static int get_pipes(struct us_data *us)
static int usb_stor_acquire_resources(struct us_data *us)
static void usb_stor_release_resources(struct us_data *us)
static void dissociate_dev(struct us_data *us)
static void quiesce_and_remove_host(struct us_data *us)
static void release_everything(struct us_data *us)
static int usb_stor_scan_thread(void * __us)
static unsigned int usb_stor_sg_tablesize(struct usb_interface *intf)
int usb_stor_probe1(struct us_data **pus,
struct usb_interface *intf,
const struct usb_device_id *id,
struct us_unusual_dev *unusual_dev)
EXPORT_SYMBOL_GPL(usb_stor_probe1);
int usb_stor_probe2(struct us_data *us)
EXPORT_SYMBOL_GPL(usb_stor_probe2);
void usb_stor_disconnect(struct usb_interface *intf)
EXPORT_SYMBOL_GPL(usb_stor_disconnect);
static int storage_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_driver usb_storage_driver = ;
static int __init usb_stor_init(void)
static void __exit usb_stor_exit(void)
module_init(usb_stor_init);
module_exit(usb_stor_exit);
