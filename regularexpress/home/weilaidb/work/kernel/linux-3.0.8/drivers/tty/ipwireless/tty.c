#define IPWIRELESS_PCMCIA_START 	(0)
#define IPWIRELESS_PCMCIA_MINORS	(24)
#define IPWIRELESS_PCMCIA_MINOR_RANGE	(8)
#define TTYTYPE_MODEM    (0)
#define TTYTYPE_MONITOR  (1)
#define TTYTYPE_RAS_RAW  (2)
struct ipw_tty ;
static struct ipw_tty *ttys[IPWIRELESS_PCMCIA_MINORS];
static struct tty_driver *ipw_tty_driver;
static char *tty_type_name(int tty_type)
static void report_registering(struct ipw_tty *tty)
static void report_deregistering(struct ipw_tty *tty)
static struct ipw_tty *get_tty(int minor)
static int ipw_open(struct tty_struct *linux_tty, struct file *filp)
static void do_ipw_close(struct ipw_tty *tty)
static void ipw_hangup(struct tty_struct *linux_tty)
static void ipw_close(struct tty_struct *linux_tty, struct file *filp)
void ipwireless_tty_received(struct ipw_tty *tty, unsigned char *data,
unsigned int length)
static void ipw_write_packet_sent_callback(void *callback_data,
unsigned int packet_length)
static int ipw_write(struct tty_struct *linux_tty,
const unsigned char *buf, int count)
static int ipw_write_room(struct tty_struct *linux_tty)
static int ipwireless_get_serial_info(struct ipw_tty *tty,
struct serial_struct __user *retinfo)
static int ipw_chars_in_buffer(struct tty_struct *linux_tty)
static int get_control_lines(struct ipw_tty *tty)
static int set_control_lines(struct ipw_tty *tty, unsigned int set,
unsigned int clear)
static int ipw_tiocmget(struct tty_struct *linux_tty)
static int
ipw_tiocmset(struct tty_struct *linux_tty,
unsigned int set, unsigned int clear)
static int ipw_ioctl(struct tty_struct *linux_tty,
unsigned int cmd, unsigned long arg)
static int add_tty(int j,
struct ipw_hardware *hardware,
struct ipw_network *network, int channel_idx,
int secondary_channel_idx, int tty_type)
struct ipw_tty *ipwireless_tty_create(struct ipw_hardware *hardware,
struct ipw_network *network)
void ipwireless_tty_free(struct ipw_tty *tty)
static const struct tty_operations tty_ops = ;
int ipwireless_tty_init(void)
void ipwireless_tty_release(void)
int ipwireless_tty_is_modem(struct ipw_tty *tty)
void
ipwireless_tty_notify_control_line_change(struct ipw_tty *tty,
unsigned int channel_idx,
unsigned int control_lines,
unsigned int changed_mask)
