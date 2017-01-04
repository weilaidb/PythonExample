#define TI_DRIVER_VERSION	"v0.10"
#define TI_DRIVER_AUTHOR	"Al Borchers <alborchers@steinerpoint.com>"
#define TI_DRIVER_DESC		"TI USB 3410/5052 Serial Driver"
#define TI_FIRMWARE_BUF_SIZE	16284
#define TI_WRITE_BUF_SIZE	1024
#define TI_TRANSFER_TIMEOUT	2
#define TI_DEFAULT_CLOSING_WAIT	4000
#define TI_SET_SERIAL_FLAGS	0
#define TI_READ_URB_RUNNING	0
#define TI_READ_URB_STOPPING	1
#define TI_READ_URB_STOPPED	2
#define TI_EXTRA_VID_PID_COUNT	5
struct ti_port ;
struct ti_device ;
static int ti_startup(struct usb_serial *serial);
static void ti_release(struct usb_serial *serial);
static int ti_open(struct tty_struct *tty, struct usb_serial_port *port);
static void ti_close(struct usb_serial_port *port);
static int ti_write(struct tty_struct *tty, struct usb_serial_port *port,
const unsigned char *data, int count);
static int ti_write_room(struct tty_struct *tty);
static int ti_chars_in_buffer(struct tty_struct *tty);
static void ti_throttle(struct tty_struct *tty);
static void ti_unthrottle(struct tty_struct *tty);
static int ti_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg);
static int ti_get_icount(struct tty_struct *tty,
struct serial_icounter_struct *icount);
static void ti_set_termios(struct tty_struct *tty,
struct usb_serial_port *port, struct ktermios *old_termios);
static int ti_tiocmget(struct tty_struct *tty);
static int ti_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear);
static void ti_break(struct tty_struct *tty, int break_state);
static void ti_interrupt_callback(struct urb *urb);
static void ti_bulk_in_callback(struct urb *urb);
static void ti_bulk_out_callback(struct urb *urb);
static void ti_recv(struct device *dev, struct tty_struct *tty,
unsigned char *data, int length);
static void ti_send(struct ti_port *tport);
static int ti_set_mcr(struct ti_port *tport, unsigned int mcr);
static int ti_get_lsr(struct ti_port *tport);
static int ti_get_serial_info(struct ti_port *tport,
struct serial_struct __user *ret_arg);
static int ti_set_serial_info(struct tty_struct *tty, struct ti_port *tport,
struct serial_struct __user *new_arg);
static void ti_handle_new_msr(struct ti_port *tport, __u8 msr);
static void ti_drain(struct ti_port *tport, unsigned long timeout, int flush);
static void ti_stop_read(struct ti_port *tport, struct tty_struct *tty);
static int ti_restart_read(struct ti_port *tport, struct tty_struct *tty);
static int ti_command_out_sync(struct ti_device *tdev, __u8 command,
__u16 moduleid, __u16 value, __u8 *data, int size);
static int ti_command_in_sync(struct ti_device *tdev, __u8 command,
__u16 moduleid, __u16 value, __u8 *data, int size);
static int ti_write_byte(struct ti_device *tdev, unsigned long addr,
__u8 mask, __u8 byte);
static int ti_download_firmware(struct ti_device *tdev);
static int debug;
static int closing_wait = TI_DEFAULT_CLOSING_WAIT;
static ushort vendor_3410[TI_EXTRA_VID_PID_COUNT];
static unsigned int vendor_3410_count;
static ushort product_3410[TI_EXTRA_VID_PID_COUNT];
static unsigned int product_3410_count;
static ushort vendor_5052[TI_EXTRA_VID_PID_COUNT];
static unsigned int vendor_5052_count;
static ushort product_5052[TI_EXTRA_VID_PID_COUNT];
static unsigned int product_5052_count;
static struct usb_device_id ti_id_table_3410[13+TI_EXTRA_VID_PID_COUNT+1] = ;
static struct usb_device_id ti_id_table_5052[5+TI_EXTRA_VID_PID_COUNT+1] = ;
static struct usb_device_id ti_id_table_combined[17+2*TI_EXTRA_VID_PID_COUNT+1] = ;
static struct usb_driver ti_usb_driver = ;
static struct usb_serial_driver ti_1port_device = ;
static struct usb_serial_driver ti_2port_device = ;
MODULE_AUTHOR(TI_DRIVER_AUTHOR);
MODULE_DESCRIPTION(TI_DRIVER_DESC);
MODULE_VERSION(TI_DRIVER_VERSION);
MODULE_LICENSE("GPL");
MODULE_FIRMWARE("ti_3410.fw");
MODULE_FIRMWARE("ti_5052.fw");
MODULE_FIRMWARE("mts_cdma.fw");
MODULE_FIRMWARE("mts_gsm.fw");
MODULE_FIRMWARE("mts_edge.fw");
MODULE_FIRMWARE("mts_mt9234mu.fw");
MODULE_FIRMWARE("mts_mt9234zba.fw");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Enable debugging, 0=no, 1=yes");
module_param(closing_wait, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(closing_wait,
"Maximum wait for data to drain in close, in .01 secs, default is 4000");
module_param_array(vendor_3410, ushort, &vendor_3410_count, S_IRUGO);
MODULE_PARM_DESC(vendor_3410,
"Vendor ids for 3410 based devices, 1-5 short integers");
module_param_array(product_3410, ushort, &product_3410_count, S_IRUGO);
MODULE_PARM_DESC(product_3410,
"Product ids for 3410 based devices, 1-5 short integers");
module_param_array(vendor_5052, ushort, &vendor_5052_count, S_IRUGO);
MODULE_PARM_DESC(vendor_5052,
"Vendor ids for 5052 based devices, 1-5 short integers");
module_param_array(product_5052, ushort, &product_5052_count, S_IRUGO);
MODULE_PARM_DESC(product_5052,
"Product ids for 5052 based devices, 1-5 short integers");
MODULE_DEVICE_TABLE(usb, ti_id_table_combined);
static int __init ti_init(void)
static void __exit ti_exit(void)
module_init(ti_init);
module_exit(ti_exit);
static int ti_startup(struct usb_serial *serial)
static void ti_release(struct usb_serial *serial)
static int ti_open(struct tty_struct *tty, struct usb_serial_port *port)
static void ti_close(struct usb_serial_port *port)
static int ti_write(struct tty_struct *tty, struct usb_serial_port *port,
const unsigned char *data, int count)
static int ti_write_room(struct tty_struct *tty)
static int ti_chars_in_buffer(struct tty_struct *tty)
static void ti_throttle(struct tty_struct *tty)
static void ti_unthrottle(struct tty_struct *tty)
static int ti_get_icount(struct tty_struct *tty,
struct serial_icounter_struct *icount)
static int ti_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static void ti_set_termios(struct tty_struct *tty,
struct usb_serial_port *port, struct ktermios *old_termios)
static int ti_tiocmget(struct tty_struct *tty)
static int ti_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static void ti_break(struct tty_struct *tty, int break_state)
static void ti_interrupt_callback(struct urb *urb)
static void ti_bulk_in_callback(struct urb *urb)
static void ti_bulk_out_callback(struct urb *urb)
static void ti_recv(struct device *dev, struct tty_struct *tty,
unsigned char *data, int length)
static void ti_send(struct ti_port *tport)
static int ti_set_mcr(struct ti_port *tport, unsigned int mcr)
static int ti_get_lsr(struct ti_port *tport)
static int ti_get_serial_info(struct ti_port *tport,
struct serial_struct __user *ret_arg)
static int ti_set_serial_info(struct tty_struct *tty, struct ti_port *tport,
struct serial_struct __user *new_arg)
static void ti_handle_new_msr(struct ti_port *tport, __u8 msr)
static void ti_drain(struct ti_port *tport, unsigned long timeout, int flush)
static void ti_stop_read(struct ti_port *tport, struct tty_struct *tty)
static int ti_restart_read(struct ti_port *tport, struct tty_struct *tty)
static int ti_command_out_sync(struct ti_device *tdev, __u8 command,
__u16 moduleid, __u16 value, __u8 *data, int size)
static int ti_command_in_sync(struct ti_device *tdev, __u8 command,
__u16 moduleid, __u16 value, __u8 *data, int size)
static int ti_write_byte(struct ti_device *tdev, unsigned long addr,
__u8 mask, __u8 byte)
static int ti_do_download(struct usb_device *dev, int pipe,
u8 *buffer, int size)
static int ti_download_firmware(struct ti_device *tdev)
