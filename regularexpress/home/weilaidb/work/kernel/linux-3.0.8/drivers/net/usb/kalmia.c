#define KALMIA_HEADER_LENGTH 6
#define KALMIA_ALIGN_SIZE 4
#define KALMIA_USB_TIMEOUT 10000
static int
kalmia_send_init_packet(struct usbnet *dev, u8 *init_msg, u8 init_msg_len,
u8 *buffer, u8 expected_len)
static int
kalmia_init_and_get_ethernet_addr(struct usbnet *dev, u8 *ethernet_addr)
static int
kalmia_bind(struct usbnet *dev, struct usb_interface *intf)
static struct sk_buff *
kalmia_tx_fixup(struct usbnet *dev, struct sk_buff *skb, gfp_t flags)
static int
kalmia_rx_fixup(struct usbnet *dev, struct sk_buff *skb)
static const struct driver_info kalmia_info = ;
static const struct usb_device_id products[] = ;
MODULE_DEVICE_TABLE( usb, products);
static struct usb_driver kalmia_driver = ;
static int __init kalmia_init(void)
module_init( kalmia_init);
static void __exit kalmia_exit(void)
module_exit( kalmia_exit);
MODULE_AUTHOR("Marius Bjoernstad Kotsbak <marius@kotsbak.com>");
MODULE_DESCRIPTION("Samsung Kalmia USB network driver");
MODULE_LICENSE("GPL");
