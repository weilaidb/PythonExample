static int initial_mode = 1;
static int debug;
#define GARMIN_VENDOR_ID             0x091E
#define VERSION_MAJOR	0
#define VERSION_MINOR	36
#define _STR(s) #s
#define _DRIVER_VERSION(a, b) "v" _STR(a) "." _STR(b)
#define DRIVER_VERSION _DRIVER_VERSION(VERSION_MAJOR, VERSION_MINOR)
#define DRIVER_AUTHOR "hermann kneissel"
#define DRIVER_DESC "garmin gps driver"
#define EINVPKT	1000
#define GARMIN_PKTHDR_LENGTH	12
#define MAX_SERIAL_PKT_SIZ (3 + 255 + 3)
#define MAX_SERIAL_PKT_SIZ_STUFFED (MAX_SERIAL_PKT_SIZ + 256)
#define GPS_IN_BUFSIZ  (GARMIN_PKTHDR_LENGTH+MAX_SERIAL_PKT_SIZ)
#define GPS_OUT_BUFSIZ (GARMIN_PKTHDR_LENGTH+MAX_SERIAL_PKT_SIZ_STUFFED)
#define GSP_INITIAL_OFFSET (GARMIN_PKTHDR_LENGTH-2)
#define PRIVPKTSIZ (GARMIN_PKTHDR_LENGTH+4)
#define GARMIN_LAYERID_TRANSPORT  0
#define GARMIN_LAYERID_APPL      20
#define GARMIN_LAYERID_PRIVATE	0x01106E4B
#define GARMIN_PKTID_PVT_DATA	51
#define GARMIN_PKTID_L001_COMMAND_DATA 10
#define CMND_ABORT_TRANSFER 0
#define PRIV_PKTID_SET_DEBUG	1
#define PRIV_PKTID_SET_MODE	2
#define PRIV_PKTID_INFO_REQ	3
#define PRIV_PKTID_INFO_RESP	4
#define PRIV_PKTID_RESET_REQ	5
#define PRIV_PKTID_SET_DEF_MODE	6
#define ETX	0x03
#define DLE	0x10
#define ACK	0x06
#define NAK	0x15
struct garmin_packet ;
struct garmin_data ;
#define STATE_NEW            0
#define STATE_INITIAL_DELAY  1
#define STATE_TIMEOUT        2
#define STATE_SESSION_REQ1   3
#define STATE_SESSION_REQ2   4
#define STATE_ACTIVE         5
#define STATE_RESET	     8
#define STATE_DISCONNECTED   9
#define STATE_WAIT_TTY_ACK  10
#define STATE_GSP_WAIT_DATA 11
#define MODE_NATIVE          0
#define MODE_GARMIN_SERIAL   1
#define FLAGS_SESSION_REPLY_MASK  0x00C0
#define FLAGS_SESSION_REPLY1_SEEN 0x0080
#define FLAGS_SESSION_REPLY2_SEEN 0x0040
#define FLAGS_BULK_IN_ACTIVE      0x0020
#define FLAGS_BULK_IN_RESTART     0x0010
#define FLAGS_THROTTLED           0x0008
#define APP_REQ_SEEN              0x0004
#define APP_RESP_SEEN             0x0002
#define CLEAR_HALT_REQUIRED       0x0001
#define FLAGS_QUEUING             0x0100
#define FLAGS_DROP_DATA           0x0800
#define FLAGS_GSP_SKIP            0x1000
#define FLAGS_GSP_DLESEEN         0x2000
static int gsp_next_packet(struct garmin_data *garmin_data_p);
static int garmin_write_bulk(struct usb_serial_port *port,
const unsigned char *buf, int count,
int dismiss_ack);
static unsigned char const GARMIN_START_SESSION_REQ[]
= ;
static unsigned char const GARMIN_START_SESSION_REPLY[]
= ;
static unsigned char const GARMIN_BULK_IN_AVAIL_REPLY[]
= ;
static unsigned char const GARMIN_APP_LAYER_REPLY[]
= ;
static unsigned char const GARMIN_START_PVT_REQ[]
= ;
static unsigned char const GARMIN_STOP_PVT_REQ[]
= ;
static unsigned char const GARMIN_STOP_TRANSFER_REQ[]
= ;
static unsigned char const GARMIN_STOP_TRANSFER_REQ_V2[]
= ;
static unsigned char const PRIVATE_REQ[]
=    ;
static const struct usb_device_id id_table[] = ;
MODULE_DEVICE_TABLE(usb, id_table);
static struct usb_driver garmin_driver = ;
static inline int getLayerId(const __u8 *usbPacket)
static inline int getPacketId(const __u8 *usbPacket)
static inline int getDataLength(const __u8 *usbPacket)
static inline int isAbortTrfCmnd(const unsigned char *buf)
static void send_to_tty(struct usb_serial_port *port,
char *data, unsigned int actual_length)
static int pkt_add(struct garmin_data *garmin_data_p,
unsigned char *data, unsigned int data_length)
static struct garmin_packet *pkt_pop(struct garmin_data *garmin_data_p)
static void pkt_clear(struct garmin_data *garmin_data_p)
static int gsp_send_ack(struct garmin_data *garmin_data_p, __u8 pkt_id)
static int gsp_rec_packet(struct garmin_data *garmin_data_p, int count)
static int gsp_receive(struct garmin_data *garmin_data_p,
const unsigned char *buf, int count)
static int gsp_send(struct garmin_data *garmin_data_p,
const unsigned char *buf, int count)
static int gsp_next_packet(struct garmin_data *garmin_data_p)
static int nat_receive(struct garmin_data *garmin_data_p,
const unsigned char *buf, int count)
static void priv_status_resp(struct usb_serial_port *port)
static int process_resetdev_request(struct usb_serial_port *port)
static int garmin_clear(struct garmin_data *garmin_data_p)
static int garmin_init_session(struct usb_serial_port *port)
static int garmin_open(struct tty_struct *tty, struct usb_serial_port *port)
static void garmin_close(struct usb_serial_port *port)
static void garmin_write_bulk_callback(struct urb *urb)
static int garmin_write_bulk(struct usb_serial_port *port,
const unsigned char *buf, int count,
int dismiss_ack)
static int garmin_write(struct tty_struct *tty, struct usb_serial_port *port,
const unsigned char *buf, int count)
static int garmin_write_room(struct tty_struct *tty)
static void garmin_read_process(struct garmin_data *garmin_data_p,
unsigned char *data, unsigned data_length,
int bulk_data)
static void garmin_read_bulk_callback(struct urb *urb)
static void garmin_read_int_callback(struct urb *urb)
static int garmin_flush_queue(struct garmin_data *garmin_data_p)
static void garmin_throttle(struct tty_struct *tty)
static void garmin_unthrottle(struct tty_struct *tty)
static void timeout_handler(unsigned long data)
static int garmin_attach(struct usb_serial *serial)
static void garmin_disconnect(struct usb_serial *serial)
static void garmin_release(struct usb_serial *serial)
static struct usb_serial_driver garmin_device = ;
static int __init garmin_init(void)
static void __exit garmin_exit(void)
module_init(garmin_init);
module_exit(garmin_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
module_param(debug, bool, S_IWUSR | S_IRUGO);
MODULE_PARM_DESC(debug, "Debug enabled or not");
module_param(initial_mode, int, S_IRUGO);
MODULE_PARM_DESC(initial_mode, "Initial mode");
