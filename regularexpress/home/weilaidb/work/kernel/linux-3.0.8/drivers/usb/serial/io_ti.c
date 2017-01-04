#define DRIVER_VERSION "v0.7mode043006"
#define DRIVER_AUTHOR "Greg Kroah-Hartman <greg@kroah.com> and David Iacovelli"
#define DRIVER_DESC "Edgeport USB Serial Driver"
#define EPROM_PAGE_SIZE		64
#define HARDWARE_TYPE_930	0
#define HARDWARE_TYPE_TIUMP	1
#define	TI_MODE_CONFIGURING	0
#define	TI_MODE_BOOT		1
#define TI_MODE_DOWNLOAD	2
#define TI_MODE_TRANSITIONING	3
#define EDGE_READ_URB_RUNNING	0
#define EDGE_READ_URB_STOPPING	1
#define EDGE_READ_URB_STOPPED	2
#define EDGE_CLOSING_WAIT	4000
#define EDGE_OUT_BUF_SIZE	1024
struct product_info  __attribute__((packed));
struct edgeport_port ;
struct edgeport_serial ;
static const struct usb_device_id edgeport_1port_id_table[] = ;
static const struct usb_device_id edgeport_2port_id_table[] = ;
static const struct usb_device_id id_table_combined[] = ;
MODULE_DEVICE_TABLE(usb, id_table_combined);
static struct usb_driver io_driver = ;
static unsigned char OperationalMajorVersion;
static unsigned char OperationalMinorVersion;
static unsigned short OperationalBuildNumber;
static int debug;
static int closing_wait = EDGE_CLOSING_WAIT;
static int ignore_cpu_rev;
static int default_uart_mode;
static void edge_tty_recv(struct device *dev, struct tty_struct *tty,
unsigned char *data, int length);
static void stop_read(struct edgeport_port *edge_port);
static int restart_read(struct edgeport_port *edge_port);
static void edge_set_termios(struct tty_struct *tty,
struct usb_serial_port *port, struct ktermios *old_termios);
static void edge_send(struct tty_struct *tty);
static int edge_create_sysfs_attrs(struct usb_serial_port *port);
static int edge_remove_sysfs_attrs(struct usb_serial_port *port);
static int ti_vread_sync(struct usb_device *dev, __u8 request,
__u16 value, __u16 index, u8 *data, int size)
static int ti_vsend_sync(struct usb_device *dev, __u8 request,
__u16 value, __u16 index, u8 *data, int size)
static int send_cmd(struct usb_device *dev, __u8 command,
__u8 moduleid, __u16 value, u8 *data,
int size)
static int purge_port(struct usb_serial_port *port, __u16 mask)
static int read_download_mem(struct usb_device *dev, int start_address,
int length, __u8 address_type, __u8 *buffer)
static int read_ram(struct usb_device *dev, int start_address,
int length, __u8 *buffer)
static int read_boot_mem(struct edgeport_serial *serial,
int start_address, int length, __u8 *buffer)
static int write_boot_mem(struct edgeport_serial *serial,
int start_address, int length, __u8 *buffer)
static int write_i2c_mem(struct edgeport_serial *serial,
int start_address, int length, __u8 address_type, __u8 *buffer)
static int tx_active(struct edgeport_port *port)
static void chase_port(struct edgeport_port *port, unsigned long timeout,
int flush)
static int choose_config(struct usb_device *dev)
static int read_rom(struct edgeport_serial *serial,
int start_address, int length, __u8 *buffer)
static int write_rom(struct edgeport_serial *serial, int start_address,
int length, __u8 *buffer)
static int get_descriptor_addr(struct edgeport_serial *serial,
int desc_type, struct ti_i2c_desc *rom_desc)
static int valid_csum(struct ti_i2c_desc *rom_desc, __u8 *buffer)
static int check_i2c_image(struct edgeport_serial *serial)
static int get_manuf_info(struct edgeport_serial *serial, __u8 *buffer)
static int build_i2c_fw_hdr(__u8 *header, struct device *dev)
static int i2c_type_bootmode(struct edgeport_serial *serial)
static int bulk_xfer(struct usb_serial *serial, void *buffer,
int length, int *num_sent)
static int download_code(struct edgeport_serial *serial, __u8 *image,
int image_length)
static int config_boot_dev(struct usb_device *dev)
static int ti_cpu_rev(struct edge_ti_manuf_descriptor *desc)
static int download_fw(struct edgeport_serial *serial)
static int ti_do_config(struct edgeport_port *port, int feature, int on)
static int restore_mcr(struct edgeport_port *port, __u8 mcr)
static __u8 map_line_status(__u8 ti_lsr)
static void handle_new_msr(struct edgeport_port *edge_port, __u8 msr)
static void handle_new_lsr(struct edgeport_port *edge_port, int lsr_data,
__u8 lsr, __u8 data)
static void edge_interrupt_callback(struct urb *urb)
static void edge_bulk_in_callback(struct urb *urb)
static void edge_tty_recv(struct device *dev, struct tty_struct *tty,
unsigned char *data, int length)
static void edge_bulk_out_callback(struct urb *urb)
static int edge_open(struct tty_struct *tty, struct usb_serial_port *port)
static void edge_close(struct usb_serial_port *port)
static int edge_write(struct tty_struct *tty, struct usb_serial_port *port,
const unsigned char *data, int count)
static void edge_send(struct tty_struct *tty)
static int edge_write_room(struct tty_struct *tty)
static int edge_chars_in_buffer(struct tty_struct *tty)
static void edge_throttle(struct tty_struct *tty)
static void edge_unthrottle(struct tty_struct *tty)
static void stop_read(struct edgeport_port *edge_port)
static int restart_read(struct edgeport_port *edge_port)
static void change_port_settings(struct tty_struct *tty,
struct edgeport_port *edge_port, struct ktermios *old_termios)
static void edge_set_termios(struct tty_struct *tty,
struct usb_serial_port *port, struct ktermios *old_termios)
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
static int edge_startup(struct usb_serial *serial)
static void edge_disconnect(struct usb_serial *serial)
static void edge_release(struct usb_serial *serial)
static ssize_t show_uart_mode(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_uart_mode(struct device *dev,
struct device_attribute *attr, const char *valbuf, size_t count)
static DEVICE_ATTR(uart_mode, S_IWUSR | S_IRUGO, show_uart_mode,
store_uart_mode);
static int edge_create_sysfs_attrs(struct usb_serial_port *port)
static int edge_remove_sysfs_attrs(struct usb_serial_port *port)
static struct usb_serial_driver edgeport_1port_device = ;
static struct usb_serial_driver edgeport_2port_device = ;
static int __init edgeport_init(void)
static void __exit edgeport_exit(void)
module_init(edgeport_init);
module_exit(edgeport_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
MODULE_FIRMWARE("edgeport/down3.bin");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug enabled or not");
module_param(closing_wait, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(closing_wait, "Maximum wait for data to drain, in .01 secs");
module_param(ignore_cpu_rev, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(ignore_cpu_rev,
"Ignore the cpu revision when connecting to a device");
module_param(default_uart_mode, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(default_uart_mode, "Default uart_mode, 0=RS232, ...");
