#define DRIVER_VERSION "2.1"
#define DRIVER_AUTHOR "Aspire Communications pvt Ltd."
#define DRIVER_DESC "Moschip USB Serial Driver"
#define MOS_WDR_TIMEOUT	(HZ * 5)
#define MOS_MAX_PORT	0x02
#define MOS_WRITE	0x0E
#define MOS_READ	0x0D
#define SERIAL_IIR_RLS	0x06
#define SERIAL_IIR_RDA	0x04
#define SERIAL_IIR_CTI	0x0c
#define SERIAL_IIR_THR	0x02
#define SERIAL_IIR_MS	0x00
#define NUM_URBS			16
#define URB_TRANSFER_BUFFER_SIZE	32
struct moschip_port ;
static int debug;
static struct usb_serial_driver moschip7720_2port_driver;
#define USB_VENDOR_ID_MOSCHIP		0x9710
#define MOSCHIP_DEVICE_ID_7720		0x7720
#define MOSCHIP_DEVICE_ID_7715		0x7715
static const struct usb_device_id moschip_port_id_table[] = ;
MODULE_DEVICE_TABLE(usb, moschip_port_id_table);
#define DCR_INIT_VAL       0x0c
#define ECR_INIT_VAL       0x00
struct urbtracker ;
enum mos7715_pp_modes ;
struct mos7715_parport ;
static DEFINE_SPINLOCK(release_lock);
static const unsigned int dummy;
enum mos_regs ;
static inline __u16 get_reg_index(enum mos_regs reg)
static inline __u16 get_reg_value(enum mos_regs reg,
unsigned int serial_portnum)
static int write_mos_reg(struct usb_serial *serial, unsigned int serial_portnum,
enum mos_regs reg, __u8 data)
static int read_mos_reg(struct usb_serial *serial, unsigned int serial_portnum,
enum mos_regs reg, __u8 *data)
static inline int mos7715_change_mode(struct mos7715_parport *mos_parport,
enum mos7715_pp_modes mode)
static void destroy_mos_parport(struct kref *kref)
static void destroy_urbtracker(struct kref *kref)
static void send_deferred_urbs(unsigned long _mos_parport)
static void async_complete(struct urb *urb)
static int write_parport_reg_nonblock(struct mos7715_parport *mos_parport,
enum mos_regs reg, __u8 data)
static int parport_prologue(struct parport *pp)
static inline void parport_epilogue(struct parport *pp)
static void parport_mos7715_write_data(struct parport *pp, unsigned char d)
static unsigned char parport_mos7715_read_data(struct parport *pp)
static void parport_mos7715_write_control(struct parport *pp, unsigned char d)
static unsigned char parport_mos7715_read_control(struct parport *pp)
static unsigned char parport_mos7715_frob_control(struct parport *pp,
unsigned char mask,
unsigned char val)
static unsigned char parport_mos7715_read_status(struct parport *pp)
static void parport_mos7715_enable_irq(struct parport *pp)
static void parport_mos7715_disable_irq(struct parport *pp)
static void parport_mos7715_data_forward(struct parport *pp)
static void parport_mos7715_data_reverse(struct parport *pp)
static void parport_mos7715_init_state(struct pardevice *dev,
struct parport_state *s)
static void parport_mos7715_save_state(struct parport *pp,
struct parport_state *s)
static void parport_mos7715_restore_state(struct parport *pp,
struct parport_state *s)
static size_t parport_mos7715_write_compat(struct parport *pp,
const void *buffer,
size_t len, int flags)
static struct parport_operations parport_mos7715_ops = ;
static int mos7715_parport_init(struct usb_serial *serial)
static void mos7720_interrupt_callback(struct urb *urb)
static void mos7715_interrupt_callback(struct urb *urb)
static void mos7720_bulk_in_callback(struct urb *urb)
static void mos7720_bulk_out_data_callback(struct urb *urb)
static int mos77xx_probe(struct usb_serial *serial,
const struct usb_device_id *id)
static int mos77xx_calc_num_ports(struct usb_serial *serial)
static int mos7720_open(struct tty_struct *tty, struct usb_serial_port *port)
static int mos7720_chars_in_buffer(struct tty_struct *tty)
static void mos7720_close(struct usb_serial_port *port)
static void mos7720_break(struct tty_struct *tty, int break_state)
static int mos7720_write_room(struct tty_struct *tty)
static int mos7720_write(struct tty_struct *tty, struct usb_serial_port *port,
const unsigned char *data, int count)
static void mos7720_throttle(struct tty_struct *tty)
static void mos7720_unthrottle(struct tty_struct *tty)
static int set_higher_rates(struct moschip_port *mos7720_port,
unsigned int baud)
struct divisor_table_entry ;
static struct divisor_table_entry divisor_table[] = ;
static int calc_baud_rate_divisor(int baudrate, int *divisor)
static int send_cmd_write_baud_rate(struct moschip_port *mos7720_port,
int baudrate)
static void change_port_settings(struct tty_struct *tty,
struct moschip_port *mos7720_port,
struct ktermios *old_termios)
static void mos7720_set_termios(struct tty_struct *tty,
struct usb_serial_port *port, struct ktermios *old_termios)
static int get_lsr_info(struct tty_struct *tty,
struct moschip_port *mos7720_port, unsigned int __user *value)
static int mos7720_tiocmget(struct tty_struct *tty)
static int mos7720_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static int mos7720_get_icount(struct tty_struct *tty,
struct serial_icounter_struct *icount)
static int set_modem_info(struct moschip_port *mos7720_port, unsigned int cmd,
unsigned int __user *value)
static int get_serial_info(struct moschip_port *mos7720_port,
struct serial_struct __user *retinfo)
static int mos7720_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static int mos7720_startup(struct usb_serial *serial)
static void mos7720_release(struct usb_serial *serial)
static struct usb_driver usb_driver = ;
static struct usb_serial_driver moschip7720_2port_driver = ;
static int __init moschip7720_init(void)
static void __exit moschip7720_exit(void)
module_init(moschip7720_init);
module_exit(moschip7720_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug enabled or not");
