#define DRIVER_VERSION "1.3.2"
#define DRIVER_DESC "Moschip 7840/7820 USB Serial Driver"
#define LCR_BITS_5             0x00
#define LCR_BITS_6             0x01
#define LCR_BITS_7             0x02
#define LCR_BITS_8             0x03
#define LCR_BITS_MASK          0x03
#define LCR_STOP_1             0x00
#define LCR_STOP_1_5           0x04
#define LCR_STOP_2             0x04
#define LCR_STOP_MASK          0x04
#define LCR_PAR_NONE           0x00
#define LCR_PAR_ODD            0x08
#define LCR_PAR_EVEN           0x18
#define LCR_PAR_MARK           0x28
#define LCR_PAR_SPACE          0x38
#define LCR_PAR_MASK           0x38
#define LCR_SET_BREAK          0x40
#define LCR_DL_ENABLE          0x80
#define MCR_DTR                0x01
#define MCR_RTS                0x02
#define MCR_OUT1               0x04
#define MCR_MASTER_IE          0x08
#define MCR_LOOPBACK           0x10
#define MCR_XON_ANY            0x20
#define MOS7840_MSR_CTS        0x10
#define MOS7840_MSR_DSR        0x20
#define MOS7840_MSR_RI         0x40
#define MOS7840_MSR_CD         0x80
#define WAIT_FOR_EVER   (HZ * 0)
#define MOS_WDR_TIMEOUT (HZ * 5)
#define MOS_PORT1       0x0200
#define MOS_PORT2       0x0300
#define MOS_VENREG      0x0000
#define MOS_MAX_PORT	0x02
#define MOS_WRITE       0x0E
#define MOS_READ        0x0D
#define MCS_RD_RTYPE    0xC0
#define MCS_WR_RTYPE    0x40
#define MCS_RDREQ       0x0D
#define MCS_WRREQ       0x0E
#define MCS_CTRL_TIMEOUT        500
#define VENDOR_READ_LENGTH      (0x01)
#define MAX_NAME_LEN    64
#define ZLP_REG1  0x3A
#define ZLP_REG5  0x3E
#define TIOCEXBAUD     0x5462
#define USB_VENDOR_ID_MOSCHIP           0x9710
#define MOSCHIP_DEVICE_ID_7840          0x7840
#define MOSCHIP_DEVICE_ID_7820          0x7820
#define USB_VENDOR_ID_BANDB              0x0856
#define BANDB_DEVICE_ID_USO9ML2_2        0xAC22
#define BANDB_DEVICE_ID_USO9ML2_2P       0xBC00
#define BANDB_DEVICE_ID_USO9ML2_4        0xAC24
#define BANDB_DEVICE_ID_USO9ML2_4P       0xBC01
#define BANDB_DEVICE_ID_US9ML2_2         0xAC29
#define BANDB_DEVICE_ID_US9ML2_4         0xAC30
#define BANDB_DEVICE_ID_USPTL4_2         0xAC31
#define BANDB_DEVICE_ID_USPTL4_4         0xAC32
#define BANDB_DEVICE_ID_USOPTL4_2        0xAC42
#define BANDB_DEVICE_ID_USOPTL4_2P       0xBC02
#define BANDB_DEVICE_ID_USOPTL4_4        0xAC44
#define BANDB_DEVICE_ID_USOPTL4_4P       0xBC03
#define BANDB_DEVICE_ID_USOPTL2_4        0xAC24
#define USB_VENDOR_ID_ATENINTL		0x0557
#define ATENINTL_DEVICE_ID_UC2324	0x2011
#define ATENINTL_DEVICE_ID_UC2322	0x7820
#define SERIAL_IIR_RLS      0x06
#define SERIAL_IIR_MS       0x00
#define SERIAL_LSR_DR       0x0001
#define SERIAL_LSR_OE       0x0002
#define SERIAL_LSR_PE       0x0004
#define SERIAL_LSR_FE       0x0008
#define SERIAL_LSR_BI       0x0010
#define MOS_MSR_DELTA_CTS   0x10
#define MOS_MSR_DELTA_DSR   0x20
#define MOS_MSR_DELTA_RI    0x40
#define MOS_MSR_DELTA_CD    0x80
#define INTERRUPT_ENABLE_REGISTER  ((__u16)(0x01))
#define FIFO_CONTROL_REGISTER      ((__u16)(0x02))
#define LINE_CONTROL_REGISTER      ((__u16)(0x03))
#define MODEM_CONTROL_REGISTER     ((__u16)(0x04))
#define LINE_STATUS_REGISTER       ((__u16)(0x05))
#define MODEM_STATUS_REGISTER      ((__u16)(0x06))
#define SCRATCH_PAD_REGISTER       ((__u16)(0x07))
#define DIVISOR_LATCH_LSB          ((__u16)(0x00))
#define DIVISOR_LATCH_MSB          ((__u16)(0x01))
#define CLK_MULTI_REGISTER         ((__u16)(0x02))
#define CLK_START_VALUE_REGISTER   ((__u16)(0x03))
#define SERIAL_LCR_DLAB            ((__u16)(0x0080))
#define NUM_URBS                        16
#define URB_TRANSFER_BUFFER_SIZE        32
static const struct usb_device_id moschip_port_id_table[] = ;
static const struct usb_device_id moschip_id_table_combined[] __devinitconst = ;
MODULE_DEVICE_TABLE(usb, moschip_id_table_combined);
struct moschip_port ;
static int debug;
static int mos7840_set_reg_sync(struct usb_serial_port *port, __u16 reg,
__u16 val)
static int mos7840_get_reg_sync(struct usb_serial_port *port, __u16 reg,
__u16 *val)
static int mos7840_set_uart_reg(struct usb_serial_port *port, __u16 reg,
__u16 val)
static int mos7840_get_uart_reg(struct usb_serial_port *port, __u16 reg,
__u16 *val)
static void mos7840_dump_serial_port(struct moschip_port *mos7840_port)
static inline void mos7840_set_port_private(struct usb_serial_port *port,
struct moschip_port *data)
static inline struct moschip_port *mos7840_get_port_private(struct
usb_serial_port
*port)
static void mos7840_handle_new_msr(struct moschip_port *port, __u8 new_msr)
static void mos7840_handle_new_lsr(struct moschip_port *port, __u8 new_lsr)
static void mos7840_control_callback(struct urb *urb)
static int mos7840_get_reg(struct moschip_port *mcs, __u16 Wval, __u16 reg,
__u16 *val)
static void mos7840_interrupt_callback(struct urb *urb)
static int mos7840_port_paranoia_check(struct usb_serial_port *port,
const char *function)
static int mos7840_serial_paranoia_check(struct usb_serial *serial,
const char *function)
static struct usb_serial *mos7840_get_usb_serial(struct usb_serial_port *port,
const char *function)
static void mos7840_bulk_in_callback(struct urb *urb)
static void mos7840_bulk_out_data_callback(struct urb *urb)
static int mos7840_serial_probe(struct usb_serial *serial,
const struct usb_device_id *id)
static int mos7840_open(struct tty_struct *tty, struct usb_serial_port *port)
static int mos7840_chars_in_buffer(struct tty_struct *tty)
static void mos7840_close(struct usb_serial_port *port)
static void mos7840_block_until_chase_response(struct tty_struct *tty,
struct moschip_port *mos7840_port)
static void mos7840_break(struct tty_struct *tty, int break_state)
static int mos7840_write_room(struct tty_struct *tty)
static int mos7840_write(struct tty_struct *tty, struct usb_serial_port *port,
const unsigned char *data, int count)
static void mos7840_throttle(struct tty_struct *tty)
static void mos7840_unthrottle(struct tty_struct *tty)
static int mos7840_tiocmget(struct tty_struct *tty)
static int mos7840_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static int mos7840_calc_baud_rate_divisor(int baudRate, int *divisor,
__u16 *clk_sel_val)
static int mos7840_send_cmd_write_baud_rate(struct moschip_port *mos7840_port,
int baudRate)
static void mos7840_change_port_settings(struct tty_struct *tty,
struct moschip_port *mos7840_port, struct ktermios *old_termios)
static void mos7840_set_termios(struct tty_struct *tty,
struct usb_serial_port *port,
struct ktermios *old_termios)
static int mos7840_get_lsr_info(struct tty_struct *tty,
unsigned int __user *value)
static int mos7840_get_serial_info(struct moschip_port *mos7840_port,
struct serial_struct __user *retinfo)
static int mos7840_get_icount(struct tty_struct *tty,
struct serial_icounter_struct *icount)
static int mos7840_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static int mos7840_calc_num_ports(struct usb_serial *serial)
static int mos7840_startup(struct usb_serial *serial)
static void mos7840_disconnect(struct usb_serial *serial)
static void mos7840_release(struct usb_serial *serial)
static struct usb_driver io_driver = ;
static struct usb_serial_driver moschip7840_4port_device = ;
static int __init moschip7840_init(void)
static void __exit moschip7840_exit(void)
module_init(moschip7840_init);
module_exit(moschip7840_exit);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug enabled or not");
