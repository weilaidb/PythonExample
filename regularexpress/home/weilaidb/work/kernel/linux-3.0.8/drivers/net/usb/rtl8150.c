#define DRIVER_VERSION "v0.6.2 (2004/08/27)"
#define DRIVER_AUTHOR "Petko Manolov <petkan@users.sourceforge.net>"
#define DRIVER_DESC "rtl8150 based usb-ethernet driver"
#define	IDR			0x0120
#define	MAR			0x0126
#define	CR			0x012e
#define	TCR			0x012f
#define	RCR			0x0130
#define	TSR			0x0132
#define	RSR			0x0133
#define	CON0			0x0135
#define	CON1			0x0136
#define	MSR			0x0137
#define	PHYADD			0x0138
#define	PHYDAT			0x0139
#define	PHYCNT			0x013b
#define	GPPC			0x013d
#define	BMCR			0x0140
#define	BMSR			0x0142
#define	ANAR			0x0144
#define	ANLP			0x0146
#define	AER			0x0148
#define CSCR			0x014C
#define CSCR_LINK_STATUS	(1 << 3)
#define	IDR_EEPROM		0x1202
#define	PHY_READ		0
#define	PHY_WRITE		0x20
#define	PHY_GO			0x40
#define	MII_TIMEOUT		10
#define	INTBUFSIZE		8
#define	RTL8150_REQT_READ	0xc0
#define	RTL8150_REQT_WRITE	0x40
#define	RTL8150_REQ_GET_REGS	0x05
#define	RTL8150_REQ_SET_REGS	0x05
#define TSR_ECOL		(1<<5)
#define TSR_LCOL		(1<<4)
#define TSR_LOSS_CRS		(1<<3)
#define TSR_JBR			(1<<2)
#define TSR_ERRORS		(TSR_ECOL | TSR_LCOL | TSR_LOSS_CRS | TSR_JBR)
#define RSR_CRC			(1<<2)
#define RSR_FAE			(1<<1)
#define RSR_ERRORS		(RSR_CRC | RSR_FAE)
#define MSR_DUPLEX		(1<<4)
#define MSR_SPEED		(1<<3)
#define MSR_LINK		(1<<2)
#define INT_TSR			0x00
#define INT_RSR			0x01
#define INT_MSR			0x02
#define INT_WAKSR		0x03
#define INT_TXOK_CNT		0x04
#define INT_RXLOST_CNT		0x05
#define INT_CRERR_CNT		0x06
#define INT_COL_CNT		0x07
#define TSR_ECOL		(1<<5)
#define TSR_LCOL		(1<<4)
#define TSR_LOSS_CRS		(1<<3)
#define TSR_JBR			(1<<2)
#define TSR_ERRORS		(TSR_ECOL | TSR_LCOL | TSR_LOSS_CRS | TSR_JBR)
#define RSR_CRC			(1<<2)
#define RSR_FAE			(1<<1)
#define RSR_ERRORS		(RSR_CRC | RSR_FAE)
#define MSR_DUPLEX		(1<<4)
#define MSR_SPEED		(1<<3)
#define MSR_LINK		(1<<2)
#define INT_TSR			0x00
#define INT_RSR			0x01
#define INT_MSR			0x02
#define INT_WAKSR		0x03
#define INT_TXOK_CNT		0x04
#define INT_RXLOST_CNT		0x05
#define INT_CRERR_CNT		0x06
#define INT_COL_CNT		0x07
#define	RTL8150_MTU		1540
#define	RTL8150_TX_TIMEOUT	(HZ)
#define	RX_SKB_POOL_SIZE	4
#define	RTL8150_HW_CRC		0
#define	RX_REG_SET		1
#define	RTL8150_UNPLUG		2
#define	RX_URB_FAIL		3
#define	VENDOR_ID_REALTEK		0x0bda
#define	VENDOR_ID_MELCO			0x0411
#define	VENDOR_ID_MICRONET		0x3980
#define	VENDOR_ID_LONGSHINE		0x07b8
#define	VENDOR_ID_OQO			0x1557
#define	VENDOR_ID_ZYXEL			0x0586
#define PRODUCT_ID_RTL8150		0x8150
#define	PRODUCT_ID_LUAKTX		0x0012
#define	PRODUCT_ID_LCS8138TX		0x401a
#define PRODUCT_ID_SP128AR		0x0003
#define	PRODUCT_ID_PRESTIGE		0x401a
#undef	EEPROM_WRITE
static struct usb_device_id rtl8150_table[] = ;
MODULE_DEVICE_TABLE(usb, rtl8150_table);
struct rtl8150 ;
typedef struct rtl8150 rtl8150_t;
static void fill_skb_pool(rtl8150_t *);
static void free_skb_pool(rtl8150_t *);
static inline struct sk_buff *pull_skb(rtl8150_t *);
static void rtl8150_disconnect(struct usb_interface *intf);
static int rtl8150_probe(struct usb_interface *intf,
const struct usb_device_id *id);
static int rtl8150_suspend(struct usb_interface *intf, pm_message_t message);
static int rtl8150_resume(struct usb_interface *intf);
static const char driver_name [] = "rtl8150";
static struct usb_driver rtl8150_driver = ;
static int get_registers(rtl8150_t * dev, u16 indx, u16 size, void *data)
static int set_registers(rtl8150_t * dev, u16 indx, u16 size, void *data)
static void ctrl_callback(struct urb *urb)
static int async_set_registers(rtl8150_t * dev, u16 indx, u16 size)
static int read_mii_word(rtl8150_t * dev, u8 phy, __u8 indx, u16 * reg)
static int write_mii_word(rtl8150_t * dev, u8 phy, __u8 indx, u16 reg)
static inline void set_ethernet_addr(rtl8150_t * dev)
static int rtl8150_set_mac_address(struct net_device *netdev, void *p)
static int rtl8150_reset(rtl8150_t * dev)
static int alloc_all_urbs(rtl8150_t * dev)
static void free_all_urbs(rtl8150_t * dev)
static void unlink_all_urbs(rtl8150_t * dev)
static inline struct sk_buff *pull_skb(rtl8150_t *dev)
static void read_bulk_callback(struct urb *urb)
static void rx_fixup(unsigned long data)
static void write_bulk_callback(struct urb *urb)
static void intr_callback(struct urb *urb)
static int rtl8150_suspend(struct usb_interface *intf, pm_message_t message)
static int rtl8150_resume(struct usb_interface *intf)
static void fill_skb_pool(rtl8150_t *dev)
static void free_skb_pool(rtl8150_t *dev)
static int enable_net_traffic(rtl8150_t * dev)
static void disable_net_traffic(rtl8150_t * dev)
static void rtl8150_tx_timeout(struct net_device *netdev)
static void rtl8150_set_multicast(struct net_device *netdev)
static netdev_tx_t rtl8150_start_xmit(struct sk_buff *skb,
struct net_device *netdev)
static void set_carrier(struct net_device *netdev)
static int rtl8150_open(struct net_device *netdev)
static int rtl8150_close(struct net_device *netdev)
static void rtl8150_get_drvinfo(struct net_device *netdev, struct ethtool_drvinfo *info)
static int rtl8150_get_settings(struct net_device *netdev, struct ethtool_cmd *ecmd)
static const struct ethtool_ops ops = ;
static int rtl8150_ioctl(struct net_device *netdev, struct ifreq *rq, int cmd)
static const struct net_device_ops rtl8150_netdev_ops = ;
static int rtl8150_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void rtl8150_disconnect(struct usb_interface *intf)
static int __init usb_rtl8150_init(void)
static void __exit usb_rtl8150_exit(void)
module_init(usb_rtl8150_init);
module_exit(usb_rtl8150_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
