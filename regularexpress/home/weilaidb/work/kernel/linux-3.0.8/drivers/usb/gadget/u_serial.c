#define PREFIX	"ttyGS"
#define QUEUE_SIZE		16
#define WRITE_BUF_SIZE		8192
struct gs_buf ;
struct gs_port ;
#define N_PORTS		4
static struct portmaster  ports[N_PORTS];
static unsigned	n_ports;
#define GS_CLOSE_TIMEOUT		15
#define pr_vdebug(fmt, arg...) \
pr_debug(fmt, ##arg)
#define pr_vdebug(fmt, arg...) \
()
static int gs_buf_alloc(struct gs_buf *gb, unsigned size)
static void gs_buf_free(struct gs_buf *gb)
static void gs_buf_clear(struct gs_buf *gb)
static unsigned gs_buf_data_avail(struct gs_buf *gb)
static unsigned gs_buf_space_avail(struct gs_buf *gb)
static unsigned
gs_buf_put(struct gs_buf *gb, const char *buf, unsigned count)
static unsigned
gs_buf_get(struct gs_buf *gb, char *buf, unsigned count)
struct usb_request *
gs_alloc_req(struct usb_ep *ep, unsigned len, gfp_t kmalloc_flags)
void gs_free_req(struct usb_ep *ep, struct usb_request *req)
static unsigned
gs_send_packet(struct gs_port *port, char *packet, unsigned size)
static int gs_start_tx(struct gs_port *port)
static unsigned gs_start_rx(struct gs_port *port)
static void gs_rx_push(unsigned long _port)
static void gs_read_complete(struct usb_ep *ep, struct usb_request *req)
static void gs_write_complete(struct usb_ep *ep, struct usb_request *req)
static void gs_free_requests(struct usb_ep *ep, struct list_head *head,
int *allocated)
static int gs_alloc_requests(struct usb_ep *ep, struct list_head *head,
void (*fn)(struct usb_ep *, struct usb_request *),
int *allocated)
static int gs_start_io(struct gs_port *port)
static int gs_open(struct tty_struct *tty, struct file *file)
static int gs_writes_finished(struct gs_port *p)
static void gs_close(struct tty_struct *tty, struct file *file)
static int gs_write(struct tty_struct *tty, const unsigned char *buf, int count)
static int gs_put_char(struct tty_struct *tty, unsigned char ch)
static void gs_flush_chars(struct tty_struct *tty)
static int gs_write_room(struct tty_struct *tty)
static int gs_chars_in_buffer(struct tty_struct *tty)
static void gs_unthrottle(struct tty_struct *tty)
static int gs_break_ctl(struct tty_struct *tty, int duration)
static const struct tty_operations gs_tty_ops = ;
static struct tty_driver *gs_tty_driver;
static int __init
gs_port_alloc(unsigned port_num, struct usb_cdc_line_coding *coding)
int __init gserial_setup(struct usb_gadget *g, unsigned count)
static int gs_closed(struct gs_port *port)
void gserial_cleanup(void)
int gserial_connect(struct gserial *gser, u8 port_num)
void gserial_disconnect(struct gserial *gser)
