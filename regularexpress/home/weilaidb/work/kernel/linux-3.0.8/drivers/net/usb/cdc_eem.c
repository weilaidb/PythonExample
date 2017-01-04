#define EEM_HEAD	2
static void eem_linkcmd_complete(struct urb *urb)
static void eem_linkcmd(struct usbnet *dev, struct sk_buff *skb)
static int eem_bind(struct usbnet *dev, struct usb_interface *intf)
static struct sk_buff *eem_tx_fixup(struct usbnet *dev, struct sk_buff *skb,
gfp_t flags)
static int eem_rx_fixup(struct usbnet *dev, struct sk_buff *skb)
static const struct driver_info eem_info = ;
static const struct usb_device_id products[] = ;
MODULE_DEVICE_TABLE(usb, products);
static struct usb_driver eem_driver = ;
static int __init eem_init(void)
module_init(eem_init);
static void __exit eem_exit(void)
module_exit(eem_exit);
MODULE_AUTHOR("Omar Laazimani <omar.oberthur@gmail.com>");
MODULE_DESCRIPTION("USB CDC EEM");
MODULE_LICENSE("GPL");
