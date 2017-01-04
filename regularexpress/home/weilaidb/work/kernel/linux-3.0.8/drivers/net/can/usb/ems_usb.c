MODULE_AUTHOR("Sebastian Haas <haas@ems-wuensche.com>");
MODULE_DESCRIPTION("CAN driver for EMS Dr. Thomas Wuensche CAN/USB interfaces");
MODULE_LICENSE("GPL v2");
#define CONTR_CAN_MESSAGE 0x04
#define CONTR_CAN_STATE   0x0C
#define CONTR_BUS_ERROR   0x1C
#define CONTR_CONT_OFF 0
#define CONTR_CONT_ON  1
#define CONTR_ONCE     2
#define CPC_MSG_TYPE_CAN_FRAME       1
#define CPC_MSG_TYPE_RTR_FRAME       8
#define CPC_MSG_TYPE_CAN_PARAMS      12
#define CPC_MSG_TYPE_CAN_STATE       14
#define CPC_MSG_TYPE_EXT_CAN_FRAME   16
#define CPC_MSG_TYPE_EXT_RTR_FRAME   17
#define CPC_MSG_TYPE_CONTROL         19
#define CPC_MSG_TYPE_CONFIRM         20
#define CPC_MSG_TYPE_OVERRUN         21
#define CPC_MSG_TYPE_CAN_FRAME_ERROR 23
#define CPC_MSG_TYPE_ERR_COUNTER     25
#define CPC_CMD_TYPE_CAN_FRAME     1
#define CPC_CMD_TYPE_CONTROL       3
#define CPC_CMD_TYPE_CAN_PARAMS    6
#define CPC_CMD_TYPE_RTR_FRAME     13
#define CPC_CMD_TYPE_CAN_STATE     14
#define CPC_CMD_TYPE_EXT_CAN_FRAME 15
#define CPC_CMD_TYPE_EXT_RTR_FRAME 16
#define CPC_CMD_TYPE_CAN_EXIT      200
#define CPC_CMD_TYPE_INQ_ERR_COUNTER 25
#define CPC_CMD_TYPE_CLEAR_MSG_QUEUE 8
#define CPC_CMD_TYPE_CLEAR_CMD_QUEUE 28
#define CPC_CC_TYPE_SJA1000 2
#define CPC_CAN_ECODE_ERRFRAME 0x01
#define CPC_OVR_EVENT_CAN       0x01
#define CPC_OVR_EVENT_CANSTATE  0x02
#define CPC_OVR_EVENT_BUSERROR  0x04
#define CPC_OVR_HW 0x80
#define CPC_MSG_HEADER_LEN   11
#define CPC_CAN_MSG_MIN_SIZE 5
#define USB_CPCUSB_VENDOR_ID 0x12D6
#define USB_CPCUSB_ARM7_PRODUCT_ID 0x0444
#define SJA1000_MOD_NORMAL 0x00
#define SJA1000_MOD_RM     0x01
#define SJA1000_ECC_SEG   0x1F
#define SJA1000_ECC_DIR   0x20
#define SJA1000_ECC_ERR   0x06
#define SJA1000_ECC_BIT   0x00
#define SJA1000_ECC_FORM  0x40
#define SJA1000_ECC_STUFF 0x80
#define SJA1000_ECC_MASK  0xc0
#define SJA1000_SR_BS 0x80
#define SJA1000_SR_ES 0x40
#define SJA1000_DEFAULT_OUTPUT_CONTROL 0xDA
#define EMS_USB_ARM7_CLOCK 8000000
struct cpc_can_msg ;
struct cpc_sja1000_params ;
struct cpc_can_params ;
struct cpc_confirm ;
struct cpc_overrun ;
struct cpc_sja1000_can_error ;
struct cpc_can_error ;
struct cpc_can_err_counter ;
struct __packed ems_cpc_msg ;
static struct usb_device_id ems_usb_table[] = ;
MODULE_DEVICE_TABLE(usb, ems_usb_table);
#define RX_BUFFER_SIZE      64
#define CPC_HEADER_SIZE     4
#define INTR_IN_BUFFER_SIZE 4
#define MAX_RX_URBS 10
#define MAX_TX_URBS 10
struct ems_usb;
struct ems_tx_urb_context ;
struct ems_usb ;
static void ems_usb_read_interrupt_callback(struct urb *urb)
static void ems_usb_rx_can_msg(struct ems_usb *dev, struct ems_cpc_msg *msg)
static void ems_usb_rx_err(struct ems_usb *dev, struct ems_cpc_msg *msg)
static void ems_usb_read_bulk_callback(struct urb *urb)
static void ems_usb_write_bulk_callback(struct urb *urb)
static int ems_usb_command_msg(struct ems_usb *dev, struct ems_cpc_msg *msg)
static int ems_usb_write_mode(struct ems_usb *dev, u8 mode)
static int ems_usb_control_cmd(struct ems_usb *dev, u8 val)
static int ems_usb_start(struct ems_usb *dev)
static void unlink_all_urbs(struct ems_usb *dev)
static int ems_usb_open(struct net_device *netdev)
static netdev_tx_t ems_usb_start_xmit(struct sk_buff *skb, struct net_device *netdev)
static int ems_usb_close(struct net_device *netdev)
static const struct net_device_ops ems_usb_netdev_ops = ;
static struct can_bittiming_const ems_usb_bittiming_const = ;
static int ems_usb_set_mode(struct net_device *netdev, enum can_mode mode)
static int ems_usb_set_bittiming(struct net_device *netdev)
static void init_params_sja1000(struct ems_cpc_msg *msg)
static int ems_usb_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void ems_usb_disconnect(struct usb_interface *intf)
static struct usb_driver ems_usb_driver = ;
static int __init ems_usb_init(void)
static void __exit ems_usb_exit(void)
module_init(ems_usb_init);
module_exit(ems_usb_exit);
