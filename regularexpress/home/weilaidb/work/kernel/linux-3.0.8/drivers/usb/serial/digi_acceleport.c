#define DRIVER_VERSION "v1.80.1.2"
#define DRIVER_AUTHOR "Peter Berger <pberger@brimson.com>, Al Borchers <borchers@steinerpoint.com>"
#define DRIVER_DESC "Digi AccelePort USB-2/USB-4 Serial Converter driver"
#define DIGI_OUT_BUF_SIZE		8
#define DIGI_IN_BUF_SIZE		64
#define DIGI_RETRY_TIMEOUT		(HZ/10)
#define DIGI_CLOSE_TIMEOUT		(5*HZ)
#define DIGI_VENDOR_ID			0x05c5
#define DIGI_2_ID			0x0002
#define DIGI_4_ID			0x0004
#define DIGI_CMD_SET_BAUD_RATE			0
#define DIGI_CMD_SET_WORD_SIZE			1
#define DIGI_CMD_SET_PARITY			2
#define DIGI_CMD_SET_STOP_BITS			3
#define DIGI_CMD_SET_INPUT_FLOW_CONTROL		4
#define DIGI_CMD_SET_OUTPUT_FLOW_CONTROL	5
#define DIGI_CMD_SET_DTR_SIGNAL			6
#define DIGI_CMD_SET_RTS_SIGNAL			7
#define DIGI_CMD_READ_INPUT_SIGNALS		8
#define DIGI_CMD_IFLUSH_FIFO			9
#define DIGI_CMD_RECEIVE_ENABLE			10
#define DIGI_CMD_BREAK_CONTROL			11
#define DIGI_CMD_LOCAL_LOOPBACK			12
#define DIGI_CMD_TRANSMIT_IDLE			13
#define DIGI_CMD_READ_UART_REGISTER		14
#define DIGI_CMD_WRITE_UART_REGISTER		15
#define DIGI_CMD_AND_UART_REGISTER		16
#define DIGI_CMD_OR_UART_REGISTER		17
#define DIGI_CMD_SEND_DATA			18
#define DIGI_CMD_RECEIVE_DATA			19
#define DIGI_CMD_RECEIVE_DISABLE		20
#define DIGI_CMD_GET_PORT_TYPE			21
#define DIGI_BAUD_50				0
#define DIGI_BAUD_75				1
#define DIGI_BAUD_110				2
#define DIGI_BAUD_150				3
#define DIGI_BAUD_200				4
#define DIGI_BAUD_300				5
#define DIGI_BAUD_600				6
#define DIGI_BAUD_1200				7
#define DIGI_BAUD_1800				8
#define DIGI_BAUD_2400				9
#define DIGI_BAUD_4800				10
#define DIGI_BAUD_7200				11
#define DIGI_BAUD_9600				12
#define DIGI_BAUD_14400				13
#define DIGI_BAUD_19200				14
#define DIGI_BAUD_28800				15
#define DIGI_BAUD_38400				16
#define DIGI_BAUD_57600				17
#define DIGI_BAUD_76800				18
#define DIGI_BAUD_115200			19
#define DIGI_BAUD_153600			20
#define DIGI_BAUD_230400			21
#define DIGI_BAUD_460800			22
#define DIGI_WORD_SIZE_5			0
#define DIGI_WORD_SIZE_6			1
#define DIGI_WORD_SIZE_7			2
#define DIGI_WORD_SIZE_8			3
#define DIGI_PARITY_NONE			0
#define DIGI_PARITY_ODD				1
#define DIGI_PARITY_EVEN			2
#define DIGI_PARITY_MARK			3
#define DIGI_PARITY_SPACE			4
#define DIGI_STOP_BITS_1			0
#define DIGI_STOP_BITS_2			1
#define DIGI_INPUT_FLOW_CONTROL_XON_XOFF	1
#define DIGI_INPUT_FLOW_CONTROL_RTS		2
#define DIGI_INPUT_FLOW_CONTROL_DTR		4
#define DIGI_OUTPUT_FLOW_CONTROL_XON_XOFF	1
#define DIGI_OUTPUT_FLOW_CONTROL_CTS		2
#define DIGI_OUTPUT_FLOW_CONTROL_DSR		4
#define DIGI_DTR_INACTIVE			0
#define DIGI_DTR_ACTIVE				1
#define DIGI_DTR_INPUT_FLOW_CONTROL		2
#define DIGI_RTS_INACTIVE			0
#define DIGI_RTS_ACTIVE				1
#define DIGI_RTS_INPUT_FLOW_CONTROL		2
#define DIGI_RTS_TOGGLE				3
#define DIGI_FLUSH_TX				1
#define DIGI_FLUSH_RX				2
#define DIGI_RESUME_TX				4
#define DIGI_TRANSMIT_NOT_IDLE			0
#define DIGI_TRANSMIT_IDLE			1
#define DIGI_DISABLE				0
#define DIGI_ENABLE				1
#define DIGI_DEASSERT				0
#define DIGI_ASSERT				1
#define DIGI_OVERRUN_ERROR			4
#define DIGI_PARITY_ERROR			8
#define DIGI_FRAMING_ERROR			16
#define DIGI_BREAK_ERROR			32
#define DIGI_NO_ERROR				0
#define DIGI_BAD_FIRST_PARAMETER		1
#define DIGI_BAD_SECOND_PARAMETER		2
#define DIGI_INVALID_LINE			3
#define DIGI_INVALID_OPCODE			4
#define DIGI_READ_INPUT_SIGNALS_SLOT		1
#define DIGI_READ_INPUT_SIGNALS_ERR		2
#define DIGI_READ_INPUT_SIGNALS_BUSY		4
#define DIGI_READ_INPUT_SIGNALS_PE		8
#define DIGI_READ_INPUT_SIGNALS_CTS		16
#define DIGI_READ_INPUT_SIGNALS_DSR		32
#define DIGI_READ_INPUT_SIGNALS_RI		64
#define DIGI_READ_INPUT_SIGNALS_DCD		128
struct digi_serial ;
struct digi_port ;
static void digi_wakeup_write(struct usb_serial_port *port);
static void digi_wakeup_write_lock(struct work_struct *work);
static int digi_write_oob_command(struct usb_serial_port *port,
unsigned char *buf, int count, int interruptible);
static int digi_write_inb_command(struct usb_serial_port *port,
unsigned char *buf, int count, unsigned long timeout);
static int digi_set_modem_signals(struct usb_serial_port *port,
unsigned int modem_signals, int interruptible);
static int digi_transmit_idle(struct usb_serial_port *port,
unsigned long timeout);
static void digi_rx_throttle(struct tty_struct *tty);
static void digi_rx_unthrottle(struct tty_struct *tty);
static void digi_set_termios(struct tty_struct *tty,
struct usb_serial_port *port, struct ktermios *old_termios);
static void digi_break_ctl(struct tty_struct *tty, int break_state);
static int digi_tiocmget(struct tty_struct *tty);
static int digi_tiocmset(struct tty_struct *tty, unsigned int set,
unsigned int clear);
static int digi_write(struct tty_struct *tty, struct usb_serial_port *port,
const unsigned char *buf, int count);
static void digi_write_bulk_callback(struct urb *urb);
static int digi_write_room(struct tty_struct *tty);
static int digi_chars_in_buffer(struct tty_struct *tty);
static int digi_open(struct tty_struct *tty, struct usb_serial_port *port);
static void digi_close(struct usb_serial_port *port);
static void digi_dtr_rts(struct usb_serial_port *port, int on);
static int digi_startup_device(struct usb_serial *serial);
static int digi_startup(struct usb_serial *serial);
static void digi_disconnect(struct usb_serial *serial);
static void digi_release(struct usb_serial *serial);
static void digi_read_bulk_callback(struct urb *urb);
static int digi_read_inb_callback(struct urb *urb);
static int digi_read_oob_callback(struct urb *urb);
static int debug;
static const struct usb_device_id id_table_combined[] = ;
static const struct usb_device_id id_table_2[] = ;
static const struct usb_device_id id_table_4[] = ;
MODULE_DEVICE_TABLE(usb, id_table_combined);
static struct usb_driver digi_driver = ;
static struct usb_serial_driver digi_acceleport_2_device = ;
static struct usb_serial_driver digi_acceleport_4_device = ;
static long cond_wait_interruptible_timeout_irqrestore(
wait_queue_head_t *q, long timeout,
spinlock_t *lock, unsigned long flags)
__releases(lock)
static void digi_wakeup_write_lock(struct work_struct *work)
static void digi_wakeup_write(struct usb_serial_port *port)
static int digi_write_oob_command(struct usb_serial_port *port,
unsigned char *buf, int count, int interruptible)
static int digi_write_inb_command(struct usb_serial_port *port,
unsigned char *buf, int count, unsigned long timeout)
static int digi_set_modem_signals(struct usb_serial_port *port,
unsigned int modem_signals, int interruptible)
static int digi_transmit_idle(struct usb_serial_port *port,
unsigned long timeout)
static void digi_rx_throttle(struct tty_struct *tty)
static void digi_rx_unthrottle(struct tty_struct *tty)
static void digi_set_termios(struct tty_struct *tty,
struct usb_serial_port *port, struct ktermios *old_termios)
static void digi_break_ctl(struct tty_struct *tty, int break_state)
static int digi_tiocmget(struct tty_struct *tty)
static int digi_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static int digi_write(struct tty_struct *tty, struct usb_serial_port *port,
const unsigned char *buf, int count)
static void digi_write_bulk_callback(struct urb *urb)
static int digi_write_room(struct tty_struct *tty)
static int digi_chars_in_buffer(struct tty_struct *tty)
static void digi_dtr_rts(struct usb_serial_port *port, int on)
static int digi_open(struct tty_struct *tty, struct usb_serial_port *port)
static void digi_close(struct usb_serial_port *port)
static int digi_startup_device(struct usb_serial *serial)
static int digi_startup(struct usb_serial *serial)
static void digi_disconnect(struct usb_serial *serial)
static void digi_release(struct usb_serial *serial)
static void digi_read_bulk_callback(struct urb *urb)
static int digi_read_inb_callback(struct urb *urb)
static int digi_read_oob_callback(struct urb *urb)
static int __init digi_init(void)
static void __exit digi_exit (void)
module_init(digi_init);
module_exit(digi_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug enabled or not");
