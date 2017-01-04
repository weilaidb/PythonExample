static const struct usb_device_id id_table[] = ;
MODULE_DEVICE_TABLE(usb, id_table);
static int isight_firmware_load(struct usb_interface *intf,
const struct usb_device_id *id)
MODULE_FIRMWARE("isight.fw");
static void isight_firmware_disconnect(struct usb_interface *intf)
static struct usb_driver isight_firmware_driver = ;
static int __init isight_firmware_init(void)
static void __exit isight_firmware_exit(void)
module_init(isight_firmware_init);
module_exit(isight_firmware_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Matthew Garrett <mjg@redhat.com>");
