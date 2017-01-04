#define DRIVER_VERSION "v.1.7.16"
#define DRIVER_AUTHOR "Kevin Lloyd, Elina Pasheva, Matthew Safar, Rory Filer"
#define DRIVER_DESC "USB Driver for Sierra Wireless USB modems"
#define SWIMS_USB_REQUEST_SetPower	0x00
#define SWIMS_USB_REQUEST_SetNmea	0x07
#define N_IN_URB_HM	8
#define N_OUT_URB_HM	64
#define N_IN_URB	4
#define N_OUT_URB	4
#define IN_BUFLEN	4096
#define MAX_TRANSFER		(PAGE_SIZE - 512)
static int debug;
static int nmea;
struct sierra_iface_info ;
struct sierra_intf_private ;
static int sierra_set_power_state(struct usb_device *udev, __u16 swiState)
static int sierra_vsc_set_nmea(struct usb_device *udev, __u16 enable)
static int sierra_calc_num_ports(struct usb_serial *serial)
static int is_blacklisted(const u8 ifnum,
const struct sierra_iface_info *blacklist)
static int is_himemory(const u8 ifnum,
const struct sierra_iface_info *himemorylist)
static int sierra_calc_interface(struct usb_serial *serial)
static int sierra_probe(struct usb_serial *serial,
const struct usb_device_id *id)
static const u8 hi_memory_typeA_ifaces[] = ;
static const struct sierra_iface_info typeA_interface_list = ;
static const u8 hi_memory_typeB_ifaces[] = ;
static const struct sierra_iface_info typeB_interface_list = ;
static const u8 direct_ip_non_serial_ifaces[] = ;
static const struct sierra_iface_info direct_ip_interface_blacklist = ;
static const struct usb_device_id id_table[] = ;
MODULE_DEVICE_TABLE(usb, id_table);
struct sierra_port_private ;
static int sierra_send_setup(struct usb_serial_port *port)
static void sierra_set_termios(struct tty_struct *tty,
struct usb_serial_port *port, struct ktermios *old_termios)
static int sierra_tiocmget(struct tty_struct *tty)
static int sierra_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static void sierra_release_urb(struct urb *urb)
static void sierra_outdat_callback(struct urb *urb)
static int sierra_write(struct tty_struct *tty, struct usb_serial_port *port,
const unsigned char *buf, int count)
static void sierra_indat_callback(struct urb *urb)
static void sierra_instat_callback(struct urb *urb)
static int sierra_write_room(struct tty_struct *tty)
static void sierra_stop_rx_urbs(struct usb_serial_port *port)
static int sierra_submit_rx_urbs(struct usb_serial_port *port, gfp_t mem_flags)
static struct urb *sierra_setup_urb(struct usb_serial *serial, int endpoint,
int dir, void *ctx, int len,
gfp_t mem_flags,
usb_complete_t callback)
static void sierra_close(struct usb_serial_port *port)
static int sierra_open(struct tty_struct *tty, struct usb_serial_port *port)
static void sierra_dtr_rts(struct usb_serial_port *port, int on)
static int sierra_startup(struct usb_serial *serial)
static void sierra_release(struct usb_serial *serial)
static void stop_read_write_urbs(struct usb_serial *serial)
static int sierra_suspend(struct usb_serial *serial, pm_message_t message)
static int sierra_resume(struct usb_serial *serial)
static int sierra_reset_resume(struct usb_interface *intf)
#define sierra_suspend NULL
#define sierra_resume NULL
#define sierra_reset_resume NULL
static struct usb_driver sierra_driver = ;
static struct usb_serial_driver sierra_device = ;
static int __init sierra_init(void)
static void __exit sierra_exit(void)
module_init(sierra_init);
module_exit(sierra_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_VERSION(DRIVER_VERSION);
MODULE_LICENSE("GPL");
module_param(nmea, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(nmea, "NMEA streaming");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug messages");
