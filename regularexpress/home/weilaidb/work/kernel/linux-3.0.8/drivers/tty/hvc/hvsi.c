#undef DEBUG
#define HVSI_MAJOR	229
#define HVSI_MINOR	128
#define MAX_NR_HVSI_CONSOLES 4
#define HVSI_TIMEOUT (5*HZ)
#define HVSI_VERSION 1
#define HVSI_MAX_PACKET 256
#define HVSI_MAX_READ 16
#define HVSI_MAX_OUTGOING_DATA 12
#define N_OUTBUF 12
#define __ALIGNED__	__attribute__((__aligned__(sizeof(long))))
struct hvsi_struct ;
static struct hvsi_struct hvsi_ports[MAX_NR_HVSI_CONSOLES];
static struct tty_driver *hvsi_driver;
static int hvsi_count;
static int (*hvsi_wait)(struct hvsi_struct *hp, int state);
enum HVSI_PROTOCOL_STATE ;
#define HVSI_CONSOLE 0x1
#define VS_DATA_PACKET_HEADER           0xff
#define VS_CONTROL_PACKET_HEADER        0xfe
#define VS_QUERY_PACKET_HEADER          0xfd
#define VS_QUERY_RESPONSE_PACKET_HEADER 0xfc
#define VSV_SET_MODEM_CTL    1
#define VSV_MODEM_CTL_UPDATE 2
#define VSV_CLOSE_PROTOCOL   3
#define VSV_SEND_VERSION_NUMBER 1
#define VSV_SEND_MODEM_CTL_STATUS 2
#define HVSI_TSDTR 0x01
#define HVSI_TSCD  0x20
struct hvsi_header  __attribute__((packed));
struct hvsi_data  __attribute__((packed));
struct hvsi_control  __attribute__((packed));
struct hvsi_query  __attribute__((packed));
struct hvsi_query_response  __attribute__((packed));
static inline int is_console(struct hvsi_struct *hp)
static inline int is_open(struct hvsi_struct *hp)
static inline void print_state(struct hvsi_struct *hp)
static inline void __set_state(struct hvsi_struct *hp, int state)
static inline void set_state(struct hvsi_struct *hp, int state)
static inline int len_packet(const uint8_t *packet)
static inline int is_header(const uint8_t *packet)
static inline int got_packet(const struct hvsi_struct *hp, uint8_t *packet)
static void compact_inbuf(struct hvsi_struct *hp, uint8_t *read_to)
#define dbg_dump_packet(packet) dump_packet(packet)
#define dbg_dump_hex(data, len) dump_hex(data, len)
#define dbg_dump_packet(packet) do  while (0)
#define dbg_dump_hex(data, len) do  while (0)
static void dump_hex(const uint8_t *data, int len)
static void dump_packet(uint8_t *packet)
static int hvsi_read(struct hvsi_struct *hp, char *buf, int count)
static void hvsi_recv_control(struct hvsi_struct *hp, uint8_t *packet,
struct tty_struct **to_hangup, struct hvsi_struct **to_handshake)
static void hvsi_recv_response(struct hvsi_struct *hp, uint8_t *packet)
static int hvsi_version_respond(struct hvsi_struct *hp, uint16_t query_seqno)
static void hvsi_recv_query(struct hvsi_struct *hp, uint8_t *packet)
static void hvsi_insert_chars(struct hvsi_struct *hp, const char *buf, int len)
#define TTY_THRESHOLD_THROTTLE 128
static struct tty_struct *hvsi_recv_data(struct hvsi_struct *hp,
const uint8_t *packet)
static int hvsi_load_chunk(struct hvsi_struct *hp, struct tty_struct **flip,
struct tty_struct **hangup, struct hvsi_struct **handshake)
static void hvsi_send_overflow(struct hvsi_struct *hp)
static irqreturn_t hvsi_interrupt(int irq, void *arg)
static int __init poll_for_state(struct hvsi_struct *hp, int state)
static int wait_for_state(struct hvsi_struct *hp, int state)
static int hvsi_query(struct hvsi_struct *hp, uint16_t verb)
static int hvsi_get_mctrl(struct hvsi_struct *hp)
static int hvsi_set_mctrl(struct hvsi_struct *hp, uint16_t mctrl)
static void hvsi_drain_input(struct hvsi_struct *hp)
static int hvsi_handshake(struct hvsi_struct *hp)
static void hvsi_handshaker(struct work_struct *work)
static int hvsi_put_chars(struct hvsi_struct *hp, const char *buf, int count)
static void hvsi_close_protocol(struct hvsi_struct *hp)
static int hvsi_open(struct tty_struct *tty, struct file *filp)
static void hvsi_flush_output(struct hvsi_struct *hp)
static void hvsi_close(struct tty_struct *tty, struct file *filp)
static void hvsi_hangup(struct tty_struct *tty)
static void hvsi_push(struct hvsi_struct *hp)
static void hvsi_write_worker(struct work_struct *work)
static int hvsi_write_room(struct tty_struct *tty)
static int hvsi_chars_in_buffer(struct tty_struct *tty)
static int hvsi_write(struct tty_struct *tty,
const unsigned char *buf, int count)
static void hvsi_throttle(struct tty_struct *tty)
static void hvsi_unthrottle(struct tty_struct *tty)
static int hvsi_tiocmget(struct tty_struct *tty)
static int hvsi_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static const struct tty_operations hvsi_ops = ;
static int __init hvsi_init(void)
device_initcall(hvsi_init);
static void hvsi_console_print(struct console *console, const char *buf,
unsigned int count)
static struct tty_driver *hvsi_console_device(struct console *console,
int *index)
static int __init hvsi_console_setup(struct console *console, char *options)
static struct console hvsi_console = ;
static int __init hvsi_console_init(void)
console_initcall(hvsi_console_init);
