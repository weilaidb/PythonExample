#define DM_READ_REGS	0x00
#define DM_WRITE_REGS	0x01
#define DM_READ_MEMS	0x02
#define DM_WRITE_REG	0x03
#define DM_WRITE_MEMS	0x05
#define DM_WRITE_MEM	0x07
#define DM_NET_CTRL	0x00
#define DM_RX_CTRL	0x05
#define DM_SHARED_CTRL	0x0b
#define DM_SHARED_ADDR	0x0c
#define DM_SHARED_DATA	0x0d
#define DM_PHY_ADDR	0x10
#define DM_MCAST_ADDR	0x16
#define DM_GPR_CTRL	0x1e
#define DM_GPR_DATA	0x1f
#define DM_MAX_MCAST	64
#define DM_MCAST_SIZE	8
#define DM_EEPROM_LEN	256
#define DM_TX_OVERHEAD	2
#define DM_RX_OVERHEAD	7
#define DM_TIMEOUT	1000
static int dm_read(struct usbnet *dev, u8 reg, u16 length, void *data)
static int dm_read_reg(struct usbnet *dev, u8 reg, u8 *value)
static int dm_write(struct usbnet *dev, u8 reg, u16 length, void *data)
static int dm_write_reg(struct usbnet *dev, u8 reg, u8 value)
static void dm_write_async_callback(struct urb *urb)
static void dm_write_async_helper(struct usbnet *dev, u8 reg, u8 value,
u16 length, void *data)
static void dm_write_async(struct usbnet *dev, u8 reg, u16 length, void *data)
static void dm_write_reg_async(struct usbnet *dev, u8 reg, u8 value)
static int dm_read_shared_word(struct usbnet *dev, int phy, u8 reg, __le16 *value)
static int dm_write_shared_word(struct usbnet *dev, int phy, u8 reg, __le16 value)
static int dm_read_eeprom_word(struct usbnet *dev, u8 offset, void *value)
static int dm9601_get_eeprom_len(struct net_device *dev)
static int dm9601_get_eeprom(struct net_device *net,
struct ethtool_eeprom *eeprom, u8 * data)
static int dm9601_mdio_read(struct net_device *netdev, int phy_id, int loc)
static void dm9601_mdio_write(struct net_device *netdev, int phy_id, int loc,
int val)
static void dm9601_get_drvinfo(struct net_device *net,
struct ethtool_drvinfo *info)
static u32 dm9601_get_link(struct net_device *net)
static int dm9601_ioctl(struct net_device *net, struct ifreq *rq, int cmd)
static const struct ethtool_ops dm9601_ethtool_ops = ;
static void dm9601_set_multicast(struct net_device *net)
static void __dm9601_set_mac_address(struct usbnet *dev)
static int dm9601_set_mac_address(struct net_device *net, void *p)
static const struct net_device_ops dm9601_netdev_ops = ;
static int dm9601_bind(struct usbnet *dev, struct usb_interface *intf)
static int dm9601_rx_fixup(struct usbnet *dev, struct sk_buff *skb)
static struct sk_buff *dm9601_tx_fixup(struct usbnet *dev, struct sk_buff *skb,
gfp_t flags)
static void dm9601_status(struct usbnet *dev, struct urb *urb)
static int dm9601_link_reset(struct usbnet *dev)
static const struct driver_info dm9601_info = ;
static const struct usb_device_id products[] = ;
MODULE_DEVICE_TABLE(usb, products);
static struct usb_driver dm9601_driver = ;
static int __init dm9601_init(void)
static void __exit dm9601_exit(void)
module_init(dm9601_init);
module_exit(dm9601_exit);
MODULE_AUTHOR("Peter Korsgaard <jacmet@sunsite.dk>");
MODULE_DESCRIPTION("Davicom DM9601 USB 1.1 ethernet devices");
MODULE_LICENSE("GPL");
