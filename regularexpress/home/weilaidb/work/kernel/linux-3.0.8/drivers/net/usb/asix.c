#define DRIVER_VERSION "14-Jun-2006"
static const char driver_name [] = "asix";
#define AX_CMD_SET_SW_MII		0x06
#define AX_CMD_READ_MII_REG		0x07
#define AX_CMD_WRITE_MII_REG		0x08
#define AX_CMD_SET_HW_MII		0x0a
#define AX_CMD_READ_EEPROM		0x0b
#define AX_CMD_WRITE_EEPROM		0x0c
#define AX_CMD_WRITE_ENABLE		0x0d
#define AX_CMD_WRITE_DISABLE		0x0e
#define AX_CMD_READ_RX_CTL		0x0f
#define AX_CMD_WRITE_RX_CTL		0x10
#define AX_CMD_READ_IPG012		0x11
#define AX_CMD_WRITE_IPG0		0x12
#define AX_CMD_WRITE_IPG1		0x13
#define AX_CMD_READ_NODE_ID		0x13
#define AX_CMD_WRITE_NODE_ID		0x14
#define AX_CMD_WRITE_IPG2		0x14
#define AX_CMD_WRITE_MULTI_FILTER	0x16
#define AX88172_CMD_READ_NODE_ID	0x17
#define AX_CMD_READ_PHY_ID		0x19
#define AX_CMD_READ_MEDIUM_STATUS	0x1a
#define AX_CMD_WRITE_MEDIUM_MODE	0x1b
#define AX_CMD_READ_MONITOR_MODE	0x1c
#define AX_CMD_WRITE_MONITOR_MODE	0x1d
#define AX_CMD_READ_GPIOS		0x1e
#define AX_CMD_WRITE_GPIOS		0x1f
#define AX_CMD_SW_RESET			0x20
#define AX_CMD_SW_PHY_STATUS		0x21
#define AX_CMD_SW_PHY_SELECT		0x22
#define AX_MONITOR_MODE			0x01
#define AX_MONITOR_LINK			0x02
#define AX_MONITOR_MAGIC		0x04
#define AX_MONITOR_HSFS			0x10
#define AX88172_MEDIUM_FD		0x02
#define AX88172_MEDIUM_TX		0x04
#define AX88172_MEDIUM_FC		0x10
#define AX88172_MEDIUM_DEFAULT \
( AX88172_MEDIUM_FD | AX88172_MEDIUM_TX | AX88172_MEDIUM_FC )
#define AX_MCAST_FILTER_SIZE		8
#define AX_MAX_MCAST			64
#define AX_SWRESET_CLEAR		0x00
#define AX_SWRESET_RR			0x01
#define AX_SWRESET_RT			0x02
#define AX_SWRESET_PRTE			0x04
#define AX_SWRESET_PRL			0x08
#define AX_SWRESET_BZ			0x10
#define AX_SWRESET_IPRL			0x20
#define AX_SWRESET_IPPD			0x40
#define AX88772_IPG0_DEFAULT		0x15
#define AX88772_IPG1_DEFAULT		0x0c
#define AX88772_IPG2_DEFAULT		0x12
#define AX_MEDIUM_PF		0x0080
#define AX_MEDIUM_JFE		0x0040
#define AX_MEDIUM_TFC		0x0020
#define AX_MEDIUM_RFC		0x0010
#define AX_MEDIUM_ENCK		0x0008
#define AX_MEDIUM_AC		0x0004
#define AX_MEDIUM_FD		0x0002
#define AX_MEDIUM_GM		0x0001
#define AX_MEDIUM_SM		0x1000
#define AX_MEDIUM_SBP		0x0800
#define AX_MEDIUM_PS		0x0200
#define AX_MEDIUM_RE		0x0100
#define AX88178_MEDIUM_DEFAULT	\
(AX_MEDIUM_PS | AX_MEDIUM_FD | AX_MEDIUM_AC | \
AX_MEDIUM_RFC | AX_MEDIUM_TFC | AX_MEDIUM_JFE | \
AX_MEDIUM_RE )
#define AX88772_MEDIUM_DEFAULT	\
(AX_MEDIUM_FD | AX_MEDIUM_RFC | \
AX_MEDIUM_TFC | AX_MEDIUM_PS | \
AX_MEDIUM_AC | AX_MEDIUM_RE )
#define AX_RX_CTL_SO			0x0080
#define AX_RX_CTL_AP			0x0020
#define AX_RX_CTL_AM			0x0010
#define AX_RX_CTL_AB			0x0008
#define AX_RX_CTL_SEP			0x0004
#define AX_RX_CTL_AMALL			0x0002
#define AX_RX_CTL_PRO			0x0001
#define AX_RX_CTL_MFB_2048		0x0000
#define AX_RX_CTL_MFB_4096		0x0100
#define AX_RX_CTL_MFB_8192		0x0200
#define AX_RX_CTL_MFB_16384		0x0300
#define AX_DEFAULT_RX_CTL	\
(AX_RX_CTL_SO | AX_RX_CTL_AB )
#define AX_GPIO_GPO0EN		0x01
#define AX_GPIO_GPO_0		0x02
#define AX_GPIO_GPO1EN		0x04
#define AX_GPIO_GPO_1		0x08
#define AX_GPIO_GPO2EN		0x10
#define AX_GPIO_GPO_2		0x20
#define AX_GPIO_RESERVED	0x40
#define AX_GPIO_RSE		0x80
#define AX_EEPROM_MAGIC		0xdeadbeef
#define AX88172_EEPROM_LEN	0x40
#define AX88772_EEPROM_LEN	0xff
#define PHY_MODE_MARVELL	0x0000
#define MII_MARVELL_LED_CTRL	0x0018
#define MII_MARVELL_STATUS	0x001b
#define MII_MARVELL_CTRL	0x0014
#define MARVELL_LED_MANUAL	0x0019
#define MARVELL_STATUS_HWCFG	0x0004
#define MARVELL_CTRL_TXDELAY	0x0002
#define MARVELL_CTRL_RXDELAY	0x0080
struct asix_data ;
struct ax88172_int_data  __packed;
static int asix_read_cmd(struct usbnet *dev, u8 cmd, u16 value, u16 index,
u16 size, void *data)
static int asix_write_cmd(struct usbnet *dev, u8 cmd, u16 value, u16 index,
u16 size, void *data)
static void asix_async_cmd_callback(struct urb *urb)
static void
asix_write_cmd_async(struct usbnet *dev, u8 cmd, u16 value, u16 index,
u16 size, void *data)
static int asix_rx_fixup(struct usbnet *dev, struct sk_buff *skb)
static struct sk_buff *asix_tx_fixup(struct usbnet *dev, struct sk_buff *skb,
gfp_t flags)
static void asix_status(struct usbnet *dev, struct urb *urb)
static inline int asix_set_sw_mii(struct usbnet *dev)
static inline int asix_set_hw_mii(struct usbnet *dev)
static inline int asix_get_phy_addr(struct usbnet *dev)
static int asix_sw_reset(struct usbnet *dev, u8 flags)
static u16 asix_read_rx_ctl(struct usbnet *dev)
static int asix_write_rx_ctl(struct usbnet *dev, u16 mode)
static u16 asix_read_medium_status(struct usbnet *dev)
static int asix_write_medium_mode(struct usbnet *dev, u16 mode)
static int asix_write_gpio(struct usbnet *dev, u16 value, int sleep)
static void asix_set_multicast(struct net_device *net)
static int asix_mdio_read(struct net_device *netdev, int phy_id, int loc)
static void
asix_mdio_write(struct net_device *netdev, int phy_id, int loc, int val)
static u32 asix_get_phyid(struct usbnet *dev)
static void
asix_get_wol(struct net_device *net, struct ethtool_wolinfo *wolinfo)
static int
asix_set_wol(struct net_device *net, struct ethtool_wolinfo *wolinfo)
static int asix_get_eeprom_len(struct net_device *net)
static int asix_get_eeprom(struct net_device *net,
struct ethtool_eeprom *eeprom, u8 *data)
static void asix_get_drvinfo (struct net_device *net,
struct ethtool_drvinfo *info)
static u32 asix_get_link(struct net_device *net)
static int asix_ioctl (struct net_device *net, struct ifreq *rq, int cmd)
static int asix_set_mac_address(struct net_device *net, void *p)
static const struct ethtool_ops ax88172_ethtool_ops = ;
static void ax88172_set_multicast(struct net_device *net)
static int ax88172_link_reset(struct usbnet *dev)
static const struct net_device_ops ax88172_netdev_ops = ;
static int ax88172_bind(struct usbnet *dev, struct usb_interface *intf)
static const struct ethtool_ops ax88772_ethtool_ops = ;
static int ax88772_link_reset(struct usbnet *dev)
static const struct net_device_ops ax88772_netdev_ops = ;
static int ax88772_bind(struct usbnet *dev, struct usb_interface *intf)
static struct ethtool_ops ax88178_ethtool_ops = ;
static int marvell_phy_init(struct usbnet *dev)
static int marvell_led_status(struct usbnet *dev, u16 speed)
static int ax88178_link_reset(struct usbnet *dev)
static void ax88178_set_mfb(struct usbnet *dev)
static int ax88178_change_mtu(struct net_device *net, int new_mtu)
static const struct net_device_ops ax88178_netdev_ops = ;
static int ax88178_bind(struct usbnet *dev, struct usb_interface *intf)
static const struct driver_info ax8817x_info = ;
static const struct driver_info dlink_dub_e100_info = ;
static const struct driver_info netgear_fa120_info = ;
static const struct driver_info hawking_uf200_info = ;
static const struct driver_info ax88772_info = ;
static const struct driver_info ax88178_info = ;
static const struct usb_device_id	products [] = ;
MODULE_DEVICE_TABLE(usb, products);
static struct usb_driver asix_driver = ;
static int __init asix_init(void)
module_init(asix_init);
static void __exit asix_exit(void)
module_exit(asix_exit);
MODULE_AUTHOR("David Hollis");
MODULE_DESCRIPTION("ASIX AX8817X based USB 2.0 Ethernet Devices");
MODULE_LICENSE("GPL");
