#define DRIVER_VERSION	"1.91"
#define DRIVER_AUTHOR	"Jarod Wilson <jarod@wilsonet.com>"
#define DRIVER_DESC	"Windows Media Center Ed. eHome Infrared Transceiver " \
"device driver"
#define DRIVER_NAME	"mceusb"
#define USB_BUFLEN		32
#define USB_CTRL_MSG_SZ		2
#define MCE_G1_INIT_MSGS	40
#define MCE_CMDBUF_SIZE		384
#define MCE_TIME_UNIT		50
#define MCE_CODE_LENGTH		5
#define MCE_PACKET_SIZE		4
#define MCE_IRDATA_HEADER	0x84
#define MCE_IRDATA_TRAILER	0x80
#define MCE_TX_HEADER_LENGTH	3
#define MCE_MAX_CHANNELS	2
#define MCE_DEFAULT_TX_MASK	0x03
#define MCE_PULSE_BIT		0x80
#define MCE_PULSE_MASK		0x7f
#define MCE_MAX_PULSE_LENGTH	0x7f
#define MCE_HW_CMD_HEADER	0xff
#define MCE_COMMAND_HEADER	0x9f
#define MCE_COMMAND_MASK	0xe0
#define MCE_COMMAND_NULL	0x00
#define MCE_COMMAND_IRDATA	0x80
#define MCE_PACKET_LENGTH_MASK	0x1f
#define MCE_CMD_SIG_END		0x01
#define MCE_CMD_PING		0x03
#define MCE_CMD_UNKNOWN		0x04
#define MCE_CMD_UNKNOWN2	0x05
#define MCE_CMD_S_CARRIER	0x06
#define MCE_CMD_G_CARRIER	0x07
#define MCE_CMD_S_TXMASK	0x08
#define MCE_CMD_UNKNOWN3	0x09
#define MCE_CMD_UNKNOWN4	0x0a
#define MCE_CMD_G_REVISION	0x0b
#define MCE_CMD_S_TIMEOUT	0x0c
#define MCE_CMD_G_TIMEOUT	0x0d
#define MCE_CMD_UNKNOWN5	0x0e
#define MCE_CMD_UNKNOWN6	0x0f
#define MCE_CMD_G_RXPORTSTS	0x11
#define MCE_CMD_G_TXMASK	0x13
#define MCE_CMD_S_RXSENSOR	0x14
#define MCE_CMD_G_RXSENSOR	0x15
#define MCE_RSP_PULSE_COUNT	0x15
#define MCE_CMD_TX_PORTS	0x16
#define MCE_CMD_G_WAKESRC	0x17
#define MCE_CMD_UNKNOWN7	0x18
#define MCE_CMD_UNKNOWN8	0x19
#define MCE_CMD_UNKNOWN9	0x1b
#define MCE_CMD_DEVICE_RESET	0xaa
#define MCE_RSP_CMD_INVALID	0xfe
static int debug = 1;
static int debug;
#define mce_dbg(dev, fmt, ...)					\
do  while (0)
#define SEND_FLAG_IN_PROGRESS	1
#define SEND_FLAG_COMPLETE	2
#define RECV_FLAG_IN_PROGRESS	3
#define RECV_FLAG_COMPLETE	4
#define MCEUSB_RX		1
#define MCEUSB_TX		2
#define VENDOR_PHILIPS		0x0471
#define VENDOR_SMK		0x0609
#define VENDOR_TATUNG		0x1460
#define VENDOR_GATEWAY		0x107b
#define VENDOR_SHUTTLE		0x1308
#define VENDOR_SHUTTLE2		0x051c
#define VENDOR_MITSUMI		0x03ee
#define VENDOR_TOPSEED		0x1784
#define VENDOR_RICAVISION	0x179d
#define VENDOR_ITRON		0x195d
#define VENDOR_FIC		0x1509
#define VENDOR_LG		0x043e
#define VENDOR_MICROSOFT	0x045e
#define VENDOR_FORMOSA		0x147a
#define VENDOR_FINTEK		0x1934
#define VENDOR_PINNACLE		0x2304
#define VENDOR_ECS		0x1019
#define VENDOR_WISTRON		0x0fb8
#define VENDOR_COMPRO		0x185b
#define VENDOR_NORTHSTAR	0x04eb
#define VENDOR_REALTEK		0x0bda
#define VENDOR_TIVO		0x105a
#define VENDOR_CONEXANT		0x0572
enum mceusb_model_type ;
struct mceusb_model ;
static const struct mceusb_model mceusb_model[] = ;
static struct usb_device_id mceusb_dev_table[] = ;
struct mceusb_dev ;
static char DEVICE_RESET[]	= ;
static char GET_REVISION[]	= ;
static char GET_UNKNOWN[]	= ;
static char GET_UNKNOWN2[]	= ;
static char GET_CARRIER_FREQ[]	= ;
static char GET_RX_TIMEOUT[]	= ;
static char GET_TX_BITMASK[]	= ;
static char GET_RX_SENSOR[]	= ;
static int mceusb_cmdsize(u8 cmd, u8 subcmd)
static void mceusb_dev_printdata(struct mceusb_dev *ir, char *buf,
int offset, int len, bool out)
static void mce_async_callback(struct urb *urb, struct pt_regs *regs)
static void mce_request_packet(struct mceusb_dev *ir, unsigned char *data,
int size, int urb_type)
static void mce_async_out(struct mceusb_dev *ir, unsigned char *data, int size)
static void mce_flush_rx_buffer(struct mceusb_dev *ir, int size)
static int mceusb_tx_ir(struct rc_dev *dev, int *txbuf, u32 n)
static int mceusb_set_tx_mask(struct rc_dev *dev, u32 mask)
static int mceusb_set_tx_carrier(struct rc_dev *dev, u32 carrier)
static void mceusb_handle_command(struct mceusb_dev *ir, int index)
static void mceusb_process_ir_data(struct mceusb_dev *ir, int buf_len)
static void mceusb_dev_recv(struct urb *urb, struct pt_regs *regs)
static void mceusb_gen1_init(struct mceusb_dev *ir)
;
static void mceusb_gen2_init(struct mceusb_dev *ir)
static void mceusb_get_parameters(struct mceusb_dev *ir)
static struct rc_dev *mceusb_init_rc_dev(struct mceusb_dev *ir)
static int __devinit mceusb_dev_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void __devexit mceusb_dev_disconnect(struct usb_interface *intf)
static int mceusb_dev_suspend(struct usb_interface *intf, pm_message_t message)
static int mceusb_dev_resume(struct usb_interface *intf)
static struct usb_driver mceusb_dev_driver = ;
static int __init mceusb_dev_init(void)
static void __exit mceusb_dev_exit(void)
module_init(mceusb_dev_init);
module_exit(mceusb_dev_exit);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(usb, mceusb_dev_table);
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug enabled or not");
