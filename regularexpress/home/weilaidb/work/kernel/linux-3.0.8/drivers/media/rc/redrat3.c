#define DRIVER_VERSION "0.70"
#define DRIVER_AUTHOR "Jarod Wilson <jarod@redhat.com>"
#define DRIVER_AUTHOR2 "The Dweller, Stephen Cox"
#define DRIVER_DESC "RedRat3 USB IR Transceiver Driver"
#define DRIVER_NAME "redrat3"
static int debug = 1;
static int debug;
#define RR3_DEBUG_STANDARD		0x1
#define RR3_DEBUG_FUNCTION_TRACE	0x2
#define rr3_dbg(dev, fmt, ...)					\
do  while (0)
#define rr3_ftr(dev, fmt, ...)					\
do  while (0)
#define RR3_ERROR		0x01
#define RR3_MOD_SIGNAL_IN	0x20
#define RR3_MOD_SIGNAL_OUT	0x21
#define RR3_FW_VERSION		0xb1
#define RR3_FW_VERSION_LEN	64
#define RR3_TX_SEND_SIGNAL	0xb3
#define RR3_SET_IR_PARAM	0xb7
#define RR3_GET_IR_PARAM	0xb8
#define RR3_BLINK_LED		0xb9
#define RR3_READ_SER_NO		0xba
#define RR3_SER_NO_LEN		4
#define RR3_RC_DET_ENABLE	0xbb
#define RR3_RC_DET_DISABLE	0xbc
#define RR3_RC_DET_STATUS	0xbd
#define RR3_RESET		0xa0
#define RR3_IR_IO_MAX_LENGTHS	0x01
#define RR3_IR_IO_PERIODS_MF	0x02
#define RR3_IR_IO_SIG_MEM_SIZE	0x03
#define RR3_IR_IO_LENGTH_FUZZ	0x04
#define RR3_IR_IO_SIG_TIMEOUT	0x05
#define RR3_IR_IO_MIN_PAUSE	0x06
#define RR3_CLK			24000000
#define RR3_CLK_PER_COUNT	12
#define RR3_CLK_CONV_FACTOR	2000000
#define RR3_BULK_IN_EP_ADDR	0x82
#define RR3_PAUSE_OFFSET	0
#define RR3_FREQ_COUNT_OFFSET	4
#define RR3_NUM_PERIOD_OFFSET	6
#define RR3_MAX_LENGTHS_OFFSET	8
#define RR3_NUM_LENGTHS_OFFSET	9
#define RR3_MAX_SIGS_OFFSET	10
#define RR3_NUM_SIGS_OFFSET	12
#define RR3_REPEATS_OFFSET	14
#define RR3_HEADER_LENGTH	15
#define RR3_DRIVER_MAXLENS	128
#define RR3_MAX_SIG_SIZE	512
#define RR3_MAX_BUF_SIZE	\
((2 * RR3_HEADER_LENGTH) + RR3_DRIVER_MAXLENS + RR3_MAX_SIG_SIZE)
#define RR3_TIME_UNIT		50
#define RR3_END_OF_SIGNAL	0x7f
#define RR3_TX_HEADER_OFFSET	4
#define RR3_TX_TRAILER_LEN	2
#define RR3_RX_MIN_TIMEOUT	5
#define RR3_RX_MAX_TIMEOUT	2000
#define RR3_CPUCS_REG_ADDR	0x7f92
#define USB_RR3USB_VENDOR_ID	0x112a
#define USB_RR3USB_PRODUCT_ID	0x0001
#define USB_RR3IIUSB_PRODUCT_ID	0x0005
static struct usb_device_id redrat3_dev_table[] = ;
struct redrat3_dev ;
struct redrat3_signal_header ;
static void redrat3_dump_signal_header(struct redrat3_signal_header *header)
static void redrat3_dump_signal_data(char *buffer, u16 len)
static void redrat3_issue_async(struct redrat3_dev *rr3)
static void redrat3_dump_fw_error(struct redrat3_dev *rr3, int code)
static u32 redrat3_val_to_mod_freq(struct redrat3_signal_header *ph)
static u32 redrat3_len_to_us(u32 length)
static u32 redrat3_us_to_len(u32 microsec)
static void redrat3_rx_timeout(unsigned long data)
static void redrat3_process_ir_data(struct redrat3_dev *rr3)
static u8 redrat3_send_cmd(int cmd, struct redrat3_dev *rr3)
static int redrat3_enable_detector(struct redrat3_dev *rr3)
static void redrat3_disable_detector(struct redrat3_dev *rr3)
static inline void redrat3_delete(struct redrat3_dev *rr3,
struct usb_device *udev)
static u32 redrat3_get_timeout(struct device *dev,
struct rc_dev *rc, struct usb_device *udev)
static void redrat3_reset(struct redrat3_dev *rr3)
static void redrat3_get_firmware_rev(struct redrat3_dev *rr3)
static void redrat3_read_packet_start(struct redrat3_dev *rr3, int len)
static void redrat3_read_packet_continue(struct redrat3_dev *rr3, int len)
static int redrat3_get_ir_data(struct redrat3_dev *rr3, int len)
static void redrat3_handle_async(struct urb *urb, struct pt_regs *regs)
static void redrat3_write_bulk_callback(struct urb *urb, struct pt_regs *regs)
static u16 mod_freq_to_val(unsigned int mod_freq)
static int redrat3_set_tx_carrier(struct rc_dev *dev, u32 carrier)
static int redrat3_transmit_ir(struct rc_dev *rcdev, int *txbuf, u32 n)
static struct rc_dev *redrat3_init_rc_dev(struct redrat3_dev *rr3)
static int __devinit redrat3_dev_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void __devexit redrat3_dev_disconnect(struct usb_interface *intf)
static int redrat3_dev_suspend(struct usb_interface *intf, pm_message_t message)
static int redrat3_dev_resume(struct usb_interface *intf)
static struct usb_driver redrat3_dev_driver = ;
static int __init redrat3_dev_init(void)
static void __exit redrat3_dev_exit(void)
module_init(redrat3_dev_init);
module_exit(redrat3_dev_exit);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_AUTHOR(DRIVER_AUTHOR2);
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(usb, redrat3_dev_table);
module_param(debug, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Enable module debug spew. 0 = no debugging (default) "
"0x1 = standard debug messages, 0x2 = function tracing debug. "
"Flag bits are addative (i.e., 0x3 for both debug types).");
