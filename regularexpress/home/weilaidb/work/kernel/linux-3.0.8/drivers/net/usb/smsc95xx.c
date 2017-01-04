#define SMSC_CHIPNAME			"smsc95xx"
#define SMSC_DRIVER_VERSION		"1.0.4"
#define HS_USB_PKT_SIZE			(512)
#define FS_USB_PKT_SIZE			(64)
#define DEFAULT_HS_BURST_CAP_SIZE	(16 * 1024 + 5 * HS_USB_PKT_SIZE)
#define DEFAULT_FS_BURST_CAP_SIZE	(6 * 1024 + 33 * FS_USB_PKT_SIZE)
#define DEFAULT_BULK_IN_DELAY		(0x00002000)
#define MAX_SINGLE_PACKET_SIZE		(2048)
#define LAN95XX_EEPROM_MAGIC		(0x9500)
#define EEPROM_MAC_OFFSET		(0x01)
#define DEFAULT_TX_CSUM_ENABLE		(true)
#define DEFAULT_RX_CSUM_ENABLE		(true)
#define SMSC95XX_INTERNAL_PHY_ID	(1)
#define SMSC95XX_TX_OVERHEAD		(8)
#define SMSC95XX_TX_OVERHEAD_CSUM	(12)
struct smsc95xx_priv ;
struct usb_context ;
static int turbo_mode = true;
module_param(turbo_mode, bool, 0644);
MODULE_PARM_DESC(turbo_mode, "Enable multiple frames per Rx transaction");
static int smsc95xx_read_reg(struct usbnet *dev, u32 index, u32 *data)
static int smsc95xx_write_reg(struct usbnet *dev, u32 index, u32 data)
static int smsc95xx_phy_wait_not_busy(struct usbnet *dev)
static int smsc95xx_mdio_read(struct net_device *netdev, int phy_id, int idx)
static void smsc95xx_mdio_write(struct net_device *netdev, int phy_id, int idx,
int regval)
static int smsc95xx_wait_eeprom(struct usbnet *dev)
static int smsc95xx_eeprom_confirm_not_busy(struct usbnet *dev)
static int smsc95xx_read_eeprom(struct usbnet *dev, u32 offset, u32 length,
u8 *data)
static int smsc95xx_write_eeprom(struct usbnet *dev, u32 offset, u32 length,
u8 *data)
static void smsc95xx_async_cmd_callback(struct urb *urb)
static int smsc95xx_write_reg_async(struct usbnet *dev, u16 index, u32 *data)
static unsigned int smsc95xx_hash(char addr[ETH_ALEN])
static void smsc95xx_set_multicast(struct net_device *netdev)
static void smsc95xx_phy_update_flowcontrol(struct usbnet *dev, u8 duplex,
u16 lcladv, u16 rmtadv)
static int smsc95xx_link_reset(struct usbnet *dev)
static void smsc95xx_status(struct usbnet *dev, struct urb *urb)
static int smsc95xx_set_features(struct net_device *netdev, u32 features)
static int smsc95xx_ethtool_get_eeprom_len(struct net_device *net)
static int smsc95xx_ethtool_get_eeprom(struct net_device *netdev,
struct ethtool_eeprom *ee, u8 *data)
static int smsc95xx_ethtool_set_eeprom(struct net_device *netdev,
struct ethtool_eeprom *ee, u8 *data)
static const struct ethtool_ops smsc95xx_ethtool_ops = ;
static int smsc95xx_ioctl(struct net_device *netdev, struct ifreq *rq, int cmd)
static void smsc95xx_init_mac_address(struct usbnet *dev)
static int smsc95xx_set_mac_address(struct usbnet *dev)
static void smsc95xx_start_tx_path(struct usbnet *dev)
static void smsc95xx_start_rx_path(struct usbnet *dev)
static int smsc95xx_phy_initialize(struct usbnet *dev)
static int smsc95xx_reset(struct usbnet *dev)
static const struct net_device_ops smsc95xx_netdev_ops = ;
static int smsc95xx_bind(struct usbnet *dev, struct usb_interface *intf)
static void smsc95xx_unbind(struct usbnet *dev, struct usb_interface *intf)
static void smsc95xx_rx_csum_offload(struct sk_buff *skb)
static int smsc95xx_rx_fixup(struct usbnet *dev, struct sk_buff *skb)
static u32 smsc95xx_calc_csum_preamble(struct sk_buff *skb)
static struct sk_buff *smsc95xx_tx_fixup(struct usbnet *dev,
struct sk_buff *skb, gfp_t flags)
static const struct driver_info smsc95xx_info = ;
static const struct usb_device_id products[] = ;
MODULE_DEVICE_TABLE(usb, products);
static struct usb_driver smsc95xx_driver = ;
static int __init smsc95xx_init(void)
module_init(smsc95xx_init);
static void __exit smsc95xx_exit(void)
module_exit(smsc95xx_exit);
MODULE_AUTHOR("Nancy Lin");
MODULE_AUTHOR("Steve Glendinning <steve.glendinning@smsc.com>");
MODULE_DESCRIPTION("SMSC95XX USB 2.0 Ethernet Devices");
MODULE_LICENSE("GPL");
