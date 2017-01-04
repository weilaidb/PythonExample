static struct sk_buff *
zaurus_tx_fixup(struct usbnet *dev, struct sk_buff *skb, gfp_t flags)
static int zaurus_bind(struct usbnet *dev, struct usb_interface *intf)
static int always_connected (struct usbnet *dev)
static const struct driver_info	zaurus_sl5x00_info = ;
#define	ZAURUS_STRONGARM_INFO	((unsigned long)&zaurus_sl5x00_info)
static const struct driver_info	zaurus_pxa_info = ;
#define	ZAURUS_PXA_INFO		((unsigned long)&zaurus_pxa_info)
static const struct driver_info	olympus_mxl_info = ;
#define	OLYMPUS_MXL_INFO	((unsigned long)&olympus_mxl_info)
static const u8 safe_guid[16] = ;
static const u8 blan_guid[16] = ;
static int blan_mdlm_bind(struct usbnet *dev, struct usb_interface *intf)
static const struct driver_info	bogus_mdlm_info = ;
static const struct usb_device_id	products [] = ;
MODULE_DEVICE_TABLE(usb, products);
static struct usb_driver zaurus_driver = ;
static int __init zaurus_init(void)
module_init(zaurus_init);
static void __exit zaurus_exit(void)
module_exit(zaurus_exit);
MODULE_AUTHOR("Pavel Machek, David Brownell");
MODULE_DESCRIPTION("Sharp Zaurus PDA, and compatible products");
MODULE_LICENSE("GPL");
