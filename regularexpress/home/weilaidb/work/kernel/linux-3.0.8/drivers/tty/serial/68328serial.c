#if defined(CONFIG_M68EZ328)
#if defined(CONFIG_M68VZ328)
#undef USE_INTS
#define USE_INTS
static struct m68k_serial m68k_soft[NR_PORTS];
static unsigned int uart_irqs[NR_PORTS] = UART_IRQ_DEFNS;
m68328_uart *uart_addr = (m68328_uart *)USTCNT_ADDR;
struct tty_struct m68k_ttys;
struct m68k_serial *m68k_consinfo = 0;
#define M68K_CLOCK (16667000)
struct tty_driver *serial_driver;
#define WAKEUP_CHARS 256
#undef SERIAL_DEBUG_INTR
#undef SERIAL_DEBUG_OPEN
#undef SERIAL_DEBUG_FLOW
#define RS_ISR_PASS_LIMIT 256
static void change_speed(struct m68k_serial *info);
#define CONSOLE_BAUD_RATE	19200
#define DEFAULT_CBAUD		B19200
#define	CONSOLE_BAUD_RATE	9600
#define	DEFAULT_CBAUD		B9600
static int m68328_console_initted = 0;
static int m68328_console_baud    = CONSOLE_BAUD_RATE;
static int m68328_console_cbaud   = DEFAULT_CBAUD;
static inline int serial_paranoia_check(struct m68k_serial *info,
char *name, const char *routine)
static int baud_table[] = ;
static inline void m68k_rtsdtr(struct m68k_serial *ss, int set)
static inline int get_baud(struct m68k_serial *ss)
static void rs_stop(struct tty_struct *tty)
static int rs_put_char(char ch)
static void rs_start(struct tty_struct *tty)
static void batten_down_hatches(void)
static void status_handle(struct m68k_serial *info, unsigned short status)
static void receive_chars(struct m68k_serial *info, unsigned short rx)
static void transmit_chars(struct m68k_serial *info)
irqreturn_t rs_interrupt(int irq, void *dev_id)
static void do_softint(struct work_struct *work)
static int startup(struct m68k_serial * info)
static void shutdown(struct m68k_serial * info)
struct
hw_baud_table[18] = ;
hw_baud_table[18] = ;
static void change_speed(struct m68k_serial *info)
static void rs_fair_output(void)
void console_print_68328(const char *p)
static void rs_set_ldisc(struct tty_struct *tty)
static void rs_flush_chars(struct tty_struct *tty)
{
struct m68k_serial *info = (struct m68k_serial *)tty->driver_data;
m68328_uart *uart = &uart_addr[info->line];
unsigned long flags;
if (serial_paranoia_check(info, tty->name, "rs_flush_chars"))
return;
for(;;)
extern void console_printn(const char * b, int count);
static int rs_write(struct tty_struct * tty,
const unsigned char *buf, int count)
static int rs_write_room(struct tty_struct *tty)
static int rs_chars_in_buffer(struct tty_struct *tty)
static void rs_flush_buffer(struct tty_struct *tty)
static void rs_throttle(struct tty_struct * tty)
static void rs_unthrottle(struct tty_struct * tty)
static int get_serial_info(struct m68k_serial * info,
struct serial_struct * retinfo)
static int set_serial_info(struct m68k_serial * info,
struct serial_struct * new_info)
static int get_lsr_info(struct m68k_serial * info, unsigned int *value)
static void send_break(struct m68k_serial * info, unsigned int duration)
static int rs_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static void rs_set_termios(struct tty_struct *tty, struct ktermios *old_termios)
static void rs_close(struct tty_struct *tty, struct file * filp)
void rs_hangup(struct tty_struct *tty)
static int block_til_ready(struct tty_struct *tty, struct file * filp,
struct m68k_serial *info)
int rs_open(struct tty_struct *tty, struct file * filp)
static void show_serial_version(void)
static const struct tty_operations rs_ops = ;
static int __init
rs68328_init(void)
module_init(rs68328_init);
static void m68328_set_baud(void)
int m68328_console_setup(struct console *cp, char *arg)
static struct tty_driver *m68328_console_device(struct console *c, int *index)
void m68328_console_write (struct console *co, const char *str,
unsigned int count)
static struct console m68328_driver = ;
static int __init m68328_console_init(void)
console_initcall(m68328_console_init);
