static int debug;
#define DRIVER_VERSION "v2.14"
#define DRIVER_AUTHOR "Tim Gobeli, Quatech, Inc"
#define DRIVER_DESC "Quatech USB to Serial Driver"
#define	USB_VENDOR_ID_QUATECH			0x061d
#define QUATECH_SSU100	0xC020
#define QUATECH_SSU200	0xC030
#define QUATECH_DSU100	0xC040
#define QUATECH_DSU200	0xC050
#define QUATECH_QSU100	0xC060
#define QUATECH_QSU200	0xC070
#define QUATECH_ESU100A	0xC080
#define QUATECH_ESU100B	0xC081
#define QUATECH_ESU200A	0xC0A0
#define QUATECH_ESU200B	0xC0A1
#define QUATECH_HSU100A	0xC090
#define QUATECH_HSU100B	0xC091
#define QUATECH_HSU100C	0xC092
#define QUATECH_HSU100D	0xC093
#define QUATECH_HSU200A	0xC0B0
#define QUATECH_HSU200B	0xC0B1
#define QUATECH_HSU200C	0xC0B2
#define QUATECH_HSU200D	0xC0B3
#define QUATECH_SSU100_2  0xC120
#define QUATECH_DSU100_2  0xC140
#define QUATECH_DSU400_2  0xC150
#define QUATECH_QSU100_2  0xC160
#define QUATECH_QSU400_2  0xC170
#define QUATECH_ESU400_2  0xC180
#define QUATECH_ESU100_2  0xC1A0
#define QT_SET_GET_DEVICE           0xc2
#define QT_OPEN_CLOSE_CHANNEL       0xca
#define QT_GET_SET_PREBUF_TRIG_LVL  0xcc
#define QT_SET_ATF                  0xcd
#define QT_GET_SET_REGISTER         0xc0
#define QT_GET_SET_UART             0xc1
#define QT_HW_FLOW_CONTROL_MASK     0xc5
#define QT_SW_FLOW_CONTROL_MASK     0xc6
#define QT_SW_FLOW_CONTROL_DISABLE  0xc7
#define QT_BREAK_CONTROL            0xc8
#define USBD_TRANSFER_DIRECTION_IN    0xc0
#define USBD_TRANSFER_DIRECTION_OUT   0x40
#define  MAX_BAUD_RATE              460800
#define  MAX_BAUD_REMAINDER         4608
#define  DIV_LATCH_LS               0x00
#define  XMT_HOLD_REGISTER          0x00
#define  XVR_BUFFER_REGISTER        0x00
#define  DIV_LATCH_MS               0x01
#define  FIFO_CONTROL_REGISTER      0x02
#define  LINE_CONTROL_REGISTER      0x03
#define  MODEM_CONTROL_REGISTER     0x04
#define  LINE_STATUS_REGISTER       0x05
#define  MODEM_STATUS_REGISTER      0x06
#define  SERIAL_MCR_DTR             0x01
#define  SERIAL_MCR_RTS             0x02
#define  SERIAL_MCR_LOOP            0x10
#define  SERIAL_MSR_CTS             0x10
#define  SERIAL_MSR_CD              0x80
#define  SERIAL_MSR_RI              0x40
#define  SERIAL_MSR_DSR             0x20
#define  SERIAL_MSR_MASK            0xf0
#define  SERIAL_8_DATA              0x03
#define  SERIAL_7_DATA              0x02
#define  SERIAL_6_DATA              0x01
#define  SERIAL_5_DATA              0x00
#define  SERIAL_ODD_PARITY          0X08
#define  SERIAL_EVEN_PARITY         0X18
#define  SERIAL_TWO_STOPB           0x04
#define  SERIAL_ONE_STOPB           0x00
#define DEFAULT_DIVISOR  0x30
#define DEFAULT_LCR SERIAL_8_DATA
#define FULLPWRBIT          0x00000080
#define NEXT_BOARD_POWER_BIT        0x00000004
#define SERIAL_LSR_OE       0x02
#define SERIAL_LSR_PE       0x04
#define SERIAL_LSR_FE       0x08
#define SERIAL_LSR_BI       0x10
#define  SERIAL_MSR_CTS             0x10
#define  SERIAL_MSR_CD              0x80
#define  SERIAL_MSR_RI              0x40
#define  SERIAL_MSR_DSR             0x20
#define  SERIAL_MSR_MASK            0xf0
#define PREFUFF_LEVEL_CONSERVATIVE  128
#define ATC_DISABLED                0x0
#define RR_BITS             0x03
#define DUPMODE_BITS        0xc0
#define CLKS_X4             0x02
#define LOOPMODE_BITS       0x41
#define ALL_LOOPBACK        0x01
#define MODEM_CTRL          0x40
#define RS232_MODE          0x00
static const struct usb_device_id serqt_id_table[] = ;
MODULE_DEVICE_TABLE(usb, serqt_id_table);
struct qt_get_device_data ;
struct qt_open_channel_data ;
struct quatech_port ;
static struct usb_driver serqt_usb_driver = ;
static int port_paranoia_check(struct usb_serial_port *port,
const char *function)
static int serial_paranoia_check(struct usb_serial *serial,
const char *function)
static inline struct quatech_port *qt_get_port_private(struct usb_serial_port
*port)
static inline void qt_set_port_private(struct usb_serial_port *port,
struct quatech_port *data)
static struct usb_serial *get_usb_serial(struct usb_serial_port *port,
const char *function)
static void ProcessLineStatus(struct quatech_port *qt_port,
unsigned char line_status)
static void ProcessModemStatus(struct quatech_port *qt_port,
unsigned char modem_status)
static void ProcessRxChar(struct tty_struct *tty, struct usb_serial_port *port,
unsigned char data)
static void qt_write_bulk_callback(struct urb *urb)
static void qt_interrupt_callback(struct urb *urb)
static void qt_read_bulk_callback(struct urb *urb)
static int qt_get_device(struct usb_serial *serial,
struct qt_get_device_data *device_data)
static int BoxSetPrebufferLevel(struct usb_serial *serial)
static int BoxSetATC(struct usb_serial *serial, __u16 n_Mode)
static int qt_set_device(struct usb_serial *serial,
struct qt_get_device_data *device_data)
static int qt_open_channel(struct usb_serial *serial, __u16 Uart_Number,
struct qt_open_channel_data *pDeviceData)
static int qt_close_channel(struct usb_serial *serial, __u16 Uart_Number)
static int BoxGetRegister(struct usb_serial *serial, unsigned short Uart_Number,
unsigned short Register_Num, __u8 *pValue)
static int BoxSetRegister(struct usb_serial *serial, unsigned short Uart_Number,
unsigned short Register_Num, unsigned short Value)
static int qt_setuart(struct usb_serial *serial, unsigned short Uart_Number,
unsigned short default_divisor, unsigned char default_LCR)
static int BoxSetHW_FlowCtrl(struct usb_serial *serial, unsigned int index,
int bSet)
static int BoxSetSW_FlowCtrl(struct usb_serial *serial, __u16 index,
unsigned char stop_char, unsigned char start_char)
static int BoxDisable_SW_FlowCtrl(struct usb_serial *serial, __u16 index)
static int qt_startup(struct usb_serial *serial)
static void qt_release(struct usb_serial *serial)
static int qt_open(struct tty_struct *tty,
struct usb_serial_port *port)
static int qt_chars_in_buffer(struct tty_struct *tty)
static void qt_block_until_empty(struct tty_struct *tty,
struct quatech_port *qt_port)
static void qt_close(struct usb_serial_port *port)
static int qt_write(struct tty_struct *tty, struct usb_serial_port *port,
const unsigned char *buf, int count)
static int qt_write_room(struct tty_struct *tty)
static int qt_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static void qt_set_termios(struct tty_struct *tty,
struct usb_serial_port *port,
struct ktermios *old_termios)
static void qt_break(struct tty_struct *tty, int break_state)
static inline int qt_real_tiocmget(struct tty_struct *tty,
struct usb_serial_port *port,
struct usb_serial *serial)
static inline int qt_real_tiocmset(struct tty_struct *tty,
struct usb_serial_port *port,
struct usb_serial *serial,
unsigned int value)
static int qt_tiocmget(struct tty_struct *tty)
static int qt_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static void qt_throttle(struct tty_struct *tty)
static void qt_unthrottle(struct tty_struct *tty)
static int qt_calc_num_ports(struct usb_serial *serial)
static struct usb_serial_driver quatech_device = ;
static int __init serqt_usb_init(void)
static void __exit serqt_usb_exit(void)
module_init(serqt_usb_init);
module_exit(serqt_usb_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug enabled or not");
