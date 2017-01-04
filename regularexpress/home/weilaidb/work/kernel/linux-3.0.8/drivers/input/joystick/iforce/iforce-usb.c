void iforce_usb_xmit(struct iforce *iforce)
static void iforce_usb_irq(struct urb *urb)
static void iforce_usb_out(struct urb *urb)
static void iforce_usb_ctrl(struct urb *urb)
static int iforce_usb_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void iforce_usb_disconnect(struct usb_interface *intf)
static struct usb_device_id iforce_usb_ids [] = ;
MODULE_DEVICE_TABLE (usb, iforce_usb_ids);
struct usb_driver iforce_usb_driver = ;
