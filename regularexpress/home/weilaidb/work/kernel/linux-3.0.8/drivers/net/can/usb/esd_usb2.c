MODULE_AUTHOR("Matthias Fuchs <matthias.fuchs@esd.eu>");
MODULE_DESCRIPTION("CAN driver for esd CAN-USB/2 interfaces");
MODULE_LICENSE("GPL v2");
#define USB_ESDGMBH_VENDOR_ID	0x0ab4
#define USB_CANUSB2_PRODUCT_ID	0x0010
#define ESD_USB2_CAN_CLOCK	60000000
#define ESD_USB2_MAX_NETS	2
#define CMD_VERSION		1
#define CMD_CAN_RX		2
#define CMD_CAN_TX		3
#define CMD_SETBAUD		4
#define CMD_TS			5
#define CMD_IDADD		6
#define ESD_RTR			0x10
#define ESD_EXTID		0x20000000
#define ESD_EVENT		0x40000000
#define ESD_IDMASK		0x1fffffff
#define ESD_EV_CAN_ERROR_EXT	2
#define ESD_USB2_UBR		0x80000000
#define ESD_USB2_LOM		0x40000000
#define ESD_USB2_NO_BAUDRATE	0x7fffffff
#define ESD_USB2_TSEG1_MIN	1
#define ESD_USB2_TSEG1_MAX	16
#define ESD_USB2_TSEG1_SHIFT	16
#define ESD_USB2_TSEG2_MIN	1
#define ESD_USB2_TSEG2_MAX	8
#define ESD_USB2_TSEG2_SHIFT	20
#define ESD_USB2_SJW_MAX	4
#define ESD_USB2_SJW_SHIFT	14
#define ESD_USB2_BRP_MIN	1
#define ESD_USB2_BRP_MAX	1024
#define ESD_USB2_BRP_INC	1
#define ESD_USB2_3_SAMPLES	0x00800000
#define ESD_ID_ENABLE		0x80
#define ESD_MAX_ID_SEGMENT	64
#define SJA1000_ECC_SEG		0x1F
#define SJA1000_ECC_DIR		0x20
#define SJA1000_ECC_ERR		0x06
#define SJA1000_ECC_BIT		0x00
#define SJA1000_ECC_FORM	0x40
#define SJA1000_ECC_STUFF	0x80
#define SJA1000_ECC_MASK	0xc0
#define ESD_BUSSTATE_MASK	0xc0
#define ESD_BUSSTATE_WARN	0x40
#define ESD_BUSSTATE_ERRPASSIVE	0x80
#define ESD_BUSSTATE_BUSOFF	0xc0
#define RX_BUFFER_SIZE		1024
#define MAX_RX_URBS		4
#define MAX_TX_URBS		16
struct header_msg ;
struct version_msg ;
struct version_reply_msg ;
struct rx_msg ;
struct tx_msg ;
struct tx_done_msg ;
struct id_filter_msg ;
struct set_baudrate_msg ;
struct __attribute__ ((packed)) esd_usb2_msg ;
static struct usb_device_id esd_usb2_table[] = ;
MODULE_DEVICE_TABLE(usb, esd_usb2_table);
struct esd_usb2_net_priv;
struct esd_tx_urb_context ;
struct esd_usb2 ;
struct esd_usb2_net_priv ;
static void esd_usb2_rx_event(struct esd_usb2_net_priv *priv,
struct esd_usb2_msg *msg)
static void esd_usb2_rx_can_msg(struct esd_usb2_net_priv *priv,
struct esd_usb2_msg *msg)
static void esd_usb2_tx_done_msg(struct esd_usb2_net_priv *priv,
struct esd_usb2_msg *msg)
static void esd_usb2_read_bulk_callback(struct urb *urb)
static void esd_usb2_write_bulk_callback(struct urb *urb)
static ssize_t show_firmware(struct device *d,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(firmware, S_IRUGO, show_firmware, NULL);
static ssize_t show_hardware(struct device *d,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(hardware, S_IRUGO, show_hardware, NULL);
static ssize_t show_nets(struct device *d,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(nets, S_IRUGO, show_nets, NULL);
static int esd_usb2_send_msg(struct esd_usb2 *dev, struct esd_usb2_msg *msg)
static int esd_usb2_wait_msg(struct esd_usb2 *dev,
struct esd_usb2_msg *msg)
static int esd_usb2_setup_rx_urbs(struct esd_usb2 *dev)
static int esd_usb2_start(struct esd_usb2_net_priv *priv)
static void unlink_all_urbs(struct esd_usb2 *dev)
static int esd_usb2_open(struct net_device *netdev)
static netdev_tx_t esd_usb2_start_xmit(struct sk_buff *skb,
struct net_device *netdev)
static int esd_usb2_close(struct net_device *netdev)
static const struct net_device_ops esd_usb2_netdev_ops = ;
static struct can_bittiming_const esd_usb2_bittiming_const = ;
static int esd_usb2_set_bittiming(struct net_device *netdev)
static int esd_usb2_get_berr_counter(const struct net_device *netdev,
struct can_berr_counter *bec)
static int esd_usb2_set_mode(struct net_device *netdev, enum can_mode mode)
static int esd_usb2_probe_one_net(struct usb_interface *intf, int index)
static int esd_usb2_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void esd_usb2_disconnect(struct usb_interface *intf)
static struct usb_driver esd_usb2_driver = ;
static int __init esd_usb2_init(void)
module_init(esd_usb2_init);
static void __exit esd_usb2_exit(void)
module_exit(esd_usb2_exit);
