enum cx82310_cmd ;
enum cx82310_status ;
#define CMD_PACKET_SIZE	64
#define CMD_TIMEOUT	15000
#define CMD_REPLY_RETRY 5
#define CX82310_MTU	1514
#define CMD_EP		0x01
static int cx82310_cmd(struct usbnet *dev, enum cx82310_cmd cmd, bool reply,
u8 *wdata, int wlen, u8 *rdata, int rlen)
#define partial_len	data[0]
#define partial_rem	data[1]
#define partial_data	data[2]
static int cx82310_bind(struct usbnet *dev, struct usb_interface *intf)
static void cx82310_unbind(struct usbnet *dev, struct usb_interface *intf)
static int cx82310_rx_fixup(struct usbnet *dev, struct sk_buff *skb)
static struct sk_buff *cx82310_tx_fixup(struct usbnet *dev, struct sk_buff *skb,
gfp_t flags)
static const struct driver_info	cx82310_info = ;
#define USB_DEVICE_CLASS(vend, prod, cl, sc, pr) \
.match_flags = USB_DEVICE_ID_MATCH_DEVICE | \
USB_DEVICE_ID_MATCH_DEV_INFO, \
.idVendor = (vend), \
.idProduct = (prod), \
.bDeviceClass = (cl), \
.bDeviceSubClass = (sc), \
.bDeviceProtocol = (pr)
static const struct usb_device_id products[] = ;
MODULE_DEVICE_TABLE(usb, products);
static struct usb_driver cx82310_driver = ;
static int __init cx82310_init(void)
module_init(cx82310_init);
static void __exit cx82310_exit(void)
module_exit(cx82310_exit);
MODULE_AUTHOR("Ondrej Zary");
MODULE_DESCRIPTION("Conexant CX82310-based ADSL router USB ethernet driver");
MODULE_LICENSE("GPL");
