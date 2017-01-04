static DEFINE_MUTEX(port_mutex);
static struct lock_class_key port_lock_key;
#define HIGH_BITS_OFFSET	((sizeof(long)-sizeof(int))*8)
#define uart_console(port)	((port)->cons && (port)->cons->index == (port)->line)
#define uart_console(port)	(0)
static void uart_change_speed(struct tty_struct *tty, struct uart_state *state,
struct ktermios *old_termios);
static void __uart_wait_until_sent(struct uart_port *port, int timeout);
static void uart_change_pm(struct uart_state *state, int pm_state);
void uart_write_wakeup(struct uart_port *port)
static void uart_stop(struct tty_struct *tty)
static void __uart_start(struct tty_struct *tty)
static void uart_start(struct tty_struct *tty)
static void uart_tasklet_action(unsigned long data)
static inline void
uart_update_mctrl(struct uart_port *port, unsigned int set, unsigned int clear)
#define uart_set_mctrl(port, set)	uart_update_mctrl(port, set, 0)
#define uart_clear_mctrl(port, clear)	uart_update_mctrl(port, 0, clear)
static int uart_startup(struct tty_struct *tty, struct uart_state *state, int init_hw)
static void uart_shutdown(struct tty_struct *tty, struct uart_state *state)
void
uart_update_timeout(struct uart_port *port, unsigned int cflag,
unsigned int baud)
EXPORT_SYMBOL(uart_update_timeout);
unsigned int
uart_get_baud_rate(struct uart_port *port, struct ktermios *termios,
struct ktermios *old, unsigned int min, unsigned int max)
EXPORT_SYMBOL(uart_get_baud_rate);
unsigned int
uart_get_divisor(struct uart_port *port, unsigned int baud)
EXPORT_SYMBOL(uart_get_divisor);
static void uart_change_speed(struct tty_struct *tty, struct uart_state *state,
struct ktermios *old_termios)
static inline int __uart_put_char(struct uart_port *port,
struct circ_buf *circ, unsigned char c)
static int uart_put_char(struct tty_struct *tty, unsigned char ch)
static void uart_flush_chars(struct tty_struct *tty)
static int uart_write(struct tty_struct *tty,
const unsigned char *buf, int count)
static int uart_write_room(struct tty_struct *tty)
static int uart_chars_in_buffer(struct tty_struct *tty)
static void uart_flush_buffer(struct tty_struct *tty)
static void uart_send_xchar(struct tty_struct *tty, char ch)
static void uart_throttle(struct tty_struct *tty)
static void uart_unthrottle(struct tty_struct *tty)
static int uart_get_info(struct uart_state *state,
struct serial_struct __user *retinfo)
static int uart_set_info(struct tty_struct *tty, struct uart_state *state,
struct serial_struct __user *newinfo)
static int uart_get_lsr_info(struct tty_struct *tty,
struct uart_state *state, unsigned int __user *value)
static int uart_tiocmget(struct tty_struct *tty)
static int
uart_tiocmset(struct tty_struct *tty, unsigned int set, unsigned int clear)
static int uart_break_ctl(struct tty_struct *tty, int break_state)
static int uart_do_autoconfig(struct tty_struct *tty,struct uart_state *state)
static int
uart_wait_modem_status(struct uart_state *state, unsigned long arg)
static int uart_get_icount(struct tty_struct *tty,
struct serial_icounter_struct *icount)
static int
uart_ioctl(struct tty_struct *tty, unsigned int cmd,
unsigned long arg)
static void uart_set_ldisc(struct tty_struct *tty)
static void uart_set_termios(struct tty_struct *tty,
struct ktermios *old_termios)
static void uart_close(struct tty_struct *tty, struct file *filp)
static void __uart_wait_until_sent(struct uart_port *port, int timeout)
static void uart_wait_until_sent(struct tty_struct *tty, int timeout)
static void uart_hangup(struct tty_struct *tty)
static int uart_carrier_raised(struct tty_port *port)
static void uart_dtr_rts(struct tty_port *port, int onoff)
static struct uart_state *uart_get(struct uart_driver *drv, int line)
static int uart_open(struct tty_struct *tty, struct file *filp)
static const char *uart_type(struct uart_port *port)
static void uart_line_info(struct seq_file *m, struct uart_driver *drv, int i)
static int uart_proc_show(struct seq_file *m, void *v)
static int uart_proc_open(struct inode *inode, struct file *file)
static const struct file_operations uart_proc_fops = ;
#if defined(CONFIG_SERIAL_CORE_CONSOLE) || defined(CONFIG_CONSOLE_POLL)
void uart_console_write(struct uart_port *port, const char *s,
unsigned int count,
void (*putchar)(struct uart_port *, int))
EXPORT_SYMBOL_GPL(uart_console_write);
struct uart_port * __init
uart_get_console(struct uart_port *ports, int nr, struct console *co)
void
uart_parse_options(char *options, int *baud, int *parity, int *bits, int *flow)
EXPORT_SYMBOL_GPL(uart_parse_options);
struct baud_rates ;
static const struct baud_rates baud_rates[] = ;
int
uart_set_options(struct uart_port *port, struct console *co,
int baud, int parity, int bits, int flow)
EXPORT_SYMBOL_GPL(uart_set_options);
static void uart_change_pm(struct uart_state *state, int pm_state)
struct uart_match ;
static int serial_match_port(struct device *dev, void *data)
int uart_suspend_port(struct uart_driver *drv, struct uart_port *uport)
int uart_resume_port(struct uart_driver *drv, struct uart_port *uport)
static inline void
uart_report_port(struct uart_driver *drv, struct uart_port *port)
static void
uart_configure_port(struct uart_driver *drv, struct uart_state *state,
struct uart_port *port)
static int uart_poll_init(struct tty_driver *driver, int line, char *options)
static int uart_poll_get_char(struct tty_driver *driver, int line)
static void uart_poll_put_char(struct tty_driver *driver, int line, char ch)
static const struct tty_operations uart_ops = ;
static const struct tty_port_operations uart_port_ops = ;
int uart_register_driver(struct uart_driver *drv)
void uart_unregister_driver(struct uart_driver *drv)
struct tty_driver *uart_console_device(struct console *co, int *index)
int uart_add_one_port(struct uart_driver *drv, struct uart_port *uport)
int uart_remove_one_port(struct uart_driver *drv, struct uart_port *uport)
int uart_match_port(struct uart_port *port1, struct uart_port *port2)
EXPORT_SYMBOL(uart_match_port);
EXPORT_SYMBOL(uart_write_wakeup);
EXPORT_SYMBOL(uart_register_driver);
EXPORT_SYMBOL(uart_unregister_driver);
EXPORT_SYMBOL(uart_suspend_port);
EXPORT_SYMBOL(uart_resume_port);
EXPORT_SYMBOL(uart_add_one_port);
EXPORT_SYMBOL(uart_remove_one_port);
MODULE_DESCRIPTION("Serial driver core");
MODULE_LICENSE("GPL");
