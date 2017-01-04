static int debug;
#define DRIVER_VERSION "v2.00"
#define DRIVER_AUTHOR "Tim Gobeli, Quatech, Inc"
#define DRIVER_DESC "Quatech USB 2.0 to Serial Driver"
#define	USB_VENDOR_ID_QUATECH 0x061d
#define QUATECH_SSU2_100 0xC120
#define QUATECH_DSU2_100 0xC140
#define QUATECH_DSU2_400 0xC150
#define QUATECH_QSU2_100 0xC160
#define QUATECH_QSU2_400 0xC170
#define QUATECH_ESU2_100 0xC1A0
#define QUATECH_ESU2_400 0xC180
#define QU2BOXPWRON 0x8000
#define QU2BOX232 0x40
#define QU2BOXSPD9600 0x60
#define QT2_FIFO_DEPTH 1024
#define QT2_TX_HEADER_LENGTH	5
#define USBD_TRANSFER_DIRECTION_IN    0xc0
#define USBD_TRANSFER_DIRECTION_OUT   0x40
#define QT_SET_GET_DEVICE		0xc2
#define QT_OPEN_CLOSE_CHANNEL		0xca
#define QT2_GET_SET_REGISTER			0xc0
#define QT2_GET_SET_UART			0xc1
#define QT2_HW_FLOW_CONTROL_MASK		0xc5
#define QT2_SW_FLOW_CONTROL_MASK		0xc6
#define QT2_SW_FLOW_CONTROL_DISABLE		0xc7
#define QT2_BREAK_CONTROL			0xc8
#define QT2_STOP_RECEIVE			0xe0
#define QT2_FLUSH_DEVICE			0xc4
#define QT2_GET_SET_QMCR			0xe1
#define QT2_FLUSH_RX			0x00
#define QT2_FLUSH_TX			0x01
#define QT2_SERIAL_MCR_DTR	0x01
#define QT2_SERIAL_MCR_RTS	0x02
#define QT2_SERIAL_MCR_LOOP	0x10
#define QT2_SERIAL_MSR_CTS	0x10
#define QT2_SERIAL_MSR_CD	0x80
#define QT2_SERIAL_MSR_RI	0x40
#define QT2_SERIAL_MSR_DSR	0x20
#define QT2_SERIAL_MSR_MASK	0xf0
#define QT2_SERIAL_8_DATA	0x03
#define QT2_SERIAL_7_DATA	0x02
#define QT2_SERIAL_6_DATA	0x01
#define QT2_SERIAL_5_DATA	0x00
#define QT2_SERIAL_ODD_PARITY	0x08
#define QT2_SERIAL_EVEN_PARITY	0x18
#define QT2_SERIAL_TWO_STOPB	0x04
#define QT2_SERIAL_ONE_STOPB	0x00
#define QT2_MAX_BAUD_RATE	921600
#define QT2_MAX_BAUD_REMAINDER	4608
#define QT2_SERIAL_LSR_OE	0x02
#define QT2_SERIAL_LSR_PE	0x04
#define QT2_SERIAL_LSR_FE	0x08
#define QT2_SERIAL_LSR_BI	0x10
#define QT2_LSR_TEMT     0x40
#define  QT2_XMT_HOLD_REGISTER          0x00
#define  QT2_XVR_BUFFER_REGISTER        0x00
#define  QT2_FIFO_CONTROL_REGISTER      0x02
#define  QT2_LINE_CONTROL_REGISTER      0x03
#define  QT2_MODEM_CONTROL_REGISTER     0x04
#define  QT2_LINE_STATUS_REGISTER       0x05
#define  QT2_MODEM_STATUS_REGISTER      0x06
#define THISCHAR	((unsigned char *)(urb->transfer_buffer))[i]
#define NEXTCHAR	((unsigned char *)(urb->transfer_buffer))[i + 1]
#define THIRDCHAR	((unsigned char *)(urb->transfer_buffer))[i + 2]
#define FOURTHCHAR	((unsigned char *)(urb->transfer_buffer))[i + 3]
#define FIFTHCHAR	((unsigned char *)(urb->transfer_buffer))[i + 4]
static const struct usb_device_id quausb2_id_table[] = ;
MODULE_DEVICE_TABLE(usb, quausb2_id_table);
static struct usb_driver quausb2_usb_driver = ;
struct quatech2_port ;
struct quatech2_dev ;
struct qt2_status_data ;
static int qt2_boxpoweron(struct usb_serial *serial);
static int qt2_boxsetQMCR(struct usb_serial *serial, __u16 Uart_Number,
__u8 QMCR_Value);
static int port_paranoia_check(struct usb_serial_port *port,
const char *function);
static int serial_paranoia_check(struct usb_serial *serial,
const char *function);
static inline struct quatech2_port *qt2_get_port_private(struct usb_serial_port
*port);
static inline void qt2_set_port_private(struct usb_serial_port *port,
struct quatech2_port *data);
static inline struct quatech2_dev *qt2_get_dev_private(struct usb_serial
*serial);
static inline void qt2_set_dev_private(struct usb_serial *serial,
struct quatech2_dev *data);
static int qt2_openboxchannel(struct usb_serial *serial, __u16
Uart_Number, struct qt2_status_data *pDeviceData);
static int qt2_closeboxchannel(struct usb_serial *serial, __u16
Uart_Number);
static int qt2_conf_uart(struct usb_serial *serial,  unsigned short Uart_Number,
unsigned short divisor, unsigned char LCR);
static void qt2_read_bulk_callback(struct urb *urb);
static void qt2_write_bulk_callback(struct urb *urb);
static void qt2_process_line_status(struct usb_serial_port *port,
unsigned char LineStatus);
static void qt2_process_modem_status(struct usb_serial_port *port,
unsigned char ModemStatus);
static void qt2_process_xmit_empty(struct usb_serial_port *port,
unsigned char fourth_char, unsigned char fifth_char);
static void qt2_process_port_change(struct usb_serial_port *port,
unsigned char New_Current_Port);
static void qt2_process_rcv_flush(struct usb_serial_port *port);
static void qt2_process_xmit_flush(struct usb_serial_port *port);
static void qt2_process_rx_char(struct usb_serial_port *port,
unsigned char data);
static int qt2_box_get_register(struct usb_serial *serial,
unsigned char uart_number, unsigned short register_num,
__u8 *pValue);
static int qt2_box_set_register(struct usb_serial *serial,
unsigned short Uart_Number, unsigned short Register_Num,
unsigned short Value);
static int qt2_boxsetuart(struct usb_serial *serial, unsigned short Uart_Number,
unsigned short default_divisor, unsigned char default_LCR);
static int qt2_boxsethw_flowctl(struct usb_serial *serial,
unsigned int UartNumber, bool bSet);
static int qt2_boxsetsw_flowctl(struct usb_serial *serial, __u16 UartNumber,
unsigned char stop_char,  unsigned char start_char);
static int qt2_boxunsetsw_flowctl(struct usb_serial *serial, __u16 UartNumber);
static int qt2_boxstoprx(struct usb_serial *serial, unsigned short uart_number,
unsigned short stop);
static int qt2_calc_num_ports(struct usb_serial *serial)
static int qt2_attach(struct usb_serial *serial)
static void qt2_release(struct usb_serial *serial)
int qt2_open(struct tty_struct *tty, struct usb_serial_port *port)
static void qt2_close(struct usb_serial_port *port)
static int qt2_write(struct tty_struct *tty, struct usb_serial_port *port,
const unsigned char *buf, int count)
static int qt2_write_room(struct tty_struct *tty)
static int qt2_chars_in_buffer(struct tty_struct *tty)
static int qt2_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static void qt2_set_termios(struct tty_struct *tty,
struct usb_serial_port *port, struct ktermios *old_termios)
static int qt2_tiocmget(struct tty_struct *tty)
static int qt2_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static void qt2_break(struct tty_struct *tty, int break_state)
static void qt2_throttle(struct tty_struct *tty)
static void qt2_unthrottle(struct tty_struct *tty)
static int qt2_boxpoweron(struct usb_serial *serial)
static int qt2_boxsetQMCR(struct usb_serial *serial, __u16 Uart_Number,
__u8 QMCR_Value)
static int port_paranoia_check(struct usb_serial_port *port,
const char *function)
static int serial_paranoia_check(struct usb_serial *serial,
const char *function)
static inline struct quatech2_port *qt2_get_port_private(struct usb_serial_port
*port)
static inline void qt2_set_port_private(struct usb_serial_port *port,
struct quatech2_port *data)
static inline struct quatech2_dev *qt2_get_dev_private(struct usb_serial
*serial)
static inline void qt2_set_dev_private(struct usb_serial *serial,
struct quatech2_dev *data)
static int qt2_openboxchannel(struct usb_serial *serial, __u16
Uart_Number, struct qt2_status_data *status)
static int qt2_closeboxchannel(struct usb_serial *serial, __u16 Uart_Number)
static int qt2_conf_uart(struct usb_serial *serial,  unsigned short Uart_Number,
unsigned short divisor, unsigned char LCR)
static void qt2_read_bulk_callback(struct urb *urb)
static void qt2_write_bulk_callback(struct urb *urb)
static void qt2_process_line_status(struct usb_serial_port *port,
unsigned char LineStatus)
static void qt2_process_modem_status(struct usb_serial_port *port,
unsigned char ModemStatus)
static void qt2_process_xmit_empty(struct usb_serial_port *port,
unsigned char fourth_char, unsigned char fifth_char)
static void qt2_process_port_change(struct usb_serial_port *port,
unsigned char New_Current_Port)
static void qt2_process_rcv_flush(struct usb_serial_port *port)
static void qt2_process_xmit_flush(struct usb_serial_port *port)
static void qt2_process_rx_char(struct usb_serial_port *port,
unsigned char data)
static int qt2_box_get_register(struct usb_serial *serial,
unsigned char uart_number, unsigned short register_num,
__u8 *pValue)
static int qt2_box_set_register(struct usb_serial *serial,
unsigned short Uart_Number, unsigned short Register_Num,
unsigned short Value)
static int qt2_boxsetuart(struct usb_serial *serial, unsigned short Uart_Number,
unsigned short default_divisor, unsigned char default_LCR)
static int qt2_boxsethw_flowctl(struct usb_serial *serial,
unsigned int UartNumber, bool bSet)
static int qt2_boxsetsw_flowctl(struct usb_serial *serial, __u16 UartNumber,
unsigned char stop_char,  unsigned char start_char)
static int qt2_boxunsetsw_flowctl(struct usb_serial *serial, __u16 UartNumber)
static int qt2_boxstoprx(struct usb_serial *serial, unsigned short uart_number,
unsigned short stop)
static struct usb_serial_driver quatech2_device = ;
static int __init quausb2_usb_init(void)
static void __exit quausb2_usb_exit(void)
module_init(quausb2_usb_init);
module_exit(quausb2_usb_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug enabled or not");
