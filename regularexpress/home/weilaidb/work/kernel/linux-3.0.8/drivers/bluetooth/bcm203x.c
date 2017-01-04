#define VERSION "1.2"
static const struct usb_device_id bcm203x_table[] = ;
MODULE_DEVICE_TABLE(usb, bcm203x_table);
#define BCM203X_ERROR		0
#define BCM203X_RESET		1
#define BCM203X_LOAD_MINIDRV	2
#define BCM203X_SELECT_MEMORY	3
#define BCM203X_CHECK_MEMORY	4
#define BCM203X_LOAD_FIRMWARE	5
#define BCM203X_CHECK_FIRMWARE	6
#define BCM203X_IN_EP		0x81
#define BCM203X_OUT_EP		0x02
struct bcm203x_data ;
static void bcm203x_complete(struct urb *urb)
static void bcm203x_work(struct work_struct *work)
static int bcm203x_probe(struct usb_interface *intf, const struct usb_device_id *id)
static void bcm203x_disconnect(struct usb_interface *intf)
static struct usb_driver bcm203x_driver = ;
static int __init bcm203x_init(void)
static void __exit bcm203x_exit(void)
module_init(bcm203x_init);
module_exit(bcm203x_exit);
MODULE_AUTHOR("Marcel Holtmann <marcel@holtmann.org>");
MODULE_DESCRIPTION("Broadcom Blutonium firmware driver ver " VERSION);
MODULE_VERSION(VERSION);
MODULE_LICENSE("GPL");
MODULE_FIRMWARE("BCM2033-MD.hex");
MODULE_FIRMWARE("BCM2033-FW.bin");
