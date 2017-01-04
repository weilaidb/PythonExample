#define SMSC_CHIPNAME			"smsc75xx"
#define SMSC_DRIVER_VERSION		"1.0.0"
#define HS_USB_PKT_SIZE			(512)
#define FS_USB_PKT_SIZE			(64)
#define DEFAULT_HS_BURST_CAP_SIZE	(16 * 1024 + 5 * HS_USB_PKT_SIZE)
#define DEFAULT_FS_BURST_CAP_SIZE	(6 * 1024 + 33 * FS_USB_PKT_SIZE)
#define DEFAULT_BULK_IN_DELAY		(0x00002000)
#define MAX_SINGLE_PACKET_SIZE		(9000)
#define LAN75XX_EEPROM_MAGIC		(0x7500)
#define EEPROM_MAC_OFFSET		(0x01)
#define DEFAULT_TX_CSUM_ENABLE		(true)
#define DEFAULT_RX_CSUM_ENABLE		(true)
#define DEFAULT_TSO_ENABLE		(true)
#define SMSC75XX_INTERNAL_PHY_ID	(1)
#define SMSC75XX_TX_OVERHEAD		(8)
#define MAX_RX_FIFO_SIZE		(20 * 1024)
#define MAX_TX_FIFO_SIZE		(12 * 1024)
#define USB_VENDOR_ID_SMSC		(0x0424)
#define USB_PRODUCT_ID_LAN7500		(0x7500)
#define USB_PRODUCT_ID_LAN7505		(0x7505)
#define check_warn(ret, fmt, args...) \
()
#define check_warn_return(ret, fmt, args...) \
()
#define check_warn_goto_done(ret, fmt, args...) \
()
struct smsc75xx_priv ;
struct usb_context ;
static int turbo_mode = true;
module_param(turbo_mode, bool, 0644);
MODULE_PARM_DESC(turbo_mode, "Enable multiple frames per Rx transaction");
static int __must_check smsc75xx_read_reg(struct usbnet *dev, u32 index,
u32 *data)
static int __must_check smsc75xx_write_reg(struct usbnet *dev, u32 index,
u32 data)
static int smsc75xx_phy_wait_not_busy(struct usbnet *dev)
static int smsc75xx_mdio_read(struct net_device *netdev, int phy_id, int idx)
static void smsc75xx_mdio_write(struct net_device *netdev, int phy_id, int idx,
int regval)
static int smsc75xx_wait_eeprom(struct usbnet *dev)
static int smsc75xx_eeprom_confirm_not_busy(struct usbnet *dev)
static int smsc75xx_read_eeprom(struct usbnet *dev, u32 offset, u32 length,
u8 *data)
static int smsc75xx_write_eeprom(struct usbnet *dev, u32 offset, u32 length,
u8 *data)
static int smsc75xx_dataport_wait_not_busy(struct usbnet *dev)
static int smsc75xx_dataport_write(struct usbnet *dev, u32 ram_select, u32 addr,
u32 length, u32 *buf)
static u32 smsc75xx_hash(char addr[ETH_ALEN])
static void smsc75xx_deferred_multicast_write(struct work_struct *param)
static void smsc75xx_set_multicast(struct net_device *netdev)
static int smsc75xx_update_flowcontrol(struct usbnet *dev, u8 duplex,
u16 lcladv, u16 rmtadv)
static int smsc75xx_link_reset(struct usbnet *dev)
static void smsc75xx_status(struct usbnet *dev, struct urb *urb)
static int smsc75xx_ethtool_get_eeprom_len(struct net_device *net)
static int smsc75xx_ethtool_get_eeprom(struct net_device *netdev,
struct ethtool_eeprom *ee, u8 *data)
static int smsc75xx_ethtool_set_eeprom(struct net_device *netdev,
struct ethtool_eeprom *ee, u8 *data)
static const struct ethtool_ops smsc75xx_ethtool_ops = ;
static int smsc75xx_ioctl(struct net_device *netdev, struct ifreq *rq, int cmd)
static void smsc75xx_init_mac_address(struct usbnet *dev)
static int smsc75xx_set_mac_address(struct usbnet *dev)
static int smsc75xx_phy_initialize(struct usbnet *dev)
static int smsc75xx_set_rx_max_frame_length(struct usbnet *dev, int size)
static int smsc75xx_change_mtu(struct net_device *netdev, int new_mtu)
static int smsc75xx_set_features(struct net_device *netdev, u32 features)
static int smsc75xx_reset(struct usbnet *dev)
static const struct net_device_ops smsc75xx_netdev_ops = ;
static int smsc75xx_bind(struct usbnet *dev, struct usb_interface *intf)
static void smsc75xx_unbind(struct usbnet *dev, struct usb_interface *intf)
static void smsc75xx_rx_csum_offload(struct usbnet *dev, struct sk_buff *skb,
u32 rx_cmd_a, u32 rx_cmd_b)
static int smsc75xx_rx_fixup(struct usbnet *dev, struct sk_buff *skb)
static struct sk_buff *smsc75xx_tx_fixup(struct usbnet *dev,
struct sk_buff *skb, gfp_t flags)
static const struct driver_info smsc75xx_info = ;
static const struct usb_device_id products[] = ;
MODULE_DEVICE_TABLE(usb, products);
static struct usb_driver smsc75xx_driver = ;
static int __init smsc75xx_init(void)
module_init(smsc75xx_init);
static void __exit smsc75xx_exit(void)
module_exit(smsc75xx_exit);
MODULE_AUTHOR("Nancy Lin");
MODULE_AUTHOR("Steve Glendinning <steve.glendinning@smsc.com>");
MODULE_DESCRIPTION("SMSC75XX USB 2.0 Gigabit Ethernet Devices");
MODULE_LICENSE("GPL");
