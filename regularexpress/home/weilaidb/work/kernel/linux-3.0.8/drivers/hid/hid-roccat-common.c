int roccat_common_receive(struct usb_device *usb_dev, uint usb_command,
void *data, uint size)
EXPORT_SYMBOL_GPL(roccat_common_receive);
int roccat_common_send(struct usb_device *usb_dev, uint usb_command,
void const *data, uint size)
EXPORT_SYMBOL_GPL(roccat_common_send);
MODULE_AUTHOR("Stefan Achatz");
MODULE_DESCRIPTION("USB Roccat common driver");
MODULE_LICENSE("GPL v2");
