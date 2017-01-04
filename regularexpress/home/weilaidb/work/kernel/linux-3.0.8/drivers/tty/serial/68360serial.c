extern void breakpoint(void);
extern void set_debug_traps(void);
extern int  kgdb_output_string (const char* s, unsigned int count);
#define CONFIG_SERIAL_CONSOLE_PORT	1
#define TX_WAKEUP	ASYNC_SHARE_IRQ
static char *serial_name = "CPM UART driver";
static char *serial_version = "0.03";
static struct tty_driver *serial_driver;
int serial_console_setup(struct console *co, char *options);
#define SERIAL_PARANOIA_CHECK
#define CONFIG_SERIAL_NOPAUSE_IO
#define SERIAL_DO_RESTART
#undef SERIAL_DEBUG_INTR
#undef SERIAL_DEBUG_OPEN
#undef SERIAL_DEBUG_FLOW
#undef SERIAL_DEBUG_RS_WAIT_UNTIL_SENT
#define _INLINE_ inline
#define DBG_CNT(s)
#define smc_scc_num	hub6
#define NUM_IS_SCC	((int)0x00010000)
#define PORT_NUM(P)	((P) & 0x0000ffff)
#if defined (CONFIG_UCQUICC)
volatile extern void *_periph_base;
#define SIPEX_MODE(n,m) ((m & 0x0f)<<(16+4*(n-1)))
static uint sipex_mode_bits = 0x00000000;
#define SSTATE_MAGIC 0x5302
#define USE_SMC2 1
static struct serial_state rs_table[] = ;
#define NR_PORTS	(sizeof(rs_table)/sizeof(struct serial_state))
#define RX_NUM_FIFO	4
#define RX_BUF_SIZE	32
#define TX_NUM_FIFO	4
#define TX_BUF_SIZE	32
#define CONSOLE_NUM_FIFO 2
#define CONSOLE_BUF_SIZE 4
char *console_fifos[CONSOLE_NUM_FIFO * CONSOLE_BUF_SIZE];
typedef struct serial_info  ser_info_t;
static ser_info_t  quicc_ser_info[NR_PORTS];
static char rx_buf_pool[NR_PORTS * RX_NUM_FIFO * RX_BUF_SIZE];
static char tx_buf_pool[NR_PORTS * TX_NUM_FIFO * TX_BUF_SIZE];
static void change_speed(ser_info_t *info);
static void rs_360_wait_until_sent(struct tty_struct *tty, int timeout);
static inline int serial_paranoia_check(ser_info_t *info,
char *name, const char *routine)
static int baud_table[] = ;
#if defined(CONFIG_CONSOLE_9600)
#define CONSOLE_BAUDRATE 9600
#elif defined(CONFIG_CONSOLE_19200)
#define CONSOLE_BAUDRATE 19200
#elif defined(CONFIG_CONSOLE_115200)
#define CONSOLE_BAUDRATE 115200
#warning "console baud rate undefined"
#define CONSOLE_BAUDRATE 9600
static void rs_360_stop(struct tty_struct *tty)
static void rs_360_start(struct tty_struct *tty)
static _INLINE_ void receive_chars(ser_info_t *info)
static _INLINE_ void receive_break(ser_info_t *info)
static _INLINE_ void transmit_chars(ser_info_t *info)
static _INLINE_ void check_modem_status(struct async_struct *info)
static void rs_360_interrupt(int vec, void *dev_id)
static void do_softint(void *private_)
static void do_serial_hangup(void *private_)
static int startup(ser_info_t *info)
static void shutdown(ser_info_t *info)
static void change_speed(ser_info_t *info)
static void rs_360_put_char(struct tty_struct *tty, unsigned char ch)
static int rs_360_write(struct tty_struct * tty,
const unsigned char *buf, int count)
static int rs_360_write_room(struct tty_struct *tty)
static int rs_360_chars_in_buffer(struct tty_struct *tty)
static void rs_360_flush_buffer(struct tty_struct *tty)
static void rs_360_send_xchar(struct tty_struct *tty, char ch)
static void rs_360_throttle(struct tty_struct * tty)
static void rs_360_unthrottle(struct tty_struct * tty)
static int get_lsr_info(struct async_struct * info, unsigned int *value)
static int rs_360_tiocmget(struct tty_struct *tty)
static int rs_360_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static ushort	smc_chan_map[] = ;
static ushort	scc_chan_map[] = ;
static void begin_break(ser_info_t *info)
static void end_break(ser_info_t *info)
static void send_break(ser_info_t *info, unsigned int duration)
static int rs_360_get_icount(struct tty_struct *tty,
struct serial_icounter_struct *icount)
static int rs_360_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static void rs_360_set_termios(struct tty_struct *tty, struct ktermios *old_termios)
static void rs_360_close(struct tty_struct *tty, struct file * filp)
static void rs_360_wait_until_sent(struct tty_struct *tty, int timeout)
static void rs_360_hangup(struct tty_struct *tty)
static int block_til_ready(struct tty_struct *tty, struct file * filp,
ser_info_t *info)
static int get_async_struct(int line, ser_info_t **ret_info)
static int rs_360_open(struct tty_struct *tty, struct file * filp)
static inline int line_info(char *buf, struct serial_state *state)
int rs_360_read_proc(char *page, char **start, off_t off, int count,
int *eof, void *data)
static _INLINE_ void show_serial_version(void)
static void my_console_write(int idx, const char *s,
unsigned count)
static void serial_console_write(struct console *c, const char *s,
unsigned count)
int
xmon_360_write(const char *s, unsigned count)
void
putDebugChar(char ch)
static int my_console_wait_key(int idx, int xmon, char *obuf)
static int serial_console_wait_key(struct console *co)
int
xmon_360_read_poll(void)
int
xmon_360_read_char(void)
static char kgdb_buf[RX_BUF_SIZE], *kgdp;
static int kgdb_chars;
unsigned char
getDebugChar(void)
void kgdb_interruptible(int state)
void kgdb_map_scc(void)
static struct tty_struct *serial_console_device(struct console *c, int *index)
struct console sercons = ;
long console_360_init(long kmem_start, long kmem_end)
static	int	baud_idx;
static const struct tty_operations rs_360_ops = ;
static int __init rs_360_init(void)
module_init(rs_360_init);
int serial_console_setup( struct console *co, char *options)
