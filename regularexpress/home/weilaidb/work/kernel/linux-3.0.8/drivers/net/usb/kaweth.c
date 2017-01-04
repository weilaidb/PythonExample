#undef DEBUG
#define KAWETH_MTU			1514
#define KAWETH_BUF_SIZE			1664
#define KAWETH_TX_TIMEOUT		(5 * HZ)
#define KAWETH_SCRATCH_SIZE		32
#define KAWETH_FIRMWARE_BUF_SIZE	4096
#define KAWETH_CONTROL_TIMEOUT		(30000)
#define KAWETH_STATUS_BROKEN		0x0000001
#define KAWETH_STATUS_CLOSING		0x0000002
#define KAWETH_STATUS_SUSPENDING	0x0000004
#define KAWETH_STATUS_BLOCKED (KAWETH_STATUS_CLOSING | KAWETH_STATUS_SUSPENDING)
#define KAWETH_PACKET_FILTER_PROMISCUOUS	0x01
#define KAWETH_PACKET_FILTER_ALL_MULTICAST	0x02
#define KAWETH_PACKET_FILTER_DIRECTED		0x04
#define KAWETH_PACKET_FILTER_BROADCAST		0x08
#define KAWETH_PACKET_FILTER_MULTICAST		0x10
#define KAWETH_COMMAND_GET_ETHERNET_DESC	0x00
#define KAWETH_COMMAND_MULTICAST_FILTERS        0x01
#define KAWETH_COMMAND_SET_PACKET_FILTER	0x02
#define KAWETH_COMMAND_STATISTICS               0x03
#define KAWETH_COMMAND_SET_TEMP_MAC     	0x06
#define KAWETH_COMMAND_GET_TEMP_MAC             0x07
#define KAWETH_COMMAND_SET_URB_SIZE		0x08
#define KAWETH_COMMAND_SET_SOFS_WAIT		0x09
#define KAWETH_COMMAND_SCAN			0xFF
#define KAWETH_SOFS_TO_WAIT			0x05
#define INTBUFFERSIZE				4
#define STATE_OFFSET				0
#define STATE_MASK				0x40
#define	STATE_SHIFT				5
#define IS_BLOCKED(s) (s & KAWETH_STATUS_BLOCKED)
MODULE_AUTHOR("Michael Zappe <zapman@interlan.net>, Stephane Alnet <stephane@u-picardie.fr>, Brad Hards <bhards@bigpond.net.au> and Oliver Neukum <oliver@neukum.org>");
MODULE_DESCRIPTION("KL5USB101 USB Ethernet driver");
MODULE_LICENSE("GPL");
MODULE_FIRMWARE("kaweth/new_code.bin");
MODULE_FIRMWARE("kaweth/new_code_fix.bin");
MODULE_FIRMWARE("kaweth/trigger_code.bin");
MODULE_FIRMWARE("kaweth/trigger_code_fix.bin");
static const char driver_name[] = "kaweth";
static int kaweth_probe(
struct usb_interface *intf,
const struct usb_device_id *id
);
static void kaweth_disconnect(struct usb_interface *intf);
static int kaweth_internal_control_msg(struct usb_device *usb_dev,
unsigned int pipe,
struct usb_ctrlrequest *cmd, void *data,
int len, int timeout);
static int kaweth_suspend(struct usb_interface *intf, pm_message_t message);
static int kaweth_resume(struct usb_interface *intf);
static struct usb_device_id usb_klsi_table[] = ;
MODULE_DEVICE_TABLE (usb, usb_klsi_table);
static struct usb_driver kaweth_driver = ;
typedef __u8 eth_addr_t[6];
struct usb_eth_dev ;
struct kaweth_ethernet_configuration
__packed;
struct kaweth_device
;
static int kaweth_control(struct kaweth_device *kaweth,
unsigned int pipe,
__u8 request,
__u8 requesttype,
__u16 value,
__u16 index,
void *data,
__u16 size,
int timeout)
static int kaweth_read_configuration(struct kaweth_device *kaweth)
static int kaweth_set_urb_size(struct kaweth_device *kaweth, __u16 urb_size)
static int kaweth_set_sofs_wait(struct kaweth_device *kaweth, __u16 sofs_wait)
static int kaweth_set_receive_filter(struct kaweth_device *kaweth,
__u16 receive_filter)
static int kaweth_download_firmware(struct kaweth_device *kaweth,
const char *fwname,
__u8 interrupt,
__u8 type)
static int kaweth_trigger_firmware(struct kaweth_device *kaweth,
__u8 interrupt)
static int kaweth_reset(struct kaweth_device *kaweth)
static void kaweth_usb_receive(struct urb *);
static int kaweth_resubmit_rx_urb(struct kaweth_device *, gfp_t);
static void kaweth_resubmit_int_urb(struct kaweth_device *kaweth, gfp_t mf)
static void int_callback(struct urb *u)
static void kaweth_resubmit_tl(struct work_struct *work)
static int kaweth_resubmit_rx_urb(struct kaweth_device *kaweth,
gfp_t mem_flags)
static void kaweth_async_set_rx_mode(struct kaweth_device *kaweth);
static void kaweth_usb_receive(struct urb *urb)
static int kaweth_open(struct net_device *net)
static void kaweth_kill_urbs(struct kaweth_device *kaweth)
static int kaweth_close(struct net_device *net)
static u32 kaweth_get_link(struct net_device *dev)
static const struct ethtool_ops ops = ;
static void kaweth_usb_transmit_complete(struct urb *urb)
static netdev_tx_t kaweth_start_xmit(struct sk_buff *skb,
struct net_device *net)
static void kaweth_set_rx_mode(struct net_device *net)
static void kaweth_async_set_rx_mode(struct kaweth_device *kaweth)
static struct net_device_stats *kaweth_netdev_stats(struct net_device *dev)
static void kaweth_tx_timeout(struct net_device *net)
static int kaweth_suspend(struct usb_interface *intf, pm_message_t message)
static int kaweth_resume(struct usb_interface *intf)
static const struct net_device_ops kaweth_netdev_ops = ;
static int kaweth_probe(
struct usb_interface *intf,
const struct usb_device_id *id
)
static void kaweth_disconnect(struct usb_interface *intf)
struct usb_api_data ;
static void usb_api_blocking_completion(struct urb *urb)
static int usb_start_wait_urb(struct urb *urb, int timeout, int* actual_length)
static int kaweth_internal_control_msg(struct usb_device *usb_dev,
unsigned int pipe,
struct usb_ctrlrequest *cmd, void *data,
int len, int timeout)
static int __init kaweth_init(void)
static void __exit kaweth_exit(void)
module_init(kaweth_init);
module_exit(kaweth_exit);
