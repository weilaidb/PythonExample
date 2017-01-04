struct vl600_frame_hdr  __attribute__((packed));
struct vl600_pkt_hdr  __attribute__((packed));
struct vl600_state ;
static int vl600_bind(struct usbnet *dev, struct usb_interface *intf)
static void vl600_unbind(struct usbnet *dev, struct usb_interface *intf)
static int vl600_rx_fixup(struct usbnet *dev, struct sk_buff *skb)
static struct sk_buff *vl600_tx_fixup(struct usbnet *dev,
struct sk_buff *skb, gfp_t flags)
static const struct driver_info	vl600_info = ;
static const struct usb_device_id products[] = ;
MODULE_DEVICE_TABLE(usb, products);
static struct usb_driver lg_vl600_driver = ;
static int __init vl600_init(void)
module_init(vl600_init);
static void __exit vl600_exit(void)
module_exit(vl600_exit);
MODULE_AUTHOR("Anrzej Zaborowski");
MODULE_DESCRIPTION("LG-VL600 modem's ethernet link");
MODULE_LICENSE("GPL");
