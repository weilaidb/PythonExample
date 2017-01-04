#define DRIVER_VERSION "v2.7"
#define DRIVER_AUTHOR "Greg Kroah-Hartman <greg@kroah.com> and David Iacovelli"
#define DRIVER_DESC "Edgeport USB Serial Driver"
#define MAX_NAME_LEN		64
#define CHASE_TIMEOUT		(5*HZ)
#define OPEN_TIMEOUT		(5*HZ)
#define COMMAND_TIMEOUT		(5*HZ)
enum RXSTATE ;
struct TxFifo ;
struct edgeport_port ;
struct edgeport_serial ;
struct divisor_table_entry ;
static const struct divisor_table_entry divisor_table[] = ;
static int debug;
static atomic_t CmdUrbs;
static void edge_interrupt_callback(struct urb *urb);
static void edge_bulk_in_callback(struct urb *urb);
static void edge_bulk_out_data_callback(struct urb *urb);
static void edge_bulk_out_cmd_callback(struct urb *urb);
static int edge_open(struct tty_struct *tty, struct usb_serial_port *port);
static void edge_close(struct usb_serial_port *port);
static int edge_write(struct tty_struct *tty, struct usb_serial_port *port,
const unsigned char *buf, int count);
static int edge_write_room(struct tty_struct *tty);
static int edge_chars_in_buffer(struct tty_struct *tty);
static void edge_throttle(struct tty_struct *tty);
static void edge_unthrottle(struct tty_struct *tty);
static void edge_set_termios(struct tty_struct *tty,
struct usb_serial_port *port,
struct ktermios *old_termios);
static int  edge_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg);
static void edge_break(struct tty_struct *tty, int break_state);
static int  edge_tiocmget(struct tty_struct *tty);
static int  edge_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear);
static int  edge_get_icount(struct tty_struct *tty,
struct serial_icounter_struct *icount);
static int  edge_startup(struct usb_serial *serial);
static void edge_disconnect(struct usb_serial *serial);
static void edge_release(struct usb_serial *serial);
static void  process_rcvd_data(struct edgeport_serial *edge_serial,
unsigned char *buffer, __u16 bufferLength);
static void process_rcvd_status(struct edgeport_serial *edge_serial,
__u8 byte2, __u8 byte3);
static void edge_tty_recv(struct device *dev, struct tty_struct *tty,
unsigned char *data, int length);
static void handle_new_msr(struct edgeport_port *edge_port, __u8 newMsr);
static void handle_new_lsr(struct edgeport_port *edge_port, __u8 lsrData,
__u8 lsr, __u8 data);
static int  send_iosp_ext_cmd(struct edgeport_port *edge_port, __u8 command,
__u8 param);
static int  calc_baud_rate_divisor(int baud_rate, int *divisor);
static int  send_cmd_write_baud_rate(struct edgeport_port *edge_port,
int baudRate);
static void change_port_settings(struct tty_struct *tty,
struct edgeport_port *edge_port,
struct ktermios *old_termios);
static int  send_cmd_write_uart_register(struct edgeport_port *edge_port,
__u8 regNum, __u8 regValue);
static int  write_cmd_usb(struct edgeport_port *edge_port,
unsigned char *buffer, int writeLength);
static void send_more_port_data(struct edgeport_serial *edge_serial,
struct edgeport_port *edge_port);
static int sram_write(struct usb_serial *serial, __u16 extAddr, __u16 addr,
__u16 length, const __u8 *data);
static int rom_read(struct usb_serial *serial, __u16 extAddr, __u16 addr,
__u16 length, __u8 *data);
static int rom_write(struct usb_serial *serial, __u16 extAddr, __u16 addr,
__u16 length, const __u8 *data);
static void get_manufacturing_desc(struct edgeport_serial *edge_serial);
static void get_boot_desc(struct edgeport_serial *edge_serial);
static void load_application_firmware(struct edgeport_serial *edge_serial);
static void unicode_to_ascii(char *string, int buflen,
__le16 *unicode, int unicode_size);
static void update_edgeport_E2PROM(struct edgeport_serial *edge_serial)
static void dump_product_info(struct edgeport_product_info *product_info)
static void get_product_info(struct edgeport_serial *edge_serial)
static int get_epic_descriptor(struct edgeport_serial *ep)
static void edge_interrupt_callback(struct urb *urb)
static void edge_bulk_in_callback(struct urb *urb)
static void edge_bulk_out_data_callback(struct urb *urb)
static void edge_bulk_out_cmd_callback(struct urb *urb)
static int edge_open(struct tty_struct *tty, struct usb_serial_port *port)
static void block_until_chase_response(struct edgeport_port *edge_port)
static void block_until_tx_empty(struct edgeport_port *edge_port)
static void edge_close(struct usb_serial_port *port)
static int edge_write(struct tty_struct *tty, struct usb_serial_port *port,
const unsigned char *data, int count)
static void send_more_port_data(struct edgeport_serial *edge_serial,
struct edgeport_port *edge_port)
static int edge_write_room(struct tty_struct *tty)
static int edge_chars_in_buffer(struct tty_struct *tty)
static void edge_throttle(struct tty_struct *tty)
static void edge_unthrottle(struct tty_struct *tty)
static void edge_set_termios(struct tty_struct *tty,
struct usb_serial_port *port, struct ktermios *old_termios)
static int get_lsr_info(struct edgeport_port *edge_port,
unsigned int __user *value)
static int edge_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static int edge_tiocmget(struct tty_struct *tty)
static int edge_get_icount(struct tty_struct *tty,
struct serial_icounter_struct *icount)
static int get_serial_info(struct edgeport_port *edge_port,
struct serial_struct __user *retinfo)
static int edge_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static void edge_break(struct tty_struct *tty, int break_state)
static void process_rcvd_data(struct edgeport_serial *edge_serial,
unsigned char *buffer, __u16 bufferLength)
static void process_rcvd_status(struct edgeport_serial *edge_serial,
__u8 byte2, __u8 byte3)
static void edge_tty_recv(struct device *dev, struct tty_struct *tty,
unsigned char *data, int length)
static void handle_new_msr(struct edgeport_port *edge_port, __u8 newMsr)
static void handle_new_lsr(struct edgeport_port *edge_port, __u8 lsrData,
__u8 lsr, __u8 data)
static int sram_write(struct usb_serial *serial, __u16 extAddr, __u16 addr,
__u16 length, const __u8 *data)
static int rom_write(struct usb_serial *serial, __u16 extAddr, __u16 addr,
__u16 length, const __u8 *data)
static int rom_read(struct usb_serial *serial, __u16 extAddr,
__u16 addr, __u16 length, __u8 *data)
static int send_iosp_ext_cmd(struct edgeport_port *edge_port,
__u8 command, __u8 param)
static int write_cmd_usb(struct edgeport_port *edge_port,
unsigned char *buffer, int length)
static int send_cmd_write_baud_rate(struct edgeport_port *edge_port,
int baudRate)
static int calc_baud_rate_divisor(int baudrate, int *divisor)
static int send_cmd_write_uart_register(struct edgeport_port *edge_port,
__u8 regNum, __u8 regValue)
static void change_port_settings(struct tty_struct *tty,
struct edgeport_port *edge_port, struct ktermios *old_termios)
static void unicode_to_ascii(char *string, int buflen,
__le16 *unicode, int unicode_size)
static void get_manufacturing_desc(struct edgeport_serial *edge_serial)
static void get_boot_desc(struct edgeport_serial *edge_serial)
static void load_application_firmware(struct edgeport_serial *edge_serial)
static int edge_startup(struct usb_serial *serial)
static void edge_disconnect(struct usb_serial *serial)
static void edge_release(struct usb_serial *serial)
static int __init edgeport_init(void)
static void __exit edgeport_exit (void)
module_init(edgeport_init);
module_exit(edgeport_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
MODULE_FIRMWARE("edgeport/boot.fw");
MODULE_FIRMWARE("edgeport/boot2.fw");
MODULE_FIRMWARE("edgeport/down.fw");
MODULE_FIRMWARE("edgeport/down2.fw");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug enabled or not");
