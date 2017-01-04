#define MOD_AUTHOR			"Option Wireless"
#define MOD_DESCRIPTION			"USB High Speed Option driver"
#define MOD_LICENSE			"GPL"
#define HSO_MAX_NET_DEVICES		10
#define HSO__MAX_MTU			2048
#define DEFAULT_MTU			1500
#define DEFAULT_MRU			1500
#define CTRL_URB_RX_SIZE		1024
#define CTRL_URB_TX_SIZE		64
#define BULK_URB_RX_SIZE		4096
#define BULK_URB_TX_SIZE		8192
#define MUX_BULK_RX_BUF_SIZE		HSO__MAX_MTU
#define MUX_BULK_TX_BUF_SIZE		HSO__MAX_MTU
#define MUX_BULK_RX_BUF_COUNT		4
#define USB_TYPE_OPTION_VENDOR		0x20
#define HSO_NET_RUNNING			0
#define	HSO_NET_TX_TIMEOUT		(HZ*10)
#define HSO_SERIAL_MAGIC		0x48534f31
#define HSO_SERIAL_TTY_MINORS		256
#define MAX_RX_URBS			2
static inline struct hso_serial *get_serial_by_tty(struct tty_struct *tty)
#define D__(lvl_, fmt, arg...)				\
do  while (0)
#define D_(lvl, args...)				\
do  while (0)
#define D1(args...)	D_(0x01, ##args)
#define D2(args...)	D_(0x02, ##args)
#define D3(args...)	D_(0x04, ##args)
#define D4(args...)	D_(0x08, ##args)
#define D5(args...)	D_(0x10, ##args)
enum pkt_parse_state ;
struct hso_shared_int ;
struct hso_net ;
enum rx_ctrl_state;
#define BM_REQUEST_TYPE (0xa1)
#define B_NOTIFICATION  (0x20)
#define W_VALUE         (0x0)
#define W_INDEX         (0x2)
#define W_LENGTH        (0x2)
#define B_OVERRUN       (0x1<<6)
#define B_PARITY        (0x1<<5)
#define B_FRAMING       (0x1<<4)
#define B_RING_SIGNAL   (0x1<<3)
#define B_BREAK         (0x1<<2)
#define B_TX_CARRIER    (0x1<<1)
#define B_RX_CARRIER    (0x1<<0)
struct hso_serial_state_notification  __packed;
struct hso_tiocmget ;
struct hso_serial ;
struct hso_device ;
#define HSO_INTF_MASK		0xFF00
#define	HSO_INTF_MUX		0x0100
#define	HSO_INTF_BULK   	0x0200
#define HSO_PORT_MASK		0xFF
#define HSO_PORT_NO_PORT	0x0
#define	HSO_PORT_CONTROL	0x1
#define	HSO_PORT_APP		0x2
#define	HSO_PORT_GPS		0x3
#define	HSO_PORT_PCSC		0x4
#define	HSO_PORT_APP2		0x5
#define HSO_PORT_GPS_CONTROL	0x6
#define HSO_PORT_MSD		0x7
#define HSO_PORT_VOICE		0x8
#define HSO_PORT_DIAG2		0x9
#define	HSO_PORT_DIAG		0x10
#define	HSO_PORT_MODEM		0x11
#define	HSO_PORT_NETWORK	0x12
#define HSO_INFO_MASK		0xFF000000
#define HSO_INFO_CRC_BUG	0x01000000
static int hso_serial_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear);
static void ctrl_callback(struct urb *urb);
static int put_rxbuf_data(struct urb *urb, struct hso_serial *serial);
static void hso_kick_transmit(struct hso_serial *serial);
static int hso_mux_submit_intr_urb(struct hso_shared_int *mux_int,
struct usb_device *usb, gfp_t gfp);
static void handle_usb_error(int status, const char *function,
struct hso_device *hso_dev);
static struct usb_endpoint_descriptor *hso_get_ep(struct usb_interface *intf,
int type, int dir);
static int hso_get_mux_ports(struct usb_interface *intf, unsigned char *ports);
static void hso_free_interface(struct usb_interface *intf);
static int hso_start_serial_device(struct hso_device *hso_dev, gfp_t flags);
static int hso_stop_serial_device(struct hso_device *hso_dev);
static int hso_start_net_device(struct hso_device *hso_dev);
static void hso_free_shared_int(struct hso_shared_int *shared_int);
static int hso_stop_net_device(struct hso_device *hso_dev);
static void hso_serial_ref_free(struct kref *ref);
static void hso_std_serial_read_bulk_callback(struct urb *urb);
static int hso_mux_serial_read(struct hso_serial *serial);
static void async_get_intf(struct work_struct *data);
static void async_put_intf(struct work_struct *data);
static int hso_put_activity(struct hso_device *hso_dev);
static int hso_get_activity(struct hso_device *hso_dev);
static void tiocmget_intr_callback(struct urb *urb);
static void reset_device(struct work_struct *data);
static inline struct hso_net *dev2net(struct hso_device *hso_dev)
static inline struct hso_serial *dev2ser(struct hso_device *hso_dev)
static void dbg_dump(int line_count, const char *func_name, unsigned char *buf,
unsigned int len)
#define DUMP(buf_, len_)	\
dbg_dump(__LINE__, __func__, (unsigned char *)buf_, len_)
#define DUMP1(buf_, len_)			\
do  while (0)
#define DUMP(buf_, len_)
#define DUMP1(buf_, len_)
static int debug;
static int tty_major;
static int disable_net;
static const char driver_name[] = "hso";
static const char tty_filename[] = "ttyHS";
static const char *version = __FILE__ ": " MOD_AUTHOR;
static struct usb_driver hso_driver;
static struct tty_driver *tty_drv;
static struct hso_device *serial_table[HSO_SERIAL_TTY_MINORS];
static struct hso_device *network_table[HSO_MAX_NET_DEVICES];
static spinlock_t serial_table_lock;
static const s32 default_port_spec[] = ;
static const s32 icon321_port_spec[] = ;
#define default_port_device(vendor, product)	\
USB_DEVICE(vendor, product),	\
.driver_info = (kernel_ulong_t)default_port_spec
#define icon321_port_device(vendor, product)	\
USB_DEVICE(vendor, product),	\
.driver_info = (kernel_ulong_t)icon321_port_spec
static const struct usb_device_id hso_ids[] = ;
MODULE_DEVICE_TABLE(usb, hso_ids);
static ssize_t hso_sysfs_show_porttype(struct device *dev,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(hsotype, S_IRUGO, hso_sysfs_show_porttype, NULL);
static int hso_urb_to_index(struct hso_serial *serial, struct urb *urb)
static u32 hso_mux_to_port(int mux)
static u32 hso_port_to_mux(int port)
static struct hso_serial *get_serial_by_shared_int_and_type(
struct hso_shared_int *shared_int,
int mux)
static struct hso_serial *get_serial_by_index(unsigned index)
static int get_free_serial_index(void)
static void set_serial_by_index(unsigned index, struct hso_serial *serial)
static void handle_usb_error(int status, const char *function,
struct hso_device *hso_dev)
static int hso_net_open(struct net_device *net)
static int hso_net_close(struct net_device *net)
static void write_bulk_callback(struct urb *urb)
static netdev_tx_t hso_net_start_xmit(struct sk_buff *skb,
struct net_device *net)
static const struct ethtool_ops ops = ;
static void hso_net_tx_timeout(struct net_device *net)
static void packetizeRx(struct hso_net *odev, unsigned char *ip_pkt,
unsigned int count, unsigned char is_eop)
static void fix_crc_bug(struct urb *urb, __le16 max_packet_size)
static void read_bulk_callback(struct urb *urb)
static void hso_init_termios(struct ktermios *termios)
static void _hso_serial_set_termios(struct tty_struct *tty,
struct ktermios *old)
static void hso_resubmit_rx_bulk_urb(struct hso_serial *serial, struct urb *urb)
static void put_rxbuf_data_and_resubmit_bulk_urb(struct hso_serial *serial)
static void put_rxbuf_data_and_resubmit_ctrl_urb(struct hso_serial *serial)
static void hso_std_serial_read_bulk_callback(struct urb *urb)
static void hso_unthrottle_tasklet(struct hso_serial *serial)
static	void hso_unthrottle(struct tty_struct *tty)
static void hso_unthrottle_workfunc(struct work_struct *work)
static int hso_serial_open(struct tty_struct *tty, struct file *filp)
static void hso_serial_close(struct tty_struct *tty, struct file *filp)
static int hso_serial_write(struct tty_struct *tty, const unsigned char *buf,
int count)
static int hso_serial_write_room(struct tty_struct *tty)
static void hso_serial_set_termios(struct tty_struct *tty, struct ktermios *old)
static int hso_serial_chars_in_buffer(struct tty_struct *tty)
static int tiocmget_submit_urb(struct hso_serial *serial,
struct hso_tiocmget *tiocmget,
struct usb_device *usb)
static void tiocmget_intr_callback(struct urb *urb)
static int
hso_wait_modem_status(struct hso_serial *serial, unsigned long arg)
static int hso_get_count(struct tty_struct *tty,
struct serial_icounter_struct *icount)
static int hso_serial_tiocmget(struct tty_struct *tty)
static int hso_serial_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static int hso_serial_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static void hso_kick_transmit(struct hso_serial *serial)
static int mux_device_request(struct hso_serial *serial, u8 type, u16 port,
struct urb *ctrl_urb,
struct usb_ctrlrequest *ctrl_req,
u8 *ctrl_urb_data, u32 size)
static int hso_mux_serial_read(struct hso_serial *serial)
static void intr_callback(struct urb *urb)
static int hso_mux_serial_write_data(struct hso_serial *serial)
static void hso_std_serial_write_bulk_callback(struct urb *urb)
static int hso_std_serial_write_data(struct hso_serial *serial)
static void ctrl_callback(struct urb *urb)
static int put_rxbuf_data(struct urb *urb, struct hso_serial *serial)
static void hso_log_port(struct hso_device *hso_dev)
static int hso_start_net_device(struct hso_device *hso_dev)
static int hso_stop_net_device(struct hso_device *hso_dev)
static int hso_start_serial_device(struct hso_device *hso_dev, gfp_t flags)
static int hso_stop_serial_device(struct hso_device *hso_dev)
static void hso_serial_common_free(struct hso_serial *serial)
static int hso_serial_common_create(struct hso_serial *serial, int num_urbs,
int rx_size, int tx_size)
static struct hso_device *hso_create_device(struct usb_interface *intf,
int port_spec)
static int remove_net_device(struct hso_device *hso_dev)
static void hso_free_net_device(struct hso_device *hso_dev)
static const struct net_device_ops hso_netdev_ops = ;
static void hso_net_init(struct net_device *net)
static int add_net_device(struct hso_device *hso_dev)
static int hso_rfkill_set_block(void *data, bool blocked)
static const struct rfkill_ops hso_rfkill_ops = ;
static void hso_create_rfkill(struct hso_device *hso_dev,
struct usb_interface *interface)
static struct device_type hso_type = ;
static struct hso_device *hso_create_net_device(struct usb_interface *interface,
int port_spec)
static void hso_free_tiomget(struct hso_serial *serial)
static void hso_free_serial_device(struct hso_device *hso_dev)
static struct hso_device *hso_create_bulk_serial_device(
struct usb_interface *interface, int port)
static
struct hso_device *hso_create_mux_serial_device(struct usb_interface *interface,
int port,
struct hso_shared_int *mux)
static void hso_free_shared_int(struct hso_shared_int *mux)
static
struct hso_shared_int *hso_create_shared_int(struct usb_interface *interface)
static int hso_get_config_data(struct usb_interface *interface)
static int hso_probe(struct usb_interface *interface,
const struct usb_device_id *id)
static void hso_disconnect(struct usb_interface *interface)
static void async_get_intf(struct work_struct *data)
static void async_put_intf(struct work_struct *data)
static int hso_get_activity(struct hso_device *hso_dev)
static int hso_put_activity(struct hso_device *hso_dev)
static int hso_suspend(struct usb_interface *iface, pm_message_t message)
static int hso_resume(struct usb_interface *iface)
static void reset_device(struct work_struct *data)
static void hso_serial_ref_free(struct kref *ref)
static void hso_free_interface(struct usb_interface *interface)
static struct usb_endpoint_descriptor *hso_get_ep(struct usb_interface *intf,
int type, int dir)
static int hso_get_mux_ports(struct usb_interface *intf, unsigned char *ports)
static int hso_mux_submit_intr_urb(struct hso_shared_int *shared_int,
struct usb_device *usb, gfp_t gfp)
static const struct tty_operations hso_serial_ops = ;
static struct usb_driver hso_driver = ;
static int __init hso_init(void)
static void __exit hso_exit(void)
module_init(hso_init);
module_exit(hso_exit);
MODULE_AUTHOR(MOD_AUTHOR);
MODULE_DESCRIPTION(MOD_DESCRIPTION);
MODULE_LICENSE(MOD_LICENSE);
MODULE_PARM_DESC(debug, "Level of debug [0x01 | 0x02 | 0x04 | 0x08 | 0x10]");
module_param(debug, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(tty_major, "Set the major tty number");
module_param(tty_major, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(disable_net, "Disable the network interface");
module_param(disable_net, int, S_IRUGO | S_IWUSR);
