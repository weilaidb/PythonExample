#define USB_DEBUG_MAX_PACKET_SIZE	8
#define USB_DEBUG_BRK_SIZE		8
static char USB_DEBUG_BRK[USB_DEBUG_BRK_SIZE] = ;
static const struct usb_device_id id_table[] = ;
MODULE_DEVICE_TABLE(usb, id_table);
static struct usb_driver debug_driver = ;
static void usb_debug_break_ctl(struct tty_struct *tty, int break_state)
static void usb_debug_read_bulk_callback(struct urb *urb)
static struct usb_serial_driver debug_device = ;
static int __init debug_init(void)
static void __exit debug_exit(void)
module_init(debug_init);
module_exit(debug_exit);
MODULE_LICENSE("GPL");
