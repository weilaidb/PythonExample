MODULE_DESCRIPTION("FT1000 EXPRESS CARD DRIVER");
MODULE_LICENSE("Dual MPL/GPL");
MODULE_SUPPORTED_DEVICE("QFT FT1000 Express Cards");
void *pFileStart;
size_t FileLength;
#define VENDOR_ID 0x1291
#define PRODUCT_ID 0x11
static struct usb_device_id id_table[] = ;
MODULE_DEVICE_TABLE(usb, id_table);
static bool gPollingfailed = FALSE;
int ft1000_poll_thread(void *arg)
static int ft1000_probe(struct usb_interface *interface,
const struct usb_device_id *id)
static void ft1000_disconnect(struct usb_interface *interface)
static struct usb_driver ft1000_usb_driver = ;
static int __init usb_ft1000_init(void)
static void __exit usb_ft1000_exit(void)
module_init(usb_ft1000_init);
module_exit(usb_ft1000_exit);
