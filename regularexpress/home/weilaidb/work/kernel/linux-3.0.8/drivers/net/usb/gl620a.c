#define GENELINK_CONNECT_WRITE			0xF0
#define GENELINK_INTERRUPT_PIPE			0x03
#define INTERRUPT_BUFSIZE			0x08
#define GENELINK_INTERRUPT_INTERVAL		0x10
#define GL_MAX_TRANSMIT_PACKETS			32
#define GL_MAX_PACKET_LEN			1514
#define GL_RCV_BUF_SIZE		\
(((GL_MAX_PACKET_LEN + 4) * GL_MAX_TRANSMIT_PACKETS) + 4)
struct gl_packet ;
struct gl_header ;
static int genelink_rx_fixup(struct usbnet *dev, struct sk_buff *skb)
static struct sk_buff *
genelink_tx_fixup(struct usbnet *dev, struct sk_buff *skb, gfp_t flags)
static int genelink_bind(struct usbnet *dev, struct usb_interface *intf)
static const struct driver_info	genelink_info = ;
static const struct usb_device_id	products [] = ;
MODULE_DEVICE_TABLE(usb, products);
static struct usb_driver gl620a_driver = ;
static int __init usbnet_init(void)
module_init(usbnet_init);
static void __exit usbnet_exit(void)
module_exit(usbnet_exit);
MODULE_AUTHOR("Jiun-Jie Huang");
MODULE_DESCRIPTION("GL620-USB-A Host-to-Host Link cables");
MODULE_LICENSE("GPL");
