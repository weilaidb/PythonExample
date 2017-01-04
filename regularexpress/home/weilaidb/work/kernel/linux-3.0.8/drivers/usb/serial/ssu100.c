#define QT_OPEN_CLOSE_CHANNEL       0xca
#define QT_SET_GET_DEVICE           0xc2
#define QT_SET_GET_REGISTER         0xc0
#define QT_GET_SET_PREBUF_TRIG_LVL  0xcc
#define QT_SET_ATF                  0xcd
#define QT_GET_SET_UART             0xc1
#define QT_TRANSFER_IN              0xc0
#define QT_HW_FLOW_CONTROL_MASK     0xc5
#define QT_SW_FLOW_CONTROL_MASK     0xc6
#define  SERIAL_MSR_MASK            0xf0
#define  SERIAL_CRTSCTS ((UART_MCR_RTS << 8) | UART_MSR_CTS)
#define  SERIAL_EVEN_PARITY         (UART_LCR_PARITY | UART_LCR_EPAR)
#define  MAX_BAUD_RATE              460800
#define ATC_DISABLED                0x00
#define DUPMODE_BITS        0xc0
#define RR_BITS             0x03
#define LOOPMODE_BITS       0x41
#define RS232_MODE          0x00
#define RTSCTS_TO_CONNECTOR 0x40
#define CLKS_X4             0x02
#define FULLPWRBIT          0x00000080
#define NEXT_BOARD_POWER_BIT        0x00000004
static int debug;
#define DRIVER_VERSION "v0.1"
#define DRIVER_DESC "Quatech SSU-100 USB to Serial Driver"
#define	USB_VENDOR_ID_QUATECH	0x061d
#define QUATECH_SSU100	0xC020
static const struct usb_device_id id_table[] = ;
MODULE_DEVICE_TABLE(usb, id_table);
static struct usb_driver ssu100_driver = ;
struct ssu100_port_private ;
static void ssu100_release(struct usb_serial *serial)
static inline int ssu100_control_msg(struct usb_device *dev,
u8 request, u16 data, u16 index)
static inline int ssu100_setdevice(struct usb_device *dev, u8 *data)
static inline int ssu100_getdevice(struct usb_device *dev, u8 *data)
static inline int ssu100_getregister(struct usb_device *dev,
unsigned short uart,
unsigned short reg,
u8 *data)
static inline int ssu100_setregister(struct usb_device *dev,
unsigned short uart,
unsigned short reg,
u16 data)
#define set_mctrl(dev, set)		update_mctrl((dev), (set), 0)
#define clear_mctrl(dev, clear)	update_mctrl((dev), 0, (clear))
static inline int update_mctrl(struct usb_device *dev, unsigned int set,
unsigned int clear)
static int ssu100_initdevice(struct usb_device *dev)
static void ssu100_set_termios(struct tty_struct *tty,
struct usb_serial_port *port,
struct ktermios *old_termios)
static int ssu100_open(struct tty_struct *tty, struct usb_serial_port *port)
static void ssu100_close(struct usb_serial_port *port)
static int get_serial_info(struct usb_serial_port *port,
struct serial_struct __user *retinfo)
static int wait_modem_info(struct usb_serial_port *port, unsigned int arg)
static int ssu100_get_icount(struct tty_struct *tty,
struct serial_icounter_struct *icount)
static int ssu100_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static int ssu100_attach(struct usb_serial *serial)
static int ssu100_tiocmget(struct tty_struct *tty)
static int ssu100_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static void ssu100_dtr_rts(struct usb_serial_port *port, int on)
static void ssu100_update_msr(struct usb_serial_port *port, u8 msr)
static void ssu100_update_lsr(struct usb_serial_port *port, u8 lsr,
char *tty_flag)
static int ssu100_process_packet(struct urb *urb,
struct tty_struct *tty)
static void ssu100_process_read_urb(struct urb *urb)
static struct usb_serial_driver ssu100_device = ;
static int __init ssu100_init(void)
static void __exit ssu100_exit(void)
module_init(ssu100_init);
module_exit(ssu100_exit);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug enabled or not");
