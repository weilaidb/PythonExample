#define	PL_S_EN		(1<<7)
#define	PL_TX_READY	(1<<5)
#define	PL_RESET_OUT	(1<<4)
#define	PL_RESET_IN	(1<<3)
#define	PL_TX_C		(1<<2)
#define	PL_TX_REQ	(1<<1)
#define	PL_PEER_E	(1<<0)
static inline int
pl_vendor_req(struct usbnet *dev, u8 req, u8 val, u8 index)
static inline int
pl_clear_QuickLink_features(struct usbnet *dev, int val)
static inline int
pl_set_QuickLink_features(struct usbnet *dev, int val)
static int pl_reset(struct usbnet *dev)
static const struct driver_info	prolific_info = ;
static const struct usb_device_id	products [] = ;
MODULE_DEVICE_TABLE(usb, products);
static struct usb_driver plusb_driver = ;
static int __init plusb_init(void)
module_init(plusb_init);
static void __exit plusb_exit(void)
module_exit(plusb_exit);
MODULE_AUTHOR("David Brownell");
MODULE_DESCRIPTION("Prolific PL-2301/2302/25A1 USB Host to Host Link Driver");
MODULE_LICENSE("GPL");
