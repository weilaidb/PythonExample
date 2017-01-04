#define MCS7830_RD_BMREQ	(USB_DIR_IN  | USB_TYPE_VENDOR | \
USB_RECIP_DEVICE)
#define MCS7830_WR_BMREQ	(USB_DIR_OUT | USB_TYPE_VENDOR | \
USB_RECIP_DEVICE)
#define MCS7830_RD_BREQ		0x0E
#define MCS7830_WR_BREQ		0x0D
#define MCS7830_CTRL_TIMEOUT	1000
#define MCS7830_MAX_MCAST	64
#define MCS7830_VENDOR_ID	0x9710
#define MCS7832_PRODUCT_ID	0x7832
#define MCS7830_PRODUCT_ID	0x7830
#define MCS7730_PRODUCT_ID	0x7730
#define SITECOM_VENDOR_ID	0x0DF6
#define LN_030_PRODUCT_ID	0x0021
#define MCS7830_MII_ADVERTISE	(ADVERTISE_PAUSE_CAP | ADVERTISE_100FULL | \
ADVERTISE_100HALF | ADVERTISE_10FULL | \
ADVERTISE_10HALF | ADVERTISE_CSMA)
enum ;
enum ;
struct mcs7830_data ;
static const char driver_name[] = "MOSCHIP usb-ethernet driver";
static int mcs7830_get_reg(struct usbnet *dev, u16 index, u16 size, void *data)
static int mcs7830_set_reg(struct usbnet *dev, u16 index, u16 size, const void *data)
static void mcs7830_async_cmd_callback(struct urb *urb)
static void mcs7830_set_reg_async(struct usbnet *dev, u16 index, u16 size, void *data)
static int mcs7830_hif_get_mac_address(struct usbnet *dev, unsigned char *addr)
static int mcs7830_hif_set_mac_address(struct usbnet *dev, unsigned char *addr)
static int mcs7830_set_mac_address(struct net_device *netdev, void *p)
static int mcs7830_read_phy(struct usbnet *dev, u8 index)
static int mcs7830_write_phy(struct usbnet *dev, u8 index, u16 val)
static int mcs7830_set_autoneg(struct usbnet *dev, int ptrUserPhyMode)
static int mcs7830_get_rev(struct usbnet *dev)
static void mcs7830_rev_C_fixup(struct usbnet *dev)
static int mcs7830_mdio_read(struct net_device *netdev, int phy_id,
int location)
static void mcs7830_mdio_write(struct net_device *netdev, int phy_id,
int location, int val)
static int mcs7830_ioctl(struct net_device *net, struct ifreq *rq, int cmd)
static inline struct mcs7830_data *mcs7830_get_data(struct usbnet *dev)
static void mcs7830_hif_update_multicast_hash(struct usbnet *dev)
static void mcs7830_hif_update_config(struct usbnet *dev)
static void mcs7830_data_set_multicast(struct net_device *net)
static int mcs7830_apply_base_config(struct usbnet *dev)
static void mcs7830_set_multicast(struct net_device *net)
static int mcs7830_get_regs_len(struct net_device *net)
static void mcs7830_get_drvinfo(struct net_device *net, struct ethtool_drvinfo *drvinfo)
static void mcs7830_get_regs(struct net_device *net, struct ethtool_regs *regs, void *data)
static const struct ethtool_ops mcs7830_ethtool_ops = ;
static const struct net_device_ops mcs7830_netdev_ops = ;
static int mcs7830_bind(struct usbnet *dev, struct usb_interface *udev)
static int mcs7830_rx_fixup(struct usbnet *dev, struct sk_buff *skb)
static const struct driver_info moschip_info = ;
static const struct driver_info sitecom_info = ;
static const struct usb_device_id products[] = ;
MODULE_DEVICE_TABLE(usb, products);
static int mcs7830_reset_resume (struct usb_interface *intf)
static struct usb_driver mcs7830_driver = ;
static int __init mcs7830_init(void)
module_init(mcs7830_init);
static void __exit mcs7830_exit(void)
module_exit(mcs7830_exit);
MODULE_DESCRIPTION("USB to network adapter MCS7830)");
MODULE_LICENSE("GPL");
